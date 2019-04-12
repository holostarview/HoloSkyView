using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class SpawnSky : MonoBehaviour {

    List<string[]> starList = new List<string[]>();
    // Use this for initialization
    void Start () {
        StarData s = new StarData();
         starList = s.getStarList();

        StarInfo k = new StarInfo();

        



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
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere.transform.position = new Vector3(6f, 1.5f, 100f);
            sphere.transform.RotateAround(Vector3.zero, Vector3.up, Convert.ToSingle(azimuth));
            sphere.transform.RotateAround(Vector3.zero, Vector3.right, Convert.ToSingle(angle));
            sphere.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
        }
      
    

    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
