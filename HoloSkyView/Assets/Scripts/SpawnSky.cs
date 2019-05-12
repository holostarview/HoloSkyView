using System;
using System.Collections.Generic;
using UnityEngine;

public class SpawnSky : MonoBehaviour {

    List<string[]> starList = new List<string[]>(); // The list of String arrays containing info for each star
                                                    // Use this for initialization



    void Start () {
        StarData s = new StarData(); 
         starList = s.getStarList(); // Sets the starList to the one obtained from reading the database

        StarInfo k = new StarInfo(); 


        
        for ( int i = 0; i < starList.Count; i++) {
            
            string properName =starList[i][0]; //Name to be displayed (Not yet implemented)
            double magnitude = k.Magntitude(starList[i][1]); //Not yet used but is the visibility of star in sky
            double angle = k.ConvertAngle(starList[i][2], starList[i][3]); //Gets vertical angle at which to spawn the star in deg
            double azimuth = k.ConvertAzimuth(starList[i][2], starList[i][3]); //Gets azimuth (horizontal position) at which to spawn star in deg
           
                Debug.Log("Name" + properName);
                Debug.Log("angle:" + angle);
                Debug.Log("azimth:" + azimuth);
                Debug.Log("Mag:" + magnitude);
                


            

            //Spawn sphere to use as star
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);


            //Set name
            sphere.name = properName;

            //Sets distance from origin/ camera position
            sphere.transform.position = new Vector3(6f, 1.5f, 100f);

            //Sets size
            sphere.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);

            // Sets the  vertical position
            sphere.transform.RotateAround(Vector3.zero, Vector3.right, Convert.ToSingle(angle));
            
            // Sets the horizontal position
            sphere.transform.RotateAround(Vector3.zero, Vector3.up, Convert.ToSingle(azimuth));




        }



    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
