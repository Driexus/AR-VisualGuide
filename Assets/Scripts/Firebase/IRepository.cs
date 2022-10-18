using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Firebase.Extensions;
using UnityEngine;

public interface IRepository
{
    public Dictionary<string, Building> Buildings { get; }
    public delegate void BuildingsUpdatedEventHandler();
    public event BuildingsUpdatedEventHandler BuildingsUpdated;

    public void SignInWithEmailAndPassword(string email, string password);
}