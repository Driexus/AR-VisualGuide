using System.Collections;
using UnityEngine;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Extensions;

public class FirebaseTest : MonoBehaviour
{
    bool hasRun = false;

    private DatabaseReference db;
    private FirebaseAuth auth;

    // Using array insted of dictionary and calling event from update as a workaround for
    // https://stackoverflow.com/questions/71403836/continuewith-continuewithonmainthread-breaks-when-invoking-an-action-in-unity

    public delegate void BuildingsUpdatedEventHandler();
    public event BuildingsUpdatedEventHandler BuildingsUpdated;
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
        if (Time.realtimeSinceStartup > 10 && !hasRun)
        {
            hasRun = true;
            IEnumerator cor = SignInUser();
            StartCoroutine(cor);

            IEnumerator cor2 = writeNewUser("1234", "Mitsos", "a@a.com");
            StartCoroutine(cor2);

            IEnumerator cor3 = FetchBuildingData();
            StartCoroutine(cor3);
            
            FetchBuildingCollection();
        }

        if (_mustCallBuildingsUpdatedListener)
        {
            _mustCallBuildingsUpdatedListener = false;
            BuildingsUpdated?.Invoke();
        }

        
    }

    public class User
    {
        public string username;
        public string email;

        public User()
        {
        }

        public User(string username, string email)
        {
            this.username = username;
            this.email = email;
        }
    }

    IEnumerator writeNewUser(string userId, string name, string email)
    {
        User user = new User(name, email);
        string json = JsonUtility.ToJson(user);

        db.Child("users").Child(userId).SetRawJsonValueAsync(json);

        yield return null;
    }

    IEnumerator FetchBuildingData()
    {
        Debug.Log("Fetching building data");
        db.Child("buildings").Child("home").Child("walls").GetValueAsync().ContinueWithOnMainThread(task =>
        {
            // Get the json from the server snapshot and convert it into Wall array in order to put it in the building creator
            if (task.IsCompleted)
            {
                Debug.Log("Building data successfully fetched");

                DataSnapshot snapshot = task.Result;

                string jsonString = snapshot.GetRawJsonValue();

                Wall[] walls = JsonHelper.FromServerJson<Wall>(jsonString);
            }
            else
                Debug.Log("Failed to fetch building data");
        });

        yield return null;
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

                foreach (DataSnapshot building in snapshot.Children)
                {
                    string buildingId = building.Key;
                    Building aBuilding = new Building(buildingId);

                    string json = building.GetRawJsonValue();
                    JsonUtility.FromJsonOverwrite(json, aBuilding);

                    _buildings[i] = aBuilding;
                    i++;
                }

                _mustCallBuildingsUpdatedListener = true;
            }
            else
                Debug.Log("Failed to fetch buildings collection");
        });
    }
}