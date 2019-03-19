using System;
using System.Globalization;
using System.Collections;
using System.Collections.Generic;
using System.IO;



public class StarInfo : GSTimeConverter
{
   //Will jsut be callable no stardata in this class?
  
    private string starName;
    
    private double rightAscension;
    private double declination;
    private double altitude = 0;
    private double azimuth = 0;
    private List<object[]> starList;
    private static DateTime currentDate = DateTime.Now;
    private double latitude = 51.749; //Currently lat for london. Get from paired app once availiable
    double h;
    double mag;


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

        return starName;


    }

    public double ConvertAngle(object[] starArray)
    {
        //get the current RA and dec from array
        rightAscension = Convert.ToDouble(starArray[2]);
        declination = Convert.ToDouble(starArray[3]);

        h =  (LocalSidrealTime() - rightAscension) * 15;

       altitude = Math.Sin(Math.Sin(declination) * Math.Sin(latitude) + Math.Cos(latitude * Math.Cos(h)));

       

        return altitude;
        

    }

    public double ConvertAzimuth(object[] starArray)
    {
        azimuth = Math.Sin(Math.Sin(h) * Math.Cos(declination) / Math.Cos(azimuth));

        return azimuth;

        //get the current RA and dec from array
        //The math here



    }

    public double Magntitude(object[] starArray)
    {
        mag = Convert.ToDouble(starArray[1]);

        return mag;


    }

    
}
