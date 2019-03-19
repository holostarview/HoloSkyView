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
    private double longitude = 0.1;

    private void JulianDate()
    {
        //JDN = (1461 × (Y + 4800 + (M − 14)/12))/4 +(367 × (M − 2 − 12 × ((M − 14)/12)))/12 − (3 × ((Y + 4900 + (M - 14)/12)/100))/4 + D − 32075

        
        julianDay = (1461 * (year + 4800 + (month - 14) / 12)) / 4 + (367 * (month - 2 - 12 * ((month - 14) / 12))) / 12 - (3 * ((year + 4900 + (month - 14) / 12) / 100)) / 4 + day - 32075;

        //Calculates Date at 00:00 of the day
        julianDate = julianDay + ((hours - 12) / 24) + (minutes / 1440) + (seconds / 86400);

       

    }
    //https://aa.usno.navy.mil/faq/docs/GAST.php
    //Calculates GSMT
    private void GreenwichStandardTime()
    {
        JulianDate();

        double d = julianDate - 2451545;

        double GMST = 6.697374558 + 0.06570982441908 * d;
        //Currently not useable
        



    }

    public double LocalSidrealTime()
    {
        GreenwichStandardTime();

        double LST = GMST + (longitude / 15);

        return LST;

    }
}
