/////////////////////////////////////////////////////////////
////                                                     ////
////                                                     ////
////        RZ Infection for Exile v0.2                  ////
////		                                         ////
////		                                         ////
////                                                     ////
////	    Created by =RAV=MusTanG and Patrix87         ////
////                                                     ////
////                                                     ////
/////////////////////////////////////////////////////////////

Server Side Installation:

Place @RZInfection in your server directory
Load the mod "-mod=@exile;@RZInfection;"
///////////////////////////////////////////
Add the following two classes

rzinfection_antivirus_pills
rzinfection_antivirus_injector


To your:
loot table(server side config)
price list and traders(mission side config)

///////////////////////////////////////////
Adding in 'zedkills' column for saving with ExileZ v2.7

open up your database editor like MySql or any one you like.
run this query on your exile table

ALTER TABLE `account`
	ADD COLUMN `zedkills` int(11) unsigned NOT NULL DEFAULT '0' AFTER `kills`;
	
///////////////////////////////////////////
RZ Infection Persistence
///////////////////////////////////////////

1. Add to database:
CREATE TABLE `rzinfection` (
  `uid` varchar(32) NOT NULL,
  `infection` double unsigned NOT NULL DEFAULT '0',
  `immunity` double unsigned NOT NULL DEFAULT '0',
  `last_updated_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`uid`),
  KEY `uid` (`uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

2. Add to exile.ini ( Remove the "Number of Inputs = #" for 64bit compatibility)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;RZ Infection Persistence

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

[hasInfectionEntry]
SQL1_1 = SELECT CASE WHEN EXISTS(SELECT uid FROM rzinfection WHERE uid = ?) THEN 'true' ELSE 'false' END
Number of Inputs = 1
SQL1_INPUTS = 1
OUTPUT = 1

[createInfectionEntry]
SQL1_1 = INSERT INTO rzinfection SET uid = ?, infection = 0, immunity = 0
Number Of Inputs = 1
SQL1_INPUTS = 1

[updateInfection]
SQL1_1 = UPDATE rzinfection SET infection = ?, immunity = ? WHERE uid = ?
Number Of Inputs = 3
SQL1_INPUTS = 1,2,3

[getInfection]
SQL1_1 = SELECT infection, immunity FROM rzinfection WHERE uid = ?
Number Of Inputs = 1
SQL1_INPUTS = 1
OUTPUT = 1,2

3. Add the overrides or code blocks to your current overrides. (Use the appropriate 32bit or 64bit overrides folder)
- Make sure to add the overrides locations to your CfgExileCustomCode in the config.cpp mission side
- Place the Override folder in your mission (Use the appropriate 32bit or 64bit overrides folder)
	class CfgExileCustomCode 
	{
	
		//RZ Infection Addon ADD THESE LINES :)
		ExileClient_object_item_consume = "Overrides\ExileClient_object_item_consume.sqf";
		ExileServer_object_player_database_update = "Overrides\ExileServer_object_player_database_update.sqf";
		ExileServer_system_network_event_onPlayerConnected = "Overrides\ExileServer_system_network_event_onPlayerConnected.sqf";
		ExileServer_object_player_database_load = "Overrides\ExileServer_object_player_database_load.sqf";
		ExileServer_object_player_event_onMpKilled = "Overrides\ExileServer_object_player_event_onMpKilled.sqf";
	};
4. ENJOY the rest is taken care of within RZInfection!