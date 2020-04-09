// Taken away for now
//#include "initServer.sqf"
[] execVM "Custom\StatusBar\statusBar.sqf";
[] execVM "custom\MWT\monkeyswelcometoasts.sqf";
[] execVM "custom\info.sqf";

// if (!hasInterface || isServer) exitWith {};

// 21 NPCs
private _npcs = [
["Exile_Trader_Equipment", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Equipment", "AfricanHead_02", [["arifle_CTAR_blk_F","","","",["30Rnd_580x42_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Para_4_F",[["30Rnd_580x42_Mag_F",30,3]]],["V_I_G_resistanceLeader_F",[]],[],"H_Bandanna_camo","G_Bandanna_tan",[],["","","","","",""]], [5183.92, 6198.48, 37.4163], [0.999652, -0.0263817, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Food", "WhiteHead_08", [[],[],[],["U_I_C_Soldier_Bandit_2_F",[]],[],[],"H_Bandanna_sand","",[],["","","","","",""]], [5181.15, 6191.66, 37.4349], [0.93614, -0.351627, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Office", "WhiteHead_14", [[],[],["hgun_P07_khk_F","","","",["16Rnd_9x21_Mag",16],[],""],["U_B_T_Soldier_AR_F",[["16Rnd_9x21_Mag",16,3]]],["V_Rangemaster_belt",[]],[],"H_MilCap_tna_F","",[],["","","","","",""]], [5178.69, 6184.95, 37.4452], [0.977781, -0.209627, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_SpecialOperations", "GreekHead_A3_05", [[],[],[],["U_B_CTRG_Soldier_3_F",[]],["V_BandollierB_oli",[]],["B_ViperLightHarness_oli_F",[]],"H_HelmetB_TI_tna_F","G_Balaclava_TI_G_tna_F",[],["","","","","",""]], [5185.41, 6177.13, 37.3495], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Armory", "WhiteHead_18", [["arifle_SPAR_03_khk_F","","","",["20Rnd_762x51_Mag",20],[],""],[],[],["U_I_C_Soldier_Para_1_F",[["20Rnd_762x51_Mag",20,2]]],["V_Rangemaster_belt",[["20Rnd_762x51_Mag",20,1]]],[],"","",[],["","","","","",""]], [5192.09, 6174.01, 37.3541], [0.17519, 0.984535, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Hardware", "WhiteHead_08", [["arifle_AKM_F","","","",["30Rnd_762x39_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Para_4_F",[["30Rnd_762x39_Mag_F",30,3]]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [5203.38, 6169.55, 37.3755], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_WasteDump", "WhiteHead_14", [[],[],[],["U_I_C_Soldier_Bandit_1_F",[]],[],[],"H_Booniehat_tan","",[],["","","","","",""]], [5206.12, 6184.99, 37.6849], [-0.800723, 0.599034, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_WasteDump", "WhiteHead_16", [[],[],[],["U_I_C_Soldier_Bandit_1_F",[]],[],[],"H_Booniehat_tan","",[],["","","","","",""]], [8980.15, 12977, 8.13494], [-0.218695, -0.975793, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Hardware", "WhiteHead_20", [["arifle_AKM_F","","","",["30Rnd_762x39_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Para_4_F",[["30Rnd_762x39_Mag_F",30,3]]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [8995.36, 12980.8, 6.93553], [-0.912339, -0.409435, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Armory", "Barklem", [["arifle_SPAR_03_khk_F","","","",["20Rnd_762x51_Mag",20],[],""],[],[],["U_I_C_Soldier_Para_1_F",[["20Rnd_762x51_Mag",20,2]]],["V_Rangemaster_belt",[["20Rnd_762x51_Mag",20,1]]],[],"","",[],["","","","","",""]], [8995.91, 12968.3, 6.7244], [-0.969959, -0.243269, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_SpecialOperations", "WhiteHead_05", [[],[],[],["U_B_CTRG_Soldier_3_F",[]],["V_BandollierB_oli",[]],["B_ViperLightHarness_oli_F",[]],"H_HelmetB_TI_tna_F","G_Balaclava_TI_G_tna_F",[],["","","","","",""]], [8995.81, 12960.9, 6.61983], [-0.912339, -0.409435, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Equipment", "Sturrock", [["Exile_Weapon_LeeEnfield","","","",["Exile_Magazine_10Rnd_303",10],[],""],[],[],["U_I_C_Soldier_Para_2_F",[["Exile_Magazine_10Rnd_303",10,3]]],["V_BandollierB_rgr",[]],[],"","G_Aviator",[],["","","","","",""]], [8977.11, 12951.2, 7.74997], [-0.38523, 0.922821, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Food", "WhiteHead_19", [[],[],[],["U_I_C_Soldier_Bandit_2_F",[]],[],[],"H_Bandanna_sand","",[],["","","","","",""]], [8984.29, 12951.5, 7.25846], [-0.0624925, 0.998045, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Office", "Barklem", [[],[],["hgun_P07_khk_F","","","",["16Rnd_9x21_Mag",16],[],""],["U_B_T_Soldier_AR_F",[["16Rnd_9x21_Mag",16,3]]],["V_Rangemaster_belt",[]],[],"H_MilCap_tna_F","",[],["","","","","",""]], [8991.61, 12952, 6.81668], [-0.209094, 0.977896, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_WasteDump", "GreekHead_A3_05", [[],[],[],["U_I_C_Soldier_Bandit_1_F",[]],[],[],"H_Booniehat_tan","",[],["","","","","",""]], [15277.7, 16923.9, 31.3418], [0.01758, -0.999845, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Hardware", "WhiteHead_05", [["arifle_AKM_F","","","",["30Rnd_762x39_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Para_4_F",[["30Rnd_762x39_Mag_F",30,3]]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [15293.4, 16930.4, 31.0918], [-0.790078, -0.613007, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Armory", "GreekHead_A3_07", [["arifle_SPAR_03_khk_F","","","",["20Rnd_762x51_Mag",20],[],""],[],[],["U_I_C_Soldier_Para_1_F",[["20Rnd_762x51_Mag",20,2]]],["V_Rangemaster_belt",[["20Rnd_762x51_Mag",20,1]]],[],"","",[],["","","","","",""]], [15295.1, 16918.6, 31.0918], [-0.885249, -0.465117, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_16", [[],[],[],["U_B_CTRG_Soldier_3_F",[]],["V_BandollierB_oli",[]],["B_ViperLightHarness_oli_F",[]],"H_HelmetB_TI_tna_F","G_Balaclava_TI_G_tna_F",[],["","","","","",""]], [15296.4, 16910.7, 31.0918], [-0.790078, -0.613007, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Equipment", "WhiteHead_16", [["arifle_CTAR_blk_F","","","",["30Rnd_580x42_Mag_F",30],[],""],[],[],["U_I_C_Soldier_Para_4_F",[["30Rnd_580x42_Mag_F",30,3]]],["V_I_G_resistanceLeader_F",[]],[],"H_Bandanna_camo","G_Bandanna_tan",[],["","","","","",""]], [15281, 16897.8, 31.1318], [-0.591962, 0.805966, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Food", "WhiteHead_08", [[],[],[],["U_I_C_Soldier_Bandit_2_F",[]],[],[],"H_Bandanna_sand","",[],["","","","","",""]], [15287.7, 16899.5, 31.1318], [-0.296061, 0.955169, 0], [0, 0, 1]],
["Exile_Trader_Office", ["HubStanding_idle1","HubStanding_idle2","HubStanding_idle3"], "Exile_Trader_Office", "WhiteHead_21", [[],[],["hgun_P07_khk_F","","","",["16Rnd_9x21_Mag",16],[],""],["U_B_T_Soldier_AR_F",[["16Rnd_9x21_Mag",16,3]]],["V_Rangemaster_belt",[]],[],"H_MilCap_tna_F","",[],["","","","","",""]], [15295, 16901.1, 31.1318], [-0.433778, 0.90102, 0], [0, 0, 1]]
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