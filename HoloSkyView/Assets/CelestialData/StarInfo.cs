using System;
using System.Globalization;
using System.Collections;
using System.Collections.Generic;

using System.IO;



public class StarInfo : GSTimeConverter, ISkyProjection
{
   //Will jsut be callable no stardata in this class?
  
    private string starName;
    
    private double rightAscension;
    private double declination;
    private double angle = 0;
    private double azimuth = 0;
    private List<object[]> starList;
    private static DateTime currentDate = DateTime.Now;


    StarInfo()
     {

        //starList = getStarList();

     }

    /*
        public StarInfo(int starId, string properName, double distance, double rightAscension, double declination) {
            this.starId = starId;
            this.properName = properName;
            this.distance = distance;
            this.rightAscension = rightAscension;
            this.declination = declination;
        }

        */

    public string CelestialName(object[] starArray)
    {
        string starName = starArray[0].ToString();



    }

    public double ConvertAngle(object[] starArray)
    {
        //get the current RA and dec from array
        //The math here
        double H =  (LocalSidrealTime() - rightAscension) * 15;
        

    }

    public double ConvertAzimuth(object[] starArray)
    {

        //get the current RA and dec from array
        //The math here



    }

    





}
