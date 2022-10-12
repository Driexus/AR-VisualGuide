using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using TMPro;
using Firebase.Extensions;

public class FirebaseTest : MonoBehaviour
{
    public TMP_Text tmpText;

    public BuildingCreator buildingCreator;

    bool hasRun = false;

    DatabaseReference db;
    FirebaseAuth auth;

    private void Awake()
    {
        db = FirebaseDatabase.DefaultInstance.RootReference;
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
                buildingCreator.Walls = walls;
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
            tmpText.text = task.Result.UserId;

            Debug.Log(task.Result.UserId.ToString());
        });

        yield return null;
    }
}
