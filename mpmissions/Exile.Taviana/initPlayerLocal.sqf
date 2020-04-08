if (!hasInterface || isServer) exitWith {};
Bones_fnc_salvageAndRepairMenu = compileFinal preprocessFileLineNumbers "Custom\advancedRepair\Bones_fnc_salvageAndRepairMenu.sqf";

DDR_fnc_Mushrooms = compileFinal preprocessFileLineNumbers "custom\drugs\mushrooms.sqf";
DDR_fnc_Weed = compileFinal preprocessFileLineNumbers "custom\drugs\weed.sqf";
DDR_fnc_Ore_Mining = compileFinal preprocessFileLineNumbers "custom\mining\ore_mining.sqf";
DDR_fnc_Crystal_Mining = compileFinal preprocessFileLineNumbers "custom\mining\crystal_mining.sqf";

waitUntil {!isNull findDisplay 46 && !isNil 'ExileClientLoadedIn' && getPlayerUID player != ''};
uiSleep 1;
execVM "announcepay.sqf";

NR_fnc_SalvageVehicle = compileFinal preprocessFileLineNumbers "SalvageVehicle.sqf";
[] execVM "addons\paintshop\paintshop.sqf";
[] execVM "custom\KillMessages.sqf";
[] execVM "custom\MWT\monkeyswelcometoasts.sqf";
// Taken away for now
//#include "initServer.sqf"

eXpochClientPlayerLastBaseSpawn = diag_tickTime;		// Do not change this
eXpochBaseRespawnTimeLimit = 1;					// How long before the players can respawn at their base since the last death or joining server  - default: 900
eXpochBaseSpawnLevelRequired = 1; 					// Required Level of Base for Allowing Spawn - default: 4
eXpochBaseSpawnAllowedType = "ExileTerritoryBuildRights"; // If only owners can spawn change this to "ExileOwnerUID" - default: "ExileTerritoryBuildRights"

///////////////////////////////////////////////////////////////////////////
// Kamarovo Boat Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_Boat",
	"Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [10874.2,6121.67,3.58939],
    322.116
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Boat"];

///////////////////////////////////////////////////////////////////////////
// Molotovsk Boat Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_Boat",
	"Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [17296.5,12894,2.67855],
    316.818
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Boat"];

///////////////////////////////////////////////////////////////////////////
// Dubovo Aircraft Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
	"Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [16522,10151.9,-0.00355148],
    0
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Dubovo Aircraft Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
	"Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [16510.3,10152,-0.00355148],
    0
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Krasnoznamenk Aircraft Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_Aircraft",
	"Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [6806.4,8553.13,-0.00507355],
    220
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Krasnoznamenk Aircraft Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader =
[
    "Exile_Trader_AircraftCustoms",
	"Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [6814.62,8546.24,-0.00507355],
    220
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// TraderCity SW 
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [5209.23, 6064.59, 0],
    350
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"]; 

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [5211.64, 6065.24, 0],
    350
] 
call ExileClient_object_trader_create;
  
_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [5216.57, 6068.37, 0],
    330
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [5218.96, 6073.29, 0],
    290
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [5206.74, 6086.7, 0],
    160
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [5201.28, 6080.36, 0.1],
    105
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [5230.69, 6075.19, 0],
    93
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [5225.94, 6087.7, 0],
    10
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [5230.37, 6084.59, 0],
    10
] 
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// TraderCity NW 
///////////////////////////////////////////////////////////////////////////
_trader = [
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [1512.56, 17701.3, 0],
    210
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [1511.01, 17702.9, 0],
    210
] 
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [1505.7, 17706.0, 0],
    285
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [1500.2, 17705.6, 0],
    175
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [1494.65, 17688.5, 0],
    30
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [1502.89, 17687.0, 0],
    0
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [1492.4, 17714.6, 0],
    350
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [1484.14, 17704.3, 0],
    270
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [1484.56, 17710.0, 0],
    270
] 
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// TraderCity NO 
///////////////////////////////////////////////////////////////////////////
_trader = [
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [8639.96, 20239.4, 0],
    210
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [8637.46, 20240.1, 0],
    210
] 
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [8631.53, 20240.4, 0],
    180
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [8626.91, 20237.6, 0],
    160
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [8629.62, 20219.4, 0],
    10
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [8637.74, 20222.4, 0],
    345
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [8616.89, 20242.1, 0],
    330
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [8613.2, 20229.3, 0],
    240
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [8611.0, 20235.0, 0],
    240
] 
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// TraderCity MID 
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [13382.0, 12281.6, 0],
    340
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [13383.6, 12282.9, 0],
    340
] 
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [13387.8, 12287.5, 0],
    300
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [13388.0, 12293.3, 0],
    250
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [13371.9, 12301.2, 0],
    160
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [13368.9, 12293.3, 0],
    92
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [13397.5, 12298.7, 0],
    90
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [13389.1, 12308.9, 0],
    10
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [13394.8, 12307.8, 0],
    10
] 
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// TraderCity SO 
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [15153.2, 4283.07, 0],
    300
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [15154.2, 4284.88, 0],
    300
] 
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [15155.9, 4290.63, 0],
    270
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [15154.2, 4295.87, 0],
    210
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [15136.0, 4297.16, 0],
    100
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [15136.7, 4288.66, 0],
    80
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [15160.3, 4304.33, 0],
    80
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [15148.9, 4310.86, 0],
    340
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [15155.1, 4312.12, 0],
    340
] 
call ExileClient_object_trader_create;

/*
///////////////////////////////////////////////////////////////////////////
// TraderCity Duryn 
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [4002.4, 18465.5, 0],
    282
]
call ExileClient_object_trader_create;


_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [3904.84, 17956.1, 0.5],
    170
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [4003.1, 18472.6, 0],
    340
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [4007.53, 18478.1, 0],
    270
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

_trader = 
[
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [3985.85, 18475.2, 0.43],
    90
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [3984.95, 18485.0, 0.43],
    90
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [4005.97, 18485.7, 0],
    270
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [3986.37, 18479.5, 0.43],
    90
] 
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [3987.31, 18494.1, 0.43],
    90
] 
call ExileClient_object_trader_create;

_trader = [
    "Exile_Trader_Boat",
	"Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [4019.41, 18820.5, 33.60],
    270
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Boat"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [4012.69, 18829, 35.00],
    90
] 
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// TraderCity Bridge 
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [13364.7, 8617.34, 0],
    86
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [13366.5, 8609.89, 0],
    270
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [13362.2, 8613.9, 0],
    220
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

_trader = 
[
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [13336.9, 8684.03, 0],
    225
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [13330.6, 8675.32, 0],
    35
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [13371.4, 8615.73, 0],
    260
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [13365.8, 8649.12, 0],
    45
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [13340.4, 8627.46, 0],
    45
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [13374.9, 8619.68, 0],
    282
]
call ExileClient_object_trader_create;

waitUntil {!isNil"ExileClientLoadedIn"};
[
    1,
    {
        _fs = ["afalpercmstpsraswrfldnon","afalpercmstpsnonwnondnon","afalpercmstpsraswpstdnon","afalpknlmstpsraswrfldnon","afalpknlmstpsnonwnondnon"];  
		if ((animationState player) in _fs) then
		{
			_f = (getPos player select 2);
			if (_f < 0.1) then 
			{
				player setvelocity [0,0,0];
			};
			
		};
		
    },
    [],
    true,
    true
] call ExileClient_system_thread_addtask;