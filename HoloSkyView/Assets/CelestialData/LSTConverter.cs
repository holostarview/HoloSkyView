using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LSTConverter
{
    //DateTime format: MM/DD/YYYY
    private static DateTime currentDate = DateTime.Now; //Is the Current Date and Time
    private double year = currentDate.Year; //Current Year
    private double month = currentDate.Month; //Current Month Number
    private double hours = 0; //Currently set to 0 to calculate  00:00 of the day
    private double minutes = 0; //Currently set to 0 to calculate  00:00 of the day
    private double seconds = 0; //Currently set to 0 to calculate  00:00 of the day

    private double day = currentDate.Day;  //The Current Day
    private double julianDay; // The Julian Date
    private double julianDate;
    private double GMST; //Greenwich Meridian  Sidereal Time (Removed as of now)

    //Get it from phone app
    private double longitude = 2.7; // User's Longitude to be Gotten From the App

    /* 
     * This class calculates everything necessary to obtain the 
     * local sidereal time in order to  calculate horizontal coordinates.
     */

    private double JulianDay() // Returns the Julian Day
    {
      

        
        julianDay = (1461 * (year + 4800 + (month - 14) / 12)) / 4 + (367 * (month - 2 - 12 * ((month - 14) / 12))) / 12 - (3 * ((year + 4900 + (month - 14) / 12) / 100)) / 4 + day - 32075;

   
        julianDate = julianDay + ((hours - 12) / 24) + (minutes / 1440) + (seconds / 86400);

        return julianDay;

    }

    private double DecimalUniversalTime() // Returns Decimal Universal Time
    {
        var stringUTC = DateTime.UtcNow.TimeOfDay.ToString();
        var decimalUTC = Convert.ToDouble(Convert.ToDecimal(TimeSpan.Parse(stringUTC).TotalHours));

        return decimalUTC;

    }

    public double LocalSidrealTime() // Returns Local Sidereal Time
    {

        double LST = 100.46 + 0.985647 * JulianDay() + longitude + 15* DecimalUniversalTime();

        return LST;

    }
}
