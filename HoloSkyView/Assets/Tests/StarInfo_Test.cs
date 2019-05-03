using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Tests
{
    public class StarInfo_Test
    {
        // A Test behaves as an ordinary method
        [Test]
        public void NewTestScriptSimplePasses()

        {

            StarData s = new StarData();
            var starList = s.getStarList(); // Sets the starList to the one obtained from reading the database

            StarInfo k = new StarInfo();

            for (int i = 0; i < starList.Count; i++)
            {

                string properName = starList[i][0]; //Name to be displayed (Not yet implemented)
                double magnitude = k.Magntitude(starList[i][1]); //Not yet used but is the visibility of star in sky
                double angle = k.ConvertAngle(starList[i][2], starList[i][3]); //Gets vertical angle at which to spawn the star in deg
                double azimuth = k.ConvertAzimuth(starList[i][2], starList[i][3]); //Gets azimuth (horizontal position) at which to spawn star in deg
                                                                                   // Use the Assert class to test conditions
                Debug.Log("Name" + properName);
                Debug.Log("angle:" + angle);
                Debug.Log("azimth:" + azimuth);
                Debug.Log("Mag:" + magnitude);

            }
            }

        // A UnityTest behaves like a coroutine in Play Mode. In Edit Mode you can use
        // `yield return null;` to skip a frame.
        [UnityTest]
        public IEnumerator NewTestScriptWithEnumeratorPasses()
        {
            // Use the Assert class to test conditions.
            // Use yield to skip a frame.
            yield return null;
        }
    }
}
