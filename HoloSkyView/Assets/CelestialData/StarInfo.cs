using System;
using System.Globalization;
using System.Collections;
using System.Collections.Generic;
using System.IO;



public class StarInfo : GSTimeConverter
{
  
    private string starName; //The star's proper name. Current datbase only has a few names so this will be blank for most

    private double rightAscension; //Right Ascension in equatorial coordinate system
    private double declination; //declination in equatorial coordinate system
    private double altitude; // vertical position
    private double azimuth; //horizontal position
    private double finalAzimuth;
                                //private static DateTime currentDate = DateTime.Now;
    private double latitude = 48.4316; //Currently lat for london. TODO: Get from paired app once availiable

    double h; // Local hour angle in degrees
    double magnitude; // Magnitude of the star
    double raditude;

    public StarInfo(){
    }

    
    /* This class is used to convert the static equatorial coordinates to 
     * horzontal coordinates which the app us to display planets as seen by the 
     * user in their current location.
     * Results are in degrees.
     * Reference for the math used: http://star-www.st-and.ac.uk/~fv/webnotes/chapter7.htm
     */
    private double RadianToDegree(double angle)
    {
        return angle * (180.0 / Math.PI);
    }
    private double DegreeToRadian(double angle)
    {
        return angle * (Math.PI / 180.0);
    }

  




    public string CelestialName(string[] starArray) //Unused to be removed once confirmed useless
    {
        string starName = starArray[0].ToString();

        return starName;


    }

    public double ConvertAngle(string ra, string dec) // Get star angle (altitude) in degrees (vertical position)
    {
          h = (LocalSidrealTime() - Convert.ToDouble(ra)) * 15;
          // h = 7.31 * 15;


        altitude = Math.Sin(Convert.ToDouble(dec)) * Math.Sin(latitude) + Math.Cos(Convert.ToDouble(dec)) *Math.Cos(latitude) * Math.Cos(h);

        raditude = altitude;
        altitude = RadianToDegree(Math.Asin(altitude));
        return altitude;
        

    }

    public double ConvertAzimuth(string ra, string dec) // Get star azimuth in degrees (horizontal position)
    {
        //azimuth = Math.Sin(h) * Math.Cos(Convert.ToDouble(dec)) / Math.Cos(raditude);
        double azimuth = (Math.Sin(Convert.ToDouble(dec)) - raditude * Math.Sin(latitude)) / (Math.Cos(raditude) * Math.Cos(latitude));

        if (Math.Sin(h) > 0)
        {
            finalAzimuth = 360 - RadianToDegree(Math.Acos(azimuth));
        }
        else
        {
            finalAzimuth = RadianToDegree(Math.Acos(azimuth));

        }
        return finalAzimuth;

       



    }

    public double Magntitude(string mag ) //Get the star magntiude. Currently unused but can be used to determine star size
    {
        // convert to double as 'mag' is an object type (Fix this)
        magnitude = Convert.ToDouble(mag);

        return magnitude;


    }



    
}
