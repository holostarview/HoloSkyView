using System.Collections.Generic;
using System;
using UnityEngine;
using System.IO;


public class StarData
{

    private List<string[]> starList = new List<string[]>();

   

    void starInfo() //Reads CSV and creates a list  out of it
    {

        //TODO: Strip down database to contain only essentials

  

        //Apparent Magnitude 8 is what is visible in the darkest skies on Earth
        //For reference: https://en.wikipedia.org/wiki/Apparent_magnitude
        //Change SQL command to have more data to use as info



        using (var reader = new StreamReader(@Path.Combine(Application.streamingAssetsPath, "hygdata_v3.csv")))
        {
            int i = 0;
            while (!reader.EndOfStream)
            {
                /* The below if statements are a fix to avoid category names being added into the array,
                     *disorganising the arrays and making them unusable. The 'i' counter may be unneeded.
                     */
                if (i >0)
                {
                    string[] starArray = new string[4]; //Array containing the star's name and properties

                    var line = reader.ReadLine();
                    var values = line.Split(',');

                    
                    if (values[6] == "")
                    {
                        starArray[0] = "NameTest";

                    }

                    else
                    {
                        starArray[0] = values[6];
                    }


                    if (values[13].ToString() != "mag")
                    {
                        starArray[1] = values[13].ToString();
                    }
                    else
                    {
                        starArray[1] =0.ToString();
                    }
                    if (values[7].ToString() != "ra")
                    {
                        starArray[2] = values[7].ToString();
                    }
                    else
                    {
                        starArray[2] = 0.ToString();
                    }
                    if (values[8].ToString() != "dec")
                    {
                        starArray[3] = values[8].ToString();
                    }
                    else
                    {
                        starArray[2] = 0.ToString();
                    }
                    if (values[13] != "mag" && Convert.ToDouble(values[13]) < 3)
                    {
                        starList.Add(starArray);


                    }
                }

                i++;
            }
            reader.Close();
        }


    }

    void planetInfo() // Not yet implemented, for getting  planet positions
    {

    }

    public List<string[]> getStarList() //Returns the List of Stars
    {
        starInfo();
        return starList;

    }



}
/*
 * The below is the same class but implementing an SQLite database
 * which isn't used as it does not work when deployed on the HoloLens.
 * It hasn't been removed as the plan is to migrate to an
 * SQLite database when possible.
 */



/*
 using System.Collections.Generic;
using System.Data;
using System;
using UnityEngine;
using System.IO;
using Mono.Data.Sqlite;
using System.Data.Common;


public class StarData
{

    private List<string[]> starList = new List<string[]>();

    private string ConnectionString = "URI=file:" + Path.Combine(Application.streamingAssetsPath, "starDB.sqlite");
    //private string ConnectionString = "URI=file:" + "C:\\Users\\elias\\Desktop\\starDB.sqlite"; 
    //private List<object[]> starList = new List<object[]>();



    void starInfo()
    {

        //TODO: Strip down database to contain only essentials

        IDbConnection starDatabase;
        starDatabase = (IDbConnection)new SqliteConnection(ConnectionString);

        starDatabase.Open();
        IDbCommand dbcmd = starDatabase.CreateCommand();

        //Apparant Magnitude 8 is what is visible in the darkest skies on Earth
        //For reference: https://en.wikipedia.org/wiki/Apparent_magnitude
        //Change SQL command to have mroe data to use as info

        string visibleSQL = "SELECT ProperName, Mag, RA, Dec FROM hygfull GROUP BY Mag HAVING Mag <50"; // The SQL statement for the SQLite implementation

        dbcmd.CommandText = visibleSQL;

        IDataReader reader = dbcmd.ExecuteReader();

        while (reader.Read())
        {
            string[] starArray = new string[4];
            
            starArray[1] = reader["Mag"].ToString();
            starArray[1] = reader["Mag"].ToString();
            starArray[2] = reader["RA"].ToString();
            starArray[3] = reader["Dec"].ToString();
            
            starList.Add(starArray);


        }

        reader.Close();
        reader = null;
        dbcmd.Dispose();
        dbcmd = null;
        starDatabase.Close();
        starDatabase = null;


        //Return star horizontal coordinates and name (or reference if name does nto exist

    }
    void planetInfo()
    {
        //Insert planet database here if also using sqlite db

    }
    public List<string[]> getStarList()
    {
        starInfo();
        return starList;

    }



}
     */
