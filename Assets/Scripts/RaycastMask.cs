using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Image))]
public class RaycastMask : MonoBehaviour
{
    [SerializeField, HideInInspector]
    private Image _image;

    [SerializeField, Range(0f, 1f)]
    private float _threshold = 0f;

#if UNITY_EDITOR

    private void Reset()
    {
        _image = GetComponent<Image>();
        _threshold = _image.alphaHitTestMinimumThreshold;
    }
    private void OnValidate()
    {

        if (_image.sprite == null)
            return;

        if (_threshold <= 0f)
            return;

        // GetPixel ‚ð‚·‚é‚½‚ß‚ÉReadWrite‚ª—LŒø‚Å‚ ‚é•K—v‚ª‚ ‚é
        var path = UnityEditor.AssetDatabase.GetAssetPath(_image.sprite);
        var importer = UnityEditor.AssetImporter.GetAtPath(path) as UnityEditor.TextureImporter;
        if (!importer.isReadable)
        {
            importer.isReadable = true;
            UnityEditor.EditorUtility.SetDirty(_image.sprite);
            UnityEditor.AssetDatabase.SaveAssets();
        }

        var settings = new UnityEditor.TextureImporterSettings();
        importer.ReadTextureSettings(settings);
        if (settings.spriteMeshType != SpriteMeshType.FullRect)
        {
            settings.spriteMeshType = SpriteMeshType.FullRect;
            importer.SetTextureSettings(settings);
            importer.SaveAndReimport();
        }
    }

#endif
}