using System.Collections;
using System.Collections.Generic;
using System.IO;



public class StarInfo
{
    //StarID, ProperName, Distance, RA, Dec

    //potentially add magnitude to decide size of the star in user view
    //Chagne ID to IAU names
    private int starId;
    private string properName;
    private double distance;
    private double rightAscension;
    private double declination;

    public StarInfo(int starId, string properName, double distance, double rightAscension, double declination) {
        this.starId = starId;
        this.properName = properName;
        this.distance = distance;
        this.rightAscension = rightAscension;
        this.declination = declination;
    }

    






}
