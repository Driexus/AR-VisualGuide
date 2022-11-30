using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using System.Collections.Generic;

public class UploadPanelHandler : MonoBehaviour
{
    public RawImage image;
    public TMP_Text ratingText;
    public TMP_InputField widthInputField;
    public Button uploadButton;
    public Button discardButton;

    public int imageMaxWidth;
    public int imageMaxHeight;

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
        discardButton.onClick.AddListener(OnDiscardClicked);
        uploadButton.onClick.AddListener(OnUploadClicked);
    }
    private void OnEnable()
    {
        uploadButton.interactable = false;
        widthInputField.text = "";
    }

    // Change the captured image, the rating text, and temporarily store the target that might get uploaded
    public void SetRatingAndTexture(ImageUploader.VuforiaTargetResult result)
    {
        ratingText.text = "Rating:" + result.rating;
        _targetToUpload = result.target;

        // Change the captured image and scale it appropriately
        var texWidth = result.texture.width;
        var texHeight = result.texture.height;

        float scaleFactor = 1;
        scaleFactor = Math.Min(scaleFactor, (float) imageMaxWidth / (float) texWidth);
        scaleFactor = Math.Min(scaleFactor, (float) imageMaxHeight / (float) texHeight);

        image.rectTransform.sizeDelta = new Vector2(texWidth * scaleFactor, texHeight * scaleFactor);
        image.texture = result.texture;

    }

    // Enable/Disable the upload button depending on if the width value is a positive float
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

    // Try to upload the image target and disable the gameobject
    private void OnUploadClicked()
    {
        if (!_targetToUpload.Equals(default(KeyValuePair<String, ImageTarget>)))
            ImageUploader.Instance.UploadImageTarget(_targetToUpload);

        gameObject.SetActive(false);
    }

    // Try to discard the image target and disable the gameobject
    private void OnDiscardClicked()
    {
        if (!_targetToUpload.Equals(default(KeyValuePair<String, ImageTarget>)))
            ImageUploader.Instance.DiscardImageTarget(_targetToUpload);

        gameObject.SetActive(false);
    }
}