# Hololensstarview
Hololens Stargazing app

All these instructions are just arough draft and will be organized in order to be readable.


Uses Unity 2017.4.25f1
Uses HoloTooklkit (AKA Mixed reality toolkit) HoloToolkit 2017.4.3.0

Basic settings: 
Scipting Backed: IL2CPP (No reason .NET would not work if needed) 
Api Comp./Scripting Runtime version: .Net 4.6


Uses the Mono.Data.SqLite for DB access 
Used to use System.Data.SQLite but had to change due to imcompatibility when building for  HoloLens 

Database is currently the HYG Database](http://www.astronexus.com/hyg)  as it was the quickest to get up and running by far. 
Others may be better in the future.

Code breakdown:
