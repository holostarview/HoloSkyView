using System;
using System.Collections.Generic;
using UnityEngine;
public class SpawnSky : MonoBehaviour {

    List<string[]> starList = new List<string[]>();
    // Use this for initialization
    
    void Start () {
        StarData s = new StarData();
         starList = s.getStarList();

        StarInfo k = new StarInfo();


        TextMesh TheStarsName = GetComponent<TextMesh>();
        
        for ( int i = 0; i < starList.Count; i++) {
            
            string properName =starList[i][0];
            double magnitude = k.Magntitude(starList[i][1]);
            double angle = k.ConvertAngle(starList[i][2], starList[i][3]);
            double azimuth = k.ConvertAzimuth(starList[i][2], starList[i][3]);

            /*
            //Use this to check values of star attributes
            Debug.Log("Name" + properName);
            Debug.Log("angle:" + angle);
            Debug.Log("azimth:" + azimuth);
            Debug.Log("Mag:" + magnitude);
            Debug.Log("StarInex:" + i);
            */
            //Spawn star
            //Cange this to rather instantiate the sphere  in the scene hierarchy
            //TextMesh copyIt = Instantiate(TheStarsName);

            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);

            //copyIt.text = properName.ToString();
            
            sphere.transform.position = new Vector3(6f, 1.5f, 100f);
            if (angle < 0)
            {
                sphere.transform.RotateAround(Vector3.zero, Vector3.right, Convert.ToSingle(angle));
            }
            else
            {
                sphere.transform.RotateAround(Vector3.zero, Vector3.right, Convert.ToSingle(angle));
            }

            if (azimuth < 0)
            {
                sphere.transform.RotateAround(Vector3.zero, Vector3.up, Convert.ToSingle(azimuth));

            }
            else
            {
                sphere.transform.RotateAround(Vector3.zero, Vector3.up, Convert.ToSingle(azimuth));

            }


       
        }



    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
