using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class StarSearch : MonoBehaviour
{
    public TouchScreenKeyboard keyboard;
    string keyboardText;
    public Transform target;
    public GameObject[] findMe;
    public GameObject pointingarrow;

    private RaycastHit hitInfo;
    private GestureRecognizer recogniser;
    private GameObject focusedObject;

    private bool showHeadRay = false;
    private LineRenderer lineRenderer;


    // Start is called before the first frame update
    void Starsearch()
    {
        if (keyboard != null)
        {
            keyboardText = keyboard.text;
            // Do stuff with keyboardText
            if (!TouchScreenKeyboard.visible)
            {
                // Sets the starList to the one obtained from reading the database
                findMe = GameObject.FindGameObjectsWithTag(keyboardText);
               
            }
        }
    }

    void Start()
    {
        recogniser = new GestureRecognizer();
        recogniser.SetRecognizableGestures(GestureSettings.Tap | GestureSettings.DoubleTap);
        // Double-tap settings can be found in InputManager / EventSystem
        recogniser.TappedEvent += ActOnTaps;
        recogniser.StartCapturingGestures();

        lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Standard"));
        lineRenderer.startWidth = 0.01f;
        lineRenderer.endWidth = 0.01f;
        lineRenderer.startColor = new Color(100f, 100f, 100f, 128f);
        lineRenderer.endColor = new Color(255f, 255f, 255f, 128f);

    }

    
    // Update is called once per frame
    void Update()
    {
        
        



    }
    private void ActOnTaps(InteractionSourceKind source, int tapCount, Ray headRay)
    {
        if (tapCount == 1) // originally 2 but 1 for testing purposes
        {
            Debug.Log("Started");
            Instantiate(pointingarrow);


            keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false);
            Starsearch();
            GameObject star = findMe[0];
            target = star.transform;
            pointingarrow.transform.position = pointingarrow.transform.forward;

            pointingarrow.transform.LookAt(star.transform);

            //pointingarrow.transform.LookAt(target);
         

        }

     
    }
}
