using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using System.Globalization;
using System.Collections.Generic;

public class UploadPanelHandler : MonoBehaviour
{
    public RawImage image;
    public TMP_Text ratingText;
    public TMP_InputField widthInputField;
    public Button uploadButton;
    public Button discardButton;

    private KeyValuePair<String, ImageTarget> _targetToUpload = new();

    private void Awake()
    {
        // Check for null values
        if (image == null)
            throw new NullReferenceException(nameof(image));

        if (ratingText == null)
            throw new NullReferenceException(nameof(ratingText));

        if (widthInputField == null)
            throw new NullReferenceException(nameof(widthInputField));

        if (uploadButton == null)
            throw new NullReferenceException(nameof(uploadButton));

        if (discardButton == null)
            throw new NullReferenceException(nameof(discardButton));

        // Add listeners
        widthInputField.onValueChanged.AddListener(OnWidthChanged);
        discardButton.onClick.AddListener(() => gameObject.SetActive(false));
        uploadButton.onClick.AddListener(() => gameObject.SetActive(false));
        uploadButton.onClick.AddListener(() => TryUploadTarget());
    }
    private void OnEnable()
    {
        uploadButton.interactable = false;
    }

    private void OnWidthChanged(string widthString)
    {
        float width;
        if (float.TryParse(widthString, out width))
        {
            _targetToUpload.Value.width = width;
            uploadButton.interactable = (width > 0);
        }
        else
            uploadButton.interactable = false;
    }

    public void SetRatingAndTexture(ImageUploader.VuforiaTargetResult result)
    {
        ratingText.text = "Rating:" + result.rating;
        image.texture = result.texture;
        _targetToUpload = result.target;
    }

    private void TryUploadTarget()
    {
        if (!_targetToUpload.Equals(default(KeyValuePair<String, ImageTarget>)))
            ImageUploader.instance.UploadImageTarget(_targetToUpload);
    }
}