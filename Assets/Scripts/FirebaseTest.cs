using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Database;

public class FirebaseTest : MonoBehaviour
{
    public string message;
    public int number;
    public bool isCool;

    bool hasRun = false;

    private void Update()
    {
        if (Time.realtimeSinceStartup > 10 && !hasRun)
        {
            hasRun = true;
            IEnumerator cor = SignInUser();
            StartCoroutine(cor);

            IEnumerator cor2 = writeNewUser("1234", "Mitsos", "a@a.com");
            StartCoroutine(cor2);
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

        DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;

        reference.Child("users").Child(userId).SetRawJsonValueAsync(json);

        yield return null;
    }



    FirebaseAuth auth;

    IEnumerator SignInUser()
    {
        auth = FirebaseAuth.DefaultInstance;

        auth.SignInWithEmailAndPasswordAsync("toliasj@yahoo.gr", "password").ContinueWith(task =>
        {
            Debug.Log(task.Result.UserId.ToString());
        });

        yield return null;
    }
}
