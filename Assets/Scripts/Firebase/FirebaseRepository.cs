using System.Collections;
using UnityEngine;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Extensions;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;

public class FirebaseRepository : MonoBehaviour
{
    private DatabaseReference db;
    private FirebaseAuth auth;

    // Using array insted of dictionary and calling event from update as a workaround for
    // https://stackoverflow.com/questions/71403836/continuewith-continuewithonmainthread-breaks-when-invoking-an-action-in-unity

    public event EventHandler BuildingsUpdated;
    private bool _mustCallBuildingsUpdatedListener = false;

    private Building[] _buildings;
    public Building[] Buildings { get { return _buildings; } }

    private void Awake()
    {
        db = FirebaseDatabase.DefaultInstance.RootReference;
    }

    private void Start()
    {
        FetchBuildingCollection();
    }

    private void Update()
    {
/*            IEnumerator cor = SignInUser();
            StartCoroutine(cor);*/

        if (_mustCallBuildingsUpdatedListener)
        {
            _mustCallBuildingsUpdatedListener = false;
            BuildingsUpdated?.Invoke(this, null);
            Debug.Log("buildings updated");
        }        
    }

    IEnumerator SignInUser()
    {
        auth = FirebaseAuth.DefaultInstance;

        auth.SignInWithEmailAndPasswordAsync("toliasj@yahoo.gr", "password").ContinueWithOnMainThread(task =>
        {
            Debug.Log(task.Result.UserId.ToString());
        });

        yield return null;
    }

    public IEnumerator UploadImageTarget(string buildingId, KeyValuePair<String, ImageTarget> imageTarget)
    {
        Debug.LogWarning("TODO: use continue with and fire event");

        string targetId = imageTarget.Key;
        string json = JsonUtility.ToJson(imageTarget.Value);

        var task = db.Child("buildings").Child(buildingId).Child("image_targets").Child(targetId).SetRawJsonValueAsync(json);
        while (task.IsCompleted)
            yield return null;

        Debug.Log("Upload completed");
        
        yield return null;
    }

    // Download every building (and all their data) from the database
    private void FetchBuildingCollection()
    {
        Debug.Log("Fetching buildings collection");
        db.Child("buildings").GetValueAsync().ContinueWithOnMainThread(task =>
        {
            if (task.IsCompleted)
            {
                Debug.Log("Buildings collection successfully fetched");
                DataSnapshot snapshot = task.Result;

                int i = 0;
                _buildings = new Building[snapshot.ChildrenCount];

                foreach (DataSnapshot buildingSnapshot in snapshot.Children)
                {
                    string buildingId = buildingSnapshot.Key;
                    Building building = new(buildingId);

                    string json = buildingSnapshot.GetRawJsonValue();
                    JsonUtility.FromJsonOverwrite(json, building);

                    // Convert json image target collection to dictionary
                    Dictionary<string, ImageTarget> imageTargets = new();
                    foreach (DataSnapshot imageTargetSnapshot in buildingSnapshot.Child("image_targets").Children)
                    {
                        string targetJson = imageTargetSnapshot.GetRawJsonValue();
                        ImageTarget imageTarget = new();
                        JsonUtility.FromJsonOverwrite(targetJson, imageTarget);

                        imageTargets.Add(imageTargetSnapshot.Key, imageTarget);
                    }
                    building.image_targets = imageTargets;

                    // Convert json item collection to dictionary
                    Dictionary<string, ItemCharacteristics> itemsCharacteristics = new();
                    foreach (DataSnapshot itemSnapshot in buildingSnapshot.Child("items").Children)
                    {
                        string targetJson = itemSnapshot.GetRawJsonValue();
                        ItemCharacteristics itemCharacteristics = new();
                        JsonUtility.FromJsonOverwrite(targetJson, itemCharacteristics);

                        itemsCharacteristics.Add(itemSnapshot.Key, itemCharacteristics);
                    }
                    building.itemsCharacteristics = itemsCharacteristics;
                    Debug.Log(itemsCharacteristics.Count);

                    _buildings[i] = building;
                    i++;
                }

                _mustCallBuildingsUpdatedListener = true;
            }
            else
                Debug.Log("Failed to fetch buildings collection");
        });
    }
}