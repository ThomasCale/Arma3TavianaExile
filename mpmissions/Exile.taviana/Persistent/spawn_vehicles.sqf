/*

	Remove the comments on the MARMA logs if you want to log the spawns to MARMA.

	The _uid variable MUST be changed to a valid UID that already exists in the account table.

	How it works -

	On server init, the script will count AllMissionObjects (X) on a per vehicle basis listed in the array below. If there is less than the defined amount the server will spawn a persistent vehicle with a random pin number
	UNLOCKED at the defined or random road position.

	This script can be used to replace the standard EXILE world vehicle spawns, so that the vehicles that are spawned are persistent. Players will not know the pin number, but its still a "benefit" to them as the vehicle they find
	is persistent. And hey, they might just guess the number..

	This script accounts for ALL vehicles, purchased or other wise. So if players have bought vehicles, and those vehicles exceed the maximum defined number in tbe below array, the server wont spawn anymore.

	Configure the _vehicleArray below
	Adjust the safePos parameters line 132 - 138

*/

uiSleep 30;

diag_log ["ExileServer - Spawning persistent vehicle spawns"];
//["ExileServer - Spawning world persistent vehicles"] call MAR_fnc_log;

private ["_count","_uid","_debugForSP","_vehicle","_vehicleArray","_count","_vehicleClass","_position","_positionCount","_pinCode","_vehicleObject","_nearVehicles","_nearVechicleCount","_marker","_cancelSpawn","_isRandomRoadPos","_road","_scriptComplete"];

_scriptComplete = false;
_debugForSP = false;  // If true , when the script is run in the editor it will create markers on the vehicle spawns.

_uid = "76561198307919416"; // Needs to be a valid UID that exists in the account table (best to use a server owners uid)

/*
	How the vehicle array works -

	Select 0 - Vehicle class name
	Select 1 - Number - amount limit, will only maintain this many vehicles on the server
	Select 2 - Array of positions EG [[0,0,0].[0,0,0]] - Will randomly select one of the positions per vehicle, if the position is occupied it will try for the other positions
	Select 3 - Boolean - If true, will spawn the vehicle on a random road, if false, will look to the positions above.

*/

_vehicleArray = 
[
	// Bikes
	["dbo_dirtbike",3,[],true],
	["dbo_dirtbike_sp",3,[],true],
	["dbo_dirtbike_bs",3,[],true],
	["dbo_dirtbike_purp",3,[],true],
	["dbo_dirtbike_rsw",3,[],true],
	["dbo_dirtbike_sand",3,[],true],
	// Fox Civ
	["Fox_Tahoe",2,[],true], 
	["Fox_RickGrimes",2,[],true],
	// Offroads
	["Exile_Car_Offroad_White",2,[],true], 
	["Exile_Car_Offroad_Rusty1",2,[],true], 
	["Exile_Car_Offroad_Armed_Guerilla01",1,[],true],
	["Exile_Car_Offroad_Guerilla03",1,[],true],
	// Ladas
	["Exile_Car_Lada_Red",3,[],true], 
	["Exile_Car_Lada_White",3,[],true],
	["Exile_Car_Lada_Green",3,[],true],
	// Fox Specials
	["Fox_CobraR_Police",1,[],true], 
	["Fox_ChallengerO",1,[],true], 
	["Fox_Daytona",1,[],true], 
	["Fox_Interceptor",1,[],true], 
	["Fox_F40",1,[],true], 
	["Fox_Tahoe_Apocalypse",1,[],true], 
	["Fox_GNX",1,[],true], 
	["Fox_Outsider",1,[],true], 
	["Fox_Fireengine",1,[],true], 
	["Fox_Pickup_Apocalypse",1,[],true], 
	["Fox_Charger_Apocalypse",1,[],true],
	["Fox_Pickup_Apocalypse",1,[],true],
	["Fox_Pickup_6S",1,[],true], 
	["Fox_Viper",1,[],true], 
	["fox_R34_Apocalypse",1,[],true], 
	["fox_R34_Fox",1,[],true], 
	["Fox_Wanderer",1,[],true], 
	// Volha
	["Exile_Car_Volha_Blue",2,[],true],
	["Exile_Car_Volha_White",2,[],true],
	["Exile_Car_Volha_Black",3,[],true],
	// Bus
	["Exile_Car_Ikarus_Blue",1,[],true],
	["Exile_Car_Ikarus_Red",1,[],true],
	["Exile_Car_Ikarus_Party",2,[],true],
	// Zamak
	["Exile_Car_Zamak",1,[],true],
	// Urals
	["RHS_Ural_Open_Civ_02",1,[],true],
	["RHS_Ural_Civ_02",1,[],true],
	["RHS_Ural_Open_Civ_03",1,[],true],
	["RHS_Ural_Civ_03",1,[],true],
	["RHS_Ural_Open_Civ_01",1,[],true],
	["RHS_Ural_Civ_01",1,[],true],
	["RHS_Ural_Open_MSV_01",1,[],true], 
	["RHS_Ural_MSV_01",1,[],true], 
	// Russia
	["rhs_tigr_msv",1,[],true], 
	["rhs_tigr_3camo_msv",1,[],true], 
	["rhs_tigr_m_vdv",1,[],true], 
	["rhs_tigr_m_3camo_vdv",1,[],true], 
	["rhs_uaz_vdv",3,[],true], 
	["rhs_uaz_open_vdv",3,[],true], 
	["rhs_kamaz5350_flatbed_msv",1,[],true],
	["rhs_kamaz5350_msv",1,[],true], 
	["rhs_gaz66_ap2_msv",1,[],true], 
	["rhs_gaz66o_msv",1,[],true], 
	["rhs_gaz66_msv",1,[],true],
	["rhs_tigr_sts_vdv",1,[],true],
	["rhs_tigr_sts_3camo_vdv",1,[],true],
	// USA!USA!USA!
	["rhsusf_m1025_d",1,[],true], 
	["rhsusf_m998_d_2dr",1,[],true], 
	["rhsusf_mrzr4_d",1,[],true], 
	["rhsusf_m113_usarmy_unarmed",1,[],true],
	["rhsusf_m1025_w_s",1,[],true],
	["rhsusf_m998_w_2dr",1,[],true],
	["rhsusf_CGRCAT1A2_usmc_d",1,[],true],
	["rhsusf_m1240a1_usmc_d",1,[],true],
	["rhsusf_CGRCAT1A2_usmc_wd",1,[],true],
	["rhsusf_m1240a1_usmc_wd",1,[],true],
	["rhsusf_M977A4_BKIT_M2_usarmy_wd",1,[],true],
	["rhsusf_M977A4_BKIT_M2_usarmy_d",1,[],true],
	["rhsusf_M1078A1R_SOV_M2_D_fmtv_socom",1,[],true],
	["rhsusf_M1084A1R_SOV_M2_D_fmtv_socom",1,[],true],
	["rhsusf_m1240a1_m2_usmc_wd",1,[],true],
	["rhsusf_m1240a1_m240_usmc_wd",1,[],true],
	["rhsusf_m1240a1_m2_usmc_d",1,[],true],
	["rhsusf_m1240a1_m240_usmc_d",1,[],true],
	["rhsusf_M977A4_BKIT_usarmy_wd",1,[],true],
	["rhsusf_M977A4_BKIT_usarmy_d",1,[],true],
	["rhsusf_M1084A1P2_B_D_fmtv_usarmy",1,[],true],
	["rhsusf_M1083A1P2_B_D_fmtv_usarmy",1,[],true],
	["rhsusf_M1083A1P2_B_WD_fmtv_usarmy",1,[],true],
	["rhsusf_M1084A1P2_B_WD_fmtv_usarmy",1,[],true],
	// Choppers
	["Exile_Plane_BlackfishVehicle",1,[],true],
	["RHS_UH1Y_UNARMED_d",2,[],true],
	["RHS_UH60M2",1,[],true],
	["RHS_MELB_MH6M",2,[],true],
	["RHS_MELB_H6M",2,[],true],
	["Exile_Chopper_Huey_Green",2,[],true],
	["Exile_Chopper_Huey_Armed_Green",1,[],true],
	["RHS_Mi8amt_civilian",1,[],true], 
	["rhs_ka60_c",2,[],true], 
	["RHS_Mi8AMT_vvsc",1,[],true],
	["RHS_CH_47F_10",1,[],true], 
	["RHS_UH60M_d",1,[],true], 
	["rhsusf_CH53E_USMC_D",1,[],true],

	//Planes
	["Exile_Plane_Cessna",2,[[7759.02, 7864.8, 73.9842],[14494.4, 6382.82, 51.1241]],false]
];

{
	for "_i" from 0 to (_x select 1) do
	{	
		_cancelSpawn = false;
		_obj = _x select 0;
		_count = count allMissionObjects _obj;
		_positionCount = (count (_x select 2));
		_isRandomRoadPos = _x select 3;

		if !(_count >= _x select 1) then
		{
			_vehicleClass = _x select 0;
			_position = selectRandom (_x select 2);

			if !(_isRandomRoadPos) then
			{
				_foundSafePos = false;
				_failSafe = 15;
				_checks = 0;
				waitUntil 
				{ 
					_position = selectRandom (_x select 2);
					_nearVehicles = nearestObjects [_position, ["car","air"], 10];
					_nearVechicleCount = count _nearVehicles;
					if (_nearVechicleCount == 0) then
					{
						_foundSafePos = true;
					};
					_checks = _checks + 1;
					if (_checks >= _failSafe) then {_cancelSpawn = true; _foundSafePos = true;};
					_foundSafePos
				};		
			}
			else
			{
				_foundSafePos = false;
				waitUntil 
				{
					_spawnCenter = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition"); 	//Center of your map 
					_min = 15; 																				// minimum distance from the center position (Number) in meters
					_max = 30000; 																			// maximum distance from the center position (Number) in meters
					_mindist = 5; 																			// minimum distance from the nearest object (Number) in meters, ie. spawn at least this distance away from anything within x meters..
					_water = 0; 																			// water mode 0: cannot be in water , 1: can either be in water or not , 2: must be in water
					_shoremode = 0; 																		// 0: does not have to be at a shore , 1: must be at a shore
					_blackList = [[[0, 0],[0,0]]]; 

					_startPosRoad = [_spawnCenter,_min,_max,_mindist,_water,10,_shoremode,_blackList] call BIS_fnc_findSafePos; //Find random spot on the map
					_onRoadCheck = _startPosRoad nearRoads 100; 											//Find road objects 100m from spot
					_countPossibleRoads = count _onRoadCheck; 												// count road objects

					if (_countPossibleRoads == 0) then 
					{
					}
					else
					{
						_road = _onRoadCheck select 0;
						_position = getPos _road;
						_foundSafePos = true;
					};
					uiSleep 0.1;
					_foundSafePos
				};
			};	
			if !(_cancelSpawn) then
			{	
				if !(_debugForSP) then
				{
					_pinCode = format [""];
					_vehicleObject = [_vehicleClass, _position, (random 360), true,_pinCode] call ExileServer_object_vehicle_createPersistentVehicle;
					_vehicleObject setDamage 0.8;
					_vehicleObject setFuel 0;

					if !((_x select 0) isKindOf "AIR") then
					{
						_wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel"];
						{
							if (random 1 > 0.5) then
							{	
								_vehicleObject setHitPointDamage [_x,1];
							};	
						} forEach _wheels;
					};	
					_vehicleObject setVariable ["ExileOwnerUID", _uid];
					_vehicleObject setVariable ["ExileIsLocked",0];
					_vehicleObject lock 0;
					_vehicleObject call ExileServer_object_vehicle_database_insert;
					_vehicleObject call ExileServer_object_vehicle_database_update;

					diag_log format ["[Event: Persistent Spawns] -- Spawned a %1 at location: %2 -- Max allowed: %3",_x select 0,_position, _x select 1];
					//[format["[Event: Persistent Spawns] -- Spawned a %1 at location: %2 -- Max allowed: %3",_x select 0,_position, _x select 1]] call MAR_fnc_log;
				}
				else
				{
					_vehicleObject = createVehicle [_vehicleClass,_position,[], 0, "NONE"];

					if !((_x select 0) isKindOf "AIR") then
					{
						_wheels = ["HitLF2Wheel","HitLFWheel","HitRFWheel","HitRF2Wheel"];
						{
							_vehicleObject setHitPointDamage [_x,1];
						} forEach _wheels;
					};

					_marker = createMarker [format["HeliCrash%1", diag_tickTime], _position];
					_marker setMarkerType "mil_dot";
					_marker setMarkerText "Vehicle";
				};
			}
			else
			{
				if !(_debugForSP) then
				{
					//[format["[Event: Persistent Spawns] -- Could not find valid spawn position for %1 at position %2 -- exiting try for this vehicle",_x select 0,_position]] call MAR_fnc_log;
					diag_log format["[Event: Persistent Spawns] -- Could not find valid spawn position for %1 at position %2 -- exiting try for this vehicle",_x select 0,_position];
				}
				else
				{
					hint format["[Event: Persistent Spawns] -- Could not find valid spawn position for %1 at position %2 -- exiting try for this vehicle",_x select 0,_position];
				};	
			};		
		};
	};		
	
} forEach _vehicleArray;

_scriptComplete = true;

waitUntil 
{
	diag_log format ["ExileServer - Finished spawning world vehicles"];
	//["ExileServer - Finished spawning world vehicles"] call MAR_fnc_log;
	_scriptComplete
};