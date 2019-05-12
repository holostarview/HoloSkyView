
using HoloToolkit.Unity;
using UnityEngine;
using UnityEngine.XR.WSA.Input;


public class StarSearch : MonoBehaviour
{
    public TouchScreenKeyboard keyboard; // The keyboard that can be opend by the user
    private string keyboardText; //The text/star name inputted by the user
    private static Vector3 userTarget; //User's position

    private RaycastHit hitInfo;
    private GestureRecognizer recogniser;
    private GameObject focusedObject;

    private bool showHeadRay = false;
    private LineRenderer lineRenderer; // The line to point to the star




    // Start is called before the first frame update


    void Start()
    {
        //Gesture recognisation handling
        recogniser = new GestureRecognizer();
        recogniser.SetRecognizableGestures(GestureSettings.Tap | GestureSettings.DoubleTap);
        // Double-tap settings can be found in InputManager / EventSystem
        //TODO: Change the below
        recogniser.TappedEvent += ActOnTaps;
        recogniser.StartCapturingGestures();

        lineRenderer = gameObject.AddComponent<LineRenderer>(); //Creates a line with various parameters
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
    int i = 0;
    void Update()
    {
        //Temporary hardcoded Star to point to while developing  keyboard implementation/UI
        if (i == 0)
        {
            keyboardText = "Polaris";


            ShowTheStar();
            i++;
        }








    }

    private void ShowTheStar()
    {
        Debug.Log("Shown");
        GameObject pointTarget = GameObject.Find(keyboardText); // Selects the Star the user has searched for

        GameObject theHud = GameObject.Find("HudTest");
        HeadsUpDirectionIndicator hudArrow = theHud.GetComponent<HeadsUpDirectionIndicator>(); //Gets arrow that will point to star
        hudArrow.TargetObject = pointTarget; // Points arrow to star to point to

        GameObject userPosition = GameObject.Find("MixedRealityCameraParent"); // gets user's location
        userTarget = userPosition.transform.position; // assigned to static variable so the line does not follow and thus disorient the user
        lineRenderer.SetPosition(0, userTarget); //Sets line origin to be user position
        lineRenderer.SetPosition(1, pointTarget.transform.position); // Sets line end to be at star Location



    }
    private void ActOnTaps(InteractionSourceKind source, int tapCount, Ray headRay)
    {
        if (tapCount == 1) // originally 2 but 1 for testing purposes
        {
            Debug.Log("Started");


            keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false, "Enter name of star"); // Opens keyboard


            //pointingarrow.transform.LookAt(target);
            i++;

        }


    }
}
