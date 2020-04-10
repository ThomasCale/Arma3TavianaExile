/*		
	Script name: Monkey's Welcome Toasts
	Author: [GADD] Monkeynutz
	Description: Fully customizable welcome messages.
	Liscence: You are free to edit the script as you please. Steal it from my mission file/download it or what ever,
	just edit what you want and if you have questions, come and ask me on TeamSpeak: ts3.gamingatdeathsdoor.com or 
	www.gamingatdeathsdoor.com on my forums. Don't distribute it to other people under your own name. Send them to
	my download links on the Exile Forums.
*/

private ["_servername","_serverclantag","_website","_teamspeakip","_donatelink","_generaltitlecolor","_generaltextcolor","_generaltoastcolor","_importanttitlecolor","_importanttextcolor","_importanttoastcolor"];

//	Modify the below variables to what you want to be displayed as messages to players.

_servername = "Anomaly Gaming";
_serverclantag = "A";
_website = "";
_teamspeakip = "";
_donatelink = "";

//	The colors can be edited below and there is a great tool I recommend you use to get the color codes designed by |GITS|Root here: https://arma3rgb.com
//	^ Website is in beta so dont judge

//General toast colors for normal messages

_generaltitlecolor = "#f47cff"; 
_generaltextcolor = "#fffa00"; 
_generaltoastcolor = [0, 1, 0.58, 1];

//Important colors below (used for rules info etc. to stand out)

_importanttitlecolor = "#ff0000"; 
_importanttextcolor = "#6aff2b"; 
_importanttoastcolor = [1, 0.39, 0.17, 1];

waitUntil{!isNull findDisplay 46 && !isNil 'ExileClientLoadedIn' && getPlayerUID player != ''};  

if ( alive player ) then {

  	uiSleep 15;
	[format ["<t size='30' font='OrbitronMedium' color='%1'>Hello, %2!</t><br /> 
	<t size='22' font='PuristaMedium' color='%3'>Welcome to the Anomaly Gaming Exile server!</t>",_generaltitlecolor, name player, _generaltextcolor, _servername, worldName], _generaltoastcolor] call ExileClient_gui_toaster_addToast; sleep 45;
	
	[format ["<t size='30' font='OrbitronMedium' color='%1'>Discord</t><br />
	<t size='21' font='PuristaMedium' color='%2'>https://discord.gg/7z5DS8S</t>", _generaltitlecolor, _generaltextcolor, _teamspeakip], _generaltoastcolor] call ExileClient_gui_toaster_addToast; sleep 45;
	
};
