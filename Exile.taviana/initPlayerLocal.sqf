// Taken away for now
//#include "initServer.sqf"
[] execVM "Custom\StatusBar\statusBar.sqf";
[] execVM "custom\MWT\monkeyswelcometoasts.sqf";
[] execVM "custom\info.sqf";

/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 18 NPCs
private _npcs = [
["Exile_Trader_Armory", ["acts_StandingSpeakingUnarmed"], "Exile_Trader_Armory", "WhiteHead_18", [["arifle_AK47","","","",["30Rnd_762x39_AK47_M",30],[],""],[],[],["U_BG_Guerilla3_1",[["30Rnd_762x39_AK47_M",2,30]]],[],[],"H_Shemag_olive","G_Shades_Black",[],["","","","","",""]], [15293.8, 16932.5, 31.2758], [-0.418961, -0.908004, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_09", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [15256.2, 16933.9, 31.7504], [0.989215, 0.146472, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStandingUA_move1"], "Exile_Trader_Office", "GreekHead_A3_07", [[],[],["Makarov","","","",["8Rnd_9x18_Makarov",8],[],""],["U_I_G_resistanceLeader_F",[["8Rnd_9x18_Makarov",3,8]]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Aviator",[],["","","","","",""]], [15280.4, 16940.5, 36.0918], [0.134886, -0.990861, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "GreekHead_A3_06", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Tactical_Clear",[],["","","","","",""]], [15309.1, 16916.8, 31.5127], [-0.866173, -0.499744, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_01", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Black",[],["","","","","",""]], [15308.2, 16896.2, 31.69], [0.166011, -0.986124, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_09", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Safety_orange_F",[]],[],"Exile_Headgear_SafetyHelmet","G_Aviator",[],["","","","","",""]], [15254.2, 16926.3, 31.1179], [0.257002, -0.966411, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["acts_StandingSpeakingUnarmed"], "Exile_Trader_Armory", "WhiteHead_17", [["arifle_AK47","","","",["30Rnd_762x39_AK47_M",30],[],""],[],[],["U_BG_Guerilla3_1",[["30Rnd_762x39_AK47_M",2,30]]],[],[],"H_Shemag_olive","G_Shades_Black",[],["","","","","",""]], [5230.5, 6226.55, 37.6994], [0.684825, -0.728707, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_08", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [5224.27, 6213.11, 37.5787], [0.989215, 0.146472, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStandingUA_move1"], "Exile_Trader_Office", "WhiteHead_13", [[],[],["Makarov","","","",["8Rnd_9x18_Makarov",8],[],""],["U_I_G_resistanceLeader_F",[["8Rnd_9x18_Makarov",3,8]]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Aviator",[],["","","","","",""]], [5229.71, 6205.34, 37.5697], [-0.80398, 0.594656, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "GreekHead_A3_07", [[],[],[],["U_C_WorkerCoveralls",[]],[],[],"H_Booniehat_khk_hs","",[],["","","","","",""]], [5233.54, 6205.71, 37.5828], [0.181288, 0.98343, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "Sturrock", [[],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Watchcap_khk","",[],["","","","","",""]], [5244.61, 6207.39, 37.6287], [-0.49188, 0.870663, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_18", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Safety_orange_F",[]],[],"Exile_Headgear_SafetyHelmet","G_Aviator",[],["","","","","",""]], [5248.38, 6214.21, 37.7], [-0.911829, 0.41057, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "Barklem", [[],[],[],["U_I_G_Story_Protagonist_F",[]],[],[],"H_Watchcap_khk","",[],["","","","","",""]], [8953.51, 12948.8, 9.29226], [-0.904376, 0.426737, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["acts_StandingSpeakingUnarmed"], "Exile_Trader_Armory", "WhiteHead_10", [["arifle_SPAR_03_khk_F","muzzle_snds_B_khk_F","acc_pointer_IR","optic_ERCO_khk_F",["20Rnd_762x51_Mag",20],[],""],[],["hgun_Pistol_heavy_01_F","muzzle_snds_acp","","optic_MRD",["11Rnd_45ACP_Mag",11],[],""],["U_B_CTRG_Soldier_F",[["FirstAidKit",5]]],["V_PlateCarrierSpec_tna_F",[["SmokeShell",1,1],["SmokeShellGreen",1,1],["SmokeShellBlue",1,1],["SmokeShellOrange",1,1],["Chemlight_green",1,1],["11Rnd_45ACP_Mag",2,11],["20Rnd_762x51_Mag",3,20]]],[],"H_HelmetB_Enh_tna_F","G_Balaclava_combat",["Laserdesignator_02_ghex_F","","","",[],[],""],["ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"]], [8945.33, 12944.9, 9.60937], [-0.3051, 0.95232, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_05", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [8954.35, 12966.4, 10.431], [0.303512, -0.952828, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStandingUA_move1"], "Exile_Trader_Office", "GreekHead_A3_08", [[],[],["Makarov","","","",["8Rnd_9x18_Makarov",8],[],""],["U_I_OfficerUniform",[["8Rnd_9x18_Makarov",3,8]]],["V_Rangemaster_belt",[]],[],"H_MilCap_dgtl","G_Aviator",[],["","","","","",""]], [8959.64, 12967.7, 10.4536], [0.292012, -0.956415, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_16", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [8938.51, 12970.5, 10.2118], [0.124971, -0.99216, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "AfricanHead_03", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Safety_orange_F",[]],[],"Exile_Headgear_SafetyHelmet","G_Aviator",[],["","","","","",""]], [8931.98, 12965.5, 10.4023], [0.993868, -0.110577, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;