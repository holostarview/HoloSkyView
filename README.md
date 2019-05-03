# Hololensstarview
Hololens Stargazing app


## Requirements
Unity 2018.3 (Will be LTS version) with IL2CPP build tools
Holotoolkit HoloToolkit 2017.4.3.0 (Already isntalled)
## Build settings: 
Target platform: Universal Windows Platform and target device HoloLens/x86
Scipting Backed: IL2CPP (.Net will not build)
Api Comp./Scripting Runtime version: .Net 4.X.

Once built open the solution, target x86 and HoloLens emulator or device and run. This will take a few minutes.



## Misc.
Curretly gets star information via CSV file. 
Using SQlite didn't work due to compatibility issues so will try implementing an SQL server.
Mono.Data.SQLite almost works but for some reason only works in player then gives syntax error when launched on Hololens.

Database is currently the HYG Database](http://www.astronexus.com/hyg)  as it was the quickest to get up and running by far. 
Others may be better in the future and could be relativly easily implemented.

