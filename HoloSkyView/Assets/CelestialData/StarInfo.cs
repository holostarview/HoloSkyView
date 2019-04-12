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
    //private static DateTime currentDate = DateTime.Now;
    private double latitude = 51.749; //Currently lat for london. Get from paired app once availiable
    double h;
 
    double magnitude;


    public StarInfo()
     {

      

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
    private double RadianToDegree(double angle)
    {
        return angle * (180.0 / Math.PI);
    }


    public string CelestialName(string[] starArray)
    {
        string starName = starArray[0].ToString();

        return starName;


    }

    public double ConvertAngle(string ra, string dec)
    {
      
        h =  (LocalSidrealTime() - Convert.ToDouble(ra)) * 15;

       altitude =  RadianToDegree(Math.Sin(Math.Sin(Convert.ToDouble(dec)) * Math.Sin(latitude) + Math.Cos(latitude *Math.Cos(Convert.ToDouble(dec)) * Math.Cos(h))));

       

        return altitude;
        

    }

    public double ConvertAzimuth(string ra, string dec)
    {
        //TODO Fix this formula
        azimuth = RadianToDegree(Math.Sin(Math.Sin(h) * Math.Cos(Convert.ToDouble(dec)) / Math.Cos(altitude)));

        return azimuth;

        //get the current RA and dec from array
        //The math here



    }

    public double Magntitude(string mag )
    {
        // convert to double as 'mag' is an object type (Fix this)
        magnitude = Convert.ToDouble(mag);

        return magnitude;


    }



    
}
