using System.Collections.Generic;
using System.Data;
using Mono.Data.Sqlite;
using System;
using UnityEngine;


public class StarData
{

    private List<string[]> starList = new List<string[]>();

    private string ConnectionString = "URI=file:" + Application.dataPath + "/starData/stardb.sqlite";
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

        string visibleSQL = "select ProperName, Mag, RA, Dec from hygfull GROUP BY Mag HAVING Mag <50";

        dbcmd.CommandText = visibleSQL;

        IDataReader reader = dbcmd.ExecuteReader();

        while (reader.Read())
        {
            string[] starArray = new string[4];
            if (reader["ProperName"] == "") {
                starArray[0] = "Name not yet in database";
            }
            else
            {
                starArray[0] = reader["ProperName"].ToString();
            }
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
