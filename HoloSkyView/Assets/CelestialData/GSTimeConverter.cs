using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GSTimeConverter
{
    //DateTime format: MM/DD/YYYY
    private static DateTime currentDate = DateTime.Now;
    private double year = currentDate.Year;
    private double month = currentDate.Month;
    private double hours = 0;
    private double minutes = 0;
    private double seconds = 0;
    //Don't leave the -3 error somewhere in juliandate formula
    private double day = currentDate.Day - 3; 
    private double julianDay;
    private double julianDate;
    private double GMST;

    //Get it from phone app
    private double longitude = 2.7; // Needs local longitude 

    /* 
     * This class calculates everything nessasary to obtain the 
     * local sidreal time in order to  calculate horizontal coordinates.
     */ 

    private double JulianDate()
    {
        //JDN = (1461 × (Y + 4800 + (M − 14)/12))/4 +(367 × (M − 2 − 12 × ((M − 14)/12)))/12 − (3 × ((Y + 4900 + (M - 14)/12)/100))/4 + D − 32075

        
        julianDay = (1461 * (year + 4800 + (month - 14) / 12)) / 4 + (367 * (month - 2 - 12 * ((month - 14) / 12))) / 12 - (3 * ((year + 4900 + (month - 14) / 12) / 100)) / 4 + day - 32075;

        //Calculates Date at 00:00 of the day
        julianDate = julianDay + ((hours - 12) / 24) + (minutes / 1440) + (seconds / 86400);

        return julianDay;

    }
    //https://aa.usno.navy.mil/faq/docs/GAST.php
    //Calculates GSMT
    private double DecimalUniversalTime()
    {
        var stringUTC = DateTime.UtcNow.TimeOfDay.ToString();
        var decimalUTC = Convert.ToDouble(Convert.ToDecimal(TimeSpan.Parse(stringUTC).TotalHours));

        return decimalUTC;

    }

    public double LocalSidrealTime()
    {

        double LST = 100.46 + 0.985647 * JulianDate() + longitude + 15* DecimalUniversalTime();

        return LST;

    }
}
