@echo off
color 0a
title Server Monitor
:Serverstart
echo Launching Server 
cd "C:\Arma3TavianaExile\"
echo Server Monitor... Active !
start "Arma3" /min /wait arma3server.exe -mod=@ExileMod;@CUPTerrainscore;@CUPTerrainsmaps;@CUPTerrainsmaps2;@ryanzombies;@RZInfection;@CBA_A3;@Arma3Taviana;@RHSAFRF;@RHSUSAF; -servermod=@ExileServer;@infiSTAR_Exile; -config=C:\Arma3TavianaExile\@ExileServer\config.cfg -port=2302 -profiles=Exile-Boss -cfg=C:\Arma3TavianaExile\@ExileServer\basic.cfg -name=anomalygamingtest -autoinit
ping 127.0.0.1 -n 15 >NUL
echo Server Shutdown ... Restarting!
ping 127.0.0.1 -n 5 >NUL
cls
goto Serverstart