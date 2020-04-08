scriptName "config.sqf";
/*--------------------------------------------------------------------
// ******************************************************************************************
// * This script is licensed under the GNU Lesser GPL v3.
// ******************************************************************************************
    file: config.sqf
    ======
    Author: Bill Springer <Apoc@MayhemServers.com>
    Description: XM8 App config for ExAd APOC Airdrop Port
--------------------------------------------------------------------*/
#include "functions.sqf"; //Dialog functions for the client

/* ************************************ */

APOC_AA_AdvancedBanking = false;        // Advanced Banking support. Change false to true if you run Advanced Banking on your server.  Not sure of 0.9.8 compatability.
APOC_AA_UseExileLockerFunds = false;    //Removes funds from player's locker stash instead of their hand
APOC_AA_DamageOnWhenLanded = false;        //Turn object allowDamage back on when object is on ground, instead of when in 'chute

APOC_AA_coolDownTime = 1800; //Expressed in sec

APOC_AA_Drops =[
/*
    ["Category Name",
        [
            ["Text displayed to player",    "Name of vehicle or drop box",    cost, "vehicle or supply (use nothing but these two!)", respectThreshold]  //This is an array, use commas between, DUH!
        ] //If something breaks with your list of drops, you've likely messed up the nested arrays.
    ]
*/

//Also, presently, these are NON-Persistant vehicles.  Meaning that they will not last over a restart.  Keep that in mind with prices.  Later updates I'll set that up, with pin code entry.
    ["Vehicles",
        [
            ["Quadbike",         "Exile_Bike_QuadBike_Black",         10000,     "vehicle", 1000],
            ["Offroad",         "Exile_Car_Offroad_Red",            20000,     "vehicle", 1000],
            ["Strider",         "Exile_Car_Strider",                 30000,     "vehicle", 1000]
        ]
    ],

    ["Weapons",
        [
            ["Sniper Rifles",         "airdrop_Snipers",             50000, "supply", 1000],
            ["DLC Rifles",             "airdrop_DLC_Rifles",             45000, "supply", 1000],
            ["DLC LMGs",             "airdrop_DLC_LMGs",             45000, "supply", 1000]
        ]
    ],

    ["Supplies",
        [
            ["Food (small)",        "airdrop_FoodSmall",            500, "supply", 1000],
            ["Food (large)",        "airdrop_FoodLarge",            1000, "supply", 1000],
            ["Medical",                "airdrop_Medical",                10000, "supply", 10000],
            ["Tools",                "airdrop_Tools",                12500, "supply", 10000],
            ["Tools Random",        "airdrop_Tools_Random",            6000, "supply", 8000],
            ["Backpacks",            "airdrop_Backpack",                3000, "supply", 25000],
            ["Base (small)",        "airdrop_base_small",            6000, "supply", 5000],
            ["Base (medium)",        "airdrop_base_medium",            15000, "supply", 8000],
            ["Base (big)",            "airdrop_base_big",                20000, "supply", 10000],
            ["Safekit (small)",        "airdrop_safe_small",            100000, "supply", 25000],
            ["Safekit (big)",        "airdrop_safe_big",                200000, "supply", 25000]
        ]
    ]
];

APOC_AA_Drop_Contents =[
    ["airdrop_Snipers",  //Name of the drop
        [
        // Item type, Item class(es), # of items, # of magazines per weapon
        // Valid item types: wep, itm, or bac.
            ["wep", ["srifle_LRR_LRPS_F"],        1, 3],
            ["wep", ["srifle_LRR_camo_LRPS_F"],    1, 3],
            ["wep", ["srifle_GM6_LRPS_F"],        1, 3],
            ["wep", ["srifle_GM6_camo_LRPS_F"],    1, 3]
        ]
    ],

    ["airdrop_DLC_Rifles",
        [
            ["wep", ["srifle_DMR_03_multicam_F"],    1, 3],
            ["wep", ["srifle_DMR_02_sniper_F"],        1, 3],
            ["wep", ["srifle_DMR_05_hex_F"],        1, 3],
            ["wep", ["srifle_DMR_04_Tan_F"],        1, 3],

            // ["ItemType",[Array of items/weps to choose from randomly], number of items]
            // If using wep, you need also number of mags to be included.
            ["itm", ["V_PlateCarrierIAGL_dgtl", "V_TacVest_camo", "V_PlateCarrierGL_rgr"], 2],
            ["itm", ["bipod_01_F_blk", "bipod_02_F_hex"], 3],
            ["itm", ["optic_DMS","optic_AMS","optic_tws","optic_KHS_blk"], 2],
            ["itm", ["muzzle_snds_B", "muzzle_snds_338_black", "muzzle_snds_338_sand", "muzzle_snds_93mmg"], 2],
            ["bac", ["B_Carryall_mcamo", "B_Kitbag_mcamo"], 2]
        ]
    ],

    ["airdrop_DLC_LMGs",
        [
            ["wep", ["MMG_02_black_F", "MMG_02_camo_F","MMG_02_sand_F","MMG_01_hex_F","MMG_01_tan_F"], 4,4],
            ["itm", ["V_PlateCarrierIAGL_dgtl", "V_TacVest_camo", "V_PlateCarrierGL_rgr"], 2],
            ["bac", ["B_Carryall_mcamo", "B_Kitbag_mcamo"], 2],
            ["itm", ["bipod_01_F_blk", "bipod_02_F_hex"], 2],
            ["itm", ["optic_DMS","optic_AMS","optic_tws","optic_KHS_blk"], 2],
            ["itm", ["muzzle_snds_338_black", "muzzle_snds_338_sand", "muzzle_snds_93mmg"], 2]
        ]
    ],

    ["airdrop_FoodSmall",
        [
            ["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 5],
            ["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 5],
            ["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5],
            ["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5]
        ]
    ],

    ["airdrop_FoodLarge",
        [
            ["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 10],
            ["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 10],
            ["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10],
            ["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10]
        ]
    ],
    
    ["airdrop_Medical",
        [
            ["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 5],
            ["itm", ["Exile_Item_GloriousKnakworst","Exile_Item_EMRE","Exile_Item_Surstromming"], 3],
            ["itm", ["Exile_Item_InstaDoc"], 5],
            ["itm", ["Exile_Item_Vishpirin"], 5],
            ["itm", ["Exile_Item_Bandage"], 5],
            ["itm", ["Exile_Item_Heatpack"], 5],
            ["itm", ["Exile_Item_CanOpener"], 1]
        ]
    ],
    
    ["airdrop_Tools",
        [
            ["itm", ["Exile_Item_Matches"], 3],
            ["itm", ["Exile_Item_CookingPot"], 3],
            ["itm", ["Exile_Melee_Axe"], 1],
            ["itm", ["Exile_Item_CanOpener"], 2],
            ["itm", ["Exile_Item_Pliers"], 1],
            ["itm", ["Exile_Item_ZipTie"], 2],
            ["itm", ["Exile_Item_Grinder"], 1],
            ["itm", ["Exile_Item_Shovel"], 1],
            ["itm", ["Exile_Item_Screwdriver"], 1],
            ["itm", ["Exile_Item_Foolbox"], 1],
            ["itm", ["Exile_Item_Handsaw"], 1]
        ]
    ],
    
    ["airdrop_Tools_Random",
        [
            ["itm", ["Exile_Item_Matches","Exile_Item_CookingPot"], 3],
            ["itm", ["Exile_Melee_Axe","Exile_Item_CanOpener","Exile_Item_Pliers","Exile_Item_ZipTie"], 2],
            ["itm", ["Exile_Item_Pliers","Exile_Melee_Axe","Exile_Item_CanOpener","Exile_Item_ZipTie"], 1],
            ["itm", ["Exile_Item_Grinder","Exile_Item_Foolbox","Exile_Item_Screwdriver","Exile_Item_Shovel"], 1],
            ["itm", ["Exile_Item_Screwdriver","Exile_Item_Grinder","Exile_Item_Shovel"], 1]
        ]
    ],
    
    ["airdrop_Backpack",
        [
            ["bac", ["B_Bergen_tna_F","B_Bergen_hex_F"], 1],
            ["bac", ["B_Carryall_oucamo","B_Bergen_tna_F","B_Bergen_hex_F","B_Carryall_ghex_F","B_Carryall_ocamo"], 1],
            ["bac", ["B_Carryall_ghex_F","B_Carryall_ocamo","B_Carryall_oucamo"], 2]
        ]
    ],
    
    ["airdrop_base_small",
        [
            ["itm", ["Exile_Item_WoodDoorwayKit"], 1],
            ["itm", ["Exile_Item_WoodFloorKit"], 8],
            ["itm", ["Exile_Item_WoodWallKit"], 7],
            ["itm", ["Exile_Item_WoodWindowKit"], 1],
            ["itm", ["Exile_Item_WorkBenchKit"], 1],
            ["itm", ["Exile_Item_StorageCrateKit"], 3],
            ["itm", ["Exile_Item_Handsaw"], 1],
            ["itm", ["Exile_Melee_Axe"], 2]        
        ]
    ],
    
    ["airdrop_base_medium",
        [
            ["itm", ["Exile_Item_WoodDoorwayKit"], 2],
            ["itm", ["Exile_Item_WoodFloorKit"], 26],
            ["itm", ["Exile_Item_WoodWallKit"], 32],
            ["itm", ["Exile_Item_WoodGateKit"], 2],
            ["itm", ["Exile_Item_WoodWindowKit"], 4],
            ["itm", ["Exile_Item_WorkBenchKit"], 1],
            ["itm", ["Exile_Item_StorageCrateKit"], 6],
            ["itm", ["Exile_Item_CodeLock"], 1],
            ["itm", ["Exile_Item_Handsaw"], 2],
            ["itm", ["Exile_Melee_Axe"], 2]    
        ]
    ],
    
    ["airdrop_base_big",
        [
            ["itm", ["Exile_Item_WoodDoorwayKit"], 4],
            ["itm", ["Exile_Item_WoodFloorKit"], 50],
            ["itm", ["Exile_Item_WoodWallKit"], 50],
            ["itm", ["Exile_Item_WoodGateKit"], 4],
            ["itm", ["Exile_Item_WoodWindowKit"], 10],
            ["itm", ["Exile_Item_WorkBenchKit"], 1],
            ["itm", ["Exile_Item_StorageCrateKit"], 12],
            ["itm", ["Exile_Item_CodeLock"], 2],
            ["itm", ["Exile_Item_Handsaw"], 3],
            ["itm", ["Exile_Melee_Axe"], 3]    
        ]
    ],
    
    ["airdrop_safe_small",
        [
            ["itm", ["Exile_Item_SafeKit"], 1],
            ["itm", ["Exile_Item_CodeLock"], 3],
            ["itm", ["Exile_Item_Laptop"], 1],
            ["itm", ["Exile_Item_BaseCameraKit"], 4],
            ["itm", ["Exile_Item_Knife"], 1]
        ]
    ],
    
    ["airdrop_safe_big",
        [
            ["itm", ["Exile_Item_SafeKit"], 3],
            ["itm", ["Exile_Item_CodeLock"], 6],
            ["itm", ["Exile_Item_Laptop"], 2],
            ["itm", ["Exile_Item_BaseCameraKit"], 8],
            ["itm", ["Exile_Item_Knife"], 1]
        ]
    ]
];