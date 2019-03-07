using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Data.SQLite;


public class StarData {
    private const string ConnectionString = "Data Source=Assets/starData/starData.sqlite;Version=4;";


    void starInfo () {

        //TODO: Strip down database to contain only essentials
        
        SQLiteConnection starDatabase;
        starDatabase = new SQLiteConnection(ConnectionString);
        
        starDatabase.Open();

        //Apparant Magnitude 8 is what is visible in the darkest skies on Earth
        //For reference: https://en.wikipedia.org/wiki/Apparent_magnitude
        //Change SQL command to have mroe data to use as info

        string visibleSQL = "select StarID, ProperName, Distance, RA, Dec from hygfull GROUP BY Mag HAVING Mag <8";

        SQLiteCommand loadVisible = new SQLiteCommand(visibleSQL, starDatabase);







        //Return star horizontal coordinates and name (or reference if name does nto exist)


    }

    void loadNakedEye()
    {


    }


}
