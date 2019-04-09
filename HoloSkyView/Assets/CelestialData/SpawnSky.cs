using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class SpawnSky : MonoBehaviour {

    List<object[]> starList;
    // Use this for initialization
    void Start () {
        StarData s = new StarData();
         starList = s.getStarList();

        StarInfo k = new StarInfo();

        for( int i = 0; i < starList.Capacity; i++) {

           String properName =starList[i][0].ToString();
            double magnitude = k.Magntitude(starList[i][1]);
            double angle = k.ConvertAngle(starList[i][2], starList[i][3]);
            double azimuth = k.ConvertAzimuth(starList[i][2], starList[i][3]);


        }
      
       

    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
