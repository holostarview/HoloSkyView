using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class StarSearch : MonoBehaviour
{
    public TouchScreenKeyboard keyboard;
    private string keyboardText;
    public GameObject pointingarrow;

    private RaycastHit hitInfo;
    private GestureRecognizer recogniser;
    private GameObject focusedObject;

    private bool showHeadRay = false;
    private LineRenderer lineRenderer;


    // Start is called before the first frame update


    void Start()
    {
        recogniser = new GestureRecognizer();
        recogniser.SetRecognizableGestures(GestureSettings.Tap | GestureSettings.DoubleTap);
        // Double-tap settings can be found in InputManager / EventSystem
        //TODO: Change the below
        recogniser.TappedEvent += ActOnTaps;
        recogniser.StartCapturingGestures();

        lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Standard"));
        lineRenderer.startWidth = 0.01f;
        lineRenderer.endWidth = 0.01f;
        lineRenderer.startColor = new Color(100f, 100f, 100f, 128f);
        lineRenderer.endColor = new Color(255f, 255f, 255f, 128f);

    }

    private void Recogniser_Tapped(TappedEventArgs obj)
    {
        throw new System.NotImplementedException();
    }


    // Update is called once per frame
    int i=0;
    void Update()
    {
        //Temporary before implementing reset button
        if (i ==0) {
            keyboardText = "Polaris";

            ShowTheStar();
            i++;
        }
        
        








    }

    private void ShowTheStar()
    {
        Debug.Log("Shown");
        GameObject pointTarget = GameObject.Find(keyboardText);

        

        GameObject userPosition = GameObject.Find("MixedRealityCameraParent");
        lineRenderer.SetPosition(0, userPosition.transform.position);
        lineRenderer.SetPosition(1, pointTarget.transform.position);



    }
    private void ActOnTaps(InteractionSourceKind source, int tapCount, Ray headRay)
    {
        if (tapCount == 1) // originally 2 but 1 for testing purposes
        {
            Debug.Log("Started");


            keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false, "Enter name of star");


            //pointingarrow.transform.LookAt(target);

        }


    }
}
