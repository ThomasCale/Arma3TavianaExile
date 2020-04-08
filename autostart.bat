@echo off
color 0a
title Server Monitor
:Serverstart
echo Launching Server 
cd "D:\GitHub\Arma3TavianaExile\"
echo Server Monitor... Active !
start "Arma3" /min /wait arma3server_x64.exe -mod=@ExileMod;@CUPTerrainscore;@CUPTerrainsmaps;@CUPTerrainsmaps2;@ryanzombies;@CBA_A3;@Arma3Taviana; -servermod=@ExileServer; -config=D:\GitHub\Arma3TavianaExile\@ExileServer\config.cfg -port=2302 -profiles=Exile-Boss -cfg=D:\GitHub\Arma3TavianaExile\@ExileServer\basic.cfg -name=anomalygamingtest -autoinit
ping 127.0.0.1 -n 15 >NUL
echo Server Shutdown ... Restarting!
ping 127.0.0.1 -n 5 >NUL
cls
goto Serverstart