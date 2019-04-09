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
 
    double magnitude;


    public StarInfo()
     {

        StarData s = new StarData();

        starList = s.getStarList();

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

    public double ConvertAngle(object ra, object dec)
    {
      
        h =  (LocalSidrealTime() - Convert.ToDouble(ra)) * 15;

       altitude = Math.Sin(Math.Sin(Convert.ToDouble(dec)) * Math.Sin(latitude) + Math.Cos(latitude * Math.Cos(h)));

       

        return altitude;
        

    }

    public double ConvertAzimuth(object ra, object dec)
    {
        //TODO Fix this formula
        azimuth = Math.Sin(Math.Sin(h) * Math.Cos(Convert.ToDouble(dec)) / Math.Cos(azimuth));

        return azimuth;

        //get the current RA and dec from array
        //The math here



    }

    public double Magntitude(object mag )
    {
        // convert to double as 'mag' is an object type (Fix this)
        magnitude = Convert.ToDouble(mag);

        return magnitude;


    }

    
}
