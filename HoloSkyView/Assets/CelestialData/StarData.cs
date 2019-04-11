using System.Collections;
using System.Collections.Generic;
using System.IO;
using System;
using System.Data;
using Mono.Data.Sqlite;
using UnityEngine;
/*
public class StarData {
private const string ConnectionString = "Data Source=Assets/starData/starDB.sqlite;Version=3;";

private List<object[]> starList = new List<object[]>();

private object[] starArray = new object[4];

void starInfo () {

//TODO: Strip down database to contain only essentials

SQLiteConnection starDatabase;
starDatabase = new SQLiteConnection(ConnectionString);

starDatabase.Open();

//Apparant Magnitude 8 is what is visible in the darkest skies on Earth
//For reference: https://en.wikipedia.org/wiki/Apparent_magnitude
//Change SQL command to have mroe data to use as info

string visibleSQL = "select ProperName, Mag, RA, Dec from hygfull GROUP BY Mag HAVING Mag <8";

SQLiteCommand loadVisible = new SQLiteCommand(visibleSQL, starDatabase);

SQLiteDataReader reader = loadVisible.ExecuteReader(0);

while (reader.Read())
{
starArray[0] = reader["ProperName"];
starArray[1] = reader["Mag"];
starArray[2] = reader["RA"];
starArray[3] = reader["Dec"];

starList.Add(starArray);


}




//Return star horizontal coordinates and name (or reference if name does nto exist

}
*/
public class StarData
{   
    private  string ConnectionString = "URI=file:" + Application.dataPath + "/starData/stardb.sqlite";
    private List<object[]> starList = new List<object[]>();

    

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

        string visibleSQL = "select ProperName, Mag, RA, Dec from hygfull GROUP BY Mag HAVING Mag <8";

        dbcmd.CommandText = visibleSQL;

        IDataReader reader = dbcmd.ExecuteReader();

        while (reader.Read())
        {
            object[] starArray = new object[4];
            starArray[0] = reader["ProperName"];
            starArray[1] = reader["Mag"];
            starArray[2] = reader["RA"];
            starArray[3] = reader["Dec"];
            
            starList.Add(starArray);


        }




        //Return star horizontal coordinates and name (or reference if name does nto exist

    }
    void planetInfo()
    {
        //Insert planet database here if also using sqlite db

    }
    public List<object[]> getStarList()
    {
        starInfo();
        return starList;

    }



}
