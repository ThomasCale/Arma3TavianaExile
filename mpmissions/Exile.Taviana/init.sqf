BURK_dogSeek = compileFinal preprocessFileLineNumbers "custom\dogs\JohnO_fnc_seeking.sqf"; 
BURK_dogFollowPlayer = compileFinal preprocessFileLineNumbers "custom\dogs\JohnO_fnc_following.sqf";
execVM "custom\vehicle_load.sqf";

//BuryCorpse
VNM_fnc_Hidebody = compileFinal preprocessFileLineNumbers "custom\BuryCorpse.sqf";

// ------ Claim Non-Persistent Vehicles ------
[] execVM "ClaimVehicles_Client\ClaimVehicles_Client_init.sqf";

// ----- sector b kisten -----
execVM "crates\weaponscrate.sqf";
execVM "crates\foodcrate.sqf";
execVM "crates\buildingcrate.sqf";

// ----- R3F Logistics -----
[] execVM "R3F_LOG\init.sqf";

// ----- igiload ----
[] execVM "IgiLoad\IgiLoadInit.sqf";

// ----- service_point -----
[] execVM "custom\rearm\takegive_poptab_init.sqf";

if(hasInterface) then{
    [] execVM "custom\rearm\service_point.sqf";
};

// ---- EnigmaRevive -----
[] execVM "custom\EnigmaRevive\init.sqf";

// ----- Neustart Warnungen ----
[] execVM "custom\restartWarnings\sqf\initLocal.sqf";

// ---- VEMFr Mission ----
if hasInterface then
{
	[] execVM "VEMFr_client\sqf\initClient.sqf";
};
