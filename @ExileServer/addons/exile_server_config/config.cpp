/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgBuildings
{
	
	///////////////////////////////////////////////////////////////////////////
	// Castles & Lighthouses & Life Guard Towers
	///////////////////////////////////////////////////////////////////////////
	#include "CfgBuildings_Taviana.h"
};
class CfgExileEscapeLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.53%
			PistolAttachments = 0.53%
			ShotgunAmmo       = 1.58%
			SMGAmmo           = 0.53%
			SMGAttachments    = 0.53%
			Shotguns          = 2.63%
			SMG               = 1.05%
			CivilianVests     = 1.58%
			PistolAmmo        = 2.63%
			Pistols           = 4.21%
			Chemlights        = 5.26%
			CivilianItems     = 5.26%
			Drinks            = 2.63%
			RoadFlares        = 5.26%
			CivilianBackpacks = 7.89%
			CivilianClothing  = 13.16%
			CivilianHeadgear  = 13.16%
			Food              = 5.26%
			Trash             = 26.32%
		*/
		CivillianLowerClass[] = {"CivilianHeadgear", "CivilianHeadgear", "CivilianItems", "Trash", "CivilianItems", "CivilianHeadgear", "CivilianClothing", "CivilianClothing", "Food", "Pistols", "Pistols", "SMG", "CivilianItems", "Food", "CivilianBackpacks", "CivilianClothing", "PistolAmmo", "Food", "Pistols", "Chemlights", "CivilianHeadgear", "PistolAmmo", "Food", "CivilianHeadgear", "Trash", "Trash", "CivilianHeadgear", "Trash", "ShotgunAmmo", "CivilianHeadgear", "Trash", "RoadFlares", "Shotguns", "Food", "CivilianBackpacks", "CivilianClothing", "Chemlights", "CivilianHeadgear", "Trash", "Chemlights", "Restraints", "Chemlights", "Trash", "Trash", "CivilianClothing", "Shotguns", "CivilianBackpacks", "RoadFlares", "SMGAmmo", "PistolAmmo", "Food", "Trash", "Food", "RoadFlares", "Trash", "Trash", "CivilianHeadgear", "Drinks", "Trash", "CivilianItems", "RoadFlares", "Chemlights", "Trash", "CivilianClothing", "RoadFlares", "CivilianBackpacks", "CivilianHeadgear", "Trash", "CivilianItems", "CivilianVests", "CivilianVests", "CivilianClothing", "Trash", "CivilianItems", "Trash", "Shotguns", "CivilianBackpacks", "Trash", "Trash", "Trash", "CivilianHeadgear", "CivilianClothing", "Drinks", "Trash", "CivilianHeadgear", "CivilianHeadgear", "Trash", "Pistols", "CivilianBackpacks", "Chemlights", "Trash", "Shotguns", "Trash", "CivilianClothing", "CivilianItems", "CivilianHeadgear", "Trash", "Trash", "PistolAmmo", "CivilianBackpacks", "CivilianClothing", "SMGAttachments", "Food", "CivilianBackpacks", "Pistols", "CivilianClothing", "Trash", "Trash", "CivilianHeadgear", "Trash", "Pistols", "ShotgunAmmo", "Trash", "Trash", "CivilianClothing", "CivilianClothing", "ShotgunAmmo", "CivilianClothing", "Food", "Trash", "CivilianBackpacks", "Trash", "CivilianHeadgear", "CivilianHeadgear", "Trash", "Trash", "CivilianBackpacks", "Trash", "Trash", "Trash", "CivilianClothing", "CivilianHeadgear", "CivilianBackpacks", "CivilianClothing", "CivilianVests", "Trash", "RoadFlares", "CivilianClothing", "CivilianBackpacks", "CivilianClothing", "CivilianHeadgear", "CivilianItems", "Chemlights", "RoadFlares", "Trash", "CivilianHeadgear", "CivilianBackpacks", "Food", "Pistols", "CivilianClothing", "Drinks", "CivilianHeadgear", "Drinks", "CivilianHeadgear", "CivilianBackpacks", "Trash", "PistolAmmo", "Shotguns", "Trash", "CivilianHeadgear", "CivilianClothing", "CivilianItems", "Trash", "Trash", "PistolAttachments", "Trash", "CivilianHeadgear", "CivilianClothing", "Drinks", "Trash", "CivilianClothing", "RoadFlares", "CivilianClothing", "Chemlights", "Trash", "Trash", "Trash", "CivilianHeadgear", "RoadFlares", "RoadFlares", "Chemlights", "Pistols", "CivilianClothing", "SMG", "CivilianBackpacks", "Trash", "Trash", "CivilianItems", "Chemlights", "CivilianClothing"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0.47%
			PistolAttachments = 0.47%
			ShotgunAmmo       = 2.35%
			SMGAmmo           = 1.41%
			SMGAttachments    = 1.41%
			Shotguns          = 3.76%
			SMG               = 1.41%
			CivilianVests     = 2.35%
			PistolAmmo        = 2.35%
			Pistols           = 3.76%
			Chemlights        = 4.69%
			CivilianItems     = 4.69%
			Drinks            = 9.39%
			RoadFlares        = 4.69%
			CivilianBackpacks = 5.16%
			CivilianClothing  = 9.39%
			CivilianHeadgear  = 9.39%
			Food              = 9.39%
			Trash             = 23.47%
		*/
		CivillianUpperClass[] = {"Food", "CivilianItems", "Trash", "CivilianHeadgear", "Chemlights", "Shotguns", "Drinks", "CivilianClothing", "Food", "Trash", "CivilianClothing", "Trash", "Trash", "CivilianVests", "Trash", "Trash", "CivilianClothing", "SMGAmmo", "CivilianHeadgear", "Drinks", "CivilianHeadgear", "Pistols", "CivilianHeadgear", "Food", "Trash", "SMGAttachments", "Trash", "CivilianHeadgear", "Trash", "Drinks", "CivilianClothing", "CivilianHeadgear", "Drinks", "CivilianBackpacks", "Chemlights", "Trash", "Trash", "CivilianVests", "Drinks", "Trash", "CivilianHeadgear", "PistolAmmo", "Trash", "CivilianHeadgear", "Pistols", "Drinks", "CivilianClothing", "Trash", "Trash", "Trash", "Drinks", "SMGAttachments", "CivilianVests", "Trash", "CivilianClothing", "Trash", "Food", "Pistols", "CivilianBackpacks", "Trash", "Drinks", "Food", "Trash", "CivilianHeadgear", "Food", "Chemlights", "Trash", "Trash", "ShotgunAmmo", "SMGAmmo", "SMG", "Trash", "Trash", "RoadFlares", "Shotguns", "Shotguns", "Pistols", "Food", "SMG", "PistolAmmo", "CivilianClothing", "Drinks", "Chemlights", "Trash", "Drinks", "Trash", "CivilianHeadgear", "RoadFlares", "CivilianClothing", "CivilianHeadgear", "Trash", "CivilianClothing", "PistolAmmo", "Trash", "Food", "Drinks", "Food", "CivilianClothing", "Drinks", "Trash", "Trash", "Trash", "Trash", "Food", "Trash", "Food", "Trash", "Shotguns", "CivilianHeadgear", "CivilianHeadgear", "Drinks", "Pistols", "Drinks", "CivilianBackpacks", "SMG", "CivilianHeadgear", "RoadFlares", "Drinks", "Drinks", "ShotgunAmmo", "CivilianHeadgear", "CivilianHeadgear", "Trash", "ShotgunAmmo", "Trash", "Trash", "SMGAttachments", "CivilianItems", "CivilianClothing", "Drinks", "Food", "SMGAmmo", "Restraints", "Trash", "PistolAmmo", "CivilianHeadgear", "CivilianClothing", "Chemlights", "Drinks", "Drinks", "Food", "CivilianItems", "RoadFlares", "CivilianBackpacks", "Trash", "CivilianVests", "CivilianClothing", "CivilianItems", "Trash", "Trash", "CivilianItems", "Food", "PistolAttachments", "CivilianBackpacks", "Food", "PistolAmmo", "Trash", "Trash", "Chemlights", "Food", "Shotguns", "CivilianItems", "RoadFlares", "ShotgunAmmo", "CivilianItems", "CivilianClothing", "RoadFlares", "Chemlights", "Pistols", "CivilianBackpacks", "Trash", "Shotguns", "CivilianBackpacks", "CivilianClothing", "CivilianClothing", "CivilianClothing", "Food", "Trash", "Food", "Drinks", "CivilianHeadgear", "Pistols", "Food", "RoadFlares", "CivilianClothing", "Chemlights", "Trash", "CivilianBackpacks", "CivilianVests", "RoadFlares", "CivilianBackpacks", "Chemlights", "RoadFlares", "Trash", "CivilianItems", "CivilianItems", "Shotguns", "CivilianBackpacks", "CivilianBackpacks", "Trash", "CivilianClothing", "RoadFlares", "CivilianHeadgear", "Chemlights", "Trash", "Trash", "CivilianItems", "Food", "Pistols", "Shotguns", "CivilianHeadgear", "CivilianClothing", "ShotgunAmmo"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 0.74%
			CivilianVests     = 0.74%
			PistolAttachments = 0.74%
			ShotgunAmmo       = 0.74%
			SMGAmmo           = 0.74%
			SMGAttachments    = 0.74%
			PistolAmmo        = 1.47%
			CivilianHeadgear  = 2.21%
			IndustrialItems   = 2.21%
			MedicalItems      = 2.21%
			Restraints        = 2.21%
			Shotguns          = 1.47%
			SmokeGrenades     = 0.74%
			Chemlights        = 3.68%
			CivilianBackpacks = 3.68%
			RoadFlares        = 3.68%
			SMG               = 0.74%
			CivilianItems     = 5.15%
			Pistols           = 7.35%
			Drinks            = 11.03%
			Food              = 11.03%
			Trash             = 36.76%
		*/
		Shop[] = {"Drinks", "RoadFlares", "Trash", "PistolAmmo", "Trash", "Trash", "Drinks", "Food", "Drinks", "Trash", "PistolAmmo", "MedicalItems", "Trash", "CivilianItems", "Trash", "Trash", "Food", "Trash", "Shotguns", "CivilianItems", "Pistols", "PistolAttachments", "Trash", "Trash", "Pistols", "Food", "CivilianItems", "Trash", "Trash", "CivilianBackpacks", "Food", "Food", "Pistols", "Trash", "Trash", "Pistols", "Food", "Trash", "Pistols", "CivilianHeadgear", "Chemlights", "RoadFlares", "Trash", "Drinks", "Food", "Trash", "Drinks", "CivilianItems", "Trash", "IndustrialItems", "SMGAmmo", "IndustrialItems", "Chemlights", "Drinks", "Trash", "Trash", "Restraints", "Trash", "SMGAttachments", "CivilianItems", "Food", "Pistols", "Chemlights", "Trash", "Trash", "Trash", "Shotguns", "Trash", "Pistols", "RoadFlares", "RoadFlares", "Chemlights", "Trash", "Trash", "Restraints", "Pistols", "MedicalItems", "CivilianBackpacks", "ShotgunAmmo", "Drinks", "Trash", "CivilianHeadgear", "Chemlights", "Trash", "CivilianBackpacks", "Food", "Drinks", "SMG", "Food", "Trash", "Drinks", "Trash", "Drinks", "RoadFlares", "Trash", "Trash", "CivilianItems", "Pistols", "Food", "Trash", "Trash", "Drinks", "Trash", "Trash", "Trash", "CivilianItems", "Trash", "Restraints", "Trash", "Trash", "Trash", "Trash", "IndustrialItems", "Trash", "CivilianHeadgear", "CivilianBackpacks", "Trash", "Trash", "Food", "Trash", "Trash", "CivilianBackpacks", "Pistols", "Food", "MedicalItems", "Food", "Trash", "Drinks", "Trash", "CivilianVests", "Drinks", "CivilianClothing", "Drinks", "SmokeGrenades", "Food", "Drinks"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 2.38%
			RoadFlares      = 2.38%
			Vehicle         = 14.29%
			Trash           = 71.43%
			IndustrialItems = 9.52%
		*/
		Industrial[] = {"Trash", "Trash", "Trash", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "Trash", "Trash", "Trash", "Trash", "Restraints", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Vehicle", "Trash", "RoadFlares", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Vehicle", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 10.00%
			Trash           = 40.00%
			IndustrialItems = 50.00%
		*/
		Factories[] = {"IndustrialItems", "Trash", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "Electronics", "IndustrialItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 3.03%
			RoadFlares      = 3.03%
			IndustrialItems = 9.09%
			Trash           = 60.61%
			Vehicle         = 24.24%
		*/
		VehicleService[] = {"Trash", "Trash", "IndustrialItems", "IndustrialItems", "Trash", "Trash", "Trash", "Trash", "RoadFlares", "Trash", "Trash", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Restraints", "Vehicle", "Vehicle", "Vehicle", "Vehicle", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies       = 0.38%
			Ghillies          = 0.38%
			Rebreathers       = 0.38%
			Bipods            = 0.75%
			DLCAmmo           = 0.75%
			DLCOptics         = 0.75%
			DLCSupressor      = 0.75%
			LMGAmmo           = 0.75%
			MedicalItems      = 0.75%
			Restraints        = 0.75%
			SniperAmmo        = 0.75%
			SniperAttachments = 0.75%
			DLCRifles         = 1.13%
			DLCVests          = 1.13%
			GuerillaHeadgear  = 1.13%
			GuerillaVests     = 1.13%
			HandGrenades      = 1.13%
			HEGrenades        = 1.13%
			MilitaryBackpacks = 1.13%
			MilitaryHeadgear  = 1.13%
			MilitaryVests     = 1.13%
			Shotguns          = 3.01%
			ShotgunAmmo       = 3.01%
			RifleAmmo         = 1.13%
			RifleAttachments  = 1.13%
			SmokeGrenades     = 1.13%
			Snipers           = 1.13%
			UGLFlares         = 1.13%
			UGLSmokes         = 1.13%
			CivilianItems     = 1.50%
			GuerillaBackpacks = 1.50%
			GuerillaItems     = 1.50%
			LMG               = 1.50%
			Explosives        = 1.13%
			GuerillaClothing  = 1.88%
			MilitaryClothing  = 1.88%
			Rifles            = 1.88%
			Trash             = 56.39%
		*/
		Military[] = {"Trash", "GuerillaItems", "MilitaryHeadgear", "Shotguns", "LMG", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "RifleAttachments", "Trash", "RifleAmmo", "Trash", "SmokeGrenades", "Trash", "Trash", "DLCRifles", "DLCAmmo", "HEGrenades", "GuerillaItems", "GuerillaBackpacks", "Trash", "Snipers", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Shotguns", "Explosives", "Trash", "MilitaryBackpacks", "Trash", "DLCRifles", "Trash", "Trash", "Trash", "Trash", "DLCSupressor", "Trash", "Trash", "Trash", "Shotguns", "Trash", "GuerillaClothing", "Trash", "CivilianItems", "Trash", "Trash", "Trash", "LMGAmmo", "DLCRifles", "GuerillaVests", "UGLFlares", "Trash", "SniperAmmo", "ShotgunAmmo", "ShotgunAmmo", "UGLSmokes", "GuerillaBackpacks", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "RifleAmmo", "Trash", "CivilianItems", "Trash", "Trash", "Trash", "Shotguns", "Trash", "DLCSupressor", "Trash", "GuerillaClothing", "Trash", "Trash", "DLCAmmo", "Trash", "Trash", "SniperAmmo", "Trash", "Trash", "Trash", "Explosives", "MilitaryVests", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Rifles", "UGLFlares", "Trash", "Trash", "GuerillaClothing", "Trash", "Restraints", "Trash", "Snipers", "GuerillaHeadgear", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "MilitaryVests", "Trash", "Trash", "Trash", "HEGrenades", "Rifles", "HandGrenades", "Trash", "MilitaryClothing", "CivilianItems", "Trash", "Trash", "ShotgunAmmo", "ShotgunAmmo", "CivilianItems", "Trash", "Restraints", "Explosives", "GuerillaVests", "Trash", "ShotgunAmmo", "HandGrenades", "LMG", "Trash", "Trash", "Rifles", "SniperAttachments", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "DLCOptics", "Trash", "MilitaryClothing", "Trash", "Ghillies", "Trash", "UGLSmokes", "Trash", "Trash", "Bipods", "MilitaryClothing", "RifleAmmo", "Trash", "Trash", "Trash", "GuerillaItems", "Trash", "GuerillaVests", "Trash", "Trash", "Trash", "Trash", "Shotguns", "Trash", "Trash", "Trash", "ShotgunAmmo", "UGLSmokes", "DLCVests", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Shotguns", "HandGrenades", "Trash", "ShotgunAmmo", "Trash", "Trash", "Trash", "Trash", "GuerillaClothing", "MedicalItems", "Trash", "Shotguns", "SniperAttachments", "Rifles", "Trash", "Trash", "Trash", "Trash", "Trash", "MilitaryBackpacks", "Trash", "MilitaryBackpacks", "Trash", "MedicalItems", "RifleAttachments", "Trash", "Trash", "LMGAmmo", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "GuerillaBackpacks", "DLCGhillies", "LMG", "Trash", "Trash", "Trash", "ShotgunAmmo", "GuerillaBackpacks", "MilitaryClothing", "SmokeGrenades", "UGLFlares", "DLCOptics", "SmokeGrenades", "Trash", "MilitaryHeadgear", "Trash", "MilitaryClothing", "DLCVests", "Trash", "Trash", "MilitaryHeadgear", "Trash", "MilitaryVests", "GuerillaHeadgear", "HEGrenades", "Trash", "Trash", "Trash", "GuerillaItems", "Bipods", "LMG", "Trash", "Snipers", "GuerillaClothing", "Trash", "Trash", "RifleAttachments", "DLCVests", "Rifles", "Trash", "Trash", "Rebreathers", "Trash", "GuerillaHeadgear", "Shotguns", "Trash", "Trash", "Trash"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 81.08%
			MedicalItems = 18.92%
		*/
		Medical[] = {"Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "MedicalItems", "Trash", "MedicalItems", "Trash", "Trash", "MedicalItems", "Trash", "Trash", "Trash", "Trash", "MedicalItems", "MedicalItems", "Trash", "Trash", "Trash", "MedicalItems", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "MedicalItems", "Trash", "Trash"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 2.13%
			DLCOptics         = 2.13%
			DLCSupressor      = 2.13%
			SniperAmmo        = 2.13%
			SniperAttachments = 2.13%
			CivilianItems     = 4.26%
			Explosives        = 4.26%
			HandGrenades      = 4.26%
			MedicalItems      = 4.26%
			Restraints        = 4.26%
			DLCGhillies       = 6.38%
			Ghillies          = 6.38%
			MilitaryBackpacks = 8.51%
			MilitaryHeadgear  = 8.51%
			DLCRifles         = 8.51%
			Snipers           = 8.51%
			Trash             = 21.28%
		*/
		Tourist[] = {"CivilianItems", "Explosives", "DLCGhillies", "MilitaryHeadgear", "Snipers", "MilitaryBackpacks", "DLCRifles", "SniperAttachments", "Trash", "Trash", "DLCRifles", "Trash", "Ghillies", "Snipers", "Restraints", "HandGrenades", "MilitaryBackpacks", "Trash", "DLCGhillies", "DLCGhillies", "MilitaryHeadgear", "MilitaryHeadgear", "Explosives", "Trash", "Restraints", "MilitaryBackpacks", "Trash", "Snipers", "DLCAmmo", "HandGrenades", "DLCRifles", "Trash", "Trash", "Trash", "MedicalItems", "MilitaryHeadgear", "MilitaryBackpacks", "Trash", "DLCRifles", "DLCSupressor", "DLCOptics", "SniperAmmo", "CivilianItems", "Snipers", "Ghillies", "MedicalItems", "Ghillies"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2.27%
			DLCOptics         = 2.27%
			DLCSupressor      = 2.27%
			SniperAmmo        = 2.27%
			SniperAttachments = 2.27%
			EpicWeapons       = 4.55%
			HandGrenades      = 4.55%
			MedicalItems      = 4.55%
			Restraints        = 4.55%
			DLCGhillies       = 6.82%
			Ghillies          = 6.82%
			Explosives        = 11.36%
			MilitaryBackpacks = 11.36%
			MilitaryHeadgear  = 11.36%
			DLCRifles         = 11.36%
			Snipers           = 11.36%
		*/
		Radiation[] = {"DLCOptics", "Explosives", "DLCRifles", "MilitaryHeadgear", "MilitaryHeadgear", "DLCRifles", "MilitaryHeadgear", "Restraints", "MilitaryBackpacks", "DLCGhillies", "Restraints", "MedicalItems", "EpicWeapons", "Snipers", "Explosives", "MilitaryBackpacks", "Snipers", "MedicalItems", "Snipers", "DLCGhillies", "DLCSupressor", "MilitaryBackpacks", "MilitaryBackpacks", "Ghillies", "DLCRifles", "MilitaryHeadgear", "Ghillies", "Snipers", "SniperAttachments", "MilitaryHeadgear", "SniperAmmo", "DLCRifles", "Explosives", "Explosives", "Ghillies", "DLCAmmo", "MilitaryBackpacks", "DLCGhillies", "DLCRifles", "Snipers", "HandGrenades", "EpicWeapons", "Explosives", "HandGrenades"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 2.08%
			Exile_Item_CanOpener         = 3.47%
			Exile_Item_Matches           = 3.47%
			Exile_Item_EMRE              = 2.08%
			Exile_Item_GloriousKnakworst = 4.17%
			Exile_Item_Surstromming      = 4.86%
			Exile_Item_SausageGravy      = 4.86%
			Exile_Item_ChristmasTinner   = 4.86%
			Exile_Item_MacasCheese       = 4.86%
			Exile_Item_BBQSandwich       = 4.86%
			Exile_Item_CatFood           = 4.86%
			Exile_Item_Dogfood           = 4.86%
			Exile_Item_BeefParts         = 4.86%
			Exile_Item_Cheathas          = 4.86%
			Exile_Item_DsNuts            = 4.86%
			Exile_Item_Noodles           = 4.86%
			Exile_Item_CockONut          = 5.56%
			Exile_Item_SeedAstics        = 5.56%
			Exile_Item_Raisins           = 6.25%
			Exile_Item_Moobar            = 6.25%
			Exile_Item_InstantCoffee     = 7.64%
		*/
		Food[] = {"Exile_Item_BeefParts", "Exile_Item_GloriousKnakworst", "Exile_Item_Matches", "Exile_Item_BeefParts", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_Moobar", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_SausageGravy", "Exile_Item_EMRE", "Exile_Item_Raisins", "Exile_Item_Surstromming", "Exile_Item_EMRE", "Exile_Item_DsNuts", "Exile_Item_MacasCheese", "Exile_Item_Noodles", "Exile_Item_CatFood", "Exile_Item_Cheathas", "Exile_Item_Raisins", "Exile_Item_CanOpener", "Exile_Item_GloriousKnakworst", "Exile_Item_SausageGravy", "Exile_Item_SausageGravy", "Exile_Item_SeedAstics", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_DsNuts", "Exile_Item_Cheathas", "Exile_Item_Surstromming", "Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_Dogfood", "Exile_Item_Noodles", "Exile_Item_Surstromming", "Exile_Item_Moobar", "Exile_Item_GloriousKnakworst", "Exile_Item_CockONut", "Exile_Item_MacasCheese", "Exile_Item_Dogfood", "Exile_Item_CookingPot", "Exile_Item_SeedAstics", "Exile_Item_CanOpener", "Exile_Item_CanOpener", "Exile_Item_CockONut", "Exile_Item_SeedAstics", "Exile_Item_Matches", "Exile_Item_Noodles", "Exile_Item_Moobar", "Exile_Item_SausageGravy", "Exile_Item_DsNuts", "Exile_Item_CanOpener", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exile_Item_DsNuts", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_DsNuts", "Exile_Item_Cheathas", "Exile_Item_SeedAstics", "Exile_Item_Dogfood", "Exile_Item_BeefParts", "Exile_Item_Surstromming", "Exile_Item_EMRE", "Exile_Item_Raisins", "Exile_Item_Raisins", "Exile_Item_Dogfood", "Exile_Item_ChristmasTinner", "Exile_Item_SausageGravy", "Exile_Item_InstantCoffee", "Exile_Item_ChristmasTinner", "Exile_Item_BBQSandwich", "Exile_Item_Surstromming", "Exile_Item_BBQSandwich", "Exile_Item_Cheathas", "Exile_Item_Moobar", "Exile_Item_ChristmasTinner", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_BeefParts", "Exile_Item_CockONut", "Exile_Item_BBQSandwich", "Exile_Item_ChristmasTinner", "Exile_Item_SeedAstics", "Exile_Item_BeefParts", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_Surstromming", "Exile_Item_Dogfood", "Exile_Item_BeefParts", "Exile_Item_Cheathas", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_GloriousKnakworst", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_InstantCoffee", "Exile_Item_CookingPot", "Exile_Item_Matches", "Exile_Item_ChristmasTinner", "Exile_Item_Cheathas", "Exile_Item_GloriousKnakworst", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_Matches", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_MacasCheese", "Exile_Item_ChristmasTinner", "Exile_Item_CockONut", "Exile_Item_InstantCoffee", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_BBQSandwich", "Exile_Item_Moobar", "Exile_Item_MacasCheese", "Exile_Item_Noodles", "Exile_Item_CatFood", "Exile_Item_CookingPot", "Exile_Item_ChristmasTinner", "Exile_Item_Moobar", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_CanOpener", "Exile_Item_MacasCheese", "Exile_Item_Matches", "Exile_Item_Noodles", "Exile_Item_CockONut", "Exile_Item_Noodles", "Exile_Item_SeedAstics", "Exile_Item_BBQSandwich"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 7.14%
			Exile_Item_EnergyDrink             = 7.14%
			Exile_Item_PlasticBottleFreshWater = 7.14%
			Exile_Item_PowerDrink              = 7.14%
			Exile_Item_MountainDupe            = 14.29%
			Exile_Item_ChocolateMilk           = 21.43%
			Exile_Item_PlasticBottleDirtyWater = 35.71%
		*/
		Drinks[] = {"Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PowerDrink", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_ChocolateMilk", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exile_Item_Beer", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe"};

		/*
			Percental Item Spawn Chances of Pistols:

			rhsusf_weap_glock17g4  = 4.55%
			rhs_weap_pya           = 9.09%
			rhsusf_weap_m1911a1    = 9.09%
			rhs_weap_pp2000_folded = 4.55%
			rhsusf_weap_m9         = 9.09%
			rhs_weap_6p53          = 4.55%
			hgun_P07_khk_F         = 4.55%
			rhs_weap_makarov_pm    = 13.64%
			hgun_Pistol_heavy_01_F = 4.55%
			rhs_weap_pb_6p9        = 4.55%
			rhs_weap_makarov_pmm   = 13.64%
			rhs_weap_savz61_folded = 9.09%
			rhs_weap_tt33          = 9.09%
		*/
		Pistols[] = {"rhs_weap_pya", "rhs_weap_pb_6p9", "rhsusf_weap_m1911a1", "rhs_weap_tt33", "rhs_weap_makarov_pmm", "rhsusf_weap_m9", "rhs_weap_makarov_pm", "rhs_weap_makarov_pm", "rhs_weap_savz61_folded", "rhs_weap_pp2000_folded", "rhsusf_weap_m1911a1", "rhs_weap_tt33", "rhs_weap_makarov_pmm", "hgun_P07_khk_F", "rhs_weap_makarov_pmm", "rhs_weap_6p53", "rhsusf_weap_glock17g4", "rhs_weap_makarov_pm", "hgun_Pistol_heavy_01_F", "rhs_weap_pya", "rhs_weap_savz61_folded", "rhsusf_weap_m9"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			rhsusf_mag_7x45acp_MHP    = 6.25%
			rhsusf_mag_17Rnd_9x19_FMJ = 3.13%
			rhsusf_mag_17Rnd_9x19_JHP = 3.13%
			rhsusf_mag_15Rnd_9x19_FMJ = 6.25%
			rhsusf_mag_15Rnd_9x19_JHP = 6.25%
			11Rnd_45ACP_Mag           = 6.25%
			rhs_mag_9x19mm_7n21_20    = 3.13%
			rhs_mag_9x19mm_7n31_20    = 3.13%
			rhs_mag_9x19mm_7n21_44    = 3.13%
			rhs_mag_9x19mm_7n31_44    = 3.13%
			rhsgref_20rnd_765x17_vz61 = 6.25%
			rhsgref_10rnd_765x17_vz61 = 9.38%
			rhs_mag_9x18_8_57N181S    = 9.38%
			rhs_mag_9x18_12_57N181S   = 9.38%
			rhs_18rnd_9x21mm_7N28     = 3.13%
			rhs_18rnd_9x21mm_7N29     = 3.13%
			rhs_18rnd_9x21mm_7BT3     = 3.13%
			rhs_mag_9x19_17           = 6.25%
			rhs_mag_762x25_8          = 6.25%
		*/
		PistolAmmo[] = {"rhs_mag_9x19_17", "rhsgref_10rnd_765x17_vz61", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x19_17", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x19mm_7n31_20", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x19mm_7n21_44", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_18rnd_9x21mm_7N29", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_762x25_8", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_9x18_8_57N181S", "rhs_18rnd_9x21mm_7N28", "rhsgref_10rnd_765x17_vz61", "rhs_mag_9x18_12_57N181S", "rhsusf_mag_7x45acp_MHP", "rhsgref_20rnd_765x17_vz61", "rhs_18rnd_9x21mm_7BT3", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "rhs_mag_762x25_8", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x19mm_7n21_20", "rhsgref_20rnd_765x17_vz61", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_JHP", "rhs_mag_9x19mm_7n31_44", "rhsgref_10rnd_765x17_vz61"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD              = 10.00%
			optic_Yorris           = 10.00%
			muzzle_snds_acp        = 20.00%
			muzzle_snds_L          = 20.00%
			rhs_acc_6p9_suppressor = 20.00%
			rhsusf_acc_omega9k     = 20.00%
		*/
		PistolAttachments[] = {"rhs_acc_6p9_suppressor", "optic_MRD", "optic_Yorris", "muzzle_snds_acp", "rhsusf_acc_omega9k", "rhsusf_acc_omega9k", "muzzle_snds_L", "rhs_acc_6p9_suppressor", "muzzle_snds_acp", "muzzle_snds_L"};

		/*
			Percental Item Spawn Chances of Shotguns:

			rhs_weap_M590_5RD = 33.33%
			rhs_weap_M590_8RD = 16.67%
			rhs_weap_Izh18    = 50.00%
		*/
		Shotguns[] = {"rhs_weap_M590_8RD", "rhs_weap_M590_5RD", "rhs_weap_Izh18", "rhs_weap_Izh18", "rhs_weap_Izh18", "rhs_weap_M590_5RD"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			rhsgref_1Rnd_00Buck = 20.00%
			rhsgref_1Rnd_Slug   = 20.00%
			rhsusf_5Rnd_00Buck  = 14.29%
			rhsusf_8Rnd_00Buck  = 8.57%
			rhsusf_5Rnd_Slug    = 17.14%
			rhsusf_8Rnd_Slug    = 8.57%
			rhsusf_5Rnd_HE      = 2.86%
			rhsusf_8Rnd_HE      = 2.86%
			rhsusf_5Rnd_FRAG    = 2.86%
			rhsusf_8Rnd_FRAG    = 2.86%
		*/
		ShotgunAmmo[] = {"rhsgref_1Rnd_Slug", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_8Rnd_HE", "rhsusf_5Rnd_Slug", "rhsusf_5Rnd_Slug", "rhsusf_8Rnd_Slug", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsusf_5Rnd_HE", "rhsusf_8Rnd_FRAG", "rhsgref_1Rnd_00Buck", "rhsgref_1Rnd_Slug", "rhsusf_8Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsgref_1Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_5Rnd_FRAG", "rhsusf_8Rnd_Slug", "rhsusf_5Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsusf_5Rnd_Slug", "rhsusf_5Rnd_Slug", "rhsusf_5Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_Slug", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsgref_1Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_Slug", "rhsgref_1Rnd_Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			rhsusf_weap_MP7A1_desert = 40.00%
			rhsusf_weap_MP7A2        = 40.00%
			rhsusf_weap_MP7A2_winter = 20.00%
		*/
		SMG[] = {"rhsusf_weap_MP7A2", "rhsusf_weap_MP7A2", "rhsusf_weap_MP7A2_winter", "rhsusf_weap_MP7A1_desert", "rhsusf_weap_MP7A1_desert"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			rhsusf_mag_40Rnd_46x30_FMJ = 33.33%
			rhsusf_mag_40Rnd_46x30_JHP = 50.00%
			rhsusf_mag_40Rnd_46x30_AP  = 16.67%
		*/
		SMGAmmo[] = {"rhsusf_mag_40Rnd_46x30_FMJ", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_AP", "rhsusf_mag_40Rnd_46x30_FMJ", "rhsusf_mag_40Rnd_46x30_JHP"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			rhsusf_acc_rotex_mp7        = 18.18%
			rhsusf_acc_rotex_mp7_desert = 18.18%
			rhsusf_acc_rotex_mp7_winter = 9.09%
			optic_Holosight_smg         = 9.09%
			optic_Holosight_smg_blk_F   = 9.09%
			optic_ACO_grn_smg           = 9.09%
			optic_Aco_smg               = 9.09%
			optic_ACO_grn               = 9.09%
			optic_Aco                   = 9.09%
		*/
		SMGAttachments[] = {"optic_Holosight_smg_blk_F", "optic_Holosight_smg", "rhsusf_acc_rotex_mp7", "optic_ACO_grn", "rhsusf_acc_rotex_mp7_winter", "optic_ACO_grn_smg", "rhsusf_acc_rotex_mp7", "rhsusf_acc_rotex_mp7_desert", "rhsusf_acc_rotex_mp7_desert", "optic_Aco_smg", "optic_Aco"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F                   = 0.35%
			arifle_MX_GL_Black_F                 = 0.35%
			arifle_MX_GL_F                       = 0.35%
			arifle_MXM_F                         = 0.35%
			arifle_ARX_blk_F                     = 0.17%
			arifle_ARX_ghex_F                    = 0.17%
			arifle_ARX_hex_F                     = 0.17%
			arifle_CTAR_blk_F                    = 0.35%
			arifle_CTAR_ghex_F                   = 0.35%
			arifle_CTAR_GL_blk_F                 = 0.35%
			arifle_CTAR_hex_F                    = 0.35%
			arifle_CTARS_blk_F                   = 0.35%
			arifle_CTARS_ghex_F                  = 0.35%
			arifle_CTARS_hex_F                   = 0.35%
			arifle_Katiba_F                      = 0.35%
			arifle_Mk20_F                        = 0.35%
			arifle_Mk20C_F                       = 0.35%
			arifle_MX_Black_F                    = 0.35%
			arifle_MX_F                          = 0.35%
			arifle_MXC_Black_F                   = 0.35%
			arifle_MXC_F                         = 0.35%
			arifle_MXM_Black_F                   = 0.35%
			arifle_SDAR_F                        = 0.17%
			arifle_SPAR_03_blk_F                 = 0.35%
			arifle_SPAR_03_khk_F                 = 0.35%
			arifle_SPAR_03_snd_F                 = 0.35%
			arifle_MXM_khk_F                     = 0.35%
			rhs_weap_m14ebrri                    = 0.17%
			rhs_weap_m16a4                       = 0.52%
			rhs_weap_m16a4_carryhandle           = 0.52%
			rhs_weap_m16a4_carryhandle_M203      = 0.52%
			rhs_weap_m16a4_carryhandle_grip      = 0.52%
			rhs_weap_m16a4_carryhandle_grip_pmag = 0.52%
			rhs_weap_m16a4_carryhandle_pmag      = 0.52%
			rhs_weap_m16a4_grip                  = 0.52%
			rhs_weap_m27iar                      = 0.35%
			rhs_weap_m4                          = 0.35%
			rhs_weap_m4_carryhandle              = 0.35%
			rhs_weap_m4_carryhandle_pmag         = 0.35%
			rhs_weap_m4_grip                     = 0.35%
			rhs_weap_m4_grip2                    = 0.35%
			rhs_weap_m4_m203                     = 0.35%
			rhs_weap_m4_m203S                    = 0.35%
			rhs_weap_m4_m320                     = 0.35%
			rhs_weap_m4a1                        = 0.35%
			rhs_weap_m4a1_carryhandle            = 0.35%
			rhs_weap_m4a1_carryhandle_grip       = 0.35%
			rhs_weap_m4a1_carryhandle_grip2      = 0.35%
			rhs_weap_m4a1_carryhandle_m203       = 0.35%
			rhs_weap_m4a1_carryhandle_m203S      = 0.35%
			rhs_weap_m4a1_carryhandle_pmag       = 0.35%
			rhs_weap_m4a1_grip                   = 0.35%
			rhs_weap_m4a1_grip2                  = 0.35%
			rhs_weap_m4a1_m203                   = 0.35%
			rhs_weap_m4a1_m203s                  = 0.35%
			rhs_weap_m4a1_m320                   = 0.17%
			rhs_weap_sr25                        = 0.35%
			rhs_weap_sr25_ec                     = 0.35%
			rhs_weap_ak74m                       = 0.87%
			rhs_weap_ak74m_camo                  = 0.87%
			rhs_weap_ak74m_npz                   = 0.87%
			rhs_weap_ak74m_desert_npz            = 0.87%
			rhs_weap_ak74m_folded                = 0.87%
			rhs_weap_ak74m_camo_folded           = 0.87%
			rhs_weap_ak74m_desert_folded         = 0.87%
			rhs_weap_ak74m_2mag                  = 0.87%
			rhs_weap_ak74m_2mag_npz              = 0.87%
			rhs_weap_ak74m_2mag_camo             = 0.87%
			rhs_weap_ak74m_desert                = 0.87%
			rhs_weap_ak74m_gp25                  = 0.87%
			rhs_weap_ak74m_gp25_npz              = 0.87%
			rhs_weap_ak74m_fullplum              = 0.87%
			rhs_weap_ak74m_fullplum_npz          = 0.87%
			rhs_weap_ak74m_Base_F                = 0.87%
			rhs_weap_ak74m_fullplum_gp25         = 0.87%
			rhs_weap_ak74m_fullplum_gp25_npz     = 0.87%
			rhs_weap_ak74m_zenitco01             = 0.87%
			rhs_weap_ak74m_zenitco01_npz         = 0.87%
			rhs_weap_ak74m_zenitco01_b33         = 0.87%
			rhs_weap_ak74mr                      = 0.87%
			rhs_weap_ak74mr_folded               = 0.87%
			rhs_weap_ak74mr_gp25                 = 0.87%
			rhs_weap_ak105                       = 0.87%
			rhs_weap_ak105_zenitco01             = 0.87%
			rhs_weap_ak105_zenitco01_npz         = 0.87%
			rhs_weap_ak105_npz                   = 0.87%
			rhs_weap_ak105_folded                = 0.87%
			rhs_weap_ak105_zenitco01_b33         = 0.87%
			rhs_weap_akm                         = 0.87%
			rhs_weap_akm_gp25                    = 0.87%
			rhs_weap_akmn                        = 0.87%
			rhs_weap_akmn_gp25                   = 0.87%
			rhs_weap_akmn_npz                    = 0.87%
			rhs_weap_akmn_gp25_npz               = 0.87%
			rhs_weap_akm_zenitco01_b33           = 0.87%
			rhs_weap_akms                        = 0.87%
			rhs_weap_akms_folded                 = 0.87%
			rhs_weap_akms_gp25                   = 0.87%
			rhs_weap_pm63                        = 0.87%
			rhs_weap_ak103                       = 0.87%
			rhs_weap_ak104                       = 0.87%
			rhs_weap_ak104_npz                   = 0.87%
			rhs_weap_ak104_zenitco01             = 0.87%
			rhs_weap_ak104_zenitco01_npz         = 0.87%
			rhs_weap_ak104_zenitco01_b33         = 0.87%
			rhs_weap_ak104_folded                = 0.87%
			rhs_weap_ak103_npz                   = 0.87%
			rhs_weap_ak103_folded                = 0.87%
			rhs_weap_ak103_zenitco01             = 0.87%
			rhs_weap_ak103_zenitco01_folded      = 0.87%
			rhs_weap_ak103_zenitco01_npz         = 0.87%
			rhs_weap_ak103_zenitco01_b33         = 0.87%
			rhs_weap_ak103_1                     = 0.87%
			rhs_weap_ak103_1_npz                 = 0.87%
			rhs_weap_ak103_1_folded              = 0.87%
			rhs_weap_ak103_2                     = 0.87%
			rhs_weap_ak103_2_npz                 = 0.87%
			rhs_weap_ak103_2_folded              = 0.87%
			rhs_weap_ak103_gp25                  = 0.87%
			rhs_weap_ak103_gp25_npz              = 0.87%
			rhs_weap_ak74                        = 0.87%
			rhs_weap_ak74_gp25                   = 0.87%
			rhs_weap_ak74n                       = 0.87%
			rhs_weap_ak74n_gp25                  = 0.87%
			rhs_weap_ak74n_npz                   = 0.87%
			rhs_weap_ak74n_gp25_npz              = 0.87%
			rhs_weap_ak74_2                      = 0.87%
			rhs_weap_ak74n_2                     = 0.87%
			rhs_weap_ak74n_2_npz                 = 0.87%
			rhs_weap_ak74n_2_gp25                = 0.87%
			rhs_weap_ak74n_2_gp25_npz            = 0.87%
			rhs_weap_ak74_3                      = 0.87%
			rhs_weap_aks74                       = 0.87%
			rhs_weap_aks74_folded                = 0.87%
			rhs_weap_aks74_2                     = 0.87%
			rhs_weap_aks74_2_folded              = 0.87%
			rhs_weap_aks74_gp25                  = 0.87%
			rhs_weap_aks74n                      = 0.87%
			rhs_weap_aks74n_npz                  = 0.87%
			rhs_weap_aks74n_2                    = 0.87%
			rhs_weap_aks74n_2_npz                = 0.87%
			rhs_weap_aks74n_folded               = 0.87%
			rhs_weap_aks74n_2_folded             = 0.87%
			rhs_weap_aks74n_gp25                 = 0.87%
			rhs_weap_aks74n_gp25_npz             = 0.87%
			rhs_weap_aks74u                      = 0.87%
			rhs_weap_aks74u_folded               = 0.87%
			rhs_weap_aks74un                     = 0.87%
			rhs_weap_aks74un_folded              = 0.87%
		*/
		Rifles[] = {"rhs_weap_ak74m_2mag_npz", "rhs_weap_ak74m_camo", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_m4a1_m320", "rhs_weap_akmn_gp25", "rhs_weap_m4_grip2", "rhs_weap_ak74", "rhs_weap_ak103_npz", "rhs_weap_ak74m_zenitco01", "rhs_weap_aks74un_folded", "rhs_weap_aks74_2", "rhs_weap_ak74_2", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_aks74un_folded", "rhs_weap_ak103_zenitco01_npz", "arifle_CTAR_GL_blk_F", "rhs_weap_ak104_folded", "rhs_weap_ak103_2", "rhs_weap_ak104", "rhs_weap_akms_folded", "rhs_weap_akmn_gp25_npz", "rhs_weap_ak103_1_npz", "rhs_weap_aks74u_folded", "rhs_weap_ak74n", "rhs_weap_ak74m_Base_F", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_ak74m_camo", "rhs_weap_akmn_gp25", "rhs_weap_m4a1_carryhandle_grip2", "rhs_weap_aks74n_gp25", "rhs_weap_ak74", "rhs_weap_aks74n_gp25_npz", "rhs_weap_aks74n_folded", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_akms_folded", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_aks74n_2_npz", "rhs_weap_m4a1_carryhandle_m203S", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74n_2_npz", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_ak103_2", "rhs_weap_akm_gp25", "arifle_MXM_F", "rhs_weap_m16a4", "rhs_weap_ak103_1_folded", "rhs_weap_ak103", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_aks74_folded", "rhs_weap_aks74n_2", "rhs_weap_m4a1_carryhandle_pmag", "rhs_weap_ak74", "rhs_weap_ak105_zenitco01", "rhs_weap_ak103_2", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_ak74n_2", "rhs_weap_m4a1", "rhs_weap_akm_gp25", "rhs_weap_ak74_3", "rhs_weap_ak105_zenitco01", "rhs_weap_akmn_npz", "rhs_weap_ak74_gp25", "rhs_weap_ak103_2_folded", "rhs_weap_ak103_1_folded", "rhs_weap_ak74m_fullplum", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_ak74m_desert_folded", "rhs_weap_ak74_gp25", "rhs_weap_akmn_gp25_npz", "rhs_weap_ak105_npz", "rhs_weap_ak103_npz", "rhs_weap_ak74m_Base_F", "rhs_weap_ak104_npz", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_m4_grip", "rhs_weap_ak74m_desert", "rhs_weap_ak74n_npz", "rhs_weap_ak105_npz", "rhs_weap_ak103_gp25_npz", "rhs_weap_ak74n_gp25", "rhs_weap_aks74_gp25", "rhs_weap_ak74m", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_ak103_2", "rhs_weap_ak74m_zenitco01", "rhs_weap_aks74_folded", "rhs_weap_ak103_1_npz", "rhs_weap_m4a1_carryhandle_grip", "rhs_weap_ak74m_camo", "rhs_weap_aks74_folded", "rhs_weap_aks74_2", "arifle_SPAR_03_snd_F", "rhs_weap_ak104_npz", "arifle_CTAR_blk_F", "rhs_weap_ak74m_desert_folded", "rhs_weap_aks74n_npz", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_akms", "rhs_weap_ak74m_2mag_npz", "rhs_weap_aks74", "rhs_weap_m4a1_m203", "rhs_weap_ak103_2_folded", "rhs_weap_ak103", "arifle_CTARS_hex_F", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak103_1", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_ak74m_camo_folded", "rhs_weap_ak103_folded", "rhs_weap_m4_grip", "rhs_weap_ak74m_camo_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74m_zenitco01_b33", "arifle_ARX_blk_F", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_m16a4_carryhandle_M203", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_aks74n_2", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak74m_2mag", "rhs_weap_ak103_gp25_npz", "rhs_weap_aks74n_2_folded", "rhs_weap_m4_m320", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_akmn_npz", "rhs_weap_m27iar", "rhs_weap_akms_gp25", "rhs_weap_ak74mr_folded", "rhs_weap_ak74m_gp25_npz", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak74m_gp25", "arifle_MXM_F", "rhs_weap_ak74m_Base_F", "rhs_weap_ak74m_folded", "rhs_weap_m4a1_carryhandle_grip2", "rhs_weap_akm_gp25", "rhs_weap_aks74n_gp25_npz", "rhs_weap_aks74_gp25", "rhs_weap_m16a4", "rhs_weap_ak74n", "rhs_weap_ak74m_2mag", "rhs_weap_ak74m_desert_folded", "rhs_weap_akmn", "rhs_weap_akm", "rhs_weap_ak74m_fullplum", "arifle_MX_F", "rhs_weap_ak74mr_gp25", "arifle_CTAR_blk_F", "arifle_MXC_F", "rhs_weap_m4_carryhandle_pmag", "rhs_weap_m16a4_carryhandle", "rhs_weap_m27iar", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_akmn_gp25_npz", "rhs_weap_ak74m_folded", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_aks74", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_m16a4", "rhs_weap_aks74un_folded", "rhs_weap_m4_grip2", "rhs_weap_ak105_npz", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_ak103_2_npz", "rhs_weap_ak103_gp25", "rhs_weap_ak74n_2_npz", "rhs_weap_ak103_2_folded", "arifle_Katiba_F", "rhs_weap_ak74m_camo", "rhs_weap_ak103_2_npz", "rhs_weap_ak74n_gp25", "rhs_weap_pm63", "rhs_weap_aks74_2_folded", "rhs_weap_aks74u", "rhs_weap_ak103_2", "arifle_CTARS_ghex_F", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_akmn", "arifle_CTARS_blk_F", "rhs_weap_aks74_2", "rhs_weap_akmn_gp25_npz", "rhs_weap_m4a1_m203", "rhs_weap_aks74u", "rhs_weap_ak103", "arifle_MXC_Black_F", "rhs_weap_ak74m", "rhs_weap_akmn_npz", "rhs_weap_ak104_folded", "rhs_weap_ak105", "rhs_weap_aks74_2_folded", "arifle_CTARS_blk_F", "rhs_weap_aks74n_2_npz", "rhs_weap_ak103_1_npz", "rhs_weap_ak103_2_npz", "rhs_weap_ak74n_2_gp25", "rhs_weap_aks74u_folded", "rhs_weap_aks74u_folded", "rhs_weap_ak74m_2mag_npz", "rhs_weap_akmn_gp25", "rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_aks74_2_folded", "rhs_weap_m4_carryhandle", "rhs_weap_aks74n_gp25_npz", "arifle_CTAR_ghex_F", "rhs_weap_aks74n_gp25", "rhs_weap_ak74m_folded", "rhs_weap_ak103_folded", "rhs_weap_aks74_2", "arifle_SPAR_03_snd_F", "rhs_weap_ak74n_gp25_npz", "rhs_weap_aks74n_npz", "rhs_weap_ak103_1", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak74n_2_gp25_npz", "arifle_MX_GL_Black_F", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_m16a4_carryhandle", "rhs_weap_sr25_ec", "rhs_weap_ak103_1", "rhs_weap_ak74m_2mag_camo", "rhs_weap_ak74m_folded", "rhs_weap_ak74", "rhs_weap_ak103_gp25_npz", "rhs_weap_ak74n_gp25", "rhs_weap_ak74m_fullplum", "arifle_SPAR_03_khk_F", "rhs_weap_ak74n_gp25_npz", "rhs_weap_ak74n_gp25_npz", "rhs_weap_aks74n_2_npz", "rhs_weap_ak105_folded", "rhs_weap_m4_m320", "rhs_weap_ak105_folded", "rhs_weap_ak74m_2mag_camo", "rhs_weap_aks74n_gp25", "rhs_weap_ak74n_2_gp25", "rhs_weap_akm", "rhs_weap_ak74n_2_gp25", "rhs_weap_ak74m_Base_F", "arifle_MXC_Black_F", "rhs_weap_akmn_gp25", "rhs_weap_akm_zenitco01_b33", "rhs_weap_ak74_2", "arifle_CTAR_ghex_F", "rhs_weap_m4a1_carryhandle_grip", "rhs_weap_ak74_3", "rhs_weap_akms_gp25", "arifle_ARX_hex_F", "rhs_weap_ak74m_desert_folded", "arifle_MX_Black_F", "rhs_weap_aks74u", "rhs_weap_akms", "rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_ak104", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_ak103_1", "rhs_weap_akms", "rhs_weap_pm63", "rhs_weap_pm63", "rhs_weap_ak74mr_folded", "arifle_MX_F", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak74m_gp25_npz", "rhs_weap_aks74u", "rhs_weap_ak74_gp25", "rhs_weap_aks74u_folded", "rhs_weap_ak103_1", "rhs_weap_m14ebrri", "rhs_weap_ak74n_npz", "rhs_weap_ak104_folded", "arifle_MXM_Black_F", "rhs_weap_ak104_npz", "rhs_weap_ak74m_desert_npz", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_m4_m203S", "rhs_weap_ak74m_2mag", "rhs_weap_akm_zenitco01_b33", "arifle_MXM_Black_F", "rhs_weap_aks74n_2_npz", "rhs_weap_aks74n", "rhs_weap_ak74n_npz", "rhs_weap_m4a1_carryhandle", "rhs_weap_ak105", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_ak105", "rhs_weap_ak74m_Base_F", "rhs_weap_ak104", "rhs_weap_ak74_2", "rhs_weap_akms_gp25", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_ak74n", "rhs_weap_ak74m_desert_npz", "rhs_weap_aks74n_folded", "rhs_weap_ak74n_npz", "rhs_weap_akm_gp25", "rhs_weap_ak74m_2mag_camo", "rhs_weap_akm", "rhs_weap_pm63", "rhs_weap_m16a4_carryhandle_grip", "rhs_weap_ak74m_gp25_npz", "rhs_weap_ak74m_gp25", "rhs_weap_ak74m_gp25", "rhs_weap_aks74_gp25", "rhs_weap_aks74n_gp25", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_ak104_npz", "rhs_weap_aks74_2_folded", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak74m_gp25", "rhs_weap_aks74_gp25", "rhs_weap_aks74un_folded", "rhs_weap_ak105_folded", "arifle_SPAR_03_blk_F", "rhs_weap_ak74m_gp25_npz", "rhs_weap_ak104_folded", "arifle_CTAR_GL_blk_F", "rhs_weap_ak103_npz", "rhs_weap_aks74_2", "rhs_weap_aks74un", "rhs_weap_ak74m_2mag", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_ak74m_npz", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_m4a1_grip", "rhs_weap_ak103", "arifle_MX_GL_F", "rhs_weap_aks74n_folded", "rhs_weap_ak74m_npz", "rhs_weap_ak103_folded", "rhs_weap_akmn_npz", "rhs_weap_m4a1_carryhandle", "rhs_weap_ak103_gp25", "rhs_weap_ak103", "rhs_weap_ak74m", "rhs_weap_ak103_zenitco01", "rhs_weap_akmn", "rhs_weap_aks74n", "rhs_weap_aks74un", "rhs_weap_aks74n", "rhs_weap_ak103_npz", "rhs_weap_ak74n_2_npz", "rhs_weap_m4_m203", "rhs_weap_ak105", "rhs_weap_ak74mr", "rhs_weap_m4a1_grip", "rhs_weap_aks74n_npz", "rhs_weap_ak74m_2mag_camo", "rhs_weap_m4", "rhs_weap_ak74mr_gp25", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak74m_desert_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74m_npz", "rhs_weap_aks74n_2", "rhs_weap_ak104_zenitco01", "rhs_weap_m4_m203S", "rhs_weap_aks74_folded", "rhs_weap_aks74n_2_folded", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_ak103_folded", "rhs_weap_ak103_gp25", "rhs_weap_ak74", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_m4a1", "rhs_weap_ak74m_desert_npz", "rhs_weap_ak74mr_gp25", "rhs_weap_m16a4_grip", "rhs_weap_ak74mr", "rhs_weap_akmn_npz", "rhs_weap_akms_folded", "arifle_ARX_ghex_F", "rhs_weap_ak104", "rhs_weap_akmn_gp25", "rhs_weap_akm_zenitco01_b33", "rhs_weap_ak105", "rhs_weap_m16a4_carryhandle_grip_pmag", "rhs_weap_ak105_zenitco01", "rhs_weap_m16a4_carryhandle_grip_pmag", "arifle_CTARS_ghex_F", "rhs_weap_ak74n_2_gp25", "rhs_weap_m4_carryhandle_pmag", "rhs_weap_ak74m_2mag", "rhs_weap_ak74m_desert", "rhs_weap_ak103_2_npz", "arifle_SPAR_03_khk_F", "rhs_weap_aks74n_gp25_npz", "rhs_weap_ak103_zenitco01", "rhs_weap_m16a4_carryhandle_grip", "rhs_weap_ak103_gp25", "rhs_weap_ak74m_desert", "rhs_weap_ak105_folded", "rhs_weap_aks74", "rhs_weap_m16a4_grip", "arifle_MX_Black_F", "arifle_CTAR_hex_F", "rhs_weap_akms_gp25", "rhs_weap_ak74m_desert", "rhs_weap_aks74_folded", "rhs_weap_ak104", "rhs_weap_ak74_3", "arifle_Mk20C_F", "rhs_weap_akm_gp25", "rhs_weap_ak105_zenitco01_npz", "arifle_SPAR_03_blk_F", "rhs_weap_ak74mr", "rhs_weap_ak74mr", "rhs_weap_ak104_zenitco01", "rhs_weap_ak74m_camo", "rhs_weap_ak74m_npz", "rhs_weap_aks74n_2", "rhs_weap_akmn", "arifle_CTARS_hex_F", "rhs_weap_m16a4_carryhandle", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_sr25", "rhs_weap_aks74n_2_folded", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_ak103_1_npz", "rhs_weap_ak105_zenitco01", "rhs_weap_m4_carryhandle", "rhs_weap_ak103_gp25", "rhs_weap_sr25", "rhs_weap_ak74m", "rhs_weap_ak74m_2mag_camo", "rhs_weap_aks74n", "rhs_weap_ak105_zenitco01", "rhs_weap_ak74m_fullplum", "rhs_weap_ak105_npz", "arifle_SDAR_F", "rhs_weap_ak103_2_folded", "arifle_Mk20C_F", "rhs_weap_ak74m_desert_npz", "rhs_weap_aks74", "rhs_weap_m4_m203", "rhs_weap_aks74un", "rhs_weap_ak74m_zenitco01", "rhs_weap_akmn", "rhs_weap_sr25_ec", "rhs_weap_ak74mr_folded", "rhs_weap_akms_folded", "rhs_weap_ak103_zenitco01", "rhs_weap_ak103_2_npz", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_ak74n_2", "rhs_weap_ak103_folded", "rhs_weap_ak105_folded", "rhs_weap_ak74n", "rhs_weap_aks74n_2", "rhs_weap_akm_zenitco01_b33", "rhs_weap_m16a4_carryhandle_grip_pmag", "rhs_weap_ak104_npz", "rhs_weap_aks74_2_folded", "rhs_weap_aks74n_2_folded", "arifle_CTAR_hex_F", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_akms_folded", "rhs_weap_m16a4_grip", "rhs_weap_m4a1_m203s", "rhs_weap_ak74m_desert", "arifle_Mk20_F", "rhs_weap_m4a1_m203s", "rhs_weap_aks74un", "rhs_weap_m4a1_grip2", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_m16a4_carryhandle_grip", "rhs_weap_ak74mr_folded", "rhs_weap_ak74_3", "arifle_MXM_khk_F", "rhs_weap_ak74mr_gp25", "rhs_weap_ak74n_gp25", "rhs_weap_ak74m_gp25_npz", "rhs_weap_akm", "rhs_weap_aks74n_folded", "rhs_weap_aks74n_npz", "rhs_weap_m4a1_grip2", "rhs_weap_ak105_npz", "rhs_weap_ak74n_gp25_npz", "rhs_weap_ak74m_zenitco01", "rhs_weap_akm_zenitco01_b33", "rhs_weap_ak74m_camo_folded", "rhs_weap_akms", "rhs_weap_pm63", "rhs_weap_ak74m", "rhs_weap_ak74m_2mag_npz", "rhs_weap_ak104_zenitco01", "rhs_weap_m4a1_carryhandle_m203", "rhs_weap_aks74un", "rhs_weap_ak103_gp25_npz", "rhs_weap_ak74m_camo_folded", "rhs_weap_aks74u", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_aks74n_gp25", "rhs_weap_ak103_2_folded", "rhs_weap_aks74n_2_folded", "rhs_weap_ak74n_gp25_npz", "arifle_Katiba_F", "rhs_weap_ak74mr_folded", "rhs_weap_ak74m_fullplum", "rhs_weap_ak104_zenitco01", "rhs_weap_aks74_gp25", "rhs_weap_aks74n_2_npz", "rhs_weap_akms", "rhs_weap_ak74m_desert_npz", "rhs_weap_ak74_2", "rhs_weap_ak74mr_gp25", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_aks74n_folded", "rhs_weap_ak74mr", "rhs_weap_ak74n_2", "rhs_weap_ak74_gp25", "rhs_weap_ak103_1_folded", "rhs_weap_akmn_gp25_npz", "rhs_weap_aks74u_folded", "rhs_weap_m4a1_carryhandle_pmag", "rhs_weap_aks74n_npz", "rhs_weap_m4", "rhs_weap_ak103_zenitco01", "rhs_weap_ak104_folded", "rhs_weap_m16a4_carryhandle_M203", "rhs_weap_ak103_gp25_npz", "rhs_weap_aks74", "rhs_weap_akm", "rhs_weap_ak103_zenitco01", "rhs_weap_ak103_1_folded", "rhs_weap_ak74n_npz", "rhs_weap_ak74n_gp25", "rhs_weap_aks74n_gp25_npz", "rhs_weap_m16a4_carryhandle_M203", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_ak103_zenitco01_b33", "arifle_Katiba_GL_F", "rhs_weap_ak74n_2_npz", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_ak104_zenitco01", "rhs_weap_ak74_gp25", "rhs_weap_aks74n", "arifle_MX_GL_Black_F", "rhs_weap_ak74n", "arifle_MX_GL_F", "rhs_weap_ak103_1_folded", "rhs_weap_ak74m_fullplum_gp25_npz", "arifle_Katiba_GL_F", "rhs_weap_ak74n_2_npz", "rhs_weap_ak74m_camo_folded", "rhs_weap_ak74n_2", "rhs_weap_ak74_2", "arifle_Mk20_F", "rhs_weap_akms_gp25", "rhs_weap_m4a1_carryhandle_m203", "rhs_weap_ak74n_2", "rhs_weap_aks74un_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74m_gp25", "rhs_weap_ak74m_zenitco01", "rhs_weap_ak74m_npz", "arifle_MXC_F", "rhs_weap_ak74_3", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_ak74m_folded", "rhs_weap_ak103_1_npz", "rhs_weap_m4a1_carryhandle_m203S", "rhs_weap_ak74m_2mag_npz", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_ak103_npz", "rhs_weap_ak74n_2_gp25", "arifle_MXM_khk_F"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                   = 0.75%
			30Rnd_556x45_Stanag                   = 2.25%
			30Rnd_65x39_caseless_green            = 0.75%
			30Rnd_65x39_caseless_green_mag_Tracer = 0.75%
			30Rnd_65x39_caseless_mag              = 0.75%
			30Rnd_65x39_caseless_mag_Tracer       = 0.75%
			10Rnd_50BW_Mag_F                      = 0.75%
			30Rnd_580x42_Mag_F                    = 0.75%
			30Rnd_580x42_Mag_Tracer_F             = 0.75%
			100Rnd_580x42_Mag_F                   = 0.75%
			100Rnd_580x42_Mag_Tracer_F            = 0.75%
			20Rnd_762x51_Mag                      = 0.75%
			rhsusf_20Rnd_762x51_m118_special_Mag  = 0.75%
			rhsusf_20Rnd_762x51_m993_Mag          = 0.75%
			rhs_30Rnd_545x39_7N10_AK              = 1.87%
			rhs_30Rnd_545x39_7N10_plum_AK         = 1.87%
			rhs_30Rnd_545x39_7N10_desert_AK       = 1.87%
			rhs_30Rnd_545x39_7N10_camo_AK         = 1.87%
			rhs_30Rnd_545x39_7N6_AK               = 1.87%
			rhs_30Rnd_545x39_7N6_green_AK         = 1.87%
			rhs_30Rnd_545x39_7N6M_AK              = 1.87%
			rhs_30Rnd_545x39_7N6M_green_AK        = 1.87%
			rhs_30Rnd_545x39_7N6M_plum_AK         = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_AK         = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_plum_AK    = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_desert_AK  = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_camo_AK    = 1.87%
			rhs_30Rnd_545x39_7N22_AK              = 1.87%
			rhs_30Rnd_545x39_7N22_plum_AK         = 1.87%
			rhs_30Rnd_545x39_7N22_desert_AK       = 1.87%
			rhs_30Rnd_545x39_7N22_camo_AK         = 1.87%
			rhs_30Rnd_545x39_AK_green             = 1.87%
			rhs_30Rnd_545x39_AK_plum_green        = 1.87%
			rhs_30Rnd_545x39_7U1_AK               = 1.87%
			rhs_45Rnd_545x39_AK                   = 1.87%
			rhs_45Rnd_545x39_7N6_AK               = 1.87%
			rhs_45Rnd_545x39_7N10_AK              = 1.87%
			rhs_45Rnd_545x39_7N22_AK              = 1.87%
			rhs_45Rnd_545x39_AK_green             = 1.87%
			rhs_45Rnd_545x39_7U1_AK               = 1.87%
			rhs_30Rnd_545x39_AK                   = 1.87%
			rhs_30Rnd_545x39_AK_no_tracers        = 1.87%
			rhs_30Rnd_762x39mm_bakelite           = 1.87%
			rhs_30Rnd_762x39mm_bakelite_tracer    = 1.87%
			rhs_30Rnd_762x39mm_bakelite_89        = 1.87%
			rhs_30Rnd_762x39mm_bakelite_U         = 1.87%
			rhs_30Rnd_762x39mm                    = 1.87%
			rhs_30Rnd_762x39mm_tracer             = 1.87%
			rhs_30Rnd_762x39mm_89                 = 1.87%
			rhs_30Rnd_762x39mm_U                  = 1.87%
			rhs_30Rnd_762x39mm_polymer            = 1.87%
			rhs_30Rnd_762x39mm_polymer_tracer     = 1.87%
			rhs_30Rnd_762x39mm_polymer_89         = 1.87%
			rhs_30Rnd_762x39mm_polymer_U          = 1.87%
			rhs_10Rnd_762x39mm                    = 1.87%
			rhs_10Rnd_762x39mm_tracer             = 1.87%
			rhs_10Rnd_762x39mm_89                 = 1.87%
			rhs_10Rnd_762x39mm_U                  = 1.87%
			rhs_75Rnd_762x39mm                    = 1.87%
			rhs_75Rnd_762x39mm_tracer             = 1.87%
			rhs_75Rnd_762x39mm_89                 = 1.87%
		*/
		RifleAmmo[] = {"rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_AK_plum_green", "rhs_45Rnd_545x39_AK", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_762x39mm_polymer_tracer", "rhs_10Rnd_762x39mm", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_762x39mm_bakelite", "rhs_10Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "30Rnd_65x39_caseless_mag_Tracer", "rhs_10Rnd_762x39mm_U", "rhs_45Rnd_545x39_AK_green", "rhs_30Rnd_762x39mm_bakelite", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_545x39_AK_green", "30Rnd_580x42_Mag_F", "20Rnd_556x45_UW_mag", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_762x39mm_bakelite_89", "30Rnd_65x39_caseless_mag", "30Rnd_556x45_Stanag", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_30Rnd_762x39mm_polymer_89", "rhs_30Rnd_545x39_AK_plum_green", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_75Rnd_762x39mm", "rhs_10Rnd_762x39mm_89", "30Rnd_556x45_Stanag", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_45Rnd_545x39_7N22_AK", "rhs_30Rnd_762x39mm", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_545x39_7N6_AK", "rhs_10Rnd_762x39mm", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7N10_desert_AK", "30Rnd_65x39_caseless_mag_Tracer", "rhs_30Rnd_762x39mm", "rhs_10Rnd_762x39mm", "rhsusf_20Rnd_762x51_m993_Mag", "rhs_45Rnd_545x39_7N22_AK", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_AK", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_75Rnd_762x39mm_89", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_762x39mm_polymer", "20Rnd_556x45_UW_mag", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_30Rnd_545x39_AK_green", "30Rnd_556x45_Stanag", "20Rnd_762x51_Mag", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_545x39_AK_plum_green", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_30Rnd_545x39_7U1_AK", "10Rnd_50BW_Mag_F", "rhs_30Rnd_762x39mm_U", "rhs_45Rnd_545x39_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_75Rnd_762x39mm", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_7N6_AK", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N10_AK", "rhs_10Rnd_762x39mm", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7U1_AK", "30Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_762x39mm_bakelite", "rhs_45Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm_bakelite", "rhs_30Rnd_545x39_7N6_AK", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_762x39mm_bakelite", "rhs_30Rnd_545x39_7N6M_AK", "30Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_762x39mm", "rhs_45Rnd_545x39_7N10_AK", "rhs_75Rnd_762x39mm", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "100Rnd_580x42_Mag_F", "rhs_30Rnd_762x39mm_polymer_89", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_762x39mm_polymer_89", "rhs_30Rnd_762x39mm_polymer_tracer", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_762x39mm_U", "rhs_45Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm_polymer_89", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_10Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_10Rnd_762x39mm_tracer", "rhs_75Rnd_762x39mm", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_plum_AK", "100Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_762x39mm_polymer_tracer", "100Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_45Rnd_545x39_AK", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_30Rnd_545x39_AK_green", "30Rnd_65x39_caseless_green_mag_Tracer", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_30Rnd_762x39mm_polymer_tracer", "30Rnd_556x45_Stanag", "rhs_45Rnd_545x39_7N10_AK", "rhs_10Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_polymer_89", "rhs_45Rnd_545x39_7N22_AK", "30Rnd_65x39_caseless_green", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_AK_green", "rhs_30Rnd_762x39mm_tracer", "30Rnd_65x39_caseless_green", "rhs_30Rnd_762x39mm_polymer_tracer", "30Rnd_556x45_Stanag", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_plum_green", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_762x39mm_U", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_10Rnd_762x39mm_tracer", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_AK_plum_green", "rhs_30Rnd_545x39_7N6_AK", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "rhs_45Rnd_545x39_AK_green", "30Rnd_580x42_Mag_F", "rhs_30Rnd_762x39mm_bakelite_tracer", "10Rnd_50BW_Mag_F", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_545x39_AK", "30Rnd_65x39_caseless_green_mag_Tracer", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_545x39_7N10_2mag_AK", "100Rnd_580x42_Mag_F", "20Rnd_762x51_Mag", "rhs_10Rnd_762x39mm", "rhs_45Rnd_545x39_7N22_AK", "rhsusf_20Rnd_762x51_m118_special_Mag", "30Rnd_65x39_caseless_mag", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_75Rnd_762x39mm", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_tracer", "30Rnd_556x45_Stanag", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_762x39mm_89", "rhsusf_20Rnd_762x51_m993_Mag", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_45Rnd_545x39_AK", "rhs_30Rnd_545x39_7N6_AK"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M             = 1.75%
			muzzle_snds_H             = 1.75%
			muzzle_snds_H_khk_F       = 1.75%
			muzzle_snds_H_snd_F       = 1.75%
			muzzle_snds_58_blk_F      = 1.75%
			muzzle_snds_m_khk_F       = 1.75%
			muzzle_snds_m_snd_F       = 1.75%
			muzzle_snds_58_wdm_F      = 1.75%
			muzzle_snds_65_TI_blk_F   = 1.75%
			muzzle_snds_65_TI_hex_F   = 1.75%
			muzzle_snds_65_TI_ghex_F  = 1.75%
			muzzle_snds_H_MG_blk_F    = 1.75%
			muzzle_snds_H_MG_khk_F    = 1.75%
			optic_Arco                = 1.75%
			optic_Arco_blk_F          = 1.75%
			optic_Arco_ghex_F         = 1.75%
			optic_Hamr                = 1.75%
			optic_Hamr_khk_F          = 1.75%
			optic_Holosight           = 1.75%
			optic_Holosight_blk_F     = 1.75%
			optic_Holosight_khk_F     = 1.75%
			acc_flashlight            = 1.75%
			acc_pointer_IR            = 1.75%
			optic_MRCO                = 1.75%
			optic_DMS                 = 1.75%
			optic_DMS_ghex_F          = 1.75%
			optic_ERCO_blk_F          = 1.75%
			optic_ERCO_khk_F          = 1.75%
			optic_ERCO_snd_F          = 1.75%
			optic_NVS                 = 0.88%
			rhs_acc_at4_handler       = 0.88%
			rhsusf_acc_anpeq15A       = 0.88%
			rhsusf_acc_anpeq15        = 0.88%
			rhsusf_acc_anpeq15_light  = 0.88%
			rhsusf_acc_M2010S         = 0.88%
			rhsusf_acc_anpeq15side    = 0.88%
			rhsusf_acc_SR25S          = 0.88%
			rhsusf_acc_rotex5_grey    = 0.88%
			rhsusf_acc_rotex5_tan     = 0.88%
			rhsusf_acc_nt4_black      = 0.88%
			rhsusf_acc_nt4_tan        = 0.88%
			rhsusf_acc_muzzleFlash_SF = 0.88%
			rhsusf_acc_SF3P556        = 0.88%
			rhsusf_acc_SFMB556        = 0.88%
			rhsusf_acc_compm4         = 0.88%
			rhsusf_acc_eotech_552     = 0.88%
			rhsusf_acc_LEUPOLDMK4     = 0.88%
			rhsusf_acc_M2A1           = 0.88%
			rhsusf_acc_EOTECH         = 0.88%
			rhsusf_acc_LEUPOLDMK4_2   = 0.88%
			rhsusf_acc_ACOG3_USMC     = 0.88%
			rhsusf_acc_ACOG2_USMC     = 0.88%
			rhsusf_acc_ACOG_USMC      = 0.88%
			rhsusf_acc_ACOG3          = 0.88%
			rhsusf_acc_ACOG2          = 0.88%
			rhsusf_acc_ACOG_pip       = 0.88%
			rhsusf_acc_ACOG_sa        = 0.88%
			rhsusf_acc_ACOG_d         = 0.88%
			rhsusf_acc_ACOG_wd        = 0.88%
			rhsusf_acc_ACOG           = 0.88%
			rhs_acc_tgpa              = 0.88%
			rhs_acc_pbs1              = 0.88%
			rhs_acc_dtk4short         = 0.88%
			rhs_acc_tgpv              = 0.88%
			rhs_acc_dtk4long          = 0.88%
			rhs_acc_dtk4screws        = 0.88%
			rhs_acc_muzzleFlash_dtk   = 0.88%
			rhs_acc_dtk3              = 0.88%
			rhs_acc_dtk1              = 0.88%
			rhs_acc_dtk               = 0.88%
			rhs_acc_dtk1l             = 0.88%
			rhs_acc_ak5               = 0.88%
			rhs_acc_1p29              = 0.88%
			rhs_acc_1p78              = 0.88%
			rhs_acc_pkas              = 0.88%
			rhs_acc_ekp1              = 0.88%
			rhs_acc_1p63              = 0.88%
			rhs_acc_ekp1b             = 0.88%
			rhs_acc_ekp1c             = 0.88%
			rhs_acc_ekp1d             = 0.88%
			rhs_acc_npz               = 0.88%
			rhs_acc_pso1m2            = 0.88%
			rhs_acc_pgo7v             = 0.88%
			rhs_acc_1pn93_1           = 0.88%
			rhs_acc_1pn93_2           = 0.88%
		*/
		RifleAttachments[] = {"rhs_acc_dtk3", "optic_Arco_blk_F", "rhsusf_acc_ACOG3_USMC", "optic_Hamr", "optic_MRCO", "rhs_acc_pkas", "optic_Holosight", "acc_flashlight", "rhs_acc_dtk4screws", "optic_DMS_ghex_F", "rhs_acc_dtk", "optic_Arco_blk_F", "optic_ERCO_blk_F", "optic_Hamr_khk_F", "acc_pointer_IR", "acc_flashlight", "muzzle_snds_65_TI_ghex_F", "rhsusf_acc_nt4_black", "rhs_acc_ak5", "rhsusf_acc_SFMB556", "rhs_acc_dtk4short", "rhsusf_acc_nt4_tan", "rhs_acc_dtk1", "rhs_acc_pso1m2", "rhsusf_acc_ACOG_d", "optic_MRCO", "rhsusf_acc_SR25S", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15side", "rhs_acc_muzzleFlash_dtk", "muzzle_snds_58_wdm_F", "muzzle_snds_H", "muzzle_snds_H_snd_F", "optic_Arco", "rhs_acc_ekp1d", "muzzle_snds_M", "rhsusf_acc_ACOG2_USMC", "optic_ERCO_khk_F", "rhsusf_acc_ACOG2", "muzzle_snds_58_blk_F", "muzzle_snds_65_TI_hex_F", "optic_ERCO_snd_F", "optic_NVS", "rhsusf_acc_M2A1", "muzzle_snds_65_TI_hex_F", "rhs_acc_dtk4long", "muzzle_snds_H_MG_khk_F", "optic_Holosight_blk_F", "optic_DMS", "muzzle_snds_m_snd_F", "rhsusf_acc_compm4", "rhsusf_acc_ACOG_pip", "optic_Arco", "rhsusf_acc_muzzleFlash_SF", "rhsusf_acc_anpeq15", "muzzle_snds_H", "rhsusf_acc_anpeq15A", "muzzle_snds_M", "rhsusf_acc_anpeq15_light", "rhsusf_acc_SF3P556", "muzzle_snds_H_khk_F", "optic_ERCO_snd_F", "rhs_acc_tgpa", "optic_Hamr_khk_F", "acc_pointer_IR", "rhs_acc_ekp1c", "muzzle_snds_H_khk_F", "rhsusf_acc_ACOG", "optic_Hamr", "rhs_acc_npz", "optic_Holosight", "rhs_acc_tgpv", "rhsusf_acc_ACOG3", "rhsusf_acc_rotex5_tan", "optic_ERCO_blk_F", "rhs_acc_ekp1", "rhs_acc_1p78", "muzzle_snds_m_khk_F", "rhsusf_acc_LEUPOLDMK4_2", "rhsusf_acc_ACOG_USMC", "rhs_acc_pgo7v", "optic_DMS", "rhs_acc_dtk1l", "rhs_acc_at4_handler", "muzzle_snds_m_khk_F", "muzzle_snds_m_snd_F", "rhs_acc_1p63", "muzzle_snds_H_MG_blk_F", "optic_ERCO_khk_F", "rhsusf_acc_rotex5_grey", "muzzle_snds_65_TI_blk_F", "optic_Arco_ghex_F", "rhsusf_acc_eotech_552", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_58_wdm_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_MG_blk_F", "rhsusf_acc_M2010S", "muzzle_snds_58_blk_F", "optic_Holosight_khk_F", "muzzle_snds_H_snd_F", "rhs_acc_pbs1", "optic_Holosight_khk_F", "optic_DMS_ghex_F", "rhs_acc_1pn93_2", "muzzle_snds_H_MG_khk_F", "rhs_acc_1pn93_1", "rhsusf_acc_ACOG_sa", "rhs_acc_ekp1b", "rhsusf_acc_EOTECH", "rhsusf_acc_ACOG_wd", "optic_Arco_ghex_F", "optic_Holosight_blk_F", "rhs_acc_1p29"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F     = 3.03%
			arifle_MX_SW_F           = 3.03%
			LMG_Mk200_F              = 3.03%
			LMG_Zafir_F              = 3.03%
			rhs_weap_pkp             = 15.15%
			rhs_weap_pkm             = 15.15%
			rhs_weap_rpk74           = 15.15%
			rhs_weap_rpk74m          = 15.15%
			rhs_weap_m240B           = 3.03%
			rhs_weap_m240B_CAP       = 3.03%
			rhs_weap_m240G           = 3.03%
			rhs_weap_m249_pip_L      = 3.03%
			rhs_weap_m249_pip_L_para = 3.03%
			rhs_weap_m249_pip_L_vfg  = 3.03%
			rhs_weap_m249_pip_S      = 3.03%
			rhs_weap_m249_pip_S_para = 3.03%
			rhs_weap_m249_pip_S_vfg  = 3.03%
		*/
		LMG[] = {"rhs_weap_rpk74m", "arifle_MX_SW_F", "rhs_weap_pkp", "rhs_weap_rpk74", "rhs_weap_rpk74m", "LMG_Zafir_F", "rhs_weap_rpk74m", "rhs_weap_m240B_CAP", "LMG_Mk200_F", "rhs_weap_pkp", "rhs_weap_m249_pip_L", "rhs_weap_pkm", "rhs_weap_pkm", "rhs_weap_rpk74m", "rhs_weap_m240B", "rhs_weap_pkp", "rhs_weap_rpk74", "rhs_weap_m249_pip_S_para", "rhs_weap_m249_pip_S_vfg", "rhs_weap_m249_pip_L_vfg", "rhs_weap_rpk74", "rhs_weap_pkm", "rhs_weap_m249_pip_L_para", "arifle_MX_SW_Black_F", "rhs_weap_pkp", "rhs_weap_pkm", "rhs_weap_rpk74", "rhs_weap_m249_pip_S", "rhs_weap_rpk74m", "rhs_weap_pkm", "rhs_weap_rpk74", "rhs_weap_pkp", "rhs_weap_m240G"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag        = 1.12%
			100Rnd_65x39_caseless_mag_Tracer = 1.12%
			150Rnd_762x54_Box                = 1.12%
			150Rnd_762x54_Box_Tracer         = 1.12%
			200Rnd_65x39_Belt                = 1.12%
			200Rnd_65x39_Belt_Tracer_Green   = 1.12%
			200Rnd_65x39_Belt_Tracer_Red     = 1.12%
			200Rnd_65x39_Belt_Tracer_Yellow  = 1.12%
			rhs_200rnd_556x45_M_SAW          = 1.12%
			rhs_200rnd_556x45_T_SAW          = 1.12%
			rhs_200rnd_556x45_B_SAW          = 1.12%
			rhsusf_50Rnd_762x51              = 1.12%
			rhsusf_50Rnd_762x51_m61_ap       = 1.12%
			rhsusf_50Rnd_762x51_m62_tracer   = 1.12%
			rhsusf_50Rnd_762x51_m80a1epr     = 1.12%
			rhsusf_100Rnd_762x51             = 1.12%
			rhsusf_100Rnd_762x51_m61_ap      = 1.12%
			rhsusf_100Rnd_762x51_m62_tracer  = 1.12%
			rhsusf_100Rnd_762x51_m80a1epr    = 1.12%
			rhsusf_50Rnd_762x51_m993         = 1.12%
			rhsusf_100Rnd_762x51_m993        = 1.12%
			rhs_45Rnd_545x39_AK              = 7.87%
			rhs_45Rnd_545x39_7N6_AK          = 6.74%
			rhs_45Rnd_545x39_7N10_AK         = 6.74%
			rhs_45Rnd_545x39_7N22_AK         = 6.74%
			rhs_45Rnd_545x39_AK_green        = 6.74%
			rhs_45Rnd_545x39_7U1_AK          = 6.74%
			rhs_75Rnd_762x39mm               = 5.62%
			rhs_75Rnd_762x39mm_tracer        = 5.62%
			rhs_75Rnd_762x39mm_89            = 5.62%
			rhs_100Rnd_762x54mmR             = 4.49%
			rhs_100Rnd_762x54mmR_green       = 4.49%
			rhs_100Rnd_762x54mmR_7N13        = 3.37%
			rhs_100Rnd_762x54mmR_7N26        = 3.37%
			rhs_100Rnd_762x54mmR_7BZ3        = 2.25%
		*/
		LMGAmmo[] = {"200Rnd_65x39_Belt_Tracer_Yellow", "rhs_45Rnd_545x39_7N6_AK", "rhs_45Rnd_545x39_AK_green", "rhs_75Rnd_762x39mm_89", "rhs_100Rnd_762x54mmR_7BZ3", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_7N13", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhsusf_100Rnd_762x51_m993", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_AK_green", "rhs_75Rnd_762x39mm_89", "rhs_45Rnd_545x39_7N6_AK", "rhs_45Rnd_545x39_AK", "rhs_100Rnd_762x54mmR_green", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7N22_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N6_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N6_AK", "rhsusf_100Rnd_762x51_m62_tracer", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_7N6_AK", "rhsusf_100Rnd_762x51_m80a1epr", "150Rnd_762x54_Box", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR", "200Rnd_65x39_Belt", "rhs_100Rnd_762x54mmR_7BZ3", "rhsusf_100Rnd_762x51_m61_ap", "rhs_45Rnd_545x39_AK", "rhs_200rnd_556x45_M_SAW", "rhsusf_50Rnd_762x51_m80a1epr", "rhsusf_50Rnd_762x51", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_200rnd_556x45_B_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_7N26", "rhsusf_50Rnd_762x51_m993", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_100Rnd_762x54mmR_green", "100Rnd_65x39_caseless_mag_Tracer", "rhs_45Rnd_545x39_AK_green", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_75Rnd_762x39mm_89", "rhsusf_100Rnd_762x51", "150Rnd_762x54_Box_Tracer", "rhs_45Rnd_545x39_AK", "rhs_75Rnd_762x39mm", "200Rnd_65x39_Belt_Tracer_Red", "rhs_45Rnd_545x39_7U1_AK", "rhs_100Rnd_762x54mmR_7N13", "rhs_75Rnd_762x39mm_89", "rhsusf_50Rnd_762x51_m61_ap", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_100Rnd_762x54mmR_7N26", "rhs_100Rnd_762x54mmR_7N13", "rhs_75Rnd_762x39mm_tracer", "rhsusf_50Rnd_762x51_m62_tracer", "rhs_75Rnd_762x39mm", "rhs_75Rnd_762x39mm", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N6_AK", "rhs_75Rnd_762x39mm", "rhs_45Rnd_545x39_7U1_AK", "200Rnd_65x39_Belt_Tracer_Green", "rhs_45Rnd_545x39_AK_green", "100Rnd_65x39_caseless_mag", "rhs_45Rnd_545x39_7N22_AK", "rhs_100Rnd_762x54mmR", "rhs_75Rnd_762x39mm", "rhs_100Rnd_762x54mmR_7N26", "rhs_75Rnd_762x39mm_89"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_EBR_F           = 6.82%
			rhs_weap_XM2010        = 4.55%
			rhs_weap_XM2010_d      = 4.55%
			rhs_weap_XM2010_sa     = 4.55%
			rhs_weap_XM2010_wd     = 2.27%
			rhs_weap_asval         = 11.36%
			rhs_weap_vss           = 11.36%
			rhs_weap_svd           = 11.36%
			rhs_weap_svdp          = 11.36%
			rhs_weap_svds          = 11.36%
			rhs_weap_t5000         = 4.55%
			rhs_weap_kar98k        = 6.82%
			rhs_weap_m1garand_sa43 = 9.09%
		*/
		Snipers[] = {"rhs_weap_svds", "srifle_EBR_F", "rhs_weap_m1garand_sa43", "rhs_weap_m1garand_sa43", "rhs_weap_kar98k", "rhs_weap_svds", "srifle_EBR_F", "rhs_weap_XM2010_d", "srifle_EBR_F", "rhs_weap_vss", "rhs_weap_XM2010", "rhs_weap_XM2010_wd", "rhs_weap_t5000", "rhs_weap_asval", "rhs_weap_svd", "rhs_weap_m1garand_sa43", "rhs_weap_asval", "rhs_weap_svd", "rhs_weap_svds", "rhs_weap_kar98k", "rhs_weap_svds", "rhs_weap_XM2010_sa", "rhs_weap_vss", "rhs_weap_svdp", "rhs_weap_svdp", "rhs_weap_svdp", "rhs_weap_t5000", "rhs_weap_asval", "rhs_weap_svdp", "rhs_weap_XM2010_sa", "rhs_weap_m1garand_sa43", "rhs_weap_svd", "rhs_weap_vss", "rhs_weap_svd", "rhs_weap_asval", "rhs_weap_svdp", "rhs_weap_XM2010_d", "rhs_weap_svds", "rhs_weap_asval", "rhs_weap_kar98k", "rhs_weap_vss", "rhs_weap_XM2010", "rhs_weap_svd", "rhs_weap_vss"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			5Rnd_127x108_APDS_Mag                  = 1.89%
			5Rnd_127x108_Mag                       = 1.89%
			7Rnd_408_Mag                           = 1.89%
			10Rnd_762x54_Mag                       = 1.89%
			20Rnd_762x51_Mag                       = 1.89%
			rhs_10Rnd_762x54mmR_7N1                = 9.43%
			rhs_10Rnd_762x54mmR_7N14               = 9.43%
			rhs_10Rnd_762x39mm                     = 9.43%
			rhs_10Rnd_762x39mm_tracer              = 9.43%
			rhs_10Rnd_762x39mm_89                  = 9.43%
			rhs_10Rnd_762x39mm_U                   = 9.43%
			rhsusf_5Rnd_300winmag_xm2010           = 3.77%
			rhs_5Rnd_338lapua_t5000                = 3.77%
			rhsusf_mag_10Rnd_STD_50BMG_M33         = 1.89%
			rhsusf_mag_10Rnd_STD_50BMG_mk211       = 1.89%
			rhsgref_8Rnd_762x63_M2B_M1rifle        = 11.32%
			rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle = 11.32%
		*/
		SniperAmmo[] = {"rhs_5Rnd_338lapua_t5000", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x39mm_89", "rhs_10Rnd_762x39mm_89", "5Rnd_127x108_APDS_Mag", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhs_10Rnd_762x54mmR_7N14", "7Rnd_408_Mag", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x39mm_89", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x39mm_U", "rhs_10Rnd_762x39mm_U", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x54mmR_7N14", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x39mm_U", "rhsusf_5Rnd_300winmag_xm2010", "rhs_10Rnd_762x54mmR_7N1", "rhsgref_8Rnd_762x63_M2B_M1rifle", "20Rnd_762x51_Mag", "rhs_10Rnd_762x39mm", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x39mm_tracer", "rhsusf_mag_10Rnd_STD_50BMG_M33", "5Rnd_127x108_Mag", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x39mm_U", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x39mm_tracer", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhs_10Rnd_762x39mm_89", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhsusf_5Rnd_300winmag_xm2010", "rhs_10Rnd_762x54mmR_7N14", "10Rnd_762x54_Mag", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_5Rnd_338lapua_t5000", "rhs_10Rnd_762x39mm_tracer", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhs_10Rnd_762x39mm_tracer", "rhs_10Rnd_762x39mm_U", "rhs_10Rnd_762x54mmR_7N1", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhs_10Rnd_762x39mm_89", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x39mm_tracer"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F        = 3.23%
			muzzle_snds_B_snd_F        = 3.23%
			muzzle_snds_B              = 3.23%
			rhsusf_acc_M2010S          = 3.23%
			rhsusf_acc_M2010S_d        = 3.23%
			rhsusf_acc_M2010S_sa       = 3.23%
			rhsusf_acc_M2010S_wd       = 3.23%
			rhsusf_acc_LEUPOLDMK4      = 6.45%
			rhsusf_acc_LEUPOLDMK4_d    = 6.45%
			rhsusf_acc_LEUPOLDMK4_wd   = 3.23%
			optic_LRPS                 = 6.45%
			optic_LRPS_ghex_F          = 3.23%
			optic_LRPS_tna_F           = 3.23%
			optic_SOS                  = 9.68%
			rhsusf_acc_premier_low     = 3.23%
			rhsusf_acc_premier         = 3.23%
			rhsusf_acc_premier_anpvs27 = 3.23%
			rhs_acc_tgpv               = 3.23%
			rhs_acc_tgpv2              = 3.23%
			rhs_acc_pso1m2             = 3.23%
			optic_SOS_khk_F            = 9.68%
			optic_DMS                  = 6.45%
			rhsusf_acc_harris_bipod    = 3.23%
		*/
		SniperAttachments[] = {"optic_SOS_khk_F", "optic_SOS_khk_F", "optic_LRPS_tna_F", "optic_DMS", "rhsusf_acc_LEUPOLDMK4_wd", "rhsusf_acc_LEUPOLDMK4", "optic_SOS", "rhsusf_acc_harris_bipod", "optic_SOS", "optic_SOS_khk_F", "rhsusf_acc_M2010S_sa", "rhsusf_acc_LEUPOLDMK4", "optic_LRPS", "optic_LRPS", "muzzle_snds_B", "rhs_acc_tgpv2", "rhs_acc_tgpv", "rhsusf_acc_M2010S_wd", "muzzle_snds_B_khk_F", "rhsusf_acc_LEUPOLDMK4_d", "rhs_acc_pso1m2", "rhsusf_acc_premier_anpvs27", "rhsusf_acc_premier_low", "optic_SOS", "optic_LRPS_ghex_F", "rhsusf_acc_premier", "optic_DMS", "muzzle_snds_B_snd_F", "rhsusf_acc_M2010S_d", "rhsusf_acc_LEUPOLDMK4_d", "rhsusf_acc_M2010S"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 9.09%
			srifle_DMR_03_khaki_F    = 9.09%
			srifle_DMR_03_tan_F      = 9.09%
			srifle_DMR_03_woodland_F = 9.09%
			srifle_DMR_06_camo_F     = 13.64%
			srifle_DMR_06_olive_F    = 13.64%
			srifle_DMR_02_camo_F     = 4.55%
			srifle_DMR_02_F          = 4.55%
			srifle_DMR_02_sniper_F   = 4.55%
			srifle_DMR_04_F          = 4.55%
			srifle_DMR_04_Tan_F      = 4.55%
			srifle_DMR_05_blk_F      = 4.55%
			srifle_DMR_05_hex_F      = 4.55%
			srifle_DMR_05_tan_F      = 4.55%
		*/
		DLCRifles[] = {"srifle_DMR_03_woodland_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_hex_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_blk_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_F", "srifle_DMR_04_F", "srifle_DMR_03_khaki_F", "srifle_DMR_06_olive_F", "srifle_DMR_02_camo_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			10Rnd_127x54_Mag       = 20.00%
			20Rnd_762x51_Mag       = 20.00%
			10Rnd_338_Mag          = 30.00%
			10Rnd_93x64_DMR_05_Mag = 30.00%
		*/
		DLCAmmo[] = {"10Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_338_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_338_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14.29%
			optic_AMS_khk = 14.29%
			optic_AMS_snd = 14.29%
			optic_KHS_blk = 14.29%
			optic_KHS_hex = 14.29%
			optic_KHS_old = 14.29%
			optic_KHS_tan = 14.29%
		*/
		DLCOptics[] = {"optic_AMS_khk", "optic_KHS_old", "optic_AMS", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_AMS_snd"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16.67%
			muzzle_snds_338_green = 16.67%
			muzzle_snds_338_sand  = 16.67%
			muzzle_snds_93mmg     = 16.67%
			muzzle_snds_93mmg_tan = 16.67%
			muzzle_snds_B         = 16.67%
		*/
		DLCSupressor[] = {"muzzle_snds_93mmg_tan", "muzzle_snds_338_sand", "muzzle_snds_93mmg", "muzzle_snds_B", "muzzle_snds_338_black", "muzzle_snds_338_green"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			rhs_weap_M107     = 14.29%
			rhs_weap_M107_d   = 14.29%
			rhs_weap_M107_w   = 14.29%
			srifle_GM6_F      = 14.29%
			srifle_LRR_F      = 14.29%
			srifle_LRR_tna_F  = 14.29%
			srifle_GM6_ghex_F = 14.29%
		*/
		EpicWeapons[] = {"srifle_GM6_ghex_F", "srifle_LRR_tna_F", "rhs_weap_M107", "rhs_weap_M107_w", "srifle_GM6_F", "srifle_LRR_F", "rhs_weap_M107_d"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli          = 10.00%
			bipod_03_F_blk          = 10.00%
			bipod_02_F_tan          = 10.00%
			bipod_02_F_hex          = 10.00%
			bipod_02_F_blk          = 10.00%
			bipod_01_F_snd          = 10.00%
			bipod_01_F_mtp          = 10.00%
			bipod_01_F_blk          = 10.00%
			bipod_01_F_khk          = 10.00%
			rhsusf_acc_harris_bipod = 10.00%
		*/
		Bipods[] = {"bipod_03_F_blk", "bipod_02_F_blk", "rhsusf_acc_harris_bipod", "bipod_01_F_mtp", "bipod_03_F_oli", "bipod_02_F_hex", "bipod_01_F_snd", "bipod_01_F_blk", "bipod_02_F_tan", "bipod_01_F_khk"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell         = 16.67%
			1Rnd_HE_Grenade_shell         = 16.67%
			rhs_mag_M441_HE               = 16.67%
			rhs_mag_M433_HEDP             = 16.67%
			rhs_mag_m397_HET              = 16.67%
			rhsusf_mag_6Rnd_M576_Buckshot = 16.67%
		*/
		HEGrenades[] = {"rhs_mag_M433_HEDP", "1Rnd_HE_Grenade_shell", "rhsusf_mag_6Rnd_M576_Buckshot", "rhs_mag_M441_HE", "rhs_mag_m397_HET", "3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6.25%
			3Rnd_UGL_FlareRed_F    = 6.25%
			3Rnd_UGL_FlareWhite_F  = 6.25%
			3Rnd_UGL_FlareYellow_F = 6.25%
			UGL_FlareGreen_F       = 18.75%
			UGL_FlareRed_F         = 18.75%
			UGL_FlareWhite_F       = 18.75%
			UGL_FlareYellow_F      = 18.75%
		*/
		UGLFlares[] = {"3Rnd_UGL_FlareGreen_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareYellow_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareYellow_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareRed_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3.57%
			3Rnd_SmokeBlue_Grenade_shell   = 3.57%
			3Rnd_SmokeGreen_Grenade_shell  = 3.57%
			3Rnd_SmokeOrange_Grenade_shell = 3.57%
			3Rnd_SmokePurple_Grenade_shell = 3.57%
			3Rnd_SmokeRed_Grenade_shell    = 3.57%
			3Rnd_SmokeYellow_Grenade_shell = 3.57%
			1Rnd_Smoke_Grenade_shell       = 10.71%
			1Rnd_SmokeBlue_Grenade_shell   = 10.71%
			1Rnd_SmokeGreen_Grenade_shell  = 10.71%
			1Rnd_SmokeOrange_Grenade_shell = 10.71%
			1Rnd_SmokePurple_Grenade_shell = 10.71%
			1Rnd_SmokeRed_Grenade_shell    = 10.71%
			1Rnd_SmokeYellow_Grenade_shell = 10.71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade    = 14.29%
			MiniGrenade    = 14.29%
			rhs_mag_rgd5   = 14.29%
			rhs_mag_rgn    = 14.29%
			rhs_mag_rgo    = 14.29%
			rhs_mag_zarya2 = 14.29%
			rhs_ammo_m67   = 14.29%
		*/
		HandGrenades[] = {"rhs_mag_rgo", "HandGrenade", "rhs_ammo_m67", "rhs_mag_rgn", "rhs_mag_zarya2", "MiniGrenade", "rhs_mag_rgd5"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag    = 4.55%
			APERSBoundingMine_Range_Mag = 13.64%
			APERSMine_Range_Mag         = 13.64%
			APERSTripMine_Wire_Mag      = 13.64%
			DemoCharge_Remote_Mag       = 9.09%
			IEDLandSmall_Remote_Mag     = 22.73%
			IEDUrbanSmall_Remote_Mag    = 22.73%
		*/
		Explosives[] = {"IEDUrbanSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "IEDUrbanSmall_Remote_Mag", "DemoCharge_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "SatchelCharge_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "APERSBoundingMine_Range_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "DemoCharge_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 3.33%
			Binocular              = 13.33%
			ItemGPS                = 13.33%
			ItemRadio              = 20.00%
			ItemMap                = 23.33%
			Exile_Item_Heatpack    = 26.67%
		*/
		CivilianItems[] = {"ItemRadio", "Exile_Item_Heatpack", "ItemMap", "ItemGPS", "ItemGPS", "Exile_Item_Heatpack", "Binocular", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Binocular", "ItemGPS", "Binocular", "Exile_Item_Heatpack", "ItemMap", "ItemMap", "ItemMap", "ItemRadio", "ItemMap", "Exile_Item_Heatpack", "ItemRadio", "ItemMap", "Exile_Item_MobilePhone", "ItemRadio", "ItemRadio", "Binocular", "ItemRadio", "Exile_Item_Heatpack", "ItemMap", "ItemGPS"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0.58%
			U_NikosBody              = 0.58%
			U_OrestesBody            = 0.58%
			U_C_Man_casual_1_F       = 2.92%
			U_C_Man_casual_2_F       = 2.92%
			U_C_Man_casual_3_F       = 2.92%
			U_C_Man_casual_4_F       = 2.92%
			U_C_Man_casual_5_F       = 2.92%
			U_C_Man_casual_6_F       = 2.92%
			U_C_man_sport_1_F        = 2.92%
			U_C_man_sport_2_F        = 2.92%
			U_C_man_sport_3_F        = 2.92%
			U_I_C_Soldier_Bandit_1_F = 2.92%
			U_I_C_Soldier_Bandit_2_F = 2.92%
			U_I_C_Soldier_Bandit_3_F = 2.92%
			U_I_C_Soldier_Bandit_4_F = 2.92%
			U_I_C_Soldier_Bandit_5_F = 2.92%
			U_C_Poloshirt_blue       = 4.09%
			U_C_Poloshirt_burgundy   = 4.09%
			U_C_Poloshirt_salmon     = 4.09%
			U_C_Poloshirt_stripped   = 4.09%
			U_C_Poloshirt_tricolour  = 4.09%
			U_C_HunterBody_grn       = 5.26%
			U_C_Journalist           = 5.26%
			U_C_Poor_1               = 5.26%
			U_C_Poor_2               = 5.26%
			U_C_Poor_shorts_1        = 5.26%
			U_C_Scientist            = 5.26%
			U_Rangemaster            = 5.26%
		*/
		CivilianClothing[] = {"U_C_Journalist", "U_C_Poor_2", "U_I_C_Soldier_Bandit_5_F", "U_C_Scientist", "U_C_Scientist", "U_C_Scientist", "U_C_HunterBody_grn", "U_C_man_sport_1_F", "U_C_Man_casual_2_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_1", "U_C_Man_casual_6_F", "U_C_man_sport_3_F", "U_Rangemaster", "U_C_man_sport_2_F", "U_C_man_sport_3_F", "U_Rangemaster", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_2", "U_C_Journalist", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_1_F", "U_C_HunterBody_grn", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_2", "U_C_HunterBody_grn", "U_C_Poloshirt_salmon", "U_C_Poor_1", "U_C_man_sport_1_F", "U_C_Scientist", "U_C_Man_casual_6_F", "U_C_Poloshirt_blue", "U_C_Poor_2", "U_C_Man_casual_6_F", "U_C_man_sport_1_F", "U_C_Poloshirt_stripped", "U_C_Scientist", "U_C_Poloshirt_salmon", "U_C_Man_casual_5_F", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Journalist", "U_C_Poloshirt_blue", "U_C_Poloshirt_stripped", "U_C_HunterBody_grn", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_man_sport_2_F", "U_C_Scientist", "U_C_man_sport_1_F", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_4_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_man_sport_2_F", "U_C_Poor_2", "U_C_Man_casual_3_F", "U_C_Poloshirt_salmon", "U_OrestesBody", "U_C_Poloshirt_stripped", "U_C_Poor_1", "U_C_HunterBody_grn", "U_C_HunterBody_grn", "U_C_Poloshirt_stripped", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_Poloshirt_tricolour", "U_NikosAgedBody", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_Scientist", "U_Rangemaster", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_tricolour", "U_C_Man_casual_4_F", "U_C_Poloshirt_tricolour", "U_Rangemaster", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_1_F", "U_C_Poloshirt_blue", "U_C_Man_casual_3_F", "U_C_Journalist", "U_C_Poor_1", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_5_F", "U_C_Man_casual_2_F", "U_C_Man_casual_2_F", "U_C_Poloshirt_salmon", "U_NikosBody", "U_C_Poloshirt_blue", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_2_F", "U_Rangemaster", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_burgundy", "U_C_Journalist", "U_C_Poor_1", "U_C_Poloshirt_tricolour", "U_C_Man_casual_4_F", "U_C_Scientist", "U_C_Poloshirt_salmon", "U_C_Poloshirt_stripped", "U_C_Man_casual_6_F", "U_Rangemaster", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_salmon", "U_C_Man_casual_3_F", "U_C_Man_casual_2_F", "U_C_Journalist", "U_C_Journalist", "U_C_Man_casual_6_F", "U_C_Scientist", "U_C_HunterBody_grn", "U_C_Man_casual_3_F", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_C_Poloshirt_stripped", "U_C_Man_casual_5_F", "U_C_Poloshirt_salmon", "U_C_Poor_2", "U_C_Poor_2", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_1", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_1_F", "U_Rangemaster", "U_C_Man_casual_1_F", "U_C_man_sport_1_F", "U_C_Journalist", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Journalist", "U_C_Poloshirt_blue", "U_C_man_sport_3_F", "U_C_Poor_1", "U_C_Man_casual_3_F", "U_C_Poor_shorts_1", "U_C_Man_casual_2_F", "U_C_man_sport_2_F", "U_C_Poor_shorts_1", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_Rangemaster", "U_C_Poloshirt_burgundy", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_5_F", "U_C_Man_casual_1_F"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6.67%
			B_Kitbag_mcamo      = 6.67%
			B_Kitbag_sgg        = 6.67%
			B_AssaultPack_blk   = 6.67%
			B_AssaultPack_cbr   = 6.67%
			B_AssaultPack_dgtl  = 6.67%
			B_AssaultPack_khk   = 6.67%
			B_AssaultPack_mcamo = 6.67%
			B_AssaultPack_rgr   = 6.67%
			B_AssaultPack_sgg   = 6.67%
			B_AssaultPack_tna_F = 6.67%
			B_HuntingBackpack   = 6.67%
			B_OutdoorPack_blu   = 6.67%
			B_OutdoorPack_tan   = 6.67%
			B_OutdoorPack_blk   = 6.67%
		*/
		CivilianBackpacks[] = {"B_AssaultPack_blk", "B_AssaultPack_dgtl", "B_AssaultPack_khk", "B_OutdoorPack_tan", "B_Kitbag_cbr", "B_OutdoorPack_blu", "B_AssaultPack_cbr", "B_OutdoorPack_blk", "B_HuntingBackpack", "B_Kitbag_mcamo", "B_AssaultPack_sgg", "B_Kitbag_sgg", "B_AssaultPack_mcamo", "B_AssaultPack_tna_F", "B_AssaultPack_rgr"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25.00%
			V_TacVest_blk_POLICE = 25.00%
			V_Rangemaster_belt   = 50.00%
		*/
		CivilianVests[] = {"V_Press_F", "V_Rangemaster_belt", "V_Rangemaster_belt", "V_TacVest_blk_POLICE"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5.56%
			H_Beret_blk_POLICE = 5.56%
			H_Cap_blk          = 5.56%
			H_Cap_blk_Raven    = 5.56%
			H_Cap_blu          = 5.56%
			H_Cap_grn          = 5.56%
			H_Cap_headphones   = 5.56%
			H_Cap_oli          = 5.56%
			H_Cap_press        = 5.56%
			H_Cap_red          = 5.56%
			H_Cap_tan          = 5.56%
			H_Hat_blue         = 5.56%
			H_Hat_brown        = 5.56%
			H_Hat_checker      = 5.56%
			H_Hat_grey         = 5.56%
			H_Hat_tan          = 5.56%
			H_StrawHat         = 5.56%
			H_StrawHat_dark    = 5.56%
		*/
		CivilianHeadgear[] = {"H_Hat_checker", "H_Cap_headphones", "H_Cap_tan", "H_Beret_blk_POLICE", "H_Hat_tan", "H_StrawHat", "H_Hat_grey", "H_Hat_blue", "H_Cap_press", "H_Cap_blk_Raven", "H_Cap_blk", "H_Bandanna_surfer", "H_Cap_grn", "H_Cap_oli", "H_Cap_blu", "H_Hat_brown", "H_Cap_red", "H_StrawHat_dark"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 6.25%
			ItemCompass        = 62.50%
			NVGoggles          = 6.25%
			NVGoggles_tna_F    = 6.25%
			O_NVGoggles_ghex_F = 6.25%
			O_NVGoggles_hex_F  = 6.25%
			O_NVGoggles_urb_F  = 6.25%
		*/
		GuerillaItems[] = {"ItemCompass", "O_NVGoggles_urb_F", "O_NVGoggles_ghex_F", "ItemCompass", "ItemCompass", "O_NVGoggles_hex_F", "Rangefinder", "NVGoggles_tna_F", "NVGoggles", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1.15%
			U_I_C_Soldier_Camo_F     = 3.45%
			U_I_C_Soldier_Para_1_F   = 3.45%
			U_I_C_Soldier_Para_2_F   = 3.45%
			U_I_C_Soldier_Para_3_F   = 3.45%
			U_I_C_Soldier_Para_4_F   = 3.45%
			U_I_C_Soldier_Para_5_F   = 3.45%
			U_IG_leader              = 4.60%
			U_IG_Guerilla3_1         = 5.75%
			U_IG_Guerilla3_2         = 5.75%
			U_IG_Guerilla1_1         = 6.90%
			U_IG_Guerilla2_1         = 6.90%
			U_IG_Guerilla2_2         = 6.90%
			U_IG_Guerilla2_3         = 6.90%
			rhs_insurgent_uniform_1  = 6.90%
			rhs_insurgent_uniform_2  = 6.90%
			rhs_insurgent_uniform_3  = 6.90%
			rhs_insurgent_uniform_4  = 6.90%
			rhs_insurgent_uniform_5  = 6.90%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla3_1", "rhs_insurgent_uniform_3", "U_I_C_Soldier_Para_3_F", "rhs_insurgent_uniform_2", "rhs_insurgent_uniform_1", "U_I_C_Soldier_Para_5_F", "rhs_insurgent_uniform_3", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_IG_leader", "rhs_insurgent_uniform_5", "rhs_insurgent_uniform_4", "rhs_insurgent_uniform_5", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_2", "rhs_insurgent_uniform_4", "U_IG_Guerilla1_1", "U_IG_Guerilla3_2", "rhs_insurgent_uniform_4", "rhs_insurgent_uniform_1", "rhs_insurgent_uniform_2", "U_IG_Guerilla1_1", "rhs_insurgent_uniform_1", "rhs_insurgent_uniform_2", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_1", "rhs_insurgent_uniform_1", "U_IG_Guerilla2_2", "U_IG_leader", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_3", "rhs_insurgent_uniform_4", "U_I_C_Soldier_Para_1_F", "rhs_insurgent_uniform_2", "rhs_insurgent_uniform_2", "U_IG_Guerilla2_3", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_2", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_3_F", "rhs_insurgent_uniform_4", "rhs_insurgent_uniform_5", "rhs_insurgent_uniform_1", "U_IG_Guerilla2_2", "rhs_insurgent_uniform_3", "rhs_insurgent_uniform_1", "rhs_insurgent_uniform_5", "rhs_insurgent_uniform_3", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla1_1", "U_I_G_resistanceLeader_F", "U_IG_leader", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "rhs_insurgent_uniform_3", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_1_F", "rhs_insurgent_uniform_5", "U_I_C_Soldier_Para_4_F", "rhs_insurgent_uniform_5", "U_IG_Guerilla2_1", "rhs_insurgent_uniform_4", "U_IG_Guerilla2_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_3", "U_IG_leader", "rhs_insurgent_uniform_3", "U_IG_Guerilla2_2", "U_I_C_Soldier_Camo_F", "rhs_insurgent_uniform_2"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1.82%
			B_Bergen_mcamo             = 1.82%
			B_Bergen_rgr               = 1.82%
			B_Bergen_sgg               = 1.82%
			B_FieldPack_ghex_F         = 1.82%
			B_ViperHarness_base_F      = 3.64%
			B_ViperHarness_blk_F       = 3.64%
			B_ViperHarness_ghex_F      = 3.64%
			B_ViperHarness_hex_F       = 3.64%
			B_ViperHarness_khk_F       = 3.64%
			B_ViperHarness_oli_F       = 3.64%
			B_ViperLightHarness_base_F = 5.45%
			B_ViperLightHarness_blk_F  = 5.45%
			B_ViperLightHarness_ghex_F = 5.45%
			B_ViperLightHarness_hex_F  = 5.45%
			B_ViperLightHarness_khk_F  = 5.45%
			B_ViperLightHarness_oli_F  = 5.45%
			B_FieldPack_blk            = 9.09%
			B_FieldPack_cbr            = 9.09%
			B_FieldPack_ocamo          = 9.09%
			B_FieldPack_oucamo         = 9.09%
		*/
		GuerillaBackpacks[] = {"B_ViperHarness_hex_F", "B_Bergen_rgr", "B_FieldPack_cbr", "B_FieldPack_cbr", "B_FieldPack_blk", "B_ViperHarness_blk_F", "B_FieldPack_ocamo", "B_FieldPack_cbr", "B_FieldPack_oucamo", "B_FieldPack_ocamo", "B_ViperLightHarness_blk_F", "B_ViperHarness_khk_F", "B_ViperLightHarness_oli_F", "B_FieldPack_cbr", "B_ViperLightHarness_oli_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_ghex_F", "B_ViperHarness_khk_F", "B_FieldPack_cbr", "B_ViperLightHarness_ghex_F", "B_FieldPack_blk", "B_ViperHarness_ghex_F", "B_ViperHarness_oli_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_blk_F", "B_ViperHarness_base_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_base_F", "B_ViperHarness_hex_F", "B_Bergen_blk", "B_ViperHarness_oli_F", "B_FieldPack_ocamo", "B_ViperLightHarness_base_F", "B_FieldPack_ocamo", "B_ViperLightHarness_hex_F", "B_FieldPack_blk", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_blk_F", "B_ViperHarness_ghex_F", "B_Bergen_mcamo", "B_FieldPack_oucamo", "B_FieldPack_ghex_F", "B_FieldPack_oucamo", "B_FieldPack_oucamo", "B_ViperHarness_base_F", "B_ViperHarness_blk_F", "B_Bergen_sgg", "B_ViperLightHarness_base_F", "B_FieldPack_blk", "B_FieldPack_blk"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3.23%
			V_BandollierB_blk        = 6.45%
			V_BandollierB_cbr        = 6.45%
			V_BandollierB_khk        = 6.45%
			V_BandollierB_oli        = 6.45%
			V_BandollierB_rgr        = 6.45%
			V_Chestrig_blk           = 6.45%
			V_Chestrig_khk           = 6.45%
			V_Chestrig_oli           = 6.45%
			V_Chestrig_rgr           = 6.45%
			V_HarnessO_brn           = 6.45%
			V_HarnessO_gry           = 6.45%
			V_HarnessOGL_brn         = 6.45%
			V_HarnessOGL_gry         = 6.45%
			V_HarnessOSpec_brn       = 6.45%
			V_HarnessOSpec_gry       = 6.45%
		*/
		GuerillaVests[] = {"V_Chestrig_oli", "V_HarnessOSpec_brn", "V_BandollierB_rgr", "V_BandollierB_rgr", "V_HarnessOSpec_gry", "V_BandollierB_oli", "V_HarnessOSpec_brn", "V_HarnessOGL_gry", "V_Chestrig_oli", "V_Chestrig_rgr", "V_BandollierB_khk", "V_HarnessOSpec_gry", "V_BandollierB_khk", "V_BandollierB_blk", "V_BandollierB_blk", "V_HarnessO_gry", "V_HarnessOGL_brn", "V_HarnessOGL_brn", "V_Chestrig_rgr", "V_Chestrig_blk", "V_BandollierB_cbr", "V_HarnessO_gry", "V_Chestrig_khk", "V_HarnessO_brn", "V_HarnessOGL_gry", "V_BandollierB_cbr", "V_Chestrig_khk", "V_I_G_resistanceLeader_F", "V_HarnessO_brn", "V_BandollierB_oli", "V_Chestrig_blk"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0.84%
			H_Beret_blk               = 0.84%
			H_Beret_brn_SF            = 0.84%
			H_Beret_Colonel           = 0.84%
			H_Beret_grn               = 0.84%
			H_Beret_grn_SF            = 0.84%
			H_Beret_ocamo             = 0.84%
			H_Beret_red               = 0.84%
			H_Booniehat_tna_F         = 1.68%
			H_Cap_blk_Syndikat_F      = 1.68%
			H_Cap_grn_Syndikat_F      = 1.68%
			H_Cap_oli_Syndikat_F      = 1.68%
			H_Cap_tan_Syndikat_F      = 1.68%
			H_FakeHeadgear_Syndikat_F = 1.68%
			H_MilCap_gen_F            = 1.68%
			H_MilCap_ghex_F           = 1.68%
			H_MilCap_tna_F            = 1.68%
			H_Shemag_khk              = 1.68%
			H_Shemag_olive            = 1.68%
			H_Shemag_olive_hs         = 1.68%
			H_Shemag_tan              = 1.68%
			H_ShemagOpen_khk          = 1.68%
			H_ShemagOpen_tan          = 1.68%
			H_TurbanO_blk             = 1.68%
			H_Watchcap_camo           = 1.68%
			H_Watchcap_sgg            = 1.68%
			H_Bandanna_camo           = 2.52%
			H_Bandanna_cbr            = 2.52%
			H_Bandanna_gry            = 2.52%
			H_Bandanna_khk            = 2.52%
			H_Bandanna_khk_hs         = 2.52%
			H_Bandanna_mcamo          = 2.52%
			H_Bandanna_sgg            = 2.52%
			H_BandMask_blk            = 2.52%
			H_Cap_brn_SPECOPS         = 2.52%
			H_Cap_khaki_specops_UK    = 2.52%
			H_Cap_tan_specops_US      = 2.52%
			H_Hat_camo                = 2.52%
			H_Watchcap_blk            = 2.52%
			H_Watchcap_khk            = 2.52%
			Exile_Headgear_GasMask    = 0.84%
			H_Booniehat_dgtl          = 3.36%
			H_Booniehat_dirty         = 3.36%
			H_Booniehat_grn           = 3.36%
			H_Booniehat_indp          = 3.36%
			H_Booniehat_khk           = 3.36%
			H_Booniehat_khk_hs        = 3.36%
			H_Booniehat_mcamo         = 3.36%
			H_Booniehat_tan           = 3.36%
		*/
		GuerillaHeadgear[] = {"H_Shemag_olive", "H_Beret_grn", "H_Bandanna_khk", "H_Shemag_khk", "H_Cap_khaki_specops_UK", "H_Cap_brn_SPECOPS", "H_Booniehat_khk_hs", "H_Booniehat_khk_hs", "H_Booniehat_mcamo", "H_Beret_grn_SF", "H_BandMask_blk", "H_Booniehat_mcamo", "H_Booniehat_tan", "H_Bandanna_khk", "H_Bandanna_sgg", "H_Cap_khaki_specops_UK", "H_Booniehat_tna_F", "H_Beret_02", "H_Cap_tan_Syndikat_F", "H_Booniehat_dirty", "H_Booniehat_khk_hs", "H_Booniehat_grn", "H_Watchcap_khk", "H_Cap_khaki_specops_UK", "H_Watchcap_sgg", "H_Watchcap_blk", "H_Booniehat_dirty", "H_Booniehat_dgtl", "H_Watchcap_khk", "H_ShemagOpen_tan", "H_Beret_brn_SF", "H_Booniehat_indp", "H_Booniehat_khk", "H_Cap_grn_Syndikat_F", "H_Bandanna_cbr", "H_Cap_grn_Syndikat_F", "H_Booniehat_khk", "H_Watchcap_blk", "H_Watchcap_blk", "H_Cap_brn_SPECOPS", "H_Bandanna_gry", "Exile_Headgear_GasMask", "H_TurbanO_blk", "H_Watchcap_camo", "H_Booniehat_mcamo", "H_Shemag_khk", "H_ShemagOpen_tan", "H_MilCap_ghex_F", "H_Booniehat_grn", "H_Bandanna_khk_hs", "H_MilCap_tna_F", "H_Bandanna_mcamo", "H_ShemagOpen_khk", "H_Booniehat_tan", "H_Watchcap_khk", "H_Shemag_olive_hs", "H_Booniehat_tan", "H_Booniehat_khk", "H_MilCap_tna_F", "H_Beret_red", "H_Bandanna_sgg", "H_BandMask_blk", "H_Cap_blk_Syndikat_F", "H_Cap_blk_Syndikat_F", "H_Shemag_olive_hs", "H_Bandanna_camo", "H_Booniehat_khk_hs", "H_Bandanna_khk", "H_Bandanna_camo", "H_Bandanna_mcamo", "H_Cap_tan_Syndikat_F", "H_Beret_blk", "H_Booniehat_dirty", "H_Watchcap_camo", "H_Cap_tan_specops_US", "H_FakeHeadgear_Syndikat_F", "H_Bandanna_gry", "H_Bandanna_gry", "H_Cap_brn_SPECOPS", "H_Booniehat_dgtl", "H_ShemagOpen_khk", "H_Booniehat_khk", "H_Bandanna_sgg", "H_Hat_camo", "H_Cap_tan_specops_US", "H_Bandanna_cbr", "H_Shemag_tan", "H_BandMask_blk", "H_Cap_oli_Syndikat_F", "H_Booniehat_dirty", "H_FakeHeadgear_Syndikat_F", "H_Booniehat_tna_F", "H_Hat_camo", "H_MilCap_gen_F", "H_Booniehat_tan", "H_Bandanna_mcamo", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Booniehat_indp", "H_Hat_camo", "H_Bandanna_khk_hs", "H_MilCap_gen_F", "H_Booniehat_indp", "H_Booniehat_grn", "H_Shemag_tan", "H_Watchcap_sgg", "H_Booniehat_dgtl", "H_Beret_ocamo", "H_Cap_tan_specops_US", "H_Cap_oli_Syndikat_F", "H_Bandanna_camo", "H_Bandanna_khk_hs", "H_Beret_Colonel", "H_Shemag_olive", "H_TurbanO_blk", "H_Bandanna_cbr", "H_Booniehat_indp", "H_MilCap_ghex_F", "H_Booniehat_dgtl"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                     = 0.96%
			U_I_OfficerUniform              = 0.96%
			U_I_Wetsuit                     = 0.96%
			U_O_CombatUniform_ocamo         = 0.96%
			U_O_CombatUniform_oucamo        = 0.96%
			U_O_OfficerUniform_ocamo        = 0.96%
			U_O_SpecopsUniform_blk          = 0.96%
			U_O_SpecopsUniform_ocamo        = 0.96%
			U_O_V_Soldier_Viper_F           = 0.96%
			U_O_V_Soldier_Viper_hex_F       = 0.96%
			U_O_Wetsuit                     = 0.96%
			U_B_SpecopsUniform_sgg          = 0.96%
			U_B_HeliPilotCoveralls          = 0.96%
			U_B_PilotCoveralls              = 0.96%
			U_I_CombatUniform               = 0.96%
			U_I_CombatUniform_shortsleeve   = 0.96%
			U_I_CombatUniform_tshirt        = 0.96%
			U_I_HeliPilotCoveralls          = 0.96%
			U_I_pilotCoveralls              = 0.96%
			U_O_PilotCoveralls              = 0.96%
			U_B_CombatUniform_mcam          = 0.96%
			U_B_CombatUniform_mcam_tshirt   = 0.96%
			U_B_CombatUniform_mcam_vest     = 0.96%
			U_B_CombatUniform_mcam_worn     = 0.96%
			U_B_CTRG_1                      = 0.96%
			U_B_CTRG_2                      = 0.96%
			U_B_CTRG_3                      = 0.96%
			U_B_CTRG_Soldier_2_F            = 0.96%
			U_B_CTRG_Soldier_3_F            = 0.96%
			U_B_CTRG_Soldier_F              = 0.96%
			U_B_CTRG_Soldier_urb_1_F        = 0.96%
			U_B_CTRG_Soldier_urb_2_F        = 0.96%
			U_B_CTRG_Soldier_urb_3_F        = 0.96%
			U_B_GEN_Commander_F             = 0.96%
			U_B_GEN_Soldier_F               = 0.96%
			U_B_T_Soldier_AR_F              = 0.96%
			U_B_T_Soldier_SL_F              = 0.96%
			U_O_T_Officer_F                 = 0.96%
			U_O_T_Soldier_F                 = 0.96%
			rhs_uniform_FROG01_d            = 0.96%
			rhs_uniform_FROG01_m81          = 0.96%
			rhs_uniform_FROG01_wd           = 0.96%
			rhs_uniform_cu_ocp              = 0.96%
			rhs_uniform_cu_ocp_101st        = 0.96%
			rhs_uniform_cu_ocp_10th         = 0.96%
			rhs_uniform_cu_ocp_1stcav       = 0.96%
			rhs_uniform_cu_ocp_82nd         = 0.96%
			rhs_uniform_cu_ucp              = 0.96%
			rhs_uniform_cu_ucp_101st        = 0.96%
			rhs_uniform_cu_ucp_10th         = 0.96%
			rhs_uniform_cu_ucp_1stcav       = 0.96%
			rhs_uniform_cu_ucp_82nd         = 0.96%
			rhs_chdkz_uniform_1             = 1.92%
			rhs_chdkz_uniform_2             = 1.92%
			rhs_chdkz_uniform_3             = 1.92%
			rhs_chdkz_uniform_4             = 1.92%
			rhs_chdkz_uniform_5             = 1.92%
			rhs_uniform_df15                = 1.92%
			rhs_uniform_df15_tan            = 1.92%
			rhs_uniform_emr_des_patchless   = 1.92%
			rhs_uniform_emr_patchless       = 1.92%
			rhs_uniform_flora               = 1.92%
			rhs_uniform_flora_patchless     = 1.92%
			rhs_uniform_flora_patchless_alt = 1.92%
			rhs_uniform_gorka_r_g           = 1.92%
			rhs_uniform_gorka_r_y           = 1.92%
			rhs_uniform_invisible           = 1.92%
			rhs_uniform_m88_patchless       = 1.92%
			rhs_uniform_mflora_patchless    = 1.92%
			rhs_uniform_msv_emr             = 1.92%
			rhs_uniform_mvd_izlom           = 1.92%
			rhs_uniform_rva_flora           = 1.92%
			rhs_uniform_vdv_emr             = 1.92%
			rhs_uniform_vdv_emr_des         = 1.92%
			rhs_uniform_vdv_flora           = 1.92%
			rhs_uniform_vdv_mflora          = 1.92%
			rhs_uniform_vmf_flora           = 1.92%
			rhs_uniform_vmf_flora_subdued   = 1.92%
			Exile_Headgear_GasMask          = 0.32%
		*/
		MilitaryClothing[] = {"U_B_CTRG_Soldier_urb_2_F", "Exile_Headgear_GasMask", "rhs_uniform_flora", "U_B_CTRG_2", "U_O_PilotCoveralls", "U_B_CTRG_3", "rhs_uniform_mflora_patchless", "rhs_uniform_flora_patchless", "U_O_T_Soldier_F", "rhs_uniform_df15_tan", "U_B_CTRG_Soldier_F", "rhs_uniform_cu_ucp_1stcav", "rhs_uniform_gorka_r_g", "rhs_uniform_flora_patchless", "U_O_V_Soldier_Viper_hex_F", "U_O_SpecopsUniform_blk", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam", "rhs_uniform_cu_ucp_101st", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_2_F", "rhs_uniform_cu_ocp_82nd", "rhs_uniform_mvd_izlom", "rhs_uniform_gorka_r_y", "rhs_uniform_mvd_izlom", "rhs_uniform_m88_patchless", "U_B_CTRG_Soldier_urb_2_F", "rhs_uniform_flora_patchless", "rhs_uniform_gorka_r_g", "rhs_uniform_emr_des_patchless", "U_O_CombatUniform_oucamo", "rhs_chdkz_uniform_5", "U_O_T_Officer_F", "rhs_uniform_msv_emr", "rhs_uniform_invisible", "rhs_chdkz_uniform_2", "rhs_uniform_cu_ocp_1stcav", "rhs_uniform_df15_tan", "rhs_uniform_cu_ocp_101st", "U_I_Wetsuit", "rhs_uniform_m88_patchless", "rhs_uniform_emr_patchless", "rhs_uniform_flora", "U_I_CombatUniform", "U_B_GEN_Soldier_F", "rhs_uniform_vdv_mflora", "rhs_uniform_cu_ocp", "rhs_uniform_msv_emr", "U_B_T_Soldier_AR_F", "U_O_SpecopsUniform_ocamo", "rhs_uniform_m88_patchless", "rhs_uniform_gorka_r_y", "U_B_CTRG_3", "U_O_T_Soldier_F", "rhs_uniform_df15_tan", "rhs_uniform_flora_patchless_alt", "rhs_chdkz_uniform_4", "rhs_uniform_vmf_flora_subdued", "rhs_uniform_gorka_r_y", "U_I_HeliPilotCoveralls", "rhs_uniform_FROG01_wd", "rhs_uniform_vdv_mflora", "U_B_Wetsuit", "rhs_uniform_vdv_emr", "U_O_CombatUniform_ocamo", "rhs_uniform_invisible", "rhs_uniform_emr_patchless", "rhs_uniform_mflora_patchless", "rhs_uniform_cu_ocp_10th", "U_B_CombatUniform_mcam_worn", "rhs_uniform_cu_ucp_82nd", "rhs_uniform_flora_patchless_alt", "U_B_T_Soldier_SL_F", "U_I_CombatUniform_tshirt", "rhs_chdkz_uniform_3", "rhs_chdkz_uniform_5", "U_O_OfficerUniform_ocamo", "rhs_uniform_vmf_flora", "rhs_chdkz_uniform_3", "U_B_T_Soldier_AR_F", "rhs_uniform_vmf_flora", "rhs_chdkz_uniform_4", "rhs_uniform_cu_ucp_82nd", "rhs_uniform_mflora_patchless", "rhs_uniform_vdv_emr_des", "rhs_uniform_vdv_emr", "U_I_HeliPilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "rhs_uniform_cu_ocp_82nd", "rhs_uniform_FROG01_m81", "U_B_CTRG_1", "rhs_uniform_cu_ucp_101st", "rhs_chdkz_uniform_5", "rhs_uniform_df15", "rhs_uniform_flora", "rhs_uniform_vdv_emr", "rhs_uniform_cu_ocp_10th", "rhs_uniform_vdv_emr_des", "rhs_chdkz_uniform_3", "U_B_PilotCoveralls", "U_B_GEN_Soldier_F", "U_I_pilotCoveralls", "rhs_uniform_vdv_mflora", "U_O_CombatUniform_ocamo", "rhs_chdkz_uniform_2", "rhs_uniform_FROG01_wd", "rhs_chdkz_uniform_1", "U_B_GEN_Commander_F", "U_I_CombatUniform_tshirt", "U_O_T_Soldier_F", "rhs_uniform_vdv_mflora", "rhs_uniform_gorka_r_y", "U_B_CTRG_Soldier_urb_3_F", "U_B_CombatUniform_mcam_vest", "rhs_uniform_df15", "rhs_chdkz_uniform_4", "rhs_uniform_FROG01_d", "U_B_CTRG_1", "U_B_CombatUniform_mcam_worn", "rhs_uniform_flora_patchless", "U_B_CombatUniform_mcam", "U_I_CombatUniform", "rhs_uniform_vdv_flora", "U_B_HeliPilotCoveralls", "U_I_pilotCoveralls", "rhs_uniform_invisible", "rhs_uniform_mvd_izlom", "U_O_V_Soldier_Viper_F", "U_B_GEN_Commander_F", "rhs_uniform_flora", "rhs_uniform_FROG01_m81", "rhs_uniform_cu_ucp", "U_I_CombatUniform_shortsleeve", "rhs_uniform_flora_patchless_alt", "rhs_uniform_flora", "rhs_chdkz_uniform_1", "U_I_HeliPilotCoveralls", "rhs_uniform_df15", "rhs_uniform_emr_patchless", "U_O_V_Soldier_Viper_F", "rhs_uniform_invisible", "U_O_SpecopsUniform_ocamo", "rhs_uniform_vmf_flora", "rhs_uniform_df15_tan", "U_B_CTRG_Soldier_urb_1_F", "rhs_uniform_vmf_flora", "rhs_uniform_cu_ucp_82nd", "rhs_chdkz_uniform_5", "rhs_uniform_emr_patchless", "rhs_uniform_df15_tan", "rhs_chdkz_uniform_5", "U_O_PilotCoveralls", "rhs_uniform_cu_ocp_10th", "U_O_OfficerUniform_ocamo", "U_B_CombatUniform_mcam_tshirt", "rhs_chdkz_uniform_1", "rhs_uniform_vdv_flora", "rhs_uniform_emr_des_patchless", "U_O_T_Officer_F", "rhs_chdkz_uniform_2", "rhs_uniform_flora_patchless", "rhs_uniform_vdv_emr", "U_O_CombatUniform_ocamo", "U_B_CTRG_Soldier_urb_1_F", "rhs_uniform_vdv_mflora", "U_O_Wetsuit", "U_O_SpecopsUniform_blk", "U_B_HeliPilotCoveralls", "rhs_uniform_vmf_flora_subdued", "rhs_uniform_emr_des_patchless", "U_I_pilotCoveralls", "rhs_uniform_rva_flora", "rhs_uniform_emr_patchless", "rhs_uniform_emr_des_patchless", "rhs_uniform_vmf_flora_subdued", "rhs_chdkz_uniform_2", "U_O_CombatUniform_oucamo", "rhs_chdkz_uniform_2", "rhs_uniform_cu_ocp_101st", "rhs_uniform_df15_tan", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_3_F", "U_B_SpecopsUniform_sgg", "rhs_chdkz_uniform_1", "U_B_PilotCoveralls", "rhs_uniform_mflora_patchless", "U_I_CombatUniform_shortsleeve", "rhs_uniform_msv_emr", "U_I_CombatUniform_shortsleeve", "rhs_uniform_flora_patchless", "U_B_CTRG_Soldier_3_F", "rhs_uniform_cu_ocp_1stcav", "rhs_uniform_emr_des_patchless", "U_O_V_Soldier_Viper_hex_F", "rhs_uniform_FROG01_m81", "U_B_CTRG_Soldier_2_F", "U_O_OfficerUniform_ocamo", "U_B_SpecopsUniform_sgg", "U_I_Wetsuit", "rhs_uniform_m88_patchless", "rhs_uniform_msv_emr", "rhs_chdkz_uniform_1", "U_B_CTRG_3", "rhs_uniform_emr_patchless", "U_B_CTRG_2", "rhs_uniform_cu_ucp_10th", "rhs_chdkz_uniform_3", "rhs_uniform_vdv_emr_des", "rhs_uniform_FROG01_d", "rhs_uniform_cu_ucp", "rhs_uniform_gorka_r_g", "rhs_uniform_mvd_izlom", "U_O_V_Soldier_Viper_hex_F", "rhs_chdkz_uniform_3", "U_O_Wetsuit", "U_O_Wetsuit", "U_B_CTRG_Soldier_3_F", "rhs_uniform_mflora_patchless", "rhs_uniform_vdv_mflora", "rhs_uniform_cu_ocp", "rhs_uniform_vdv_emr_des", "U_B_T_Soldier_SL_F", "U_I_OfficerUniform", "rhs_uniform_vdv_emr_des", "rhs_uniform_cu_ucp_10th", "rhs_chdkz_uniform_1", "U_I_CombatUniform", "rhs_uniform_vdv_flora", "rhs_uniform_FROG01_wd", "rhs_uniform_flora", "rhs_uniform_gorka_r_y", "rhs_uniform_msv_emr", "U_B_CTRG_Soldier_F", "rhs_uniform_vdv_flora", "rhs_uniform_flora_patchless_alt", "rhs_uniform_cu_ocp_101st", "rhs_chdkz_uniform_2", "rhs_uniform_cu_ocp_82nd", "U_B_Wetsuit", "rhs_uniform_gorka_r_g", "U_I_Wetsuit", "rhs_uniform_vmf_flora", "rhs_uniform_mvd_izlom", "U_B_CombatUniform_mcam_tshirt", "U_B_Wetsuit", "rhs_uniform_rva_flora", "rhs_uniform_msv_emr", "U_B_CombatUniform_mcam_vest", "rhs_uniform_gorka_r_y", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_3_F", "rhs_chdkz_uniform_3", "U_B_SpecopsUniform_sgg", "U_B_T_Soldier_AR_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_F", "rhs_uniform_rva_flora", "U_B_CTRG_2", "U_B_GEN_Commander_F", "rhs_chdkz_uniform_4", "rhs_uniform_vdv_emr", "rhs_uniform_gorka_r_g", "rhs_uniform_cu_ocp_1stcav", "rhs_uniform_vdv_flora", "rhs_uniform_rva_flora", "rhs_uniform_cu_ucp_1stcav", "rhs_uniform_cu_ucp", "U_O_SpecopsUniform_blk", "U_O_V_Soldier_Viper_F", "U_B_CTRG_Soldier_2_F", "rhs_uniform_vmf_flora", "rhs_uniform_gorka_r_g", "rhs_uniform_vdv_emr_des", "rhs_uniform_rva_flora", "rhs_uniform_emr_des_patchless", "rhs_uniform_flora_patchless_alt", "U_B_CTRG_Soldier_urb_3_F", "rhs_uniform_mflora_patchless", "rhs_uniform_mvd_izlom", "U_O_SpecopsUniform_ocamo", "rhs_uniform_vmf_flora_subdued", "rhs_uniform_df15", "rhs_uniform_FROG01_d", "rhs_uniform_cu_ocp", "rhs_uniform_cu_ucp_1stcav", "rhs_uniform_m88_patchless", "rhs_uniform_rva_flora", "rhs_uniform_vmf_flora_subdued", "U_I_OfficerUniform", "rhs_uniform_df15", "rhs_uniform_vdv_flora", "U_B_CTRG_Soldier_urb_1_F", "rhs_uniform_m88_patchless", "rhs_uniform_invisible", "U_I_OfficerUniform", "rhs_uniform_cu_ucp_10th", "rhs_uniform_flora_patchless_alt", "rhs_chdkz_uniform_5", "rhs_uniform_vdv_emr", "U_O_CombatUniform_oucamo", "rhs_uniform_cu_ucp_101st", "U_B_HeliPilotCoveralls", "rhs_uniform_df15", "rhs_chdkz_uniform_4", "rhs_uniform_invisible", "U_B_CombatUniform_mcam_tshirt", "rhs_uniform_vmf_flora_subdued", "U_B_T_Soldier_SL_F", "rhs_chdkz_uniform_4", "U_B_GEN_Soldier_F"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F              = 4.35%
			B_Bergen_dgtl_F              = 4.35%
			B_Bergen_hex_F               = 4.35%
			B_Bergen_mcamo_F             = 4.35%
			B_Bergen_tna_F               = 4.35%
			B_Carryall_mcamo             = 8.70%
			B_Carryall_ocamo             = 8.70%
			B_Carryall_oucamo            = 8.70%
			B_Carryall_khk               = 8.70%
			B_Carryall_oli               = 8.70%
			B_Carryall_cbr               = 8.70%
			B_Carryall_ghex_F            = 8.70%
			rhsusf_assault_eagleaiii_coy = 4.35%
			rhsusf_assault_eagleaiii_ocp = 4.35%
			rhsusf_assault_eagleaiii_ucp = 4.35%
			rhsusf_falconii              = 4.35%
		*/
		MilitaryBackpacks[] = {"B_Carryall_mcamo", "B_Bergen_mcamo_F", "B_Bergen_tna_F", "B_Carryall_oli", "B_Carryall_ocamo", "B_Carryall_khk", "B_Carryall_oucamo", "B_Carryall_oucamo", "B_Bergen_hex_F", "B_Bergen_dgtl_F", "rhsusf_falconii", "B_Carryall_ghex_F", "B_Carryall_oli", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_mcamo", "rhsusf_assault_eagleaiii_ucp", "B_Bergen_Base_F", "rhsusf_assault_eagleaiii_coy", "rhsusf_assault_eagleaiii_ocp", "B_Carryall_ghex_F", "B_Carryall_cbr", "B_Carryall_ocamo"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG                   = 0.44%
			V_PlateCarrierL_CTRG                   = 0.44%
			V_PlateCarrier1_blk                    = 0.88%
			V_PlateCarrier1_rgr                    = 0.88%
			V_PlateCarrier2_rgr                    = 0.88%
			V_PlateCarrier3_rgr                    = 0.88%
			V_PlateCarrierGL_rgr                   = 0.88%
			V_PlateCarrierIA1_dgtl                 = 0.88%
			V_PlateCarrierIA2_dgtl                 = 0.88%
			V_PlateCarrierIAGL_dgtl                = 0.88%
			V_PlateCarrierSpec_rgr                 = 0.88%
			rhsusf_iotv_ocp                        = 0.44%
			rhsusf_iotv_ocp_Grenadier              = 0.44%
			rhsusf_iotv_ocp_Medic                  = 0.44%
			rhsusf_iotv_ocp_Repair                 = 0.44%
			rhsusf_iotv_ocp_Rifleman               = 0.44%
			rhsusf_iotv_ocp_SAW                    = 0.44%
			rhsusf_iotv_ocp_Squadleader            = 0.44%
			rhsusf_iotv_ocp_Teamleader             = 0.44%
			rhsusf_iotv_ucp                        = 0.44%
			rhsusf_iotv_ucp_Grenadier              = 0.44%
			rhsusf_iotv_ucp_Medic                  = 0.44%
			rhsusf_iotv_ucp_Repair                 = 0.44%
			rhsusf_iotv_ucp_Rifleman               = 0.44%
			rhsusf_iotv_ucp_SAW                    = 0.44%
			rhsusf_iotv_ucp_Squadleader            = 0.44%
			rhsusf_iotv_ucp_Teamleader             = 0.44%
			rhsusf_spc                             = 0.44%
			rhsusf_spc_corpsman                    = 0.44%
			rhsusf_spc_crewman                     = 0.44%
			rhsusf_spc_iar                         = 0.44%
			rhsusf_spc_light                       = 0.44%
			rhsusf_spc_marksman                    = 0.44%
			rhsusf_spc_mg                          = 0.44%
			rhsusf_spc_rifleman                    = 0.44%
			rhsusf_spc_squadleader                 = 0.44%
			rhsusf_spc_teamleader                  = 0.44%
			rhs_6b13                               = 0.88%
			rhs_6b13_6sh92                         = 0.88%
			rhs_6b13_6sh92_headset_mapcase         = 0.88%
			rhs_6b13_6sh92_radio                   = 0.88%
			rhs_6b13_6sh92_vog                     = 0.88%
			rhs_6b13_crewofficer                   = 0.88%
			rhs_6b13_EMR                           = 0.88%
			rhs_6b13_EMR_6sh92                     = 0.88%
			rhs_6b13_EMR_6sh92_headset_mapcase     = 0.88%
			rhs_6b13_EMR_6sh92_radio               = 0.88%
			rhs_6b13_EMR_6sh92_vog                 = 0.88%
			rhs_6b13_Flora                         = 0.88%
			rhs_6b13_Flora_6sh92                   = 0.88%
			rhs_6b13_Flora_6sh92_headset_mapcase   = 0.88%
			rhs_6b13_Flora_6sh92_radio             = 0.88%
			rhs_6b13_Flora_6sh92_vog               = 0.88%
			rhs_6b13_Flora_crewofficer             = 0.88%
			rhs_6b23                               = 0.88%
			rhs_6b23_6sh116                        = 0.88%
			rhs_6b23_6sh116_flora                  = 0.88%
			rhs_6b23_6sh116_od                     = 0.88%
			rhs_6b23_6sh116_vog                    = 0.88%
			rhs_6b23_6sh116_vog_flora              = 0.88%
			rhs_6b23_6sh116_vog_od                 = 0.88%
			rhs_6b23_6sh92                         = 0.88%
			rhs_6b23_6sh92_headset                 = 0.88%
			rhs_6b23_6sh92_headset_mapcase         = 0.88%
			rhs_6b23_6sh92_radio                   = 0.88%
			rhs_6b23_6sh92_vog                     = 0.88%
			rhs_6b23_6sh92_vog_headset             = 0.88%
			rhs_6b23_crew                          = 0.88%
			rhs_6b23_crewofficer                   = 0.88%
			rhs_6b23_digi                          = 0.88%
			rhs_6b23_digi_6sh92                    = 0.88%
			rhs_6b23_digi_6sh92_headset            = 0.88%
			rhs_6b23_digi_6sh92_headset_mapcase    = 0.88%
			rhs_6b23_digi_6sh92_headset_spetsnaz   = 0.88%
			rhs_6b23_digi_6sh92_radio              = 0.88%
			rhs_6b23_digi_6sh92_Spetsnaz           = 0.88%
			rhs_6b23_digi_6sh92_spetsnaz2          = 0.88%
			rhs_6b23_digi_6sh92_vog                = 0.88%
			rhs_6b23_digi_6sh92_vog_headset        = 0.88%
			rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz = 0.88%
			rhs_6b23_digi_6sh92_Vog_Spetsnaz       = 0.88%
			rhs_6b23_digi_crew                     = 0.88%
			rhs_6b23_digi_crewofficer              = 0.88%
			rhs_6b23_digi_engineer                 = 0.88%
			rhs_6b23_digi_medic                    = 0.88%
			rhs_6b23_digi_rifleman                 = 0.88%
			rhs_6b23_digi_sniper                   = 0.88%
			rhs_6b23_digi_vydra_3m                 = 0.88%
			rhs_6b23_engineer                      = 0.88%
			rhs_6b23_medic                         = 0.88%
			rhs_6b23_ML                            = 0.88%
			rhs_6b23_ML_6sh92                      = 0.88%
			rhs_6b23_ML_6sh92_headset              = 0.88%
			rhs_6b23_ML_6sh92_headset_mapcase      = 0.88%
			rhs_6b23_ML_6sh92_radio                = 0.88%
			rhs_6b23_ML_6sh92_vog                  = 0.88%
			rhs_6b23_ML_6sh92_vog_headset          = 0.88%
			rhs_6b23_ML_crew                       = 0.88%
			rhs_6b23_ML_crewofficer                = 0.88%
			rhs_6b23_ML_engineer                   = 0.88%
			rhs_6b23_ML_medic                      = 0.88%
			rhs_6b23_ML_rifleman                   = 0.88%
			rhs_6b23_ML_sniper                     = 0.88%
			rhs_6b23_ML_vydra_3m                   = 0.88%
			rhs_6b23_rifleman                      = 0.88%
			rhs_6b23_sniper                        = 0.88%
			rhs_6b23_vydra_3m                      = 0.88%
			rhs_6b43                               = 0.88%
			rhs_6sh46                              = 0.88%
			rhs_6sh92                              = 0.88%
			rhs_6sh92_digi                         = 0.88%
			rhs_6sh92_digi_headset                 = 0.88%
			rhs_6sh92_digi_radio                   = 0.88%
			rhs_6sh92_digi_vog                     = 0.88%
			rhs_6sh92_digi_vog_headset             = 0.88%
			rhs_6sh92_headset                      = 0.88%
			rhs_6sh92_radio                        = 0.88%
			rhs_6sh92_vog                          = 0.88%
			rhs_6sh92_vog_headset                  = 0.88%
			rhs_6sh92_vsr                          = 0.88%
			rhs_6sh92_vsr_headset                  = 0.88%
			rhs_6sh92_vsr_radio                    = 0.88%
			rhs_6sh92_vsr_vog                      = 0.88%
			rhs_6sh92_vsr_vog_headset              = 0.88%
			rhs_vest_commander                     = 0.88%
			rhs_vest_pistol_holster                = 0.88%
			rhs_vydra_3m                           = 0.88%
		*/
		MilitaryVests[] = {"rhs_6b13_EMR_6sh92_vog", "rhsusf_spc_squadleader", "rhs_6sh92_digi_vog", "rhsusf_spc_rifleman", "rhsusf_spc_teamleader", "rhs_6sh92_radio", "rhs_6b23_digi", "rhs_6b23_digi_6sh92_headset_spetsnaz", "rhs_6sh92_digi_vog_headset", "rhsusf_spc_mg", "rhs_6b23_digi_6sh92_radio", "V_PlateCarrierGL_rgr", "rhsusf_iotv_ocp_Teamleader", "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz", "rhs_6b23_digi_6sh92_vog", "rhsusf_iotv_ucp_Squadleader", "rhs_6b13_6sh92_radio", "rhs_6b23_6sh116_flora", "rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz", "rhs_6b23_digi", "V_PlateCarrier1_rgr", "rhs_6b13_crewofficer", "rhs_6b23_digi_engineer", "rhs_6b23_6sh92", "rhs_6b23_ML_crewofficer", "V_PlateCarrierIAGL_dgtl", "rhs_6b13_EMR_6sh92", "V_PlateCarrier1_blk", "rhs_6b23_6sh116_od", "rhs_6b23_6sh92_radio", "rhs_6sh92_digi_headset", "rhs_6b13_6sh92", "rhsusf_iotv_ucp_SAW", "rhs_6sh92_digi_vog", "rhs_6sh92_vsr_radio", "rhs_6b23_vydra_3m", "rhs_6b13_Flora_6sh92_vog", "rhs_6b13_EMR_6sh92_radio", "rhs_6b23_digi_6sh92_spetsnaz2", "rhs_6sh92_digi", "rhs_6b13_EMR_6sh92_radio", "rhs_6b23_digi_6sh92_Vog_Spetsnaz", "rhs_6sh92_vsr_radio", "rhsusf_iotv_ucp_Repair", "rhs_6b13_Flora_crewofficer", "rhs_6b23_6sh116_flora", "rhs_6b23_ML_crew", "rhs_6b13_EMR_6sh92_vog", "rhs_6b23_digi_medic", "rhsusf_iotv_ocp", "rhsusf_spc_crewman", "rhs_6b23_digi_engineer", "rhs_6b23_ML_engineer", "rhs_6sh92_vsr", "rhs_6sh92_digi_headset", "V_PlateCarrier1_blk", "rhs_6b23_digi_sniper", "rhs_6b23_sniper", "rhs_6b13_Flora_6sh92_headset_mapcase", "rhs_6b23_digi_6sh92_Spetsnaz", "rhs_6b23_ML_sniper", "rhs_6b23_digi_6sh92_headset_mapcase", "rhs_6b23_crew", "rhs_6b13_6sh92_radio", "rhs_6b23_6sh92_headset", "rhs_6b23_6sh116_vog_flora", "rhs_6b23_digi_6sh92", "rhs_6sh92", "rhs_6sh92_vsr_vog", "rhs_6b23_ML_6sh92_headset", "rhs_6b23_digi_crew", "rhs_6b23_6sh116", "rhsusf_iotv_ucp", "rhs_6b23_medic", "rhs_6b43", "rhs_6b13", "rhsusf_spc", "V_PlateCarrierL_CTRG", "rhs_6b23_ML_6sh92", "rhs_6sh92_headset", "rhs_6b23_ML_engineer", "rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b13_6sh92_vog", "rhsusf_spc_light", "rhsusf_spc_corpsman", "rhs_6b23_6sh116_vog", "rhs_6b23_ML_rifleman", "rhsusf_iotv_ucp_Grenadier", "rhs_6b23_digi_vydra_3m", "rhs_6sh92_vsr_vog_headset", "rhs_6b23_digi_medic", "rhs_6b23_ML_6sh92", "rhsusf_iotv_ocp_Rifleman", "rhs_vest_commander", "rhs_6sh92", "rhs_6b23_6sh92_radio", "rhs_6sh92_vog", "V_PlateCarrierIA2_dgtl", "rhs_6b23_digi_6sh92_radio", "rhs_6sh92_vog", "rhs_6b23_ML_crew", "rhsusf_spc_iar", "rhs_6sh92_digi_vog_headset", "rhs_6b23_rifleman", "rhs_6b23_6sh116_vog_od", "V_PlateCarrierSpec_rgr", "rhs_6b23_ML_rifleman", "rhs_6b13_EMR_6sh92_headset_mapcase", "rhs_6sh92_vsr_vog", "rhsusf_iotv_ocp_Medic", "V_PlateCarrierIA1_dgtl", "rhs_6b23_digi_6sh92_headset", "rhs_6b13_Flora_6sh92", "rhs_6b23_6sh92_vog_headset", "rhs_6b13_Flora_6sh92_vog", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ucp_Rifleman", "rhs_6b23_digi_6sh92", "rhs_6b23_digi_crew", "rhs_6sh92_radio", "rhs_6b23_ML", "V_PlateCarrier3_rgr", "rhs_6b23_ML_vydra_3m", "rhsusf_spc_marksman", "rhs_6b23_sniper", "rhs_6b23_medic", "rhs_6b23_6sh116_vog_flora", "rhs_6b23_digi_crewofficer", "rhs_6b23_digi_6sh92_headset_mapcase", "rhs_6b13_6sh92_headset_mapcase", "rhs_6b23_crew", "rhs_6b13_Flora_crewofficer", "rhs_6b23_digi_6sh92_vog", "rhs_6b13_6sh92_vog", "rhs_6b23_ML", "rhs_6b13_EMR", "rhs_6b23_6sh92_headset", "rhs_6b23_ML_6sh92_headset", "rhs_6b23_ML_crewofficer", "rhs_6b13_crewofficer", "rhs_6b23_vydra_3m", "V_PlateCarrier3_rgr", "rhs_6b23_engineer", "rhs_6b13_EMR_6sh92", "rhs_6sh92_vsr_vog_headset", "rhs_6b23_digi_6sh92_headset_spetsnaz", "rhs_6sh92_vsr", "rhs_6b23_digi_rifleman", "rhs_vydra_3m", "rhs_6b23_6sh116", "rhsusf_iotv_ocp_Repair", "rhs_6b23_ML_medic", "rhs_6sh92_vog_headset", "rhs_6b23_ML_6sh92_vog_headset", "rhs_6b23_6sh92", "rhs_6b23_6sh116_vog", "rhs_6b23_digi_6sh92_vog_headset", "rhs_6b23_ML_6sh92_vog", "rhs_6b23_6sh92_vog", "rhs_6b13", "rhs_6b23_ML_6sh92_vog", "rhs_6sh92_digi", "rhs_6b23_6sh92_vog_headset", "rhs_6b23_ML_6sh92_radio", "rhs_6b23_6sh92_vog", "rhs_6sh92_vsr_headset", "rhs_6b23_rifleman", "V_PlateCarrier2_rgr", "rhs_6b23_engineer", "rhs_6b23_crewofficer", "rhs_6b23_digi_6sh92_Vog_Spetsnaz", "rhs_6b13_Flora_6sh92_radio", "rhs_6b13_Flora_6sh92", "rhs_6b23_digi_6sh92_spetsnaz2", "rhs_6b23_digi_rifleman", "rhsusf_iotv_ucp_Teamleader", "rhs_6b23_digi_6sh92_headset", "rhs_6sh92_vog_headset", "rhs_6b23_ML_vydra_3m", "rhs_6b23_digi_6sh92_Spetsnaz", "rhs_6b23_ML_medic", "rhs_6sh92_digi_radio", "V_PlateCarrier1_rgr", "rhs_vest_commander", "rhs_6b13_Flora", "rhs_6b23", "V_PlateCarrierSpec_rgr", "rhs_6b23_digi_6sh92_vog_headset", "rhs_6b23_6sh116_od", "rhs_6b23_digi_crewofficer", "V_PlateCarrierIA2_dgtl", "rhs_vest_pistol_holster", "rhs_6b13_Flora", "rhs_6b23_ML_6sh92_radio", "rhsusf_iotv_ocp_Grenadier", "rhs_6b13_EMR", "rhs_vest_pistol_holster", "V_PlateCarrierGL_rgr", "rhs_6b23_ML_6sh92_vog_headset", "rhs_6b23", "rhs_6b23_6sh92_headset_mapcase", "rhs_6b13_Flora_6sh92_radio", "rhs_6b13_6sh92", "V_PlateCarrierH_CTRG", "V_PlateCarrierIAGL_dgtl", "rhs_6b23_crewofficer", "rhs_6b43", "rhs_6b23_ML_sniper", "rhs_6b13_Flora_6sh92_headset_mapcase", "V_PlateCarrierIA1_dgtl", "rhs_6b13_EMR_6sh92_headset_mapcase", "rhs_6sh46", "rhsusf_iotv_ucp_Medic", "rhs_6sh92_vsr_headset", "rhs_vydra_3m", "rhs_6b23_digi_vydra_3m", "rhs_6sh46", "rhs_6sh92_digi_radio", "V_PlateCarrier2_rgr", "rhs_6b23_6sh92_headset_mapcase", "rhs_6sh92_headset", "rhs_6b13_6sh92_headset_mapcase", "rhs_6b23_6sh116_vog_od", "rhsusf_iotv_ocp_SAW", "rhs_6b23_digi_sniper"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B                              = 0.21%
			H_CrewHelmetHeli_I                              = 0.21%
			H_CrewHelmetHeli_O                              = 0.21%
			H_HelmetB_camo                                  = 0.21%
			H_HelmetCrew_B                                  = 0.21%
			H_HelmetCrew_I                                  = 0.21%
			H_HelmetCrew_O                                  = 0.21%
			H_HelmetLeaderO_ocamo                           = 0.21%
			H_HelmetLeaderO_oucamo                          = 0.21%
			H_HelmetO_ghex_F                                = 0.21%
			H_HelmetO_ocamo                                 = 0.21%
			H_HelmetO_oucamo                                = 0.21%
			H_HelmetSpecO_blk                               = 0.21%
			H_HelmetSpecO_ocamo                             = 0.21%
			H_PilotHelmetFighter_B                          = 0.21%
			H_PilotHelmetFighter_I                          = 0.21%
			H_PilotHelmetFighter_O                          = 0.21%
			H_PilotHelmetHeli_B                             = 0.21%
			H_PilotHelmetHeli_I                             = 0.21%
			H_PilotHelmetHeli_O                             = 0.21%
			H_BandMask_demon                                = 0.43%
			H_BandMask_khk                                  = 0.43%
			H_BandMask_reaper                               = 0.43%
			H_Beret_gen_F                                   = 0.43%
			H_Helmet_Skate                                  = 0.43%
			H_HelmetB_black                                 = 0.43%
			H_HelmetB_desert                                = 0.43%
			H_HelmetB_Enh_tna_F                             = 0.43%
			H_HelmetB_grass                                 = 0.43%
			H_HelmetB_light_black                           = 0.43%
			H_HelmetB_light_desert                          = 0.43%
			H_HelmetB_light_grass                           = 0.43%
			H_HelmetB_light_sand                            = 0.43%
			H_HelmetB_light_snakeskin                       = 0.43%
			H_HelmetB_Light_tna_F                           = 0.43%
			H_HelmetB_sand                                  = 0.43%
			H_HelmetB_snakeskin                             = 0.43%
			H_HelmetB_TI_tna_F                              = 0.43%
			H_HelmetB_tna_F                                 = 0.43%
			H_HelmetCrew_O_ghex_F                           = 0.43%
			H_HelmetIA_camo                                 = 0.43%
			H_HelmetIA_net                                  = 0.43%
			H_HelmetLeaderO_ghex_F                          = 0.43%
			H_HelmetSpecO_ghex_F                            = 0.43%
			H_HelmetB                                       = 0.64%
			H_HelmetB_light                                 = 0.64%
			H_HelmetB_paint                                 = 0.64%
			H_HelmetB_plain_blk                             = 0.64%
			H_HelmetIA                                      = 0.64%
			H_HelmetSpecB                                   = 0.64%
			H_HelmetSpecB_blk                               = 0.64%
			H_HelmetSpecB_paint1                            = 0.64%
			H_HelmetSpecB_paint2                            = 0.64%
			Exile_Headgear_GasMask                          = 0.21%
			H_MilCap_blue                                   = 0.43%
			H_MilCap_dgtl                                   = 0.43%
			H_MilCap_mcamo                                  = 0.43%
			H_MilCap_ocamo                                  = 0.43%
			H_MilCap_oucamo                                 = 0.43%
			H_MilCap_rucamo                                 = 0.43%
			rhs_Booniehat_m81                               = 0.43%
			rhs_Booniehat_marpatd                           = 0.43%
			rhs_Booniehat_marpatwd                          = 0.43%
			rhs_Booniehat_ocp                               = 0.43%
			rhs_Booniehat_ucp                               = 0.43%
			rhsusf_Bowman                                   = 0.43%
			rhsusf_ach_bare                                 = 0.43%
			rhsusf_ach_bare_des                             = 0.43%
			rhsusf_ach_bare_des_ess                         = 0.43%
			rhsusf_ach_bare_des_headset                     = 0.43%
			rhsusf_ach_bare_des_headset_ess                 = 0.43%
			rhsusf_ach_bare_ess                             = 0.43%
			rhsusf_ach_bare_headset                         = 0.43%
			rhsusf_ach_bare_headset_ess                     = 0.43%
			rhsusf_ach_bare_semi                            = 0.43%
			rhsusf_ach_bare_semi_ess                        = 0.43%
			rhsusf_ach_bare_semi_headset                    = 0.43%
			rhsusf_ach_bare_semi_headset_ess                = 0.43%
			rhsusf_ach_bare_tan                             = 0.43%
			rhsusf_ach_bare_tan_ess                         = 0.43%
			rhsusf_ach_bare_tan_headset                     = 0.43%
			rhsusf_ach_bare_tan_headset_ess                 = 0.43%
			rhsusf_ach_bare_wood                            = 0.43%
			rhsusf_ach_bare_wood_ess                        = 0.43%
			rhsusf_ach_bare_wood_headset                    = 0.43%
			rhsusf_ach_bare_wood_headset_ess                = 0.43%
			rhsusf_ach_helmet_ESS_ocp                       = 0.43%
			rhsusf_ach_helmet_ESS_ucp                       = 0.43%
			rhsusf_ach_helmet_M81                           = 0.43%
			rhsusf_ach_helmet_camo_ocp                      = 0.43%
			rhsusf_ach_helmet_headset_ess_ocp               = 0.43%
			rhsusf_ach_helmet_headset_ess_ucp               = 0.43%
			rhsusf_ach_helmet_headset_ocp                   = 0.43%
			rhsusf_ach_helmet_headset_ucp                   = 0.43%
			rhsusf_ach_helmet_ocp                           = 0.43%
			rhsusf_ach_helmet_ocp_norotos                   = 0.43%
			rhsusf_ach_helmet_ucp                           = 0.43%
			rhsusf_ach_helmet_ucp_norotos                   = 0.43%
			rhsusf_bowman_cap                               = 0.43%
			rhsusf_lwh_helmet_M1942                         = 0.43%
			rhsusf_lwh_helmet_marpatd                       = 0.43%
			rhsusf_lwh_helmet_marpatd_ess                   = 0.43%
			rhsusf_lwh_helmet_marpatd_headset               = 0.43%
			rhsusf_lwh_helmet_marpatwd                      = 0.43%
			rhsusf_lwh_helmet_marpatwd_ess                  = 0.43%
			rhsusf_lwh_helmet_marpatwd_headset              = 0.43%
			rhsusf_mich_bare                                = 0.43%
			rhsusf_mich_bare_alt                            = 0.43%
			rhsusf_mich_bare_alt_semi                       = 0.43%
			rhsusf_mich_bare_alt_tan                        = 0.43%
			rhsusf_mich_bare_headset                        = 0.43%
			rhsusf_mich_bare_norotos                        = 0.43%
			rhsusf_mich_bare_norotos_alt                    = 0.43%
			rhsusf_mich_bare_norotos_alt_headset            = 0.43%
			rhsusf_mich_bare_norotos_alt_semi               = 0.43%
			rhsusf_mich_bare_norotos_alt_semi_headset       = 0.43%
			rhsusf_mich_bare_norotos_alt_tan                = 0.43%
			rhsusf_mich_bare_norotos_alt_tan_headset        = 0.43%
			rhsusf_mich_bare_norotos_arc                    = 0.43%
			rhsusf_mich_bare_norotos_arc_alt                = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_headset        = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_semi           = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_semi_headset   = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_tan            = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_tan_headset    = 0.43%
			rhsusf_mich_bare_norotos_arc_headset            = 0.43%
			rhsusf_mich_bare_norotos_arc_semi               = 0.43%
			rhsusf_mich_bare_norotos_arc_semi_headset       = 0.43%
			rhsusf_mich_bare_norotos_arc_tan                = 0.43%
			rhsusf_mich_bare_norotos_headset                = 0.43%
			rhsusf_mich_bare_norotos_semi                   = 0.43%
			rhsusf_mich_bare_norotos_semi_headset           = 0.43%
			rhsusf_mich_bare_norotos_tan                    = 0.43%
			rhsusf_mich_bare_norotos_tan_headset            = 0.43%
			rhsusf_mich_bare_semi                           = 0.43%
			rhsusf_mich_bare_semi_headset                   = 0.43%
			rhsusf_mich_bare_tan                            = 0.43%
			rhsusf_mich_bare_tan_headset                    = 0.43%
			rhsusf_mich_helmet_marpatdItemMap               = 0.43%
			rhsusf_mich_helmet_marpatd_altItemMap           = 0.43%
			rhsusf_mich_helmet_marpatd_alt_headset          = 0.43%
			rhsusf_mich_helmet_marpatd_headset              = 0.43%
			rhsusf_mich_helmet_marpatd_norotos              = 0.43%
			rhsusf_mich_helmet_marpatd_norotos_arc          = 0.43%
			rhsusf_mich_helmet_marpatd_norotos_arc_headset  = 0.43%
			rhsusf_mich_helmet_marpatd_norotos_headset      = 0.43%
			rhsusf_mich_helmet_marpatwd                     = 0.43%
			rhsusf_mich_helmet_marpatwd_alt                 = 0.43%
			rhsusf_mich_helmet_marpatwd_alt_headset         = 0.43%
			rhsusf_mich_helmet_marpatwd_headset             = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos             = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos_arc         = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos_arc_headset = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos_headset     = 0.43%
			rhsusf_opscore_bk                               = 0.43%
			rhsusf_opscore_coy_cover                        = 0.43%
			rhsusf_opscore_coy_cover_pelt                   = 0.43%
			rhsusf_opscore_fg                               = 0.43%
			rhsusf_opscore_mc_cover                         = 0.43%
			rhsusf_opscore_mc_cover_pelt                    = 0.43%
			rhsusf_opscore_rg_cover                         = 0.43%
			rhsusf_opscore_rg_cover_pelt                    = 0.43%
			rhsusf_opscore_ut                               = 0.43%
			rhs_6b26_green                                  = 0.85%
			rhs_6b26_bala_green                             = 0.85%
			rhs_6b26_ess_green                              = 0.85%
			rhs_6b26_ess_bala_green                         = 0.85%
			rhs_6b26                                        = 0.85%
			rhs_6b26_bala                                   = 0.85%
			rhs_6b26_ess                                    = 0.85%
			rhs_6b26_ess_bala                               = 0.85%
			rhs_6b27m_green                                 = 0.85%
			rhs_6b27m_green_bala                            = 0.85%
			rhs_6b27m_green_ess                             = 0.85%
			rhs_6b27m_green_ess_bala                        = 0.85%
			rhs_6b27m_digi                                  = 0.85%
			rhs_6b27m_digi_bala                             = 0.85%
			rhs_6b27m_digi_ess                              = 0.85%
			rhs_6b27m_digi_ess_bala                         = 0.85%
			rhs_6b27m                                       = 0.85%
			rhs_6b27m_bala                                  = 0.85%
			rhs_6b27m_ess                                   = 0.85%
			rhs_6b27m_ess_bala                              = 0.85%
			rhs_6b27m_ml                                    = 0.85%
			rhs_6b27m_ml_bala                               = 0.85%
			rhs_6b27m_ml_ess                                = 0.85%
			rhs_6b27m_ML_ess_bala                           = 0.85%
			rhs_6b28_green                                  = 0.85%
			rhs_6b28_green_bala                             = 0.85%
			rhs_6b28_green_ess                              = 0.85%
			rhs_6b28_green_ess_bala                         = 0.85%
			rhs_6b28                                        = 0.85%
			rhs_6b28_bala                                   = 0.85%
			rhs_6b28_ess                                    = 0.85%
			rhs_6b28_ess_bala                               = 0.85%
			rhs_6b28_flora                                  = 0.85%
			rhs_6b28_flora_bala                             = 0.85%
			rhs_6b28_flora_ess                              = 0.85%
			rhs_6b28_flora_ess_bala                         = 0.85%
			rhs_Booniehat_digi                              = 0.85%
			rhs_Booniehat_flora                             = 0.85%
			rhs_ssh68                                       = 0.85%
		*/
		MilitaryHeadgear[] = {"rhsusf_opscore_ut", "rhsusf_mich_helmet_marpatd_norotos_arc", "H_HelmetB_desert", "rhs_6b28_green_ess", "rhs_6b28_green_ess", "rhs_6b28", "rhs_6b27m", "rhsusf_ach_bare_headset", "rhs_6b26", "H_HelmetB_tna_F", "rhsusf_mich_bare_norotos_tan", "H_HelmetB_light", "rhsusf_opscore_coy_cover_pelt", "H_HelmetIA", "rhs_6b28_flora_ess", "H_MilCap_oucamo", "rhsusf_mich_bare_tan", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_mich_bare_norotos_arc_alt", "H_MilCap_dgtl", "rhs_Booniehat_flora", "H_PilotHelmetFighter_O", "rhs_6b27m", "H_PilotHelmetFighter_B", "rhsusf_opscore_mc_cover_pelt", "rhs_6b26_green", "rhsusf_mich_helmet_marpatwd_norotos_headset", "H_HelmetB_TI_tna_F", "rhsusf_mich_bare_norotos_arc_tan", "rhsusf_mich_bare_semi_headset", "H_HelmetB_plain_blk", "rhs_Booniehat_marpatd", "Exile_Headgear_GasMask", "rhs_6b26_ess_bala_green", "rhs_6b27m_ML_ess_bala", "rhs_6b28_ess", "rhsusf_ach_helmet_ESS_ocp", "rhsusf_mich_bare_tan_headset", "H_PilotHelmetHeli_I", "rhsusf_mich_bare_norotos", "rhsusf_lwh_helmet_marpatd", "rhsusf_mich_bare_semi", "rhs_6b27m_ml_bala", "H_HelmetB_light_snakeskin", "rhs_6b26_ess_green", "rhsusf_ach_helmet_headset_ess_ocp", "rhsusf_ach_helmet_headset_ess_ocp", "rhsusf_mich_bare_norotos_alt_tan", "rhs_6b27m_bala", "rhs_6b27m_digi_ess", "H_HelmetB_paint", "rhsusf_mich_helmet_marpatd_altItemMap", "rhs_ssh68", "rhsusf_mich_bare_norotos_alt_headset", "H_HelmetSpecB_paint1", "rhsusf_ach_helmet_ucp", "H_HelmetSpecB_blk", "H_HelmetCrew_O_ghex_F", "rhsusf_mich_bare_norotos_alt_tan_headset", "H_MilCap_mcamo", "rhs_6b27m_green", "rhsusf_opscore_coy_cover", "H_HelmetIA_net", "rhsusf_mich_bare_norotos_alt", "rhs_6b28", "rhsusf_ach_bare_semi", "H_HelmetSpecB_paint2", "rhs_6b26_ess", "rhs_6b27m_digi_ess_bala", "rhs_6b28_green_ess", "rhsusf_ach_bare_des", "rhs_6b27m_ess_bala", "rhsusf_lwh_helmet_marpatd_headset", "rhsusf_ach_bare_wood_headset_ess", "rhs_6b26_bala_green", "rhsusf_Bowman", "rhs_6b28_ess", "H_HelmetSpecB_paint2", "rhsusf_ach_helmet_ucp", "rhsusf_mich_helmet_marpatwd", "H_HelmetSpecB_paint1", "rhsusf_mich_helmet_marpatd_norotos_arc_headset", "rhs_Booniehat_ucp", "rhsusf_ach_bare", "rhsusf_ach_bare_tan_headset", "rhsusf_opscore_fg", "rhsusf_mich_bare", "rhsusf_opscore_rg_cover", "rhs_Booniehat_m81", "H_HelmetO_ocamo", "rhsusf_mich_bare_norotos_arc_alt_semi", "rhs_6b28_ess_bala", "rhsusf_ach_helmet_camo_ocp", "rhsusf_mich_bare_norotos_alt_semi", "rhs_6b26_bala_green", "rhsusf_mich_helmet_marpatwd_alt", "H_HelmetB_TI_tna_F", "rhs_6b27m_ml", "rhs_6b28_flora_ess_bala", "rhs_6b27m_bala", "rhs_6b26_ess", "rhsusf_ach_helmet_ocp", "rhs_6b27m_ess", "rhs_6b28_ess", "rhsusf_mich_helmet_marpatwd_headset", "rhsusf_mich_bare_alt_tan", "rhsusf_mich_bare_norotos_headset", "rhsusf_ach_bare_tan_ess", "rhsusf_ach_helmet_headset_ucp", "rhs_6b28_flora_bala", "rhsusf_mich_bare_norotos_headset", "H_HelmetSpecB", "rhsusf_mich_bare_norotos_arc_alt_semi_headset", "rhs_6b28_green", "rhs_6b27m_digi", "rhsusf_ach_bare_semi_ess", "rhsusf_mich_bare_norotos_arc_headset", "H_HelmetSpecO_ghex_F", "rhsusf_ach_bare_tan_headset_ess", "rhsusf_opscore_ut", "rhs_6b26", "rhs_6b28_bala", "rhs_6b27m_green_ess", "H_BandMask_khk", "rhsusf_ach_helmet_ESS_ucp", "rhsusf_opscore_mc_cover", "rhs_6b26_ess_bala", "rhs_6b28_flora_bala", "rhs_Booniehat_digi", "rhs_6b27m_green_ess_bala", "rhsusf_ach_bare_semi", "rhs_6b28_flora", "rhsusf_mich_bare_norotos_arc_alt_tan", "rhs_6b27m_ml_bala", "rhsusf_opscore_coy_cover", "rhs_6b28_flora_ess_bala", "rhsusf_ach_bare_semi_headset", "rhs_6b26_ess_bala_green", "rhsusf_ach_helmet_M81", "rhs_Booniehat_ocp", "rhsusf_opscore_fg", "H_MilCap_oucamo", "rhs_6b28_ess_bala", "rhsusf_lwh_helmet_marpatwd_headset", "rhsusf_mich_bare_alt", "H_MilCap_dgtl", "H_HelmetB_tna_F", "rhsusf_ach_bare_tan_ess", "rhs_6b28_green", "rhsusf_lwh_helmet_marpatd_headset", "rhsusf_lwh_helmet_marpatwd_ess", "rhsusf_ach_helmet_ucp_norotos", "rhsusf_mich_bare_norotos_arc_headset", "rhsusf_ach_bare_wood_headset_ess", "rhsusf_mich_bare_alt_semi", "rhs_6b26_bala", "rhs_6b27m_digi_bala", "rhs_6b28_green_bala", "rhsusf_mich_bare_norotos_semi_headset", "rhs_ssh68", "rhs_6b28_green", "H_Beret_gen_F", "rhs_6b28_flora_ess", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_mich_bare_norotos_arc_alt_tan_headset", "H_Helmet_Skate", "H_HelmetB_light", "rhs_6b27m_green_bala", "rhs_6b26_ess_bala_green", "H_HelmetB_plain_blk", "H_HelmetB_grass", "H_HelmetB_Light_tna_F", "rhsusf_mich_helmet_marpatwd_alt_headset", "rhsusf_lwh_helmet_marpatwd_headset", "rhs_6b26_ess_bala", "rhs_Booniehat_flora", "rhsusf_ach_helmet_ocp_norotos", "rhs_6b27m_ess_bala", "rhsusf_mich_bare_headset", "rhsusf_mich_helmet_marpatd_norotos", "H_HelmetB_light_grass", "rhs_6b27m_green_ess", "rhsusf_mich_bare_norotos_arc_semi", "rhs_6b27m_digi_bala", "rhsusf_ach_bare_headset_ess", "rhs_6b27m_digi_bala", "H_MilCap_rucamo", "rhsusf_mich_helmet_marpatwd_norotos", "rhs_6b26_green", "rhs_6b28_green_ess_bala", "rhs_6b27m_ml_ess", "H_HelmetB_snakeskin", "H_HelmetSpecO_blk", "H_HelmetB_Enh_tna_F", "rhs_6b27m_green_bala", "rhs_6b27m_ml_bala", "rhs_6b26", "rhs_6b27m_digi_ess", "rhs_6b28_green_ess_bala", "rhsusf_mich_bare_norotos_arc_alt_tan_headset", "rhsusf_mich_bare_norotos_alt_headset", "rhsusf_ach_bare_des_headset", "rhs_6b27m_ml", "H_HelmetB_paint", "rhs_Booniehat_marpatwd", "rhsusf_mich_helmet_marpatd_norotos_headset", "rhs_Booniehat_m81", "H_HelmetLeaderO_ocamo", "rhs_6b26_bala_green", "rhs_6b27m_green_bala", "rhs_6b26_ess_green", "H_CrewHelmetHeli_B", "rhsusf_Bowman", "rhs_6b28_bala", "H_HelmetLeaderO_ghex_F", "rhsusf_ach_bare_wood_ess", "rhs_6b28_ess_bala", "rhs_6b27m_green_ess_bala", "rhsusf_mich_bare_norotos_arc_semi", "rhs_6b26_ess_bala_green", "rhsusf_mich_bare_alt_tan", "H_HelmetB_light_sand", "rhsusf_mich_helmet_marpatwd", "rhs_6b26_bala_green", "rhs_6b27m_ml", "rhsusf_ach_helmet_headset_ucp", "rhsusf_mich_bare_norotos_arc_semi_headset", "rhs_6b27m_ess_bala", "rhsusf_mich_bare_norotos_arc_alt_semi", "H_HelmetB_sand", "rhs_6b27m_green", "rhsusf_opscore_rg_cover", "rhsusf_mich_helmet_marpatd_alt_headset", "H_HelmetCrew_I", "rhs_6b27m_ml", "rhsusf_ach_bare_des_headset_ess", "rhs_6b26_ess", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_bare_alt_semi", "rhs_6b27m_green_ess_bala", "H_HelmetIA", "rhs_6b28_green_ess_bala", "rhs_6b26_ess_green", "rhsusf_ach_bare_semi_ess", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_helmet_marpatd_alt_headset", "H_HelmetO_oucamo", "H_MilCap_blue", "rhs_6b27m_ess_bala", "rhs_6b27m_ML_ess_bala", "rhs_6b27m_digi_ess", "H_HelmetB_grass", "rhsusf_ach_bare_des", "rhsusf_ach_helmet_ocp", "rhsusf_mich_helmet_marpatd_norotos_arc", "H_HelmetB_light_black", "rhsusf_mich_helmet_marpatd_altItemMap", "rhs_6b27m_digi_ess_bala", "rhs_6b27m_digi", "rhs_Booniehat_flora", "H_HelmetSpecB_blk", "rhs_6b27m_green", "rhsusf_ach_bare_tan", "rhs_6b26", "rhsusf_mich_bare_norotos_tan_headset", "rhsusf_lwh_helmet_marpatd_ess", "H_HelmetB_light_grass", "rhsusf_ach_helmet_ESS_ucp", "rhs_6b27m", "rhsusf_mich_helmet_marpatdItemMap", "H_HelmetSpecB_blk", "rhsusf_ach_bare_des_ess", "rhsusf_bowman_cap", "H_PilotHelmetFighter_I", "rhsusf_mich_bare_norotos_semi", "rhs_6b28_ess", "H_MilCap_blue", "rhs_Booniehat_marpatd", "H_HelmetO_ghex_F", "rhsusf_mich_bare_norotos_arc_alt_tan", "H_HelmetB_sand", "rhsusf_lwh_helmet_marpatd", "rhs_6b28_green_ess", "rhsusf_ach_bare_ess", "rhsusf_mich_bare_norotos_arc", "rhsusf_mich_bare_norotos_semi", "rhsusf_ach_helmet_headset_ess_ucp", "rhsusf_mich_helmet_marpatd_norotos_arc_headset", "rhs_6b26_ess_bala", "rhsusf_opscore_mc_cover", "rhs_6b28_bala", "H_HelmetB_paint", "H_Helmet_Skate", "rhsusf_ach_bare_wood_headset", "H_MilCap_ocamo", "rhs_6b26_green", "rhs_6b28_flora", "rhs_6b27m_ess", "rhsusf_mich_helmet_marpatwd_norotos", "H_MilCap_ocamo", "rhs_6b28_bala", "H_HelmetB", "rhs_6b27m_green_bala", "rhs_6b28_flora_bala", "rhs_ssh68", "rhs_Booniehat_digi", "rhs_6b26_ess", "H_BandMask_reaper", "rhsusf_mich_bare_alt", "rhsusf_ach_bare_ess", "rhs_6b27m_digi_ess_bala", "rhsusf_mich_bare_norotos_alt_semi", "rhsusf_ach_bare_des_headset_ess", "H_HelmetB_desert", "rhsusf_opscore_bk", "rhsusf_mich_bare_norotos_alt_semi_headset", "H_HelmetB_black", "rhs_6b28_green_bala", "H_HelmetB_light", "rhsusf_opscore_bk", "H_PilotHelmetHeli_B", "H_HelmetB_snakeskin", "rhsusf_mich_helmet_marpatd_headset", "rhs_6b27m_ess", "rhs_Booniehat_digi", "rhsusf_ach_bare_des_headset", "rhsusf_ach_helmet_M81", "rhsusf_mich_bare_norotos_arc_alt", "H_HelmetB_light_sand", "rhs_6b28_flora_bala", "rhs_Booniehat_flora", "rhsusf_lwh_helmet_marpatd_ess", "H_HelmetB_black", "rhsusf_ach_bare_tan_headset", "rhs_6b28_flora_ess_bala", "rhs_6b26_ess_bala", "rhs_6b27m_ess", "rhs_6b28", "H_HelmetSpecB", "H_HelmetCrew_B", "rhsusf_mich_helmet_marpatd_norotos", "rhsusf_mich_bare_norotos_alt_tan_headset", "rhs_6b28_ess_bala", "rhsusf_ach_helmet_ESS_ocp", "rhsusf_mich_helmet_marpatwd_headset", "rhsusf_ach_helmet_ucp_norotos", "rhsusf_mich_bare_norotos_arc", "rhs_Booniehat_digi", "H_HelmetB_plain_blk", "rhs_6b27m_ML_ess_bala", "rhsusf_mich_helmet_marpatwd_alt", "rhsusf_ach_bare_headset_ess", "H_HelmetSpecB", "H_PilotHelmetHeli_O", "rhsusf_mich_helmet_marpatd_norotos_headset", "rhs_6b26_bala", "rhsusf_ach_bare_des_ess", "rhsusf_ach_bare_wood", "rhsusf_ach_helmet_headset_ocp", "rhs_Booniehat_ocp", "rhs_6b27m_digi", "rhs_6b27m_ml_ess", "rhsusf_mich_helmet_marpatdItemMap", "rhs_6b28_flora_ess", "rhs_6b26_ess_green", "H_BandMask_demon", "rhs_6b28_flora", "H_BandMask_khk", "rhsusf_mich_bare_semi_headset", "H_HelmetIA_camo", "H_HelmetSpecO_ghex_F", "rhs_6b26_bala", "rhs_6b27m_ml_ess", "rhsusf_ach_helmet_headset_ocp", "rhs_6b27m_digi_ess", "rhs_6b26_green", "H_HelmetB_light_black", "rhs_6b28_flora_ess_bala", "H_HelmetB", "rhsusf_bowman_cap", "rhsusf_mich_helmet_marpatd_headset", "rhsusf_mich_bare_norotos_alt", "rhsusf_lwh_helmet_marpatwd", "rhs_6b26_bala", "rhsusf_ach_bare_headset", "H_HelmetSpecO_ocamo", "rhs_6b28_flora", "rhs_6b27m_ML_ess_bala", "rhsusf_lwh_helmet_marpatwd_ess", "rhsusf_mich_bare_norotos_tan", "rhs_Booniehat_marpatwd", "rhsusf_mich_bare_norotos", "rhsusf_ach_bare_semi_headset", "rhsusf_ach_helmet_camo_ocp", "rhsusf_lwh_helmet_M1942", "rhsusf_opscore_rg_cover_pelt", "rhsusf_lwh_helmet_marpatwd", "H_HelmetSpecB_paint1", "rhs_6b28_green", "H_HelmetB_camo", "H_HelmetCrew_O", "rhs_6b27m_ml_ess", "rhs_6b28_flora_ess", "rhsusf_mich_helmet_marpatwd_norotos_headset", "rhsusf_ach_bare_tan", "H_HelmetIA_camo", "rhsusf_ach_helmet_headset_ess_ucp", "rhs_6b27m_green_ess", "rhsusf_ach_bare_tan_headset_ess", "rhs_ssh68", "rhsusf_mich_bare_norotos_arc_semi_headset", "rhsusf_mich_bare_tan_headset", "rhs_6b27m_ml_bala", "rhs_6b27m_green", "rhsusf_opscore_rg_cover_pelt", "rhsusf_mich_bare_norotos_alt_tan", "rhsusf_mich_bare_norotos_semi_headset", "H_HelmetSpecB_paint2", "H_CrewHelmetHeli_O", "rhs_6b28_green_ess_bala", "H_Beret_gen_F", "H_MilCap_mcamo", "rhsusf_ach_helmet_ocp_norotos", "rhs_6b27m_digi_bala", "rhs_6b27m", "rhsusf_mich_bare_norotos_arc_alt_headset", "H_BandMask_reaper", "rhsusf_mich_bare_norotos_tan_headset", "rhsusf_ach_bare_semi_headset_ess", "rhsusf_ach_bare_wood", "H_HelmetCrew_O_ghex_F", "rhsusf_opscore_coy_cover_pelt", "rhs_6b27m_green_ess", "H_HelmetIA_net", "rhsusf_ach_bare_semi_headset_ess", "rhsusf_mich_bare", "H_HelmetB_light_desert", "H_HelmetB_light_snakeskin", "H_HelmetB_light_desert", "rhsusf_ach_bare_wood_ess", "rhsusf_mich_bare_semi", "rhsusf_opscore_mc_cover_pelt", "rhsusf_mich_bare_norotos_arc_tan", "rhs_6b28_green_bala", "rhsusf_mich_bare_norotos_arc_alt_headset", "H_HelmetIA", "H_HelmetB_Enh_tna_F", "rhsusf_lwh_helmet_M1942", "H_HelmetLeaderO_oucamo", "rhs_6b27m_digi", "H_HelmetLeaderO_ghex_F", "rhsusf_mich_helmet_marpatwd_alt_headset", "rhs_6b28_green_bala", "rhsusf_mich_bare_norotos_alt_semi_headset", "H_HelmetB", "rhsusf_ach_bare_wood_headset", "rhs_6b27m_digi_ess_bala", "rhs_Booniehat_ucp", "rhs_6b27m_bala", "rhsusf_mich_bare_headset", "rhsusf_mich_bare_norotos_arc_alt_semi_headset", "H_CrewHelmetHeli_I", "rhsusf_mich_bare_tan", "rhs_6b28", "H_MilCap_rucamo", "H_HelmetB_Light_tna_F", "rhs_6b27m_bala", "H_BandMask_demon", "rhsusf_ach_bare", "rhs_6b27m_green_ess_bala"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33.33%
			U_O_GhillieSuit = 33.33%
			U_I_GhillieSuit = 33.33%
		*/
		Ghillies[] = {"U_B_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit", "U_I_GhillieSuit", "U_O_GhillieSuit", "U_O_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 8.70%
			U_B_FullGhillie_lsh     = 8.70%
			U_B_FullGhillie_sard    = 8.70%
			U_O_FullGhillie_ard     = 8.70%
			U_O_FullGhillie_lsh     = 8.70%
			U_O_FullGhillie_sard    = 8.70%
			U_I_FullGhillie_ard     = 8.70%
			U_I_FullGhillie_lsh     = 8.70%
			U_I_FullGhillie_sard    = 8.70%
			U_B_T_Sniper_F          = 4.35%
			U_B_T_Soldier_F         = 4.35%
			U_B_T_FullGhillie_tna_F = 4.35%
			U_O_T_Sniper_F          = 4.35%
			U_O_T_FullGhillie_tna_F = 4.35%
		*/
		DLCGhillies[] = {"U_I_FullGhillie_lsh", "U_B_FullGhillie_ard", "U_O_FullGhillie_ard", "U_O_T_FullGhillie_tna_F", "U_I_FullGhillie_lsh", "U_O_T_Sniper_F", "U_I_FullGhillie_ard", "U_O_FullGhillie_lsh", "U_B_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_O_FullGhillie_sard", "U_O_FullGhillie_ard", "U_O_FullGhillie_sard", "U_O_FullGhillie_lsh", "U_B_FullGhillie_lsh", "U_B_T_Soldier_F", "U_B_FullGhillie_ard", "U_I_FullGhillie_sard", "U_B_FullGhillie_sard", "U_I_FullGhillie_ard", "U_I_FullGhillie_sard"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4.76%
			V_PlateCarrierGL_mtp         = 4.76%
			V_PlateCarrierGL_rgr         = 4.76%
			V_PlateCarrierIAGL_dgtl      = 4.76%
			V_PlateCarrierIAGL_oli       = 4.76%
			V_PlateCarrierSpec_blk       = 4.76%
			V_PlateCarrierSpec_mtp       = 4.76%
			V_PlateCarrierSpec_rgr       = 4.76%
			V_TacChestrig_grn_F          = 4.76%
			V_TacChestrig_oli_F          = 4.76%
			V_TacChestrig_cbr_F          = 4.76%
			V_PlateCarrier1_tna_F        = 4.76%
			V_PlateCarrier2_tna_F        = 4.76%
			V_PlateCarrierSpec_tna_F     = 4.76%
			V_PlateCarrierGL_tna_F       = 4.76%
			V_HarnessO_ghex_F            = 4.76%
			V_HarnessOGL_ghex_F          = 4.76%
			V_BandollierB_ghex_F         = 4.76%
			V_TacVest_gen_F              = 4.76%
			V_PlateCarrier1_rgr_noflag_F = 4.76%
			V_PlateCarrier2_rgr_noflag_F = 4.76%
		*/
		DLCVests[] = {"V_PlateCarrierGL_mtp", "V_PlateCarrierGL_tna_F", "V_TacChestrig_grn_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_blk", "V_PlateCarrierIAGL_dgtl", "V_TacChestrig_oli_F", "V_PlateCarrierIAGL_oli", "V_TacChestrig_cbr_F", "V_PlateCarrierSpec_tna_F", "V_HarnessOGL_ghex_F", "V_HarnessO_ghex_F", "V_TacVest_gen_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrier2_rgr_noflag_F", "V_BandollierB_ghex_F", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_rgr", "V_PlateCarrier1_tna_F", "V_PlateCarrier2_tna_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIA", "V_RebreatherIR", "V_RebreatherB"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc            = 4.76%
			Exile_Item_Bandage             = 47.62%
			Exile_Item_Vishpirin           = 19.05%
			Exile_Item_Heatpack            = 19.05%
			rzinfection_antivirus_pills    = 4.76%
			rzinfection_antivirus_injector = 4.76%
		*/
		MedicalItems[] = {"Exile_Item_Vishpirin", "rzinfection_antivirus_pills", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Bandage", "rzinfection_antivirus_injector", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0.56%
			Exile_Item_Knife                = 7.22%
			Exile_Item_Cement               = 1.67%
			Exile_Item_FloodLightKit        = 1.67%
			Exile_Item_PortableGeneratorKit = 1.67%
			Exile_Item_CamoTentKit          = 2.22%
			Exile_Item_MetalBoard           = 2.22%
			Exile_Item_Foolbox              = 2.22%
			Exile_Item_Sand                 = 2.22%
			Exile_Item_Grinder              = 2.78%
			Exile_Item_MetalScrews          = 2.78%
			Exile_Melee_SledgeHammer        = 2.78%
			Exile_Item_ExtensionCord        = 4.44%
			Exile_Item_LightBulb            = 5.00%
			Exile_Item_WaterCanisterEmpty   = 5.56%
			Exile_Melee_Shovel              = 5.56%
			Exile_Item_JunkMetal            = 6.11%
			Exile_Item_Handsaw              = 7.22%
			Exile_Item_Pliers               = 7.22%
			Exile_Item_ScrewDriver          = 7.22%
			Exile_Melee_Axe                 = 12.22%
			Exile_Item_Rope                 = 6.11%
			Exile_Item_Carwheel             = 3.33%
		*/
		IndustrialItems[] = {"Exile_Item_ExtensionCord", "Exile_Item_Rope", "Exile_Melee_Axe", "Exile_Item_Sand", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_ExtensionCord", "Exile_Item_CamoTentKit", "Exile_Item_ExtensionCord", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Melee_Shovel", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Item_Rope", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_FloodLightKit", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_FloodLightKit", "Exile_Item_MetalScrews", "Exile_Item_ScrewDriver", "Exile_Item_Cement", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_Cement", "Exile_Item_ScrewDriver", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Melee_Axe", "Exile_Item_Carwheel", "Exile_Item_Knife", "Exile_Item_CamoTentKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Knife", "Exile_Item_Pliers", "Exile_Item_PortableGeneratorKit", "Exile_Item_Handsaw", "Exile_Item_CamoTentKit", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_Rope", "Exile_Item_Handsaw", "Exile_Item_Carwheel", "Exile_Melee_SledgeHammer", "Exile_Item_Rope", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_Carwheel", "Exile_Item_LightBulb", "Exile_Item_Foolbox", "Exile_Item_Knife", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Melee_SledgeHammer", "Exile_Item_Carwheel", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Item_MetalScrews", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_Carwheel", "Exile_Item_ExtensionCord", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_Cement", "Exile_Item_Handsaw", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_JunkMetal", "Exile_Item_MetalBoard", "Exile_Item_Knife", "Exile_Item_JunkMetal", "Exile_Item_Grinder", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Melee_Shovel", "Exile_Item_CamoTentKit", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_MetalBoard", "Exile_Item_Grinder", "Exile_Item_PortableGeneratorKit", "Exile_Item_ScrewDriver", "Exile_Item_Foolbox", "Exile_Item_ExtensionCord", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_SledgeHammer", "Exile_Melee_SledgeHammer", "Exile_Item_Rope", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_Rope", "Exile_Item_Rope", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_MetalScrews", "Exile_Item_Handsaw", "Exile_Item_Carwheel", "Exile_Item_Handsaw", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_Sand", "Exile_Item_ThermalScannerPro", "Exile_Item_Foolbox", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_FloodLightKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exile_Item_Knife", "Exile_Item_Sand", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_PortableGeneratorKit", "Exile_Item_Sand", "Exile_Item_WaterCanisterEmpty", "Exile_Item_MetalBoard", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Item_Foolbox", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 40.00%
			Exile_Item_FuelCanisterEmpty = 50.00%
			Exile_Item_DuctTape          = 10.00%
		*/
		Vehicle[] = {"Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25.00%
			Chemlight_green  = 25.00%
			Chemlight_red    = 25.00%
			Chemlight_yellow = 25.00%
		*/
		Chemlights[] = {"Chemlight_green", "Chemlight_red", "Chemlight_blue", "Chemlight_yellow"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareYellow_F", "FlareRed_F", "FlareGreen_F", "FlareWhite_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShell", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellBlue", "SmokeShellPurple", "SmokeShellYellow", "SmokeShellRed"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50.00%
			Exile_Item_BaseCameraKit = 50.00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 6.25%
			Exile_Item_Magazine02         = 6.25%
			Exile_Item_Magazine03         = 6.25%
			Exile_Item_Magazine04         = 6.25%
			Exile_Item_Can_Empty          = 25.00%
			Exile_Item_PlasticBottleEmpty = 25.00%
			Exile_Item_ToiletPaper        = 25.00%
		*/
		Trash[] = {"Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_Magazine03", "Exile_Item_ToiletPaper", "Exile_Item_Magazine01", "Exile_Item_PlasticBottleEmpty", "Exile_Item_ToiletPaper", "Exile_Item_Can_Empty", "Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine04", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine02", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty"};

		/*
			Percental Item Spawn Chances of Unused:

		*/
		Unused[] = {};
	};
};
class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.53%
			PistolAttachments = 0.53%
			ShotgunAmmo       = 1.58%
			SMGAmmo           = 0.53%
			SMGAttachments    = 0.53%
			Shotguns          = 2.63%
			SMG               = 1.05%
			CivilianVests     = 1.58%
			PistolAmmo        = 2.63%
			Pistols           = 4.21%
			Chemlights        = 5.26%
			CivilianItems     = 5.26%
			Drinks            = 2.63%
			RoadFlares        = 5.26%
			CivilianBackpacks = 7.89%
			CivilianClothing  = 13.16%
			CivilianHeadgear  = 13.16%
			Food              = 5.26%
			Trash             = 26.32%
		*/
		CivillianLowerClass[] = {"CivilianHeadgear", "CivilianHeadgear", "CivilianItems", "Trash", "CivilianItems", "CivilianHeadgear", "CivilianClothing", "CivilianClothing", "Food", "Pistols", "Pistols", "SMG", "CivilianItems", "Food", "CivilianBackpacks", "CivilianClothing", "PistolAmmo", "Food", "Pistols", "Chemlights", "CivilianHeadgear", "PistolAmmo", "Food", "CivilianHeadgear", "Trash", "Trash", "CivilianHeadgear", "Trash", "ShotgunAmmo", "CivilianHeadgear", "Trash", "RoadFlares", "Shotguns", "Food", "CivilianBackpacks", "CivilianClothing", "Chemlights", "CivilianHeadgear", "Trash", "Chemlights", "Restraints", "Chemlights", "Trash", "Trash", "CivilianClothing", "Shotguns", "CivilianBackpacks", "RoadFlares", "SMGAmmo", "PistolAmmo", "Food", "Trash", "Food", "RoadFlares", "Trash", "Trash", "CivilianHeadgear", "Drinks", "Trash", "CivilianItems", "RoadFlares", "Chemlights", "Trash", "CivilianClothing", "RoadFlares", "CivilianBackpacks", "CivilianHeadgear", "Trash", "CivilianItems", "CivilianVests", "CivilianVests", "CivilianClothing", "Trash", "CivilianItems", "Trash", "Shotguns", "CivilianBackpacks", "Trash", "Trash", "Trash", "CivilianHeadgear", "CivilianClothing", "Drinks", "Trash", "CivilianHeadgear", "CivilianHeadgear", "Trash", "Pistols", "CivilianBackpacks", "Chemlights", "Trash", "Shotguns", "Trash", "CivilianClothing", "CivilianItems", "CivilianHeadgear", "Trash", "Trash", "PistolAmmo", "CivilianBackpacks", "CivilianClothing", "SMGAttachments", "Food", "CivilianBackpacks", "Pistols", "CivilianClothing", "Trash", "Trash", "CivilianHeadgear", "Trash", "Pistols", "ShotgunAmmo", "Trash", "Trash", "CivilianClothing", "CivilianClothing", "ShotgunAmmo", "CivilianClothing", "Food", "Trash", "CivilianBackpacks", "Trash", "CivilianHeadgear", "CivilianHeadgear", "Trash", "Trash", "CivilianBackpacks", "Trash", "Trash", "Trash", "CivilianClothing", "CivilianHeadgear", "CivilianBackpacks", "CivilianClothing", "CivilianVests", "Trash", "RoadFlares", "CivilianClothing", "CivilianBackpacks", "CivilianClothing", "CivilianHeadgear", "CivilianItems", "Chemlights", "RoadFlares", "Trash", "CivilianHeadgear", "CivilianBackpacks", "Food", "Pistols", "CivilianClothing", "Drinks", "CivilianHeadgear", "Drinks", "CivilianHeadgear", "CivilianBackpacks", "Trash", "PistolAmmo", "Shotguns", "Trash", "CivilianHeadgear", "CivilianClothing", "CivilianItems", "Trash", "Trash", "PistolAttachments", "Trash", "CivilianHeadgear", "CivilianClothing", "Drinks", "Trash", "CivilianClothing", "RoadFlares", "CivilianClothing", "Chemlights", "Trash", "Trash", "Trash", "CivilianHeadgear", "RoadFlares", "RoadFlares", "Chemlights", "Pistols", "CivilianClothing", "SMG", "CivilianBackpacks", "Trash", "Trash", "CivilianItems", "Chemlights", "CivilianClothing"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0.47%
			PistolAttachments = 0.47%
			ShotgunAmmo       = 2.35%
			SMGAmmo           = 1.41%
			SMGAttachments    = 1.41%
			Shotguns          = 3.76%
			SMG               = 1.41%
			CivilianVests     = 2.35%
			PistolAmmo        = 2.35%
			Pistols           = 3.76%
			Chemlights        = 4.69%
			CivilianItems     = 4.69%
			Drinks            = 9.39%
			RoadFlares        = 4.69%
			CivilianBackpacks = 5.16%
			CivilianClothing  = 9.39%
			CivilianHeadgear  = 9.39%
			Food              = 9.39%
			Trash             = 23.47%
		*/
		CivillianUpperClass[] = {"Food", "CivilianItems", "Trash", "CivilianHeadgear", "Chemlights", "Shotguns", "Drinks", "CivilianClothing", "Food", "Trash", "CivilianClothing", "Trash", "Trash", "CivilianVests", "Trash", "Trash", "CivilianClothing", "SMGAmmo", "CivilianHeadgear", "Drinks", "CivilianHeadgear", "Pistols", "CivilianHeadgear", "Food", "Trash", "SMGAttachments", "Trash", "CivilianHeadgear", "Trash", "Drinks", "CivilianClothing", "CivilianHeadgear", "Drinks", "CivilianBackpacks", "Chemlights", "Trash", "Trash", "CivilianVests", "Drinks", "Trash", "CivilianHeadgear", "PistolAmmo", "Trash", "CivilianHeadgear", "Pistols", "Drinks", "CivilianClothing", "Trash", "Trash", "Trash", "Drinks", "SMGAttachments", "CivilianVests", "Trash", "CivilianClothing", "Trash", "Food", "Pistols", "CivilianBackpacks", "Trash", "Drinks", "Food", "Trash", "CivilianHeadgear", "Food", "Chemlights", "Trash", "Trash", "ShotgunAmmo", "SMGAmmo", "SMG", "Trash", "Trash", "RoadFlares", "Shotguns", "Shotguns", "Pistols", "Food", "SMG", "PistolAmmo", "CivilianClothing", "Drinks", "Chemlights", "Trash", "Drinks", "Trash", "CivilianHeadgear", "RoadFlares", "CivilianClothing", "CivilianHeadgear", "Trash", "CivilianClothing", "PistolAmmo", "Trash", "Food", "Drinks", "Food", "CivilianClothing", "Drinks", "Trash", "Trash", "Trash", "Trash", "Food", "Trash", "Food", "Trash", "Shotguns", "CivilianHeadgear", "CivilianHeadgear", "Drinks", "Pistols", "Drinks", "CivilianBackpacks", "SMG", "CivilianHeadgear", "RoadFlares", "Drinks", "Drinks", "ShotgunAmmo", "CivilianHeadgear", "CivilianHeadgear", "Trash", "ShotgunAmmo", "Trash", "Trash", "SMGAttachments", "CivilianItems", "CivilianClothing", "Drinks", "Food", "SMGAmmo", "Restraints", "Trash", "PistolAmmo", "CivilianHeadgear", "CivilianClothing", "Chemlights", "Drinks", "Drinks", "Food", "CivilianItems", "RoadFlares", "CivilianBackpacks", "Trash", "CivilianVests", "CivilianClothing", "CivilianItems", "Trash", "Trash", "CivilianItems", "Food", "PistolAttachments", "CivilianBackpacks", "Food", "PistolAmmo", "Trash", "Trash", "Chemlights", "Food", "Shotguns", "CivilianItems", "RoadFlares", "ShotgunAmmo", "CivilianItems", "CivilianClothing", "RoadFlares", "Chemlights", "Pistols", "CivilianBackpacks", "Trash", "Shotguns", "CivilianBackpacks", "CivilianClothing", "CivilianClothing", "CivilianClothing", "Food", "Trash", "Food", "Drinks", "CivilianHeadgear", "Pistols", "Food", "RoadFlares", "CivilianClothing", "Chemlights", "Trash", "CivilianBackpacks", "CivilianVests", "RoadFlares", "CivilianBackpacks", "Chemlights", "RoadFlares", "Trash", "CivilianItems", "CivilianItems", "Shotguns", "CivilianBackpacks", "CivilianBackpacks", "Trash", "CivilianClothing", "RoadFlares", "CivilianHeadgear", "Chemlights", "Trash", "Trash", "CivilianItems", "Food", "Pistols", "Shotguns", "CivilianHeadgear", "CivilianClothing", "ShotgunAmmo"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 0.74%
			CivilianVests     = 0.74%
			PistolAttachments = 0.74%
			ShotgunAmmo       = 0.74%
			SMGAmmo           = 0.74%
			SMGAttachments    = 0.74%
			PistolAmmo        = 1.47%
			CivilianHeadgear  = 2.21%
			IndustrialItems   = 2.21%
			MedicalItems      = 2.21%
			Restraints        = 2.21%
			Shotguns          = 1.47%
			SmokeGrenades     = 0.74%
			Chemlights        = 3.68%
			CivilianBackpacks = 3.68%
			RoadFlares        = 3.68%
			SMG               = 0.74%
			CivilianItems     = 5.15%
			Pistols           = 7.35%
			Drinks            = 11.03%
			Food              = 11.03%
			Trash             = 36.76%
		*/
		Shop[] = {"Drinks", "RoadFlares", "Trash", "PistolAmmo", "Trash", "Trash", "Drinks", "Food", "Drinks", "Trash", "PistolAmmo", "MedicalItems", "Trash", "CivilianItems", "Trash", "Trash", "Food", "Trash", "Shotguns", "CivilianItems", "Pistols", "PistolAttachments", "Trash", "Trash", "Pistols", "Food", "CivilianItems", "Trash", "Trash", "CivilianBackpacks", "Food", "Food", "Pistols", "Trash", "Trash", "Pistols", "Food", "Trash", "Pistols", "CivilianHeadgear", "Chemlights", "RoadFlares", "Trash", "Drinks", "Food", "Trash", "Drinks", "CivilianItems", "Trash", "IndustrialItems", "SMGAmmo", "IndustrialItems", "Chemlights", "Drinks", "Trash", "Trash", "Restraints", "Trash", "SMGAttachments", "CivilianItems", "Food", "Pistols", "Chemlights", "Trash", "Trash", "Trash", "Shotguns", "Trash", "Pistols", "RoadFlares", "RoadFlares", "Chemlights", "Trash", "Trash", "Restraints", "Pistols", "MedicalItems", "CivilianBackpacks", "ShotgunAmmo", "Drinks", "Trash", "CivilianHeadgear", "Chemlights", "Trash", "CivilianBackpacks", "Food", "Drinks", "SMG", "Food", "Trash", "Drinks", "Trash", "Drinks", "RoadFlares", "Trash", "Trash", "CivilianItems", "Pistols", "Food", "Trash", "Trash", "Drinks", "Trash", "Trash", "Trash", "CivilianItems", "Trash", "Restraints", "Trash", "Trash", "Trash", "Trash", "IndustrialItems", "Trash", "CivilianHeadgear", "CivilianBackpacks", "Trash", "Trash", "Food", "Trash", "Trash", "CivilianBackpacks", "Pistols", "Food", "MedicalItems", "Food", "Trash", "Drinks", "Trash", "CivilianVests", "Drinks", "CivilianClothing", "Drinks", "SmokeGrenades", "Food", "Drinks"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 2.38%
			RoadFlares      = 2.38%
			Vehicle         = 14.29%
			Trash           = 71.43%
			IndustrialItems = 9.52%
		*/
		Industrial[] = {"Trash", "Trash", "Trash", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "Trash", "Trash", "Trash", "Trash", "Restraints", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Vehicle", "Trash", "RoadFlares", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Vehicle", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 10.00%
			Trash           = 40.00%
			IndustrialItems = 50.00%
		*/
		Factories[] = {"IndustrialItems", "Trash", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "Electronics", "IndustrialItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 3.03%
			RoadFlares      = 3.03%
			IndustrialItems = 9.09%
			Trash           = 60.61%
			Vehicle         = 24.24%
		*/
		VehicleService[] = {"Trash", "Trash", "IndustrialItems", "IndustrialItems", "Trash", "Trash", "Trash", "Trash", "RoadFlares", "Trash", "Trash", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Trash", "Vehicle", "Trash", "Trash", "Restraints", "Vehicle", "Vehicle", "Vehicle", "Vehicle", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies       = 0.38%
			Ghillies          = 0.38%
			Rebreathers       = 0.38%
			Bipods            = 0.75%
			DLCAmmo           = 0.75%
			DLCOptics         = 0.75%
			DLCSupressor      = 0.75%
			LMGAmmo           = 0.75%
			MedicalItems      = 0.75%
			Restraints        = 0.75%
			SniperAmmo        = 0.75%
			SniperAttachments = 0.75%
			DLCRifles         = 1.13%
			DLCVests          = 1.13%
			GuerillaHeadgear  = 1.13%
			GuerillaVests     = 1.13%
			HandGrenades      = 1.13%
			HEGrenades        = 1.13%
			MilitaryBackpacks = 1.13%
			MilitaryHeadgear  = 1.13%
			MilitaryVests     = 1.13%
			Shotguns          = 3.01%
			ShotgunAmmo       = 3.01%
			RifleAmmo         = 1.13%
			RifleAttachments  = 1.13%
			SmokeGrenades     = 1.13%
			Snipers           = 1.13%
			UGLFlares         = 1.13%
			UGLSmokes         = 1.13%
			CivilianItems     = 1.50%
			GuerillaBackpacks = 1.50%
			GuerillaItems     = 1.50%
			LMG               = 1.50%
			Explosives        = 1.13%
			GuerillaClothing  = 1.88%
			MilitaryClothing  = 1.88%
			Rifles            = 1.88%
			Trash             = 56.39%
		*/
		Military[] = {"Trash", "GuerillaItems", "MilitaryHeadgear", "Shotguns", "LMG", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "RifleAttachments", "Trash", "RifleAmmo", "Trash", "SmokeGrenades", "Trash", "Trash", "DLCRifles", "DLCAmmo", "HEGrenades", "GuerillaItems", "GuerillaBackpacks", "Trash", "Snipers", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Shotguns", "Explosives", "Trash", "MilitaryBackpacks", "Trash", "DLCRifles", "Trash", "Trash", "Trash", "Trash", "DLCSupressor", "Trash", "Trash", "Trash", "Shotguns", "Trash", "GuerillaClothing", "Trash", "CivilianItems", "Trash", "Trash", "Trash", "LMGAmmo", "DLCRifles", "GuerillaVests", "UGLFlares", "Trash", "SniperAmmo", "ShotgunAmmo", "ShotgunAmmo", "UGLSmokes", "GuerillaBackpacks", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "RifleAmmo", "Trash", "CivilianItems", "Trash", "Trash", "Trash", "Shotguns", "Trash", "DLCSupressor", "Trash", "GuerillaClothing", "Trash", "Trash", "DLCAmmo", "Trash", "Trash", "SniperAmmo", "Trash", "Trash", "Trash", "Explosives", "MilitaryVests", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Rifles", "UGLFlares", "Trash", "Trash", "GuerillaClothing", "Trash", "Restraints", "Trash", "Snipers", "GuerillaHeadgear", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "MilitaryVests", "Trash", "Trash", "Trash", "HEGrenades", "Rifles", "HandGrenades", "Trash", "MilitaryClothing", "CivilianItems", "Trash", "Trash", "ShotgunAmmo", "ShotgunAmmo", "CivilianItems", "Trash", "Restraints", "Explosives", "GuerillaVests", "Trash", "ShotgunAmmo", "HandGrenades", "LMG", "Trash", "Trash", "Rifles", "SniperAttachments", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "DLCOptics", "Trash", "MilitaryClothing", "Trash", "Ghillies", "Trash", "UGLSmokes", "Trash", "Trash", "Bipods", "MilitaryClothing", "RifleAmmo", "Trash", "Trash", "Trash", "GuerillaItems", "Trash", "GuerillaVests", "Trash", "Trash", "Trash", "Trash", "Shotguns", "Trash", "Trash", "Trash", "ShotgunAmmo", "UGLSmokes", "DLCVests", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Shotguns", "HandGrenades", "Trash", "ShotgunAmmo", "Trash", "Trash", "Trash", "Trash", "GuerillaClothing", "MedicalItems", "Trash", "Shotguns", "SniperAttachments", "Rifles", "Trash", "Trash", "Trash", "Trash", "Trash", "MilitaryBackpacks", "Trash", "MilitaryBackpacks", "Trash", "MedicalItems", "RifleAttachments", "Trash", "Trash", "LMGAmmo", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "GuerillaBackpacks", "DLCGhillies", "LMG", "Trash", "Trash", "Trash", "ShotgunAmmo", "GuerillaBackpacks", "MilitaryClothing", "SmokeGrenades", "UGLFlares", "DLCOptics", "SmokeGrenades", "Trash", "MilitaryHeadgear", "Trash", "MilitaryClothing", "DLCVests", "Trash", "Trash", "MilitaryHeadgear", "Trash", "MilitaryVests", "GuerillaHeadgear", "HEGrenades", "Trash", "Trash", "Trash", "GuerillaItems", "Bipods", "LMG", "Trash", "Snipers", "GuerillaClothing", "Trash", "Trash", "RifleAttachments", "DLCVests", "Rifles", "Trash", "Trash", "Rebreathers", "Trash", "GuerillaHeadgear", "Shotguns", "Trash", "Trash", "Trash"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 81.08%
			MedicalItems = 18.92%
		*/
		Medical[] = {"Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "MedicalItems", "Trash", "MedicalItems", "Trash", "Trash", "MedicalItems", "Trash", "Trash", "Trash", "Trash", "MedicalItems", "MedicalItems", "Trash", "Trash", "Trash", "MedicalItems", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "Trash", "MedicalItems", "Trash", "Trash"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 2.13%
			DLCOptics         = 2.13%
			DLCSupressor      = 2.13%
			SniperAmmo        = 2.13%
			SniperAttachments = 2.13%
			CivilianItems     = 4.26%
			Explosives        = 4.26%
			HandGrenades      = 4.26%
			MedicalItems      = 4.26%
			Restraints        = 4.26%
			DLCGhillies       = 6.38%
			Ghillies          = 6.38%
			MilitaryBackpacks = 8.51%
			MilitaryHeadgear  = 8.51%
			DLCRifles         = 8.51%
			Snipers           = 8.51%
			Trash             = 21.28%
		*/
		Tourist[] = {"CivilianItems", "Explosives", "DLCGhillies", "MilitaryHeadgear", "Snipers", "MilitaryBackpacks", "DLCRifles", "SniperAttachments", "Trash", "Trash", "DLCRifles", "Trash", "Ghillies", "Snipers", "Restraints", "HandGrenades", "MilitaryBackpacks", "Trash", "DLCGhillies", "DLCGhillies", "MilitaryHeadgear", "MilitaryHeadgear", "Explosives", "Trash", "Restraints", "MilitaryBackpacks", "Trash", "Snipers", "DLCAmmo", "HandGrenades", "DLCRifles", "Trash", "Trash", "Trash", "MedicalItems", "MilitaryHeadgear", "MilitaryBackpacks", "Trash", "DLCRifles", "DLCSupressor", "DLCOptics", "SniperAmmo", "CivilianItems", "Snipers", "Ghillies", "MedicalItems", "Ghillies"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2.27%
			DLCOptics         = 2.27%
			DLCSupressor      = 2.27%
			SniperAmmo        = 2.27%
			SniperAttachments = 2.27%
			EpicWeapons       = 4.55%
			HandGrenades      = 4.55%
			MedicalItems      = 4.55%
			Restraints        = 4.55%
			DLCGhillies       = 6.82%
			Ghillies          = 6.82%
			Explosives        = 11.36%
			MilitaryBackpacks = 11.36%
			MilitaryHeadgear  = 11.36%
			DLCRifles         = 11.36%
			Snipers           = 11.36%
		*/
		Radiation[] = {"DLCOptics", "Explosives", "DLCRifles", "MilitaryHeadgear", "MilitaryHeadgear", "DLCRifles", "MilitaryHeadgear", "Restraints", "MilitaryBackpacks", "DLCGhillies", "Restraints", "MedicalItems", "EpicWeapons", "Snipers", "Explosives", "MilitaryBackpacks", "Snipers", "MedicalItems", "Snipers", "DLCGhillies", "DLCSupressor", "MilitaryBackpacks", "MilitaryBackpacks", "Ghillies", "DLCRifles", "MilitaryHeadgear", "Ghillies", "Snipers", "SniperAttachments", "MilitaryHeadgear", "SniperAmmo", "DLCRifles", "Explosives", "Explosives", "Ghillies", "DLCAmmo", "MilitaryBackpacks", "DLCGhillies", "DLCRifles", "Snipers", "HandGrenades", "EpicWeapons", "Explosives", "HandGrenades"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 2.08%
			Exile_Item_CanOpener         = 3.47%
			Exile_Item_Matches           = 3.47%
			Exile_Item_EMRE              = 2.08%
			Exile_Item_GloriousKnakworst = 4.17%
			Exile_Item_Surstromming      = 4.86%
			Exile_Item_SausageGravy      = 4.86%
			Exile_Item_ChristmasTinner   = 4.86%
			Exile_Item_MacasCheese       = 4.86%
			Exile_Item_BBQSandwich       = 4.86%
			Exile_Item_CatFood           = 4.86%
			Exile_Item_Dogfood           = 4.86%
			Exile_Item_BeefParts         = 4.86%
			Exile_Item_Cheathas          = 4.86%
			Exile_Item_DsNuts            = 4.86%
			Exile_Item_Noodles           = 4.86%
			Exile_Item_CockONut          = 5.56%
			Exile_Item_SeedAstics        = 5.56%
			Exile_Item_Raisins           = 6.25%
			Exile_Item_Moobar            = 6.25%
			Exile_Item_InstantCoffee     = 7.64%
		*/
		Food[] = {"Exile_Item_BeefParts", "Exile_Item_GloriousKnakworst", "Exile_Item_Matches", "Exile_Item_BeefParts", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_Moobar", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_SausageGravy", "Exile_Item_EMRE", "Exile_Item_Raisins", "Exile_Item_Surstromming", "Exile_Item_EMRE", "Exile_Item_DsNuts", "Exile_Item_MacasCheese", "Exile_Item_Noodles", "Exile_Item_CatFood", "Exile_Item_Cheathas", "Exile_Item_Raisins", "Exile_Item_CanOpener", "Exile_Item_GloriousKnakworst", "Exile_Item_SausageGravy", "Exile_Item_SausageGravy", "Exile_Item_SeedAstics", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_DsNuts", "Exile_Item_Cheathas", "Exile_Item_Surstromming", "Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_Dogfood", "Exile_Item_Noodles", "Exile_Item_Surstromming", "Exile_Item_Moobar", "Exile_Item_GloriousKnakworst", "Exile_Item_CockONut", "Exile_Item_MacasCheese", "Exile_Item_Dogfood", "Exile_Item_CookingPot", "Exile_Item_SeedAstics", "Exile_Item_CanOpener", "Exile_Item_CanOpener", "Exile_Item_CockONut", "Exile_Item_SeedAstics", "Exile_Item_Matches", "Exile_Item_Noodles", "Exile_Item_Moobar", "Exile_Item_SausageGravy", "Exile_Item_DsNuts", "Exile_Item_CanOpener", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exile_Item_DsNuts", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_DsNuts", "Exile_Item_Cheathas", "Exile_Item_SeedAstics", "Exile_Item_Dogfood", "Exile_Item_BeefParts", "Exile_Item_Surstromming", "Exile_Item_EMRE", "Exile_Item_Raisins", "Exile_Item_Raisins", "Exile_Item_Dogfood", "Exile_Item_ChristmasTinner", "Exile_Item_SausageGravy", "Exile_Item_InstantCoffee", "Exile_Item_ChristmasTinner", "Exile_Item_BBQSandwich", "Exile_Item_Surstromming", "Exile_Item_BBQSandwich", "Exile_Item_Cheathas", "Exile_Item_Moobar", "Exile_Item_ChristmasTinner", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_BeefParts", "Exile_Item_CockONut", "Exile_Item_BBQSandwich", "Exile_Item_ChristmasTinner", "Exile_Item_SeedAstics", "Exile_Item_BeefParts", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_Surstromming", "Exile_Item_Dogfood", "Exile_Item_BeefParts", "Exile_Item_Cheathas", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_GloriousKnakworst", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_InstantCoffee", "Exile_Item_CookingPot", "Exile_Item_Matches", "Exile_Item_ChristmasTinner", "Exile_Item_Cheathas", "Exile_Item_GloriousKnakworst", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_Matches", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_MacasCheese", "Exile_Item_ChristmasTinner", "Exile_Item_CockONut", "Exile_Item_InstantCoffee", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_BBQSandwich", "Exile_Item_Moobar", "Exile_Item_MacasCheese", "Exile_Item_Noodles", "Exile_Item_CatFood", "Exile_Item_CookingPot", "Exile_Item_ChristmasTinner", "Exile_Item_Moobar", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_CanOpener", "Exile_Item_MacasCheese", "Exile_Item_Matches", "Exile_Item_Noodles", "Exile_Item_CockONut", "Exile_Item_Noodles", "Exile_Item_SeedAstics", "Exile_Item_BBQSandwich"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 7.14%
			Exile_Item_EnergyDrink             = 7.14%
			Exile_Item_PlasticBottleFreshWater = 7.14%
			Exile_Item_PowerDrink              = 7.14%
			Exile_Item_MountainDupe            = 14.29%
			Exile_Item_ChocolateMilk           = 21.43%
			Exile_Item_PlasticBottleDirtyWater = 35.71%
		*/
		Drinks[] = {"Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PowerDrink", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_ChocolateMilk", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exile_Item_Beer", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe"};

		/*
			Percental Item Spawn Chances of Pistols:

			rhsusf_weap_glock17g4  = 4.55%
			rhs_weap_pya           = 9.09%
			rhsusf_weap_m1911a1    = 9.09%
			rhs_weap_pp2000_folded = 4.55%
			rhsusf_weap_m9         = 9.09%
			rhs_weap_6p53          = 4.55%
			hgun_P07_khk_F         = 4.55%
			rhs_weap_makarov_pm    = 13.64%
			hgun_Pistol_heavy_01_F = 4.55%
			rhs_weap_pb_6p9        = 4.55%
			rhs_weap_makarov_pmm   = 13.64%
			rhs_weap_savz61_folded = 9.09%
			rhs_weap_tt33          = 9.09%
		*/
		Pistols[] = {"rhs_weap_pya", "rhs_weap_pb_6p9", "rhsusf_weap_m1911a1", "rhs_weap_tt33", "rhs_weap_makarov_pmm", "rhsusf_weap_m9", "rhs_weap_makarov_pm", "rhs_weap_makarov_pm", "rhs_weap_savz61_folded", "rhs_weap_pp2000_folded", "rhsusf_weap_m1911a1", "rhs_weap_tt33", "rhs_weap_makarov_pmm", "hgun_P07_khk_F", "rhs_weap_makarov_pmm", "rhs_weap_6p53", "rhsusf_weap_glock17g4", "rhs_weap_makarov_pm", "hgun_Pistol_heavy_01_F", "rhs_weap_pya", "rhs_weap_savz61_folded", "rhsusf_weap_m9"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			rhsusf_mag_7x45acp_MHP    = 6.25%
			rhsusf_mag_17Rnd_9x19_FMJ = 3.13%
			rhsusf_mag_17Rnd_9x19_JHP = 3.13%
			rhsusf_mag_15Rnd_9x19_FMJ = 6.25%
			rhsusf_mag_15Rnd_9x19_JHP = 6.25%
			11Rnd_45ACP_Mag           = 6.25%
			rhs_mag_9x19mm_7n21_20    = 3.13%
			rhs_mag_9x19mm_7n31_20    = 3.13%
			rhs_mag_9x19mm_7n21_44    = 3.13%
			rhs_mag_9x19mm_7n31_44    = 3.13%
			rhsgref_20rnd_765x17_vz61 = 6.25%
			rhsgref_10rnd_765x17_vz61 = 9.38%
			rhs_mag_9x18_8_57N181S    = 9.38%
			rhs_mag_9x18_12_57N181S   = 9.38%
			rhs_18rnd_9x21mm_7N28     = 3.13%
			rhs_18rnd_9x21mm_7N29     = 3.13%
			rhs_18rnd_9x21mm_7BT3     = 3.13%
			rhs_mag_9x19_17           = 6.25%
			rhs_mag_762x25_8          = 6.25%
		*/
		PistolAmmo[] = {"rhs_mag_9x19_17", "rhsgref_10rnd_765x17_vz61", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x19_17", "rhs_mag_9x18_12_57N181S", "rhs_mag_9x19mm_7n31_20", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x19mm_7n21_44", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_18rnd_9x21mm_7N29", "rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_JHP", "rhs_mag_762x25_8", "rhsusf_mag_15Rnd_9x19_FMJ", "rhs_mag_9x18_8_57N181S", "rhs_18rnd_9x21mm_7N28", "rhsgref_10rnd_765x17_vz61", "rhs_mag_9x18_12_57N181S", "rhsusf_mag_7x45acp_MHP", "rhsgref_20rnd_765x17_vz61", "rhs_18rnd_9x21mm_7BT3", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "rhs_mag_762x25_8", "rhs_mag_9x18_8_57N181S", "rhs_mag_9x19mm_7n21_20", "rhsgref_20rnd_765x17_vz61", "rhsusf_mag_7x45acp_MHP", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_JHP", "rhs_mag_9x19mm_7n31_44", "rhsgref_10rnd_765x17_vz61"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD              = 10.00%
			optic_Yorris           = 10.00%
			muzzle_snds_acp        = 20.00%
			muzzle_snds_L          = 20.00%
			rhs_acc_6p9_suppressor = 20.00%
			rhsusf_acc_omega9k     = 20.00%
		*/
		PistolAttachments[] = {"rhs_acc_6p9_suppressor", "optic_MRD", "optic_Yorris", "muzzle_snds_acp", "rhsusf_acc_omega9k", "rhsusf_acc_omega9k", "muzzle_snds_L", "rhs_acc_6p9_suppressor", "muzzle_snds_acp", "muzzle_snds_L"};

		/*
			Percental Item Spawn Chances of Shotguns:

			rhs_weap_M590_5RD = 33.33%
			rhs_weap_M590_8RD = 16.67%
			rhs_weap_Izh18    = 50.00%
		*/
		Shotguns[] = {"rhs_weap_M590_8RD", "rhs_weap_M590_5RD", "rhs_weap_Izh18", "rhs_weap_Izh18", "rhs_weap_Izh18", "rhs_weap_M590_5RD"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			rhsgref_1Rnd_00Buck = 20.00%
			rhsgref_1Rnd_Slug   = 20.00%
			rhsusf_5Rnd_00Buck  = 14.29%
			rhsusf_8Rnd_00Buck  = 8.57%
			rhsusf_5Rnd_Slug    = 17.14%
			rhsusf_8Rnd_Slug    = 8.57%
			rhsusf_5Rnd_HE      = 2.86%
			rhsusf_8Rnd_HE      = 2.86%
			rhsusf_5Rnd_FRAG    = 2.86%
			rhsusf_8Rnd_FRAG    = 2.86%
		*/
		ShotgunAmmo[] = {"rhsgref_1Rnd_Slug", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_8Rnd_HE", "rhsusf_5Rnd_Slug", "rhsusf_5Rnd_Slug", "rhsusf_8Rnd_Slug", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsusf_5Rnd_HE", "rhsusf_8Rnd_FRAG", "rhsgref_1Rnd_00Buck", "rhsgref_1Rnd_Slug", "rhsusf_8Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsgref_1Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_5Rnd_FRAG", "rhsusf_8Rnd_Slug", "rhsusf_5Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsusf_5Rnd_Slug", "rhsusf_5Rnd_Slug", "rhsusf_5Rnd_00Buck", "rhsusf_8Rnd_00Buck", "rhsusf_8Rnd_Slug", "rhsgref_1Rnd_Slug", "rhsgref_1Rnd_00Buck", "rhsgref_1Rnd_00Buck", "rhsusf_5Rnd_00Buck", "rhsusf_5Rnd_Slug", "rhsgref_1Rnd_Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			rhsusf_weap_MP7A1_desert = 40.00%
			rhsusf_weap_MP7A2        = 40.00%
			rhsusf_weap_MP7A2_winter = 20.00%
		*/
		SMG[] = {"rhsusf_weap_MP7A2", "rhsusf_weap_MP7A2", "rhsusf_weap_MP7A2_winter", "rhsusf_weap_MP7A1_desert", "rhsusf_weap_MP7A1_desert"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			rhsusf_mag_40Rnd_46x30_FMJ = 33.33%
			rhsusf_mag_40Rnd_46x30_JHP = 50.00%
			rhsusf_mag_40Rnd_46x30_AP  = 16.67%
		*/
		SMGAmmo[] = {"rhsusf_mag_40Rnd_46x30_FMJ", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_JHP", "rhsusf_mag_40Rnd_46x30_AP", "rhsusf_mag_40Rnd_46x30_FMJ", "rhsusf_mag_40Rnd_46x30_JHP"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			rhsusf_acc_rotex_mp7        = 18.18%
			rhsusf_acc_rotex_mp7_desert = 18.18%
			rhsusf_acc_rotex_mp7_winter = 9.09%
			optic_Holosight_smg         = 9.09%
			optic_Holosight_smg_blk_F   = 9.09%
			optic_ACO_grn_smg           = 9.09%
			optic_Aco_smg               = 9.09%
			optic_ACO_grn               = 9.09%
			optic_Aco                   = 9.09%
		*/
		SMGAttachments[] = {"optic_Holosight_smg_blk_F", "optic_Holosight_smg", "rhsusf_acc_rotex_mp7", "optic_ACO_grn", "rhsusf_acc_rotex_mp7_winter", "optic_ACO_grn_smg", "rhsusf_acc_rotex_mp7", "rhsusf_acc_rotex_mp7_desert", "rhsusf_acc_rotex_mp7_desert", "optic_Aco_smg", "optic_Aco"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F                   = 0.35%
			arifle_MX_GL_Black_F                 = 0.35%
			arifle_MX_GL_F                       = 0.35%
			arifle_MXM_F                         = 0.35%
			arifle_ARX_blk_F                     = 0.17%
			arifle_ARX_ghex_F                    = 0.17%
			arifle_ARX_hex_F                     = 0.17%
			arifle_CTAR_blk_F                    = 0.35%
			arifle_CTAR_ghex_F                   = 0.35%
			arifle_CTAR_GL_blk_F                 = 0.35%
			arifle_CTAR_hex_F                    = 0.35%
			arifle_CTARS_blk_F                   = 0.35%
			arifle_CTARS_ghex_F                  = 0.35%
			arifle_CTARS_hex_F                   = 0.35%
			arifle_Katiba_F                      = 0.35%
			arifle_Mk20_F                        = 0.35%
			arifle_Mk20C_F                       = 0.35%
			arifle_MX_Black_F                    = 0.35%
			arifle_MX_F                          = 0.35%
			arifle_MXC_Black_F                   = 0.35%
			arifle_MXC_F                         = 0.35%
			arifle_MXM_Black_F                   = 0.35%
			arifle_SDAR_F                        = 0.17%
			arifle_SPAR_03_blk_F                 = 0.35%
			arifle_SPAR_03_khk_F                 = 0.35%
			arifle_SPAR_03_snd_F                 = 0.35%
			arifle_MXM_khk_F                     = 0.35%
			rhs_weap_m14ebrri                    = 0.17%
			rhs_weap_m16a4                       = 0.52%
			rhs_weap_m16a4_carryhandle           = 0.52%
			rhs_weap_m16a4_carryhandle_M203      = 0.52%
			rhs_weap_m16a4_carryhandle_grip      = 0.52%
			rhs_weap_m16a4_carryhandle_grip_pmag = 0.52%
			rhs_weap_m16a4_carryhandle_pmag      = 0.52%
			rhs_weap_m16a4_grip                  = 0.52%
			rhs_weap_m27iar                      = 0.35%
			rhs_weap_m4                          = 0.35%
			rhs_weap_m4_carryhandle              = 0.35%
			rhs_weap_m4_carryhandle_pmag         = 0.35%
			rhs_weap_m4_grip                     = 0.35%
			rhs_weap_m4_grip2                    = 0.35%
			rhs_weap_m4_m203                     = 0.35%
			rhs_weap_m4_m203S                    = 0.35%
			rhs_weap_m4_m320                     = 0.35%
			rhs_weap_m4a1                        = 0.35%
			rhs_weap_m4a1_carryhandle            = 0.35%
			rhs_weap_m4a1_carryhandle_grip       = 0.35%
			rhs_weap_m4a1_carryhandle_grip2      = 0.35%
			rhs_weap_m4a1_carryhandle_m203       = 0.35%
			rhs_weap_m4a1_carryhandle_m203S      = 0.35%
			rhs_weap_m4a1_carryhandle_pmag       = 0.35%
			rhs_weap_m4a1_grip                   = 0.35%
			rhs_weap_m4a1_grip2                  = 0.35%
			rhs_weap_m4a1_m203                   = 0.35%
			rhs_weap_m4a1_m203s                  = 0.35%
			rhs_weap_m4a1_m320                   = 0.17%
			rhs_weap_sr25                        = 0.35%
			rhs_weap_sr25_ec                     = 0.35%
			rhs_weap_ak74m                       = 0.87%
			rhs_weap_ak74m_camo                  = 0.87%
			rhs_weap_ak74m_npz                   = 0.87%
			rhs_weap_ak74m_desert_npz            = 0.87%
			rhs_weap_ak74m_folded                = 0.87%
			rhs_weap_ak74m_camo_folded           = 0.87%
			rhs_weap_ak74m_desert_folded         = 0.87%
			rhs_weap_ak74m_2mag                  = 0.87%
			rhs_weap_ak74m_2mag_npz              = 0.87%
			rhs_weap_ak74m_2mag_camo             = 0.87%
			rhs_weap_ak74m_desert                = 0.87%
			rhs_weap_ak74m_gp25                  = 0.87%
			rhs_weap_ak74m_gp25_npz              = 0.87%
			rhs_weap_ak74m_fullplum              = 0.87%
			rhs_weap_ak74m_fullplum_npz          = 0.87%
			rhs_weap_ak74m_Base_F                = 0.87%
			rhs_weap_ak74m_fullplum_gp25         = 0.87%
			rhs_weap_ak74m_fullplum_gp25_npz     = 0.87%
			rhs_weap_ak74m_zenitco01             = 0.87%
			rhs_weap_ak74m_zenitco01_npz         = 0.87%
			rhs_weap_ak74m_zenitco01_b33         = 0.87%
			rhs_weap_ak74mr                      = 0.87%
			rhs_weap_ak74mr_folded               = 0.87%
			rhs_weap_ak74mr_gp25                 = 0.87%
			rhs_weap_ak105                       = 0.87%
			rhs_weap_ak105_zenitco01             = 0.87%
			rhs_weap_ak105_zenitco01_npz         = 0.87%
			rhs_weap_ak105_npz                   = 0.87%
			rhs_weap_ak105_folded                = 0.87%
			rhs_weap_ak105_zenitco01_b33         = 0.87%
			rhs_weap_akm                         = 0.87%
			rhs_weap_akm_gp25                    = 0.87%
			rhs_weap_akmn                        = 0.87%
			rhs_weap_akmn_gp25                   = 0.87%
			rhs_weap_akmn_npz                    = 0.87%
			rhs_weap_akmn_gp25_npz               = 0.87%
			rhs_weap_akm_zenitco01_b33           = 0.87%
			rhs_weap_akms                        = 0.87%
			rhs_weap_akms_folded                 = 0.87%
			rhs_weap_akms_gp25                   = 0.87%
			rhs_weap_pm63                        = 0.87%
			rhs_weap_ak103                       = 0.87%
			rhs_weap_ak104                       = 0.87%
			rhs_weap_ak104_npz                   = 0.87%
			rhs_weap_ak104_zenitco01             = 0.87%
			rhs_weap_ak104_zenitco01_npz         = 0.87%
			rhs_weap_ak104_zenitco01_b33         = 0.87%
			rhs_weap_ak104_folded                = 0.87%
			rhs_weap_ak103_npz                   = 0.87%
			rhs_weap_ak103_folded                = 0.87%
			rhs_weap_ak103_zenitco01             = 0.87%
			rhs_weap_ak103_zenitco01_folded      = 0.87%
			rhs_weap_ak103_zenitco01_npz         = 0.87%
			rhs_weap_ak103_zenitco01_b33         = 0.87%
			rhs_weap_ak103_1                     = 0.87%
			rhs_weap_ak103_1_npz                 = 0.87%
			rhs_weap_ak103_1_folded              = 0.87%
			rhs_weap_ak103_2                     = 0.87%
			rhs_weap_ak103_2_npz                 = 0.87%
			rhs_weap_ak103_2_folded              = 0.87%
			rhs_weap_ak103_gp25                  = 0.87%
			rhs_weap_ak103_gp25_npz              = 0.87%
			rhs_weap_ak74                        = 0.87%
			rhs_weap_ak74_gp25                   = 0.87%
			rhs_weap_ak74n                       = 0.87%
			rhs_weap_ak74n_gp25                  = 0.87%
			rhs_weap_ak74n_npz                   = 0.87%
			rhs_weap_ak74n_gp25_npz              = 0.87%
			rhs_weap_ak74_2                      = 0.87%
			rhs_weap_ak74n_2                     = 0.87%
			rhs_weap_ak74n_2_npz                 = 0.87%
			rhs_weap_ak74n_2_gp25                = 0.87%
			rhs_weap_ak74n_2_gp25_npz            = 0.87%
			rhs_weap_ak74_3                      = 0.87%
			rhs_weap_aks74                       = 0.87%
			rhs_weap_aks74_folded                = 0.87%
			rhs_weap_aks74_2                     = 0.87%
			rhs_weap_aks74_2_folded              = 0.87%
			rhs_weap_aks74_gp25                  = 0.87%
			rhs_weap_aks74n                      = 0.87%
			rhs_weap_aks74n_npz                  = 0.87%
			rhs_weap_aks74n_2                    = 0.87%
			rhs_weap_aks74n_2_npz                = 0.87%
			rhs_weap_aks74n_folded               = 0.87%
			rhs_weap_aks74n_2_folded             = 0.87%
			rhs_weap_aks74n_gp25                 = 0.87%
			rhs_weap_aks74n_gp25_npz             = 0.87%
			rhs_weap_aks74u                      = 0.87%
			rhs_weap_aks74u_folded               = 0.87%
			rhs_weap_aks74un                     = 0.87%
			rhs_weap_aks74un_folded              = 0.87%
		*/
		Rifles[] = {"rhs_weap_ak74m_2mag_npz", "rhs_weap_ak74m_camo", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_m4a1_m320", "rhs_weap_akmn_gp25", "rhs_weap_m4_grip2", "rhs_weap_ak74", "rhs_weap_ak103_npz", "rhs_weap_ak74m_zenitco01", "rhs_weap_aks74un_folded", "rhs_weap_aks74_2", "rhs_weap_ak74_2", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_aks74un_folded", "rhs_weap_ak103_zenitco01_npz", "arifle_CTAR_GL_blk_F", "rhs_weap_ak104_folded", "rhs_weap_ak103_2", "rhs_weap_ak104", "rhs_weap_akms_folded", "rhs_weap_akmn_gp25_npz", "rhs_weap_ak103_1_npz", "rhs_weap_aks74u_folded", "rhs_weap_ak74n", "rhs_weap_ak74m_Base_F", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_ak74m_camo", "rhs_weap_akmn_gp25", "rhs_weap_m4a1_carryhandle_grip2", "rhs_weap_aks74n_gp25", "rhs_weap_ak74", "rhs_weap_aks74n_gp25_npz", "rhs_weap_aks74n_folded", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_akms_folded", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_aks74n_2_npz", "rhs_weap_m4a1_carryhandle_m203S", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74n_2_npz", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_ak103_2", "rhs_weap_akm_gp25", "arifle_MXM_F", "rhs_weap_m16a4", "rhs_weap_ak103_1_folded", "rhs_weap_ak103", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_aks74_folded", "rhs_weap_aks74n_2", "rhs_weap_m4a1_carryhandle_pmag", "rhs_weap_ak74", "rhs_weap_ak105_zenitco01", "rhs_weap_ak103_2", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_ak74n_2", "rhs_weap_m4a1", "rhs_weap_akm_gp25", "rhs_weap_ak74_3", "rhs_weap_ak105_zenitco01", "rhs_weap_akmn_npz", "rhs_weap_ak74_gp25", "rhs_weap_ak103_2_folded", "rhs_weap_ak103_1_folded", "rhs_weap_ak74m_fullplum", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_ak74m_desert_folded", "rhs_weap_ak74_gp25", "rhs_weap_akmn_gp25_npz", "rhs_weap_ak105_npz", "rhs_weap_ak103_npz", "rhs_weap_ak74m_Base_F", "rhs_weap_ak104_npz", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_m4_grip", "rhs_weap_ak74m_desert", "rhs_weap_ak74n_npz", "rhs_weap_ak105_npz", "rhs_weap_ak103_gp25_npz", "rhs_weap_ak74n_gp25", "rhs_weap_aks74_gp25", "rhs_weap_ak74m", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_ak103_2", "rhs_weap_ak74m_zenitco01", "rhs_weap_aks74_folded", "rhs_weap_ak103_1_npz", "rhs_weap_m4a1_carryhandle_grip", "rhs_weap_ak74m_camo", "rhs_weap_aks74_folded", "rhs_weap_aks74_2", "arifle_SPAR_03_snd_F", "rhs_weap_ak104_npz", "arifle_CTAR_blk_F", "rhs_weap_ak74m_desert_folded", "rhs_weap_aks74n_npz", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_akms", "rhs_weap_ak74m_2mag_npz", "rhs_weap_aks74", "rhs_weap_m4a1_m203", "rhs_weap_ak103_2_folded", "rhs_weap_ak103", "arifle_CTARS_hex_F", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak103_1", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_ak74m_camo_folded", "rhs_weap_ak103_folded", "rhs_weap_m4_grip", "rhs_weap_ak74m_camo_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74m_zenitco01_b33", "arifle_ARX_blk_F", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_m16a4_carryhandle_M203", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_aks74n_2", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak74m_2mag", "rhs_weap_ak103_gp25_npz", "rhs_weap_aks74n_2_folded", "rhs_weap_m4_m320", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_akmn_npz", "rhs_weap_m27iar", "rhs_weap_akms_gp25", "rhs_weap_ak74mr_folded", "rhs_weap_ak74m_gp25_npz", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak74m_gp25", "arifle_MXM_F", "rhs_weap_ak74m_Base_F", "rhs_weap_ak74m_folded", "rhs_weap_m4a1_carryhandle_grip2", "rhs_weap_akm_gp25", "rhs_weap_aks74n_gp25_npz", "rhs_weap_aks74_gp25", "rhs_weap_m16a4", "rhs_weap_ak74n", "rhs_weap_ak74m_2mag", "rhs_weap_ak74m_desert_folded", "rhs_weap_akmn", "rhs_weap_akm", "rhs_weap_ak74m_fullplum", "arifle_MX_F", "rhs_weap_ak74mr_gp25", "arifle_CTAR_blk_F", "arifle_MXC_F", "rhs_weap_m4_carryhandle_pmag", "rhs_weap_m16a4_carryhandle", "rhs_weap_m27iar", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_akmn_gp25_npz", "rhs_weap_ak74m_folded", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_aks74", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_m16a4", "rhs_weap_aks74un_folded", "rhs_weap_m4_grip2", "rhs_weap_ak105_npz", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_ak103_2_npz", "rhs_weap_ak103_gp25", "rhs_weap_ak74n_2_npz", "rhs_weap_ak103_2_folded", "arifle_Katiba_F", "rhs_weap_ak74m_camo", "rhs_weap_ak103_2_npz", "rhs_weap_ak74n_gp25", "rhs_weap_pm63", "rhs_weap_aks74_2_folded", "rhs_weap_aks74u", "rhs_weap_ak103_2", "arifle_CTARS_ghex_F", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_akmn", "arifle_CTARS_blk_F", "rhs_weap_aks74_2", "rhs_weap_akmn_gp25_npz", "rhs_weap_m4a1_m203", "rhs_weap_aks74u", "rhs_weap_ak103", "arifle_MXC_Black_F", "rhs_weap_ak74m", "rhs_weap_akmn_npz", "rhs_weap_ak104_folded", "rhs_weap_ak105", "rhs_weap_aks74_2_folded", "arifle_CTARS_blk_F", "rhs_weap_aks74n_2_npz", "rhs_weap_ak103_1_npz", "rhs_weap_ak103_2_npz", "rhs_weap_ak74n_2_gp25", "rhs_weap_aks74u_folded", "rhs_weap_aks74u_folded", "rhs_weap_ak74m_2mag_npz", "rhs_weap_akmn_gp25", "rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_aks74_2_folded", "rhs_weap_m4_carryhandle", "rhs_weap_aks74n_gp25_npz", "arifle_CTAR_ghex_F", "rhs_weap_aks74n_gp25", "rhs_weap_ak74m_folded", "rhs_weap_ak103_folded", "rhs_weap_aks74_2", "arifle_SPAR_03_snd_F", "rhs_weap_ak74n_gp25_npz", "rhs_weap_aks74n_npz", "rhs_weap_ak103_1", "rhs_weap_ak74m_fullplum_gp25", "rhs_weap_ak74n_2_gp25_npz", "arifle_MX_GL_Black_F", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_m16a4_carryhandle", "rhs_weap_sr25_ec", "rhs_weap_ak103_1", "rhs_weap_ak74m_2mag_camo", "rhs_weap_ak74m_folded", "rhs_weap_ak74", "rhs_weap_ak103_gp25_npz", "rhs_weap_ak74n_gp25", "rhs_weap_ak74m_fullplum", "arifle_SPAR_03_khk_F", "rhs_weap_ak74n_gp25_npz", "rhs_weap_ak74n_gp25_npz", "rhs_weap_aks74n_2_npz", "rhs_weap_ak105_folded", "rhs_weap_m4_m320", "rhs_weap_ak105_folded", "rhs_weap_ak74m_2mag_camo", "rhs_weap_aks74n_gp25", "rhs_weap_ak74n_2_gp25", "rhs_weap_akm", "rhs_weap_ak74n_2_gp25", "rhs_weap_ak74m_Base_F", "arifle_MXC_Black_F", "rhs_weap_akmn_gp25", "rhs_weap_akm_zenitco01_b33", "rhs_weap_ak74_2", "arifle_CTAR_ghex_F", "rhs_weap_m4a1_carryhandle_grip", "rhs_weap_ak74_3", "rhs_weap_akms_gp25", "arifle_ARX_hex_F", "rhs_weap_ak74m_desert_folded", "arifle_MX_Black_F", "rhs_weap_aks74u", "rhs_weap_akms", "rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_ak104", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_ak103_1", "rhs_weap_akms", "rhs_weap_pm63", "rhs_weap_pm63", "rhs_weap_ak74mr_folded", "arifle_MX_F", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak74m_gp25_npz", "rhs_weap_aks74u", "rhs_weap_ak74_gp25", "rhs_weap_aks74u_folded", "rhs_weap_ak103_1", "rhs_weap_m14ebrri", "rhs_weap_ak74n_npz", "rhs_weap_ak104_folded", "arifle_MXM_Black_F", "rhs_weap_ak104_npz", "rhs_weap_ak74m_desert_npz", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_m4_m203S", "rhs_weap_ak74m_2mag", "rhs_weap_akm_zenitco01_b33", "arifle_MXM_Black_F", "rhs_weap_aks74n_2_npz", "rhs_weap_aks74n", "rhs_weap_ak74n_npz", "rhs_weap_m4a1_carryhandle", "rhs_weap_ak105", "rhs_weap_ak74m_zenitco01_npz", "rhs_weap_ak105", "rhs_weap_ak74m_Base_F", "rhs_weap_ak104", "rhs_weap_ak74_2", "rhs_weap_akms_gp25", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_ak74n", "rhs_weap_ak74m_desert_npz", "rhs_weap_aks74n_folded", "rhs_weap_ak74n_npz", "rhs_weap_akm_gp25", "rhs_weap_ak74m_2mag_camo", "rhs_weap_akm", "rhs_weap_pm63", "rhs_weap_m16a4_carryhandle_grip", "rhs_weap_ak74m_gp25_npz", "rhs_weap_ak74m_gp25", "rhs_weap_ak74m_gp25", "rhs_weap_aks74_gp25", "rhs_weap_aks74n_gp25", "rhs_weap_ak103_zenitco01_b33", "rhs_weap_ak104_npz", "rhs_weap_aks74_2_folded", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak74m_gp25", "rhs_weap_aks74_gp25", "rhs_weap_aks74un_folded", "rhs_weap_ak105_folded", "arifle_SPAR_03_blk_F", "rhs_weap_ak74m_gp25_npz", "rhs_weap_ak104_folded", "arifle_CTAR_GL_blk_F", "rhs_weap_ak103_npz", "rhs_weap_aks74_2", "rhs_weap_aks74un", "rhs_weap_ak74m_2mag", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_ak74m_npz", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_m4a1_grip", "rhs_weap_ak103", "arifle_MX_GL_F", "rhs_weap_aks74n_folded", "rhs_weap_ak74m_npz", "rhs_weap_ak103_folded", "rhs_weap_akmn_npz", "rhs_weap_m4a1_carryhandle", "rhs_weap_ak103_gp25", "rhs_weap_ak103", "rhs_weap_ak74m", "rhs_weap_ak103_zenitco01", "rhs_weap_akmn", "rhs_weap_aks74n", "rhs_weap_aks74un", "rhs_weap_aks74n", "rhs_weap_ak103_npz", "rhs_weap_ak74n_2_npz", "rhs_weap_m4_m203", "rhs_weap_ak105", "rhs_weap_ak74mr", "rhs_weap_m4a1_grip", "rhs_weap_aks74n_npz", "rhs_weap_ak74m_2mag_camo", "rhs_weap_m4", "rhs_weap_ak74mr_gp25", "rhs_weap_ak104_zenitco01_npz", "rhs_weap_ak74m_desert_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74m_npz", "rhs_weap_aks74n_2", "rhs_weap_ak104_zenitco01", "rhs_weap_m4_m203S", "rhs_weap_aks74_folded", "rhs_weap_aks74n_2_folded", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_ak103_folded", "rhs_weap_ak103_gp25", "rhs_weap_ak74", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_m4a1", "rhs_weap_ak74m_desert_npz", "rhs_weap_ak74mr_gp25", "rhs_weap_m16a4_grip", "rhs_weap_ak74mr", "rhs_weap_akmn_npz", "rhs_weap_akms_folded", "arifle_ARX_ghex_F", "rhs_weap_ak104", "rhs_weap_akmn_gp25", "rhs_weap_akm_zenitco01_b33", "rhs_weap_ak105", "rhs_weap_m16a4_carryhandle_grip_pmag", "rhs_weap_ak105_zenitco01", "rhs_weap_m16a4_carryhandle_grip_pmag", "arifle_CTARS_ghex_F", "rhs_weap_ak74n_2_gp25", "rhs_weap_m4_carryhandle_pmag", "rhs_weap_ak74m_2mag", "rhs_weap_ak74m_desert", "rhs_weap_ak103_2_npz", "arifle_SPAR_03_khk_F", "rhs_weap_aks74n_gp25_npz", "rhs_weap_ak103_zenitco01", "rhs_weap_m16a4_carryhandle_grip", "rhs_weap_ak103_gp25", "rhs_weap_ak74m_desert", "rhs_weap_ak105_folded", "rhs_weap_aks74", "rhs_weap_m16a4_grip", "arifle_MX_Black_F", "arifle_CTAR_hex_F", "rhs_weap_akms_gp25", "rhs_weap_ak74m_desert", "rhs_weap_aks74_folded", "rhs_weap_ak104", "rhs_weap_ak74_3", "arifle_Mk20C_F", "rhs_weap_akm_gp25", "rhs_weap_ak105_zenitco01_npz", "arifle_SPAR_03_blk_F", "rhs_weap_ak74mr", "rhs_weap_ak74mr", "rhs_weap_ak104_zenitco01", "rhs_weap_ak74m_camo", "rhs_weap_ak74m_npz", "rhs_weap_aks74n_2", "rhs_weap_akmn", "arifle_CTARS_hex_F", "rhs_weap_m16a4_carryhandle", "rhs_weap_ak103_zenitco01_folded", "rhs_weap_sr25", "rhs_weap_aks74n_2_folded", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_ak103_1_npz", "rhs_weap_ak105_zenitco01", "rhs_weap_m4_carryhandle", "rhs_weap_ak103_gp25", "rhs_weap_sr25", "rhs_weap_ak74m", "rhs_weap_ak74m_2mag_camo", "rhs_weap_aks74n", "rhs_weap_ak105_zenitco01", "rhs_weap_ak74m_fullplum", "rhs_weap_ak105_npz", "arifle_SDAR_F", "rhs_weap_ak103_2_folded", "arifle_Mk20C_F", "rhs_weap_ak74m_desert_npz", "rhs_weap_aks74", "rhs_weap_m4_m203", "rhs_weap_aks74un", "rhs_weap_ak74m_zenitco01", "rhs_weap_akmn", "rhs_weap_sr25_ec", "rhs_weap_ak74mr_folded", "rhs_weap_akms_folded", "rhs_weap_ak103_zenitco01", "rhs_weap_ak103_2_npz", "rhs_weap_ak74m_fullplum_npz", "rhs_weap_ak74n_2", "rhs_weap_ak103_folded", "rhs_weap_ak105_folded", "rhs_weap_ak74n", "rhs_weap_aks74n_2", "rhs_weap_akm_zenitco01_b33", "rhs_weap_m16a4_carryhandle_grip_pmag", "rhs_weap_ak104_npz", "rhs_weap_aks74_2_folded", "rhs_weap_aks74n_2_folded", "arifle_CTAR_hex_F", "rhs_weap_ak105_zenitco01_npz", "rhs_weap_akms_folded", "rhs_weap_m16a4_grip", "rhs_weap_m4a1_m203s", "rhs_weap_ak74m_desert", "arifle_Mk20_F", "rhs_weap_m4a1_m203s", "rhs_weap_aks74un", "rhs_weap_m4a1_grip2", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_m16a4_carryhandle_grip", "rhs_weap_ak74mr_folded", "rhs_weap_ak74_3", "arifle_MXM_khk_F", "rhs_weap_ak74mr_gp25", "rhs_weap_ak74n_gp25", "rhs_weap_ak74m_gp25_npz", "rhs_weap_akm", "rhs_weap_aks74n_folded", "rhs_weap_aks74n_npz", "rhs_weap_m4a1_grip2", "rhs_weap_ak105_npz", "rhs_weap_ak74n_gp25_npz", "rhs_weap_ak74m_zenitco01", "rhs_weap_akm_zenitco01_b33", "rhs_weap_ak74m_camo_folded", "rhs_weap_akms", "rhs_weap_pm63", "rhs_weap_ak74m", "rhs_weap_ak74m_2mag_npz", "rhs_weap_ak104_zenitco01", "rhs_weap_m4a1_carryhandle_m203", "rhs_weap_aks74un", "rhs_weap_ak103_gp25_npz", "rhs_weap_ak74m_camo_folded", "rhs_weap_aks74u", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_aks74n_gp25", "rhs_weap_ak103_2_folded", "rhs_weap_aks74n_2_folded", "rhs_weap_ak74n_gp25_npz", "arifle_Katiba_F", "rhs_weap_ak74mr_folded", "rhs_weap_ak74m_fullplum", "rhs_weap_ak104_zenitco01", "rhs_weap_aks74_gp25", "rhs_weap_aks74n_2_npz", "rhs_weap_akms", "rhs_weap_ak74m_desert_npz", "rhs_weap_ak74_2", "rhs_weap_ak74mr_gp25", "rhs_weap_ak74m_zenitco01_b33", "rhs_weap_aks74n_folded", "rhs_weap_ak74mr", "rhs_weap_ak74n_2", "rhs_weap_ak74_gp25", "rhs_weap_ak103_1_folded", "rhs_weap_akmn_gp25_npz", "rhs_weap_aks74u_folded", "rhs_weap_m4a1_carryhandle_pmag", "rhs_weap_aks74n_npz", "rhs_weap_m4", "rhs_weap_ak103_zenitco01", "rhs_weap_ak104_folded", "rhs_weap_m16a4_carryhandle_M203", "rhs_weap_ak103_gp25_npz", "rhs_weap_aks74", "rhs_weap_akm", "rhs_weap_ak103_zenitco01", "rhs_weap_ak103_1_folded", "rhs_weap_ak74n_npz", "rhs_weap_ak74n_gp25", "rhs_weap_aks74n_gp25_npz", "rhs_weap_m16a4_carryhandle_M203", "rhs_weap_ak104_zenitco01_b33", "rhs_weap_m16a4_carryhandle_pmag", "rhs_weap_ak74m_fullplum_gp25_npz", "rhs_weap_ak103_zenitco01_b33", "arifle_Katiba_GL_F", "rhs_weap_ak74n_2_npz", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_ak104_zenitco01", "rhs_weap_ak74_gp25", "rhs_weap_aks74n", "arifle_MX_GL_Black_F", "rhs_weap_ak74n", "arifle_MX_GL_F", "rhs_weap_ak103_1_folded", "rhs_weap_ak74m_fullplum_gp25_npz", "arifle_Katiba_GL_F", "rhs_weap_ak74n_2_npz", "rhs_weap_ak74m_camo_folded", "rhs_weap_ak74n_2", "rhs_weap_ak74_2", "arifle_Mk20_F", "rhs_weap_akms_gp25", "rhs_weap_m4a1_carryhandle_m203", "rhs_weap_ak74n_2", "rhs_weap_aks74un_folded", "rhs_weap_ak103_zenitco01_npz", "rhs_weap_ak74m_gp25", "rhs_weap_ak74m_zenitco01", "rhs_weap_ak74m_npz", "arifle_MXC_F", "rhs_weap_ak74_3", "rhs_weap_ak105_zenitco01_b33", "rhs_weap_ak74m_folded", "rhs_weap_ak103_1_npz", "rhs_weap_m4a1_carryhandle_m203S", "rhs_weap_ak74m_2mag_npz", "rhs_weap_ak74n_2_gp25_npz", "rhs_weap_ak103_npz", "rhs_weap_ak74n_2_gp25", "arifle_MXM_khk_F"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                   = 0.75%
			30Rnd_556x45_Stanag                   = 2.25%
			30Rnd_65x39_caseless_green            = 0.75%
			30Rnd_65x39_caseless_green_mag_Tracer = 0.75%
			30Rnd_65x39_caseless_mag              = 0.75%
			30Rnd_65x39_caseless_mag_Tracer       = 0.75%
			10Rnd_50BW_Mag_F                      = 0.75%
			30Rnd_580x42_Mag_F                    = 0.75%
			30Rnd_580x42_Mag_Tracer_F             = 0.75%
			100Rnd_580x42_Mag_F                   = 0.75%
			100Rnd_580x42_Mag_Tracer_F            = 0.75%
			20Rnd_762x51_Mag                      = 0.75%
			rhsusf_20Rnd_762x51_m118_special_Mag  = 0.75%
			rhsusf_20Rnd_762x51_m993_Mag          = 0.75%
			rhs_30Rnd_545x39_7N10_AK              = 1.87%
			rhs_30Rnd_545x39_7N10_plum_AK         = 1.87%
			rhs_30Rnd_545x39_7N10_desert_AK       = 1.87%
			rhs_30Rnd_545x39_7N10_camo_AK         = 1.87%
			rhs_30Rnd_545x39_7N6_AK               = 1.87%
			rhs_30Rnd_545x39_7N6_green_AK         = 1.87%
			rhs_30Rnd_545x39_7N6M_AK              = 1.87%
			rhs_30Rnd_545x39_7N6M_green_AK        = 1.87%
			rhs_30Rnd_545x39_7N6M_plum_AK         = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_AK         = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_plum_AK    = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_desert_AK  = 1.87%
			rhs_30Rnd_545x39_7N10_2mag_camo_AK    = 1.87%
			rhs_30Rnd_545x39_7N22_AK              = 1.87%
			rhs_30Rnd_545x39_7N22_plum_AK         = 1.87%
			rhs_30Rnd_545x39_7N22_desert_AK       = 1.87%
			rhs_30Rnd_545x39_7N22_camo_AK         = 1.87%
			rhs_30Rnd_545x39_AK_green             = 1.87%
			rhs_30Rnd_545x39_AK_plum_green        = 1.87%
			rhs_30Rnd_545x39_7U1_AK               = 1.87%
			rhs_45Rnd_545x39_AK                   = 1.87%
			rhs_45Rnd_545x39_7N6_AK               = 1.87%
			rhs_45Rnd_545x39_7N10_AK              = 1.87%
			rhs_45Rnd_545x39_7N22_AK              = 1.87%
			rhs_45Rnd_545x39_AK_green             = 1.87%
			rhs_45Rnd_545x39_7U1_AK               = 1.87%
			rhs_30Rnd_545x39_AK                   = 1.87%
			rhs_30Rnd_545x39_AK_no_tracers        = 1.87%
			rhs_30Rnd_762x39mm_bakelite           = 1.87%
			rhs_30Rnd_762x39mm_bakelite_tracer    = 1.87%
			rhs_30Rnd_762x39mm_bakelite_89        = 1.87%
			rhs_30Rnd_762x39mm_bakelite_U         = 1.87%
			rhs_30Rnd_762x39mm                    = 1.87%
			rhs_30Rnd_762x39mm_tracer             = 1.87%
			rhs_30Rnd_762x39mm_89                 = 1.87%
			rhs_30Rnd_762x39mm_U                  = 1.87%
			rhs_30Rnd_762x39mm_polymer            = 1.87%
			rhs_30Rnd_762x39mm_polymer_tracer     = 1.87%
			rhs_30Rnd_762x39mm_polymer_89         = 1.87%
			rhs_30Rnd_762x39mm_polymer_U          = 1.87%
			rhs_10Rnd_762x39mm                    = 1.87%
			rhs_10Rnd_762x39mm_tracer             = 1.87%
			rhs_10Rnd_762x39mm_89                 = 1.87%
			rhs_10Rnd_762x39mm_U                  = 1.87%
			rhs_75Rnd_762x39mm                    = 1.87%
			rhs_75Rnd_762x39mm_tracer             = 1.87%
			rhs_75Rnd_762x39mm_89                 = 1.87%
		*/
		RifleAmmo[] = {"rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_AK_plum_green", "rhs_45Rnd_545x39_AK", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_762x39mm_polymer_tracer", "rhs_10Rnd_762x39mm", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_762x39mm_bakelite", "rhs_10Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "30Rnd_65x39_caseless_mag_Tracer", "rhs_10Rnd_762x39mm_U", "rhs_45Rnd_545x39_AK_green", "rhs_30Rnd_762x39mm_bakelite", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_545x39_AK_green", "30Rnd_580x42_Mag_F", "20Rnd_556x45_UW_mag", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_30Rnd_762x39mm_polymer", "rhs_30Rnd_762x39mm_bakelite_89", "30Rnd_65x39_caseless_mag", "30Rnd_556x45_Stanag", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_30Rnd_762x39mm_polymer_89", "rhs_30Rnd_545x39_AK_plum_green", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_75Rnd_762x39mm", "rhs_10Rnd_762x39mm_89", "30Rnd_556x45_Stanag", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_45Rnd_545x39_7N22_AK", "rhs_30Rnd_762x39mm", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_545x39_7N6_AK", "rhs_10Rnd_762x39mm", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7N10_desert_AK", "30Rnd_65x39_caseless_mag_Tracer", "rhs_30Rnd_762x39mm", "rhs_10Rnd_762x39mm", "rhsusf_20Rnd_762x51_m993_Mag", "rhs_45Rnd_545x39_7N22_AK", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_AK", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_75Rnd_762x39mm_89", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_762x39mm_polymer", "20Rnd_556x45_UW_mag", "rhs_30Rnd_762x39mm_bakelite_89", "rhs_30Rnd_545x39_AK_green", "30Rnd_556x45_Stanag", "20Rnd_762x51_Mag", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_30Rnd_545x39_AK_plum_green", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_30Rnd_545x39_7U1_AK", "10Rnd_50BW_Mag_F", "rhs_30Rnd_762x39mm_U", "rhs_45Rnd_545x39_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_75Rnd_762x39mm", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_7N6_AK", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N10_AK", "rhs_10Rnd_762x39mm", "rhs_75Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_30Rnd_762x39mm", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_545x39_7U1_AK", "30Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_762x39mm_bakelite", "rhs_45Rnd_545x39_AK_green", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm_bakelite", "rhs_30Rnd_545x39_7N6_AK", "rhs_30Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_polymer_U", "rhs_30Rnd_762x39mm_bakelite", "rhs_30Rnd_545x39_7N6M_AK", "30Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_762x39mm", "rhs_45Rnd_545x39_7N10_AK", "rhs_75Rnd_762x39mm", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_30Rnd_545x39_7N6M_AK", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "100Rnd_580x42_Mag_F", "rhs_30Rnd_762x39mm_polymer_89", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_762x39mm_polymer_89", "rhs_30Rnd_762x39mm_polymer_tracer", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7U1_AK", "rhs_30Rnd_762x39mm_U", "rhs_45Rnd_545x39_AK", "rhs_30Rnd_545x39_7N10_camo_AK", "rhs_30Rnd_762x39mm_polymer_89", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_10Rnd_762x39mm_tracer", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N10_2mag_AK", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N6_green_AK", "rhs_10Rnd_762x39mm_tracer", "rhs_75Rnd_762x39mm", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_plum_AK", "100Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_762x39mm_polymer_tracer", "100Rnd_580x42_Mag_Tracer_F", "rhs_30Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_45Rnd_545x39_AK", "rhs_10Rnd_762x39mm_89", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_30Rnd_545x39_AK_green", "30Rnd_65x39_caseless_green_mag_Tracer", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_30Rnd_762x39mm_bakelite_tracer", "rhs_30Rnd_762x39mm_polymer_tracer", "30Rnd_556x45_Stanag", "rhs_45Rnd_545x39_7N10_AK", "rhs_10Rnd_762x39mm_tracer", "rhs_30Rnd_762x39mm_polymer_89", "rhs_45Rnd_545x39_7N22_AK", "30Rnd_65x39_caseless_green", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_AK_green", "rhs_30Rnd_762x39mm_tracer", "30Rnd_65x39_caseless_green", "rhs_30Rnd_762x39mm_polymer_tracer", "30Rnd_556x45_Stanag", "rhs_30Rnd_545x39_AK_green", "rhs_30Rnd_545x39_AK_plum_green", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_AK_no_tracers", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_762x39mm_U", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_30Rnd_545x39_7N22_AK", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_545x39_7N10_desert_AK", "rhs_10Rnd_762x39mm_tracer", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_AK_plum_green", "rhs_30Rnd_545x39_7N6_AK", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_bakelite_U", "rhs_30Rnd_545x39_7N10_2mag_desert_AK", "rhs_45Rnd_545x39_AK_green", "30Rnd_580x42_Mag_F", "rhs_30Rnd_762x39mm_bakelite_tracer", "10Rnd_50BW_Mag_F", "rhs_10Rnd_762x39mm_U", "rhs_30Rnd_545x39_7N10_2mag_camo_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_75Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_U", "rhs_30Rnd_545x39_AK", "30Rnd_65x39_caseless_green_mag_Tracer", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_30Rnd_545x39_7N10_2mag_AK", "100Rnd_580x42_Mag_F", "20Rnd_762x51_Mag", "rhs_10Rnd_762x39mm", "rhs_45Rnd_545x39_7N22_AK", "rhsusf_20Rnd_762x51_m118_special_Mag", "30Rnd_65x39_caseless_mag", "rhs_45Rnd_545x39_7N6_AK", "rhs_30Rnd_545x39_7N6M_plum_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_30Rnd_545x39_7N6M_green_AK", "rhs_75Rnd_762x39mm", "rhs_30Rnd_762x39mm_89", "rhs_30Rnd_762x39mm_tracer", "30Rnd_556x45_Stanag", "rhs_30Rnd_545x39_7N22_plum_AK", "rhs_45Rnd_545x39_7U1_AK", "rhs_30Rnd_545x39_7N22_desert_AK", "rhs_30Rnd_545x39_7N22_camo_AK", "rhs_30Rnd_762x39mm_89", "rhsusf_20Rnd_762x51_m993_Mag", "rhs_30Rnd_545x39_7N22_AK", "rhs_30Rnd_545x39_7N10_2mag_plum_AK", "rhs_30Rnd_545x39_7N10_plum_AK", "rhs_45Rnd_545x39_AK", "rhs_30Rnd_545x39_7N6_AK"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M             = 1.75%
			muzzle_snds_H             = 1.75%
			muzzle_snds_H_khk_F       = 1.75%
			muzzle_snds_H_snd_F       = 1.75%
			muzzle_snds_58_blk_F      = 1.75%
			muzzle_snds_m_khk_F       = 1.75%
			muzzle_snds_m_snd_F       = 1.75%
			muzzle_snds_58_wdm_F      = 1.75%
			muzzle_snds_65_TI_blk_F   = 1.75%
			muzzle_snds_65_TI_hex_F   = 1.75%
			muzzle_snds_65_TI_ghex_F  = 1.75%
			muzzle_snds_H_MG_blk_F    = 1.75%
			muzzle_snds_H_MG_khk_F    = 1.75%
			optic_Arco                = 1.75%
			optic_Arco_blk_F          = 1.75%
			optic_Arco_ghex_F         = 1.75%
			optic_Hamr                = 1.75%
			optic_Hamr_khk_F          = 1.75%
			optic_Holosight           = 1.75%
			optic_Holosight_blk_F     = 1.75%
			optic_Holosight_khk_F     = 1.75%
			acc_flashlight            = 1.75%
			acc_pointer_IR            = 1.75%
			optic_MRCO                = 1.75%
			optic_DMS                 = 1.75%
			optic_DMS_ghex_F          = 1.75%
			optic_ERCO_blk_F          = 1.75%
			optic_ERCO_khk_F          = 1.75%
			optic_ERCO_snd_F          = 1.75%
			optic_NVS                 = 0.88%
			rhs_acc_at4_handler       = 0.88%
			rhsusf_acc_anpeq15A       = 0.88%
			rhsusf_acc_anpeq15        = 0.88%
			rhsusf_acc_anpeq15_light  = 0.88%
			rhsusf_acc_M2010S         = 0.88%
			rhsusf_acc_anpeq15side    = 0.88%
			rhsusf_acc_SR25S          = 0.88%
			rhsusf_acc_rotex5_grey    = 0.88%
			rhsusf_acc_rotex5_tan     = 0.88%
			rhsusf_acc_nt4_black      = 0.88%
			rhsusf_acc_nt4_tan        = 0.88%
			rhsusf_acc_muzzleFlash_SF = 0.88%
			rhsusf_acc_SF3P556        = 0.88%
			rhsusf_acc_SFMB556        = 0.88%
			rhsusf_acc_compm4         = 0.88%
			rhsusf_acc_eotech_552     = 0.88%
			rhsusf_acc_LEUPOLDMK4     = 0.88%
			rhsusf_acc_M2A1           = 0.88%
			rhsusf_acc_EOTECH         = 0.88%
			rhsusf_acc_LEUPOLDMK4_2   = 0.88%
			rhsusf_acc_ACOG3_USMC     = 0.88%
			rhsusf_acc_ACOG2_USMC     = 0.88%
			rhsusf_acc_ACOG_USMC      = 0.88%
			rhsusf_acc_ACOG3          = 0.88%
			rhsusf_acc_ACOG2          = 0.88%
			rhsusf_acc_ACOG_pip       = 0.88%
			rhsusf_acc_ACOG_sa        = 0.88%
			rhsusf_acc_ACOG_d         = 0.88%
			rhsusf_acc_ACOG_wd        = 0.88%
			rhsusf_acc_ACOG           = 0.88%
			rhs_acc_tgpa              = 0.88%
			rhs_acc_pbs1              = 0.88%
			rhs_acc_dtk4short         = 0.88%
			rhs_acc_tgpv              = 0.88%
			rhs_acc_dtk4long          = 0.88%
			rhs_acc_dtk4screws        = 0.88%
			rhs_acc_muzzleFlash_dtk   = 0.88%
			rhs_acc_dtk3              = 0.88%
			rhs_acc_dtk1              = 0.88%
			rhs_acc_dtk               = 0.88%
			rhs_acc_dtk1l             = 0.88%
			rhs_acc_ak5               = 0.88%
			rhs_acc_1p29              = 0.88%
			rhs_acc_1p78              = 0.88%
			rhs_acc_pkas              = 0.88%
			rhs_acc_ekp1              = 0.88%
			rhs_acc_1p63              = 0.88%
			rhs_acc_ekp1b             = 0.88%
			rhs_acc_ekp1c             = 0.88%
			rhs_acc_ekp1d             = 0.88%
			rhs_acc_npz               = 0.88%
			rhs_acc_pso1m2            = 0.88%
			rhs_acc_pgo7v             = 0.88%
			rhs_acc_1pn93_1           = 0.88%
			rhs_acc_1pn93_2           = 0.88%
		*/
		RifleAttachments[] = {"rhs_acc_dtk3", "optic_Arco_blk_F", "rhsusf_acc_ACOG3_USMC", "optic_Hamr", "optic_MRCO", "rhs_acc_pkas", "optic_Holosight", "acc_flashlight", "rhs_acc_dtk4screws", "optic_DMS_ghex_F", "rhs_acc_dtk", "optic_Arco_blk_F", "optic_ERCO_blk_F", "optic_Hamr_khk_F", "acc_pointer_IR", "acc_flashlight", "muzzle_snds_65_TI_ghex_F", "rhsusf_acc_nt4_black", "rhs_acc_ak5", "rhsusf_acc_SFMB556", "rhs_acc_dtk4short", "rhsusf_acc_nt4_tan", "rhs_acc_dtk1", "rhs_acc_pso1m2", "rhsusf_acc_ACOG_d", "optic_MRCO", "rhsusf_acc_SR25S", "rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_anpeq15side", "rhs_acc_muzzleFlash_dtk", "muzzle_snds_58_wdm_F", "muzzle_snds_H", "muzzle_snds_H_snd_F", "optic_Arco", "rhs_acc_ekp1d", "muzzle_snds_M", "rhsusf_acc_ACOG2_USMC", "optic_ERCO_khk_F", "rhsusf_acc_ACOG2", "muzzle_snds_58_blk_F", "muzzle_snds_65_TI_hex_F", "optic_ERCO_snd_F", "optic_NVS", "rhsusf_acc_M2A1", "muzzle_snds_65_TI_hex_F", "rhs_acc_dtk4long", "muzzle_snds_H_MG_khk_F", "optic_Holosight_blk_F", "optic_DMS", "muzzle_snds_m_snd_F", "rhsusf_acc_compm4", "rhsusf_acc_ACOG_pip", "optic_Arco", "rhsusf_acc_muzzleFlash_SF", "rhsusf_acc_anpeq15", "muzzle_snds_H", "rhsusf_acc_anpeq15A", "muzzle_snds_M", "rhsusf_acc_anpeq15_light", "rhsusf_acc_SF3P556", "muzzle_snds_H_khk_F", "optic_ERCO_snd_F", "rhs_acc_tgpa", "optic_Hamr_khk_F", "acc_pointer_IR", "rhs_acc_ekp1c", "muzzle_snds_H_khk_F", "rhsusf_acc_ACOG", "optic_Hamr", "rhs_acc_npz", "optic_Holosight", "rhs_acc_tgpv", "rhsusf_acc_ACOG3", "rhsusf_acc_rotex5_tan", "optic_ERCO_blk_F", "rhs_acc_ekp1", "rhs_acc_1p78", "muzzle_snds_m_khk_F", "rhsusf_acc_LEUPOLDMK4_2", "rhsusf_acc_ACOG_USMC", "rhs_acc_pgo7v", "optic_DMS", "rhs_acc_dtk1l", "rhs_acc_at4_handler", "muzzle_snds_m_khk_F", "muzzle_snds_m_snd_F", "rhs_acc_1p63", "muzzle_snds_H_MG_blk_F", "optic_ERCO_khk_F", "rhsusf_acc_rotex5_grey", "muzzle_snds_65_TI_blk_F", "optic_Arco_ghex_F", "rhsusf_acc_eotech_552", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_58_wdm_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_MG_blk_F", "rhsusf_acc_M2010S", "muzzle_snds_58_blk_F", "optic_Holosight_khk_F", "muzzle_snds_H_snd_F", "rhs_acc_pbs1", "optic_Holosight_khk_F", "optic_DMS_ghex_F", "rhs_acc_1pn93_2", "muzzle_snds_H_MG_khk_F", "rhs_acc_1pn93_1", "rhsusf_acc_ACOG_sa", "rhs_acc_ekp1b", "rhsusf_acc_EOTECH", "rhsusf_acc_ACOG_wd", "optic_Arco_ghex_F", "optic_Holosight_blk_F", "rhs_acc_1p29"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F     = 3.03%
			arifle_MX_SW_F           = 3.03%
			LMG_Mk200_F              = 3.03%
			LMG_Zafir_F              = 3.03%
			rhs_weap_pkp             = 15.15%
			rhs_weap_pkm             = 15.15%
			rhs_weap_rpk74           = 15.15%
			rhs_weap_rpk74m          = 15.15%
			rhs_weap_m240B           = 3.03%
			rhs_weap_m240B_CAP       = 3.03%
			rhs_weap_m240G           = 3.03%
			rhs_weap_m249_pip_L      = 3.03%
			rhs_weap_m249_pip_L_para = 3.03%
			rhs_weap_m249_pip_L_vfg  = 3.03%
			rhs_weap_m249_pip_S      = 3.03%
			rhs_weap_m249_pip_S_para = 3.03%
			rhs_weap_m249_pip_S_vfg  = 3.03%
		*/
		LMG[] = {"rhs_weap_rpk74m", "arifle_MX_SW_F", "rhs_weap_pkp", "rhs_weap_rpk74", "rhs_weap_rpk74m", "LMG_Zafir_F", "rhs_weap_rpk74m", "rhs_weap_m240B_CAP", "LMG_Mk200_F", "rhs_weap_pkp", "rhs_weap_m249_pip_L", "rhs_weap_pkm", "rhs_weap_pkm", "rhs_weap_rpk74m", "rhs_weap_m240B", "rhs_weap_pkp", "rhs_weap_rpk74", "rhs_weap_m249_pip_S_para", "rhs_weap_m249_pip_S_vfg", "rhs_weap_m249_pip_L_vfg", "rhs_weap_rpk74", "rhs_weap_pkm", "rhs_weap_m249_pip_L_para", "arifle_MX_SW_Black_F", "rhs_weap_pkp", "rhs_weap_pkm", "rhs_weap_rpk74", "rhs_weap_m249_pip_S", "rhs_weap_rpk74m", "rhs_weap_pkm", "rhs_weap_rpk74", "rhs_weap_pkp", "rhs_weap_m240G"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag        = 1.12%
			100Rnd_65x39_caseless_mag_Tracer = 1.12%
			150Rnd_762x54_Box                = 1.12%
			150Rnd_762x54_Box_Tracer         = 1.12%
			200Rnd_65x39_Belt                = 1.12%
			200Rnd_65x39_Belt_Tracer_Green   = 1.12%
			200Rnd_65x39_Belt_Tracer_Red     = 1.12%
			200Rnd_65x39_Belt_Tracer_Yellow  = 1.12%
			rhs_200rnd_556x45_M_SAW          = 1.12%
			rhs_200rnd_556x45_T_SAW          = 1.12%
			rhs_200rnd_556x45_B_SAW          = 1.12%
			rhsusf_50Rnd_762x51              = 1.12%
			rhsusf_50Rnd_762x51_m61_ap       = 1.12%
			rhsusf_50Rnd_762x51_m62_tracer   = 1.12%
			rhsusf_50Rnd_762x51_m80a1epr     = 1.12%
			rhsusf_100Rnd_762x51             = 1.12%
			rhsusf_100Rnd_762x51_m61_ap      = 1.12%
			rhsusf_100Rnd_762x51_m62_tracer  = 1.12%
			rhsusf_100Rnd_762x51_m80a1epr    = 1.12%
			rhsusf_50Rnd_762x51_m993         = 1.12%
			rhsusf_100Rnd_762x51_m993        = 1.12%
			rhs_45Rnd_545x39_AK              = 7.87%
			rhs_45Rnd_545x39_7N6_AK          = 6.74%
			rhs_45Rnd_545x39_7N10_AK         = 6.74%
			rhs_45Rnd_545x39_7N22_AK         = 6.74%
			rhs_45Rnd_545x39_AK_green        = 6.74%
			rhs_45Rnd_545x39_7U1_AK          = 6.74%
			rhs_75Rnd_762x39mm               = 5.62%
			rhs_75Rnd_762x39mm_tracer        = 5.62%
			rhs_75Rnd_762x39mm_89            = 5.62%
			rhs_100Rnd_762x54mmR             = 4.49%
			rhs_100Rnd_762x54mmR_green       = 4.49%
			rhs_100Rnd_762x54mmR_7N13        = 3.37%
			rhs_100Rnd_762x54mmR_7N26        = 3.37%
			rhs_100Rnd_762x54mmR_7BZ3        = 2.25%
		*/
		LMGAmmo[] = {"200Rnd_65x39_Belt_Tracer_Yellow", "rhs_45Rnd_545x39_7N6_AK", "rhs_45Rnd_545x39_AK_green", "rhs_75Rnd_762x39mm_89", "rhs_100Rnd_762x54mmR_7BZ3", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_7N13", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhsusf_100Rnd_762x51_m993", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_AK_green", "rhs_75Rnd_762x39mm_89", "rhs_45Rnd_545x39_7N6_AK", "rhs_45Rnd_545x39_AK", "rhs_100Rnd_762x54mmR_green", "rhs_45Rnd_545x39_AK_green", "rhs_45Rnd_545x39_7N22_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N6_AK", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N6_AK", "rhsusf_100Rnd_762x51_m62_tracer", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_7N6_AK", "rhsusf_100Rnd_762x51_m80a1epr", "150Rnd_762x54_Box", "rhs_100Rnd_762x54mmR_green", "rhs_100Rnd_762x54mmR", "200Rnd_65x39_Belt", "rhs_100Rnd_762x54mmR_7BZ3", "rhsusf_100Rnd_762x51_m61_ap", "rhs_45Rnd_545x39_AK", "rhs_200rnd_556x45_M_SAW", "rhsusf_50Rnd_762x51_m80a1epr", "rhsusf_50Rnd_762x51", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_200rnd_556x45_B_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR_7N26", "rhsusf_50Rnd_762x51_m993", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_7N22_AK", "rhs_100Rnd_762x54mmR_green", "100Rnd_65x39_caseless_mag_Tracer", "rhs_45Rnd_545x39_AK_green", "rhs_75Rnd_762x39mm_tracer", "rhs_45Rnd_545x39_7N10_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_75Rnd_762x39mm_89", "rhsusf_100Rnd_762x51", "150Rnd_762x54_Box_Tracer", "rhs_45Rnd_545x39_AK", "rhs_75Rnd_762x39mm", "200Rnd_65x39_Belt_Tracer_Red", "rhs_45Rnd_545x39_7U1_AK", "rhs_100Rnd_762x54mmR_7N13", "rhs_75Rnd_762x39mm_89", "rhsusf_50Rnd_762x51_m61_ap", "rhs_45Rnd_545x39_7N22_AK", "rhs_45Rnd_545x39_7N10_AK", "rhs_100Rnd_762x54mmR_7N26", "rhs_100Rnd_762x54mmR_7N13", "rhs_75Rnd_762x39mm_tracer", "rhsusf_50Rnd_762x51_m62_tracer", "rhs_75Rnd_762x39mm", "rhs_75Rnd_762x39mm", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7U1_AK", "rhs_45Rnd_545x39_AK", "rhs_45Rnd_545x39_7N6_AK", "rhs_75Rnd_762x39mm", "rhs_45Rnd_545x39_7U1_AK", "200Rnd_65x39_Belt_Tracer_Green", "rhs_45Rnd_545x39_AK_green", "100Rnd_65x39_caseless_mag", "rhs_45Rnd_545x39_7N22_AK", "rhs_100Rnd_762x54mmR", "rhs_75Rnd_762x39mm", "rhs_100Rnd_762x54mmR_7N26", "rhs_75Rnd_762x39mm_89"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_EBR_F           = 6.82%
			rhs_weap_XM2010        = 4.55%
			rhs_weap_XM2010_d      = 4.55%
			rhs_weap_XM2010_sa     = 4.55%
			rhs_weap_XM2010_wd     = 2.27%
			rhs_weap_asval         = 11.36%
			rhs_weap_vss           = 11.36%
			rhs_weap_svd           = 11.36%
			rhs_weap_svdp          = 11.36%
			rhs_weap_svds          = 11.36%
			rhs_weap_t5000         = 4.55%
			rhs_weap_kar98k        = 6.82%
			rhs_weap_m1garand_sa43 = 9.09%
		*/
		Snipers[] = {"rhs_weap_svds", "srifle_EBR_F", "rhs_weap_m1garand_sa43", "rhs_weap_m1garand_sa43", "rhs_weap_kar98k", "rhs_weap_svds", "srifle_EBR_F", "rhs_weap_XM2010_d", "srifle_EBR_F", "rhs_weap_vss", "rhs_weap_XM2010", "rhs_weap_XM2010_wd", "rhs_weap_t5000", "rhs_weap_asval", "rhs_weap_svd", "rhs_weap_m1garand_sa43", "rhs_weap_asval", "rhs_weap_svd", "rhs_weap_svds", "rhs_weap_kar98k", "rhs_weap_svds", "rhs_weap_XM2010_sa", "rhs_weap_vss", "rhs_weap_svdp", "rhs_weap_svdp", "rhs_weap_svdp", "rhs_weap_t5000", "rhs_weap_asval", "rhs_weap_svdp", "rhs_weap_XM2010_sa", "rhs_weap_m1garand_sa43", "rhs_weap_svd", "rhs_weap_vss", "rhs_weap_svd", "rhs_weap_asval", "rhs_weap_svdp", "rhs_weap_XM2010_d", "rhs_weap_svds", "rhs_weap_asval", "rhs_weap_kar98k", "rhs_weap_vss", "rhs_weap_XM2010", "rhs_weap_svd", "rhs_weap_vss"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			5Rnd_127x108_APDS_Mag                  = 1.89%
			5Rnd_127x108_Mag                       = 1.89%
			7Rnd_408_Mag                           = 1.89%
			10Rnd_762x54_Mag                       = 1.89%
			20Rnd_762x51_Mag                       = 1.89%
			rhs_10Rnd_762x54mmR_7N1                = 9.43%
			rhs_10Rnd_762x54mmR_7N14               = 9.43%
			rhs_10Rnd_762x39mm                     = 9.43%
			rhs_10Rnd_762x39mm_tracer              = 9.43%
			rhs_10Rnd_762x39mm_89                  = 9.43%
			rhs_10Rnd_762x39mm_U                   = 9.43%
			rhsusf_5Rnd_300winmag_xm2010           = 3.77%
			rhs_5Rnd_338lapua_t5000                = 3.77%
			rhsusf_mag_10Rnd_STD_50BMG_M33         = 1.89%
			rhsusf_mag_10Rnd_STD_50BMG_mk211       = 1.89%
			rhsgref_8Rnd_762x63_M2B_M1rifle        = 11.32%
			rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle = 11.32%
		*/
		SniperAmmo[] = {"rhs_5Rnd_338lapua_t5000", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x39mm_89", "rhs_10Rnd_762x39mm_89", "5Rnd_127x108_APDS_Mag", "rhsusf_mag_10Rnd_STD_50BMG_mk211", "rhs_10Rnd_762x54mmR_7N14", "7Rnd_408_Mag", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x39mm_89", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x39mm_U", "rhs_10Rnd_762x39mm_U", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x54mmR_7N14", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x39mm_U", "rhsusf_5Rnd_300winmag_xm2010", "rhs_10Rnd_762x54mmR_7N1", "rhsgref_8Rnd_762x63_M2B_M1rifle", "20Rnd_762x51_Mag", "rhs_10Rnd_762x39mm", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_10Rnd_762x39mm_tracer", "rhsusf_mag_10Rnd_STD_50BMG_M33", "5Rnd_127x108_Mag", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x39mm_U", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x54mmR_7N14", "rhs_10Rnd_762x54mmR_7N1", "rhs_10Rnd_762x39mm_tracer", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhs_10Rnd_762x39mm_89", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhsusf_5Rnd_300winmag_xm2010", "rhs_10Rnd_762x54mmR_7N14", "10Rnd_762x54_Mag", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhs_5Rnd_338lapua_t5000", "rhs_10Rnd_762x39mm_tracer", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhs_10Rnd_762x39mm_tracer", "rhs_10Rnd_762x39mm_U", "rhs_10Rnd_762x54mmR_7N1", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle", "rhsgref_8Rnd_762x63_M2B_M1rifle", "rhs_10Rnd_762x39mm_89", "rhs_10Rnd_762x39mm", "rhs_10Rnd_762x39mm_tracer"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F        = 3.23%
			muzzle_snds_B_snd_F        = 3.23%
			muzzle_snds_B              = 3.23%
			rhsusf_acc_M2010S          = 3.23%
			rhsusf_acc_M2010S_d        = 3.23%
			rhsusf_acc_M2010S_sa       = 3.23%
			rhsusf_acc_M2010S_wd       = 3.23%
			rhsusf_acc_LEUPOLDMK4      = 6.45%
			rhsusf_acc_LEUPOLDMK4_d    = 6.45%
			rhsusf_acc_LEUPOLDMK4_wd   = 3.23%
			optic_LRPS                 = 6.45%
			optic_LRPS_ghex_F          = 3.23%
			optic_LRPS_tna_F           = 3.23%
			optic_SOS                  = 9.68%
			rhsusf_acc_premier_low     = 3.23%
			rhsusf_acc_premier         = 3.23%
			rhsusf_acc_premier_anpvs27 = 3.23%
			rhs_acc_tgpv               = 3.23%
			rhs_acc_tgpv2              = 3.23%
			rhs_acc_pso1m2             = 3.23%
			optic_SOS_khk_F            = 9.68%
			optic_DMS                  = 6.45%
			rhsusf_acc_harris_bipod    = 3.23%
		*/
		SniperAttachments[] = {"optic_SOS_khk_F", "optic_SOS_khk_F", "optic_LRPS_tna_F", "optic_DMS", "rhsusf_acc_LEUPOLDMK4_wd", "rhsusf_acc_LEUPOLDMK4", "optic_SOS", "rhsusf_acc_harris_bipod", "optic_SOS", "optic_SOS_khk_F", "rhsusf_acc_M2010S_sa", "rhsusf_acc_LEUPOLDMK4", "optic_LRPS", "optic_LRPS", "muzzle_snds_B", "rhs_acc_tgpv2", "rhs_acc_tgpv", "rhsusf_acc_M2010S_wd", "muzzle_snds_B_khk_F", "rhsusf_acc_LEUPOLDMK4_d", "rhs_acc_pso1m2", "rhsusf_acc_premier_anpvs27", "rhsusf_acc_premier_low", "optic_SOS", "optic_LRPS_ghex_F", "rhsusf_acc_premier", "optic_DMS", "muzzle_snds_B_snd_F", "rhsusf_acc_M2010S_d", "rhsusf_acc_LEUPOLDMK4_d", "rhsusf_acc_M2010S"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 9.09%
			srifle_DMR_03_khaki_F    = 9.09%
			srifle_DMR_03_tan_F      = 9.09%
			srifle_DMR_03_woodland_F = 9.09%
			srifle_DMR_06_camo_F     = 13.64%
			srifle_DMR_06_olive_F    = 13.64%
			srifle_DMR_02_camo_F     = 4.55%
			srifle_DMR_02_F          = 4.55%
			srifle_DMR_02_sniper_F   = 4.55%
			srifle_DMR_04_F          = 4.55%
			srifle_DMR_04_Tan_F      = 4.55%
			srifle_DMR_05_blk_F      = 4.55%
			srifle_DMR_05_hex_F      = 4.55%
			srifle_DMR_05_tan_F      = 4.55%
		*/
		DLCRifles[] = {"srifle_DMR_03_woodland_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_hex_F", "srifle_DMR_06_camo_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_blk_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_F", "srifle_DMR_04_F", "srifle_DMR_03_khaki_F", "srifle_DMR_06_olive_F", "srifle_DMR_02_camo_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			10Rnd_127x54_Mag       = 20.00%
			20Rnd_762x51_Mag       = 20.00%
			10Rnd_338_Mag          = 30.00%
			10Rnd_93x64_DMR_05_Mag = 30.00%
		*/
		DLCAmmo[] = {"10Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_338_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_338_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14.29%
			optic_AMS_khk = 14.29%
			optic_AMS_snd = 14.29%
			optic_KHS_blk = 14.29%
			optic_KHS_hex = 14.29%
			optic_KHS_old = 14.29%
			optic_KHS_tan = 14.29%
		*/
		DLCOptics[] = {"optic_AMS_khk", "optic_KHS_old", "optic_AMS", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_AMS_snd"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16.67%
			muzzle_snds_338_green = 16.67%
			muzzle_snds_338_sand  = 16.67%
			muzzle_snds_93mmg     = 16.67%
			muzzle_snds_93mmg_tan = 16.67%
			muzzle_snds_B         = 16.67%
		*/
		DLCSupressor[] = {"muzzle_snds_93mmg_tan", "muzzle_snds_338_sand", "muzzle_snds_93mmg", "muzzle_snds_B", "muzzle_snds_338_black", "muzzle_snds_338_green"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			rhs_weap_M107     = 14.29%
			rhs_weap_M107_d   = 14.29%
			rhs_weap_M107_w   = 14.29%
			srifle_GM6_F      = 14.29%
			srifle_LRR_F      = 14.29%
			srifle_LRR_tna_F  = 14.29%
			srifle_GM6_ghex_F = 14.29%
		*/
		EpicWeapons[] = {"srifle_GM6_ghex_F", "srifle_LRR_tna_F", "rhs_weap_M107", "rhs_weap_M107_w", "srifle_GM6_F", "srifle_LRR_F", "rhs_weap_M107_d"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli          = 10.00%
			bipod_03_F_blk          = 10.00%
			bipod_02_F_tan          = 10.00%
			bipod_02_F_hex          = 10.00%
			bipod_02_F_blk          = 10.00%
			bipod_01_F_snd          = 10.00%
			bipod_01_F_mtp          = 10.00%
			bipod_01_F_blk          = 10.00%
			bipod_01_F_khk          = 10.00%
			rhsusf_acc_harris_bipod = 10.00%
		*/
		Bipods[] = {"bipod_03_F_blk", "bipod_02_F_blk", "rhsusf_acc_harris_bipod", "bipod_01_F_mtp", "bipod_03_F_oli", "bipod_02_F_hex", "bipod_01_F_snd", "bipod_01_F_blk", "bipod_02_F_tan", "bipod_01_F_khk"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell         = 16.67%
			1Rnd_HE_Grenade_shell         = 16.67%
			rhs_mag_M441_HE               = 16.67%
			rhs_mag_M433_HEDP             = 16.67%
			rhs_mag_m397_HET              = 16.67%
			rhsusf_mag_6Rnd_M576_Buckshot = 16.67%
		*/
		HEGrenades[] = {"rhs_mag_M433_HEDP", "1Rnd_HE_Grenade_shell", "rhsusf_mag_6Rnd_M576_Buckshot", "rhs_mag_M441_HE", "rhs_mag_m397_HET", "3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6.25%
			3Rnd_UGL_FlareRed_F    = 6.25%
			3Rnd_UGL_FlareWhite_F  = 6.25%
			3Rnd_UGL_FlareYellow_F = 6.25%
			UGL_FlareGreen_F       = 18.75%
			UGL_FlareRed_F         = 18.75%
			UGL_FlareWhite_F       = 18.75%
			UGL_FlareYellow_F      = 18.75%
		*/
		UGLFlares[] = {"3Rnd_UGL_FlareGreen_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareYellow_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareYellow_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareRed_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3.57%
			3Rnd_SmokeBlue_Grenade_shell   = 3.57%
			3Rnd_SmokeGreen_Grenade_shell  = 3.57%
			3Rnd_SmokeOrange_Grenade_shell = 3.57%
			3Rnd_SmokePurple_Grenade_shell = 3.57%
			3Rnd_SmokeRed_Grenade_shell    = 3.57%
			3Rnd_SmokeYellow_Grenade_shell = 3.57%
			1Rnd_Smoke_Grenade_shell       = 10.71%
			1Rnd_SmokeBlue_Grenade_shell   = 10.71%
			1Rnd_SmokeGreen_Grenade_shell  = 10.71%
			1Rnd_SmokeOrange_Grenade_shell = 10.71%
			1Rnd_SmokePurple_Grenade_shell = 10.71%
			1Rnd_SmokeRed_Grenade_shell    = 10.71%
			1Rnd_SmokeYellow_Grenade_shell = 10.71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade    = 14.29%
			MiniGrenade    = 14.29%
			rhs_mag_rgd5   = 14.29%
			rhs_mag_rgn    = 14.29%
			rhs_mag_rgo    = 14.29%
			rhs_mag_zarya2 = 14.29%
			rhs_ammo_m67   = 14.29%
		*/
		HandGrenades[] = {"rhs_mag_rgo", "HandGrenade", "rhs_ammo_m67", "rhs_mag_rgn", "rhs_mag_zarya2", "MiniGrenade", "rhs_mag_rgd5"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag    = 4.55%
			APERSBoundingMine_Range_Mag = 13.64%
			APERSMine_Range_Mag         = 13.64%
			APERSTripMine_Wire_Mag      = 13.64%
			DemoCharge_Remote_Mag       = 9.09%
			IEDLandSmall_Remote_Mag     = 22.73%
			IEDUrbanSmall_Remote_Mag    = 22.73%
		*/
		Explosives[] = {"IEDUrbanSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "IEDUrbanSmall_Remote_Mag", "DemoCharge_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "SatchelCharge_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "APERSBoundingMine_Range_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "DemoCharge_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 3.33%
			Binocular              = 13.33%
			ItemGPS                = 13.33%
			ItemRadio              = 20.00%
			ItemMap                = 23.33%
			Exile_Item_Heatpack    = 26.67%
		*/
		CivilianItems[] = {"ItemRadio", "Exile_Item_Heatpack", "ItemMap", "ItemGPS", "ItemGPS", "Exile_Item_Heatpack", "Binocular", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "Binocular", "ItemGPS", "Binocular", "Exile_Item_Heatpack", "ItemMap", "ItemMap", "ItemMap", "ItemRadio", "ItemMap", "Exile_Item_Heatpack", "ItemRadio", "ItemMap", "Exile_Item_MobilePhone", "ItemRadio", "ItemRadio", "Binocular", "ItemRadio", "Exile_Item_Heatpack", "ItemMap", "ItemGPS"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0.58%
			U_NikosBody              = 0.58%
			U_OrestesBody            = 0.58%
			U_C_Man_casual_1_F       = 2.92%
			U_C_Man_casual_2_F       = 2.92%
			U_C_Man_casual_3_F       = 2.92%
			U_C_Man_casual_4_F       = 2.92%
			U_C_Man_casual_5_F       = 2.92%
			U_C_Man_casual_6_F       = 2.92%
			U_C_man_sport_1_F        = 2.92%
			U_C_man_sport_2_F        = 2.92%
			U_C_man_sport_3_F        = 2.92%
			U_I_C_Soldier_Bandit_1_F = 2.92%
			U_I_C_Soldier_Bandit_2_F = 2.92%
			U_I_C_Soldier_Bandit_3_F = 2.92%
			U_I_C_Soldier_Bandit_4_F = 2.92%
			U_I_C_Soldier_Bandit_5_F = 2.92%
			U_C_Poloshirt_blue       = 4.09%
			U_C_Poloshirt_burgundy   = 4.09%
			U_C_Poloshirt_salmon     = 4.09%
			U_C_Poloshirt_stripped   = 4.09%
			U_C_Poloshirt_tricolour  = 4.09%
			U_C_HunterBody_grn       = 5.26%
			U_C_Journalist           = 5.26%
			U_C_Poor_1               = 5.26%
			U_C_Poor_2               = 5.26%
			U_C_Poor_shorts_1        = 5.26%
			U_C_Scientist            = 5.26%
			U_Rangemaster            = 5.26%
		*/
		CivilianClothing[] = {"U_C_Journalist", "U_C_Poor_2", "U_I_C_Soldier_Bandit_5_F", "U_C_Scientist", "U_C_Scientist", "U_C_Scientist", "U_C_HunterBody_grn", "U_C_man_sport_1_F", "U_C_Man_casual_2_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_1", "U_C_Man_casual_6_F", "U_C_man_sport_3_F", "U_Rangemaster", "U_C_man_sport_2_F", "U_C_man_sport_3_F", "U_Rangemaster", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_C_Poor_2", "U_C_Journalist", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_1_F", "U_C_HunterBody_grn", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_2", "U_C_HunterBody_grn", "U_C_Poloshirt_salmon", "U_C_Poor_1", "U_C_man_sport_1_F", "U_C_Scientist", "U_C_Man_casual_6_F", "U_C_Poloshirt_blue", "U_C_Poor_2", "U_C_Man_casual_6_F", "U_C_man_sport_1_F", "U_C_Poloshirt_stripped", "U_C_Scientist", "U_C_Poloshirt_salmon", "U_C_Man_casual_5_F", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Journalist", "U_C_Poloshirt_blue", "U_C_Poloshirt_stripped", "U_C_HunterBody_grn", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_man_sport_2_F", "U_C_Scientist", "U_C_man_sport_1_F", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_4_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_man_sport_2_F", "U_C_Poor_2", "U_C_Man_casual_3_F", "U_C_Poloshirt_salmon", "U_OrestesBody", "U_C_Poloshirt_stripped", "U_C_Poor_1", "U_C_HunterBody_grn", "U_C_HunterBody_grn", "U_C_Poloshirt_stripped", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_Poloshirt_tricolour", "U_NikosAgedBody", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_Scientist", "U_Rangemaster", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_tricolour", "U_C_Man_casual_4_F", "U_C_Poloshirt_tricolour", "U_Rangemaster", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_1_F", "U_C_Poloshirt_blue", "U_C_Man_casual_3_F", "U_C_Journalist", "U_C_Poor_1", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_5_F", "U_C_Man_casual_2_F", "U_C_Man_casual_2_F", "U_C_Poloshirt_salmon", "U_NikosBody", "U_C_Poloshirt_blue", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_2_F", "U_Rangemaster", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_burgundy", "U_C_Journalist", "U_C_Poor_1", "U_C_Poloshirt_tricolour", "U_C_Man_casual_4_F", "U_C_Scientist", "U_C_Poloshirt_salmon", "U_C_Poloshirt_stripped", "U_C_Man_casual_6_F", "U_Rangemaster", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_salmon", "U_C_Man_casual_3_F", "U_C_Man_casual_2_F", "U_C_Journalist", "U_C_Journalist", "U_C_Man_casual_6_F", "U_C_Scientist", "U_C_HunterBody_grn", "U_C_Man_casual_3_F", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_C_Poloshirt_stripped", "U_C_Man_casual_5_F", "U_C_Poloshirt_salmon", "U_C_Poor_2", "U_C_Poor_2", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_1", "U_C_Poloshirt_burgundy", "U_C_Poor_shorts_1", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_1_F", "U_Rangemaster", "U_C_Man_casual_1_F", "U_C_man_sport_1_F", "U_C_Journalist", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Journalist", "U_C_Poloshirt_blue", "U_C_man_sport_3_F", "U_C_Poor_1", "U_C_Man_casual_3_F", "U_C_Poor_shorts_1", "U_C_Man_casual_2_F", "U_C_man_sport_2_F", "U_C_Poor_shorts_1", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_Rangemaster", "U_C_Poloshirt_burgundy", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_5_F", "U_C_Man_casual_1_F"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6.67%
			B_Kitbag_mcamo      = 6.67%
			B_Kitbag_sgg        = 6.67%
			B_AssaultPack_blk   = 6.67%
			B_AssaultPack_cbr   = 6.67%
			B_AssaultPack_dgtl  = 6.67%
			B_AssaultPack_khk   = 6.67%
			B_AssaultPack_mcamo = 6.67%
			B_AssaultPack_rgr   = 6.67%
			B_AssaultPack_sgg   = 6.67%
			B_AssaultPack_tna_F = 6.67%
			B_HuntingBackpack   = 6.67%
			B_OutdoorPack_blu   = 6.67%
			B_OutdoorPack_tan   = 6.67%
			B_OutdoorPack_blk   = 6.67%
		*/
		CivilianBackpacks[] = {"B_AssaultPack_blk", "B_AssaultPack_dgtl", "B_AssaultPack_khk", "B_OutdoorPack_tan", "B_Kitbag_cbr", "B_OutdoorPack_blu", "B_AssaultPack_cbr", "B_OutdoorPack_blk", "B_HuntingBackpack", "B_Kitbag_mcamo", "B_AssaultPack_sgg", "B_Kitbag_sgg", "B_AssaultPack_mcamo", "B_AssaultPack_tna_F", "B_AssaultPack_rgr"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25.00%
			V_TacVest_blk_POLICE = 25.00%
			V_Rangemaster_belt   = 50.00%
		*/
		CivilianVests[] = {"V_Press_F", "V_Rangemaster_belt", "V_Rangemaster_belt", "V_TacVest_blk_POLICE"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5.56%
			H_Beret_blk_POLICE = 5.56%
			H_Cap_blk          = 5.56%
			H_Cap_blk_Raven    = 5.56%
			H_Cap_blu          = 5.56%
			H_Cap_grn          = 5.56%
			H_Cap_headphones   = 5.56%
			H_Cap_oli          = 5.56%
			H_Cap_press        = 5.56%
			H_Cap_red          = 5.56%
			H_Cap_tan          = 5.56%
			H_Hat_blue         = 5.56%
			H_Hat_brown        = 5.56%
			H_Hat_checker      = 5.56%
			H_Hat_grey         = 5.56%
			H_Hat_tan          = 5.56%
			H_StrawHat         = 5.56%
			H_StrawHat_dark    = 5.56%
		*/
		CivilianHeadgear[] = {"H_Hat_checker", "H_Cap_headphones", "H_Cap_tan", "H_Beret_blk_POLICE", "H_Hat_tan", "H_StrawHat", "H_Hat_grey", "H_Hat_blue", "H_Cap_press", "H_Cap_blk_Raven", "H_Cap_blk", "H_Bandanna_surfer", "H_Cap_grn", "H_Cap_oli", "H_Cap_blu", "H_Hat_brown", "H_Cap_red", "H_StrawHat_dark"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 6.25%
			ItemCompass        = 62.50%
			NVGoggles          = 6.25%
			NVGoggles_tna_F    = 6.25%
			O_NVGoggles_ghex_F = 6.25%
			O_NVGoggles_hex_F  = 6.25%
			O_NVGoggles_urb_F  = 6.25%
		*/
		GuerillaItems[] = {"ItemCompass", "O_NVGoggles_urb_F", "O_NVGoggles_ghex_F", "ItemCompass", "ItemCompass", "O_NVGoggles_hex_F", "Rangefinder", "NVGoggles_tna_F", "NVGoggles", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1.15%
			U_I_C_Soldier_Camo_F     = 3.45%
			U_I_C_Soldier_Para_1_F   = 3.45%
			U_I_C_Soldier_Para_2_F   = 3.45%
			U_I_C_Soldier_Para_3_F   = 3.45%
			U_I_C_Soldier_Para_4_F   = 3.45%
			U_I_C_Soldier_Para_5_F   = 3.45%
			U_IG_leader              = 4.60%
			U_IG_Guerilla3_1         = 5.75%
			U_IG_Guerilla3_2         = 5.75%
			U_IG_Guerilla1_1         = 6.90%
			U_IG_Guerilla2_1         = 6.90%
			U_IG_Guerilla2_2         = 6.90%
			U_IG_Guerilla2_3         = 6.90%
			rhs_insurgent_uniform_1  = 6.90%
			rhs_insurgent_uniform_2  = 6.90%
			rhs_insurgent_uniform_3  = 6.90%
			rhs_insurgent_uniform_4  = 6.90%
			rhs_insurgent_uniform_5  = 6.90%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla3_1", "rhs_insurgent_uniform_3", "U_I_C_Soldier_Para_3_F", "rhs_insurgent_uniform_2", "rhs_insurgent_uniform_1", "U_I_C_Soldier_Para_5_F", "rhs_insurgent_uniform_3", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_IG_leader", "rhs_insurgent_uniform_5", "rhs_insurgent_uniform_4", "rhs_insurgent_uniform_5", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_2", "rhs_insurgent_uniform_4", "U_IG_Guerilla1_1", "U_IG_Guerilla3_2", "rhs_insurgent_uniform_4", "rhs_insurgent_uniform_1", "rhs_insurgent_uniform_2", "U_IG_Guerilla1_1", "rhs_insurgent_uniform_1", "rhs_insurgent_uniform_2", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_1", "rhs_insurgent_uniform_1", "U_IG_Guerilla2_2", "U_IG_leader", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_3", "rhs_insurgent_uniform_4", "U_I_C_Soldier_Para_1_F", "rhs_insurgent_uniform_2", "rhs_insurgent_uniform_2", "U_IG_Guerilla2_3", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla3_2", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_3_F", "rhs_insurgent_uniform_4", "rhs_insurgent_uniform_5", "rhs_insurgent_uniform_1", "U_IG_Guerilla2_2", "rhs_insurgent_uniform_3", "rhs_insurgent_uniform_1", "rhs_insurgent_uniform_5", "rhs_insurgent_uniform_3", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla1_1", "U_I_G_resistanceLeader_F", "U_IG_leader", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "rhs_insurgent_uniform_3", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_1_F", "rhs_insurgent_uniform_5", "U_I_C_Soldier_Para_4_F", "rhs_insurgent_uniform_5", "U_IG_Guerilla2_1", "rhs_insurgent_uniform_4", "U_IG_Guerilla2_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_3", "U_IG_leader", "rhs_insurgent_uniform_3", "U_IG_Guerilla2_2", "U_I_C_Soldier_Camo_F", "rhs_insurgent_uniform_2"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1.82%
			B_Bergen_mcamo             = 1.82%
			B_Bergen_rgr               = 1.82%
			B_Bergen_sgg               = 1.82%
			B_FieldPack_ghex_F         = 1.82%
			B_ViperHarness_base_F      = 3.64%
			B_ViperHarness_blk_F       = 3.64%
			B_ViperHarness_ghex_F      = 3.64%
			B_ViperHarness_hex_F       = 3.64%
			B_ViperHarness_khk_F       = 3.64%
			B_ViperHarness_oli_F       = 3.64%
			B_ViperLightHarness_base_F = 5.45%
			B_ViperLightHarness_blk_F  = 5.45%
			B_ViperLightHarness_ghex_F = 5.45%
			B_ViperLightHarness_hex_F  = 5.45%
			B_ViperLightHarness_khk_F  = 5.45%
			B_ViperLightHarness_oli_F  = 5.45%
			B_FieldPack_blk            = 9.09%
			B_FieldPack_cbr            = 9.09%
			B_FieldPack_ocamo          = 9.09%
			B_FieldPack_oucamo         = 9.09%
		*/
		GuerillaBackpacks[] = {"B_ViperHarness_hex_F", "B_Bergen_rgr", "B_FieldPack_cbr", "B_FieldPack_cbr", "B_FieldPack_blk", "B_ViperHarness_blk_F", "B_FieldPack_ocamo", "B_FieldPack_cbr", "B_FieldPack_oucamo", "B_FieldPack_ocamo", "B_ViperLightHarness_blk_F", "B_ViperHarness_khk_F", "B_ViperLightHarness_oli_F", "B_FieldPack_cbr", "B_ViperLightHarness_oli_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_ghex_F", "B_ViperHarness_khk_F", "B_FieldPack_cbr", "B_ViperLightHarness_ghex_F", "B_FieldPack_blk", "B_ViperHarness_ghex_F", "B_ViperHarness_oli_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_blk_F", "B_ViperHarness_base_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_base_F", "B_ViperHarness_hex_F", "B_Bergen_blk", "B_ViperHarness_oli_F", "B_FieldPack_ocamo", "B_ViperLightHarness_base_F", "B_FieldPack_ocamo", "B_ViperLightHarness_hex_F", "B_FieldPack_blk", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_blk_F", "B_ViperHarness_ghex_F", "B_Bergen_mcamo", "B_FieldPack_oucamo", "B_FieldPack_ghex_F", "B_FieldPack_oucamo", "B_FieldPack_oucamo", "B_ViperHarness_base_F", "B_ViperHarness_blk_F", "B_Bergen_sgg", "B_ViperLightHarness_base_F", "B_FieldPack_blk", "B_FieldPack_blk"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3.23%
			V_BandollierB_blk        = 6.45%
			V_BandollierB_cbr        = 6.45%
			V_BandollierB_khk        = 6.45%
			V_BandollierB_oli        = 6.45%
			V_BandollierB_rgr        = 6.45%
			V_Chestrig_blk           = 6.45%
			V_Chestrig_khk           = 6.45%
			V_Chestrig_oli           = 6.45%
			V_Chestrig_rgr           = 6.45%
			V_HarnessO_brn           = 6.45%
			V_HarnessO_gry           = 6.45%
			V_HarnessOGL_brn         = 6.45%
			V_HarnessOGL_gry         = 6.45%
			V_HarnessOSpec_brn       = 6.45%
			V_HarnessOSpec_gry       = 6.45%
		*/
		GuerillaVests[] = {"V_Chestrig_oli", "V_HarnessOSpec_brn", "V_BandollierB_rgr", "V_BandollierB_rgr", "V_HarnessOSpec_gry", "V_BandollierB_oli", "V_HarnessOSpec_brn", "V_HarnessOGL_gry", "V_Chestrig_oli", "V_Chestrig_rgr", "V_BandollierB_khk", "V_HarnessOSpec_gry", "V_BandollierB_khk", "V_BandollierB_blk", "V_BandollierB_blk", "V_HarnessO_gry", "V_HarnessOGL_brn", "V_HarnessOGL_brn", "V_Chestrig_rgr", "V_Chestrig_blk", "V_BandollierB_cbr", "V_HarnessO_gry", "V_Chestrig_khk", "V_HarnessO_brn", "V_HarnessOGL_gry", "V_BandollierB_cbr", "V_Chestrig_khk", "V_I_G_resistanceLeader_F", "V_HarnessO_brn", "V_BandollierB_oli", "V_Chestrig_blk"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0.84%
			H_Beret_blk               = 0.84%
			H_Beret_brn_SF            = 0.84%
			H_Beret_Colonel           = 0.84%
			H_Beret_grn               = 0.84%
			H_Beret_grn_SF            = 0.84%
			H_Beret_ocamo             = 0.84%
			H_Beret_red               = 0.84%
			H_Booniehat_tna_F         = 1.68%
			H_Cap_blk_Syndikat_F      = 1.68%
			H_Cap_grn_Syndikat_F      = 1.68%
			H_Cap_oli_Syndikat_F      = 1.68%
			H_Cap_tan_Syndikat_F      = 1.68%
			H_FakeHeadgear_Syndikat_F = 1.68%
			H_MilCap_gen_F            = 1.68%
			H_MilCap_ghex_F           = 1.68%
			H_MilCap_tna_F            = 1.68%
			H_Shemag_khk              = 1.68%
			H_Shemag_olive            = 1.68%
			H_Shemag_olive_hs         = 1.68%
			H_Shemag_tan              = 1.68%
			H_ShemagOpen_khk          = 1.68%
			H_ShemagOpen_tan          = 1.68%
			H_TurbanO_blk             = 1.68%
			H_Watchcap_camo           = 1.68%
			H_Watchcap_sgg            = 1.68%
			H_Bandanna_camo           = 2.52%
			H_Bandanna_cbr            = 2.52%
			H_Bandanna_gry            = 2.52%
			H_Bandanna_khk            = 2.52%
			H_Bandanna_khk_hs         = 2.52%
			H_Bandanna_mcamo          = 2.52%
			H_Bandanna_sgg            = 2.52%
			H_BandMask_blk            = 2.52%
			H_Cap_brn_SPECOPS         = 2.52%
			H_Cap_khaki_specops_UK    = 2.52%
			H_Cap_tan_specops_US      = 2.52%
			H_Hat_camo                = 2.52%
			H_Watchcap_blk            = 2.52%
			H_Watchcap_khk            = 2.52%
			Exile_Headgear_GasMask    = 0.84%
			H_Booniehat_dgtl          = 3.36%
			H_Booniehat_dirty         = 3.36%
			H_Booniehat_grn           = 3.36%
			H_Booniehat_indp          = 3.36%
			H_Booniehat_khk           = 3.36%
			H_Booniehat_khk_hs        = 3.36%
			H_Booniehat_mcamo         = 3.36%
			H_Booniehat_tan           = 3.36%
		*/
		GuerillaHeadgear[] = {"H_Shemag_olive", "H_Beret_grn", "H_Bandanna_khk", "H_Shemag_khk", "H_Cap_khaki_specops_UK", "H_Cap_brn_SPECOPS", "H_Booniehat_khk_hs", "H_Booniehat_khk_hs", "H_Booniehat_mcamo", "H_Beret_grn_SF", "H_BandMask_blk", "H_Booniehat_mcamo", "H_Booniehat_tan", "H_Bandanna_khk", "H_Bandanna_sgg", "H_Cap_khaki_specops_UK", "H_Booniehat_tna_F", "H_Beret_02", "H_Cap_tan_Syndikat_F", "H_Booniehat_dirty", "H_Booniehat_khk_hs", "H_Booniehat_grn", "H_Watchcap_khk", "H_Cap_khaki_specops_UK", "H_Watchcap_sgg", "H_Watchcap_blk", "H_Booniehat_dirty", "H_Booniehat_dgtl", "H_Watchcap_khk", "H_ShemagOpen_tan", "H_Beret_brn_SF", "H_Booniehat_indp", "H_Booniehat_khk", "H_Cap_grn_Syndikat_F", "H_Bandanna_cbr", "H_Cap_grn_Syndikat_F", "H_Booniehat_khk", "H_Watchcap_blk", "H_Watchcap_blk", "H_Cap_brn_SPECOPS", "H_Bandanna_gry", "Exile_Headgear_GasMask", "H_TurbanO_blk", "H_Watchcap_camo", "H_Booniehat_mcamo", "H_Shemag_khk", "H_ShemagOpen_tan", "H_MilCap_ghex_F", "H_Booniehat_grn", "H_Bandanna_khk_hs", "H_MilCap_tna_F", "H_Bandanna_mcamo", "H_ShemagOpen_khk", "H_Booniehat_tan", "H_Watchcap_khk", "H_Shemag_olive_hs", "H_Booniehat_tan", "H_Booniehat_khk", "H_MilCap_tna_F", "H_Beret_red", "H_Bandanna_sgg", "H_BandMask_blk", "H_Cap_blk_Syndikat_F", "H_Cap_blk_Syndikat_F", "H_Shemag_olive_hs", "H_Bandanna_camo", "H_Booniehat_khk_hs", "H_Bandanna_khk", "H_Bandanna_camo", "H_Bandanna_mcamo", "H_Cap_tan_Syndikat_F", "H_Beret_blk", "H_Booniehat_dirty", "H_Watchcap_camo", "H_Cap_tan_specops_US", "H_FakeHeadgear_Syndikat_F", "H_Bandanna_gry", "H_Bandanna_gry", "H_Cap_brn_SPECOPS", "H_Booniehat_dgtl", "H_ShemagOpen_khk", "H_Booniehat_khk", "H_Bandanna_sgg", "H_Hat_camo", "H_Cap_tan_specops_US", "H_Bandanna_cbr", "H_Shemag_tan", "H_BandMask_blk", "H_Cap_oli_Syndikat_F", "H_Booniehat_dirty", "H_FakeHeadgear_Syndikat_F", "H_Booniehat_tna_F", "H_Hat_camo", "H_MilCap_gen_F", "H_Booniehat_tan", "H_Bandanna_mcamo", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Booniehat_indp", "H_Hat_camo", "H_Bandanna_khk_hs", "H_MilCap_gen_F", "H_Booniehat_indp", "H_Booniehat_grn", "H_Shemag_tan", "H_Watchcap_sgg", "H_Booniehat_dgtl", "H_Beret_ocamo", "H_Cap_tan_specops_US", "H_Cap_oli_Syndikat_F", "H_Bandanna_camo", "H_Bandanna_khk_hs", "H_Beret_Colonel", "H_Shemag_olive", "H_TurbanO_blk", "H_Bandanna_cbr", "H_Booniehat_indp", "H_MilCap_ghex_F", "H_Booniehat_dgtl"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                     = 0.96%
			U_I_OfficerUniform              = 0.96%
			U_I_Wetsuit                     = 0.96%
			U_O_CombatUniform_ocamo         = 0.96%
			U_O_CombatUniform_oucamo        = 0.96%
			U_O_OfficerUniform_ocamo        = 0.96%
			U_O_SpecopsUniform_blk          = 0.96%
			U_O_SpecopsUniform_ocamo        = 0.96%
			U_O_V_Soldier_Viper_F           = 0.96%
			U_O_V_Soldier_Viper_hex_F       = 0.96%
			U_O_Wetsuit                     = 0.96%
			U_B_SpecopsUniform_sgg          = 0.96%
			U_B_HeliPilotCoveralls          = 0.96%
			U_B_PilotCoveralls              = 0.96%
			U_I_CombatUniform               = 0.96%
			U_I_CombatUniform_shortsleeve   = 0.96%
			U_I_CombatUniform_tshirt        = 0.96%
			U_I_HeliPilotCoveralls          = 0.96%
			U_I_pilotCoveralls              = 0.96%
			U_O_PilotCoveralls              = 0.96%
			U_B_CombatUniform_mcam          = 0.96%
			U_B_CombatUniform_mcam_tshirt   = 0.96%
			U_B_CombatUniform_mcam_vest     = 0.96%
			U_B_CombatUniform_mcam_worn     = 0.96%
			U_B_CTRG_1                      = 0.96%
			U_B_CTRG_2                      = 0.96%
			U_B_CTRG_3                      = 0.96%
			U_B_CTRG_Soldier_2_F            = 0.96%
			U_B_CTRG_Soldier_3_F            = 0.96%
			U_B_CTRG_Soldier_F              = 0.96%
			U_B_CTRG_Soldier_urb_1_F        = 0.96%
			U_B_CTRG_Soldier_urb_2_F        = 0.96%
			U_B_CTRG_Soldier_urb_3_F        = 0.96%
			U_B_GEN_Commander_F             = 0.96%
			U_B_GEN_Soldier_F               = 0.96%
			U_B_T_Soldier_AR_F              = 0.96%
			U_B_T_Soldier_SL_F              = 0.96%
			U_O_T_Officer_F                 = 0.96%
			U_O_T_Soldier_F                 = 0.96%
			rhs_uniform_FROG01_d            = 0.96%
			rhs_uniform_FROG01_m81          = 0.96%
			rhs_uniform_FROG01_wd           = 0.96%
			rhs_uniform_cu_ocp              = 0.96%
			rhs_uniform_cu_ocp_101st        = 0.96%
			rhs_uniform_cu_ocp_10th         = 0.96%
			rhs_uniform_cu_ocp_1stcav       = 0.96%
			rhs_uniform_cu_ocp_82nd         = 0.96%
			rhs_uniform_cu_ucp              = 0.96%
			rhs_uniform_cu_ucp_101st        = 0.96%
			rhs_uniform_cu_ucp_10th         = 0.96%
			rhs_uniform_cu_ucp_1stcav       = 0.96%
			rhs_uniform_cu_ucp_82nd         = 0.96%
			rhs_chdkz_uniform_1             = 1.92%
			rhs_chdkz_uniform_2             = 1.92%
			rhs_chdkz_uniform_3             = 1.92%
			rhs_chdkz_uniform_4             = 1.92%
			rhs_chdkz_uniform_5             = 1.92%
			rhs_uniform_df15                = 1.92%
			rhs_uniform_df15_tan            = 1.92%
			rhs_uniform_emr_des_patchless   = 1.92%
			rhs_uniform_emr_patchless       = 1.92%
			rhs_uniform_flora               = 1.92%
			rhs_uniform_flora_patchless     = 1.92%
			rhs_uniform_flora_patchless_alt = 1.92%
			rhs_uniform_gorka_r_g           = 1.92%
			rhs_uniform_gorka_r_y           = 1.92%
			rhs_uniform_invisible           = 1.92%
			rhs_uniform_m88_patchless       = 1.92%
			rhs_uniform_mflora_patchless    = 1.92%
			rhs_uniform_msv_emr             = 1.92%
			rhs_uniform_mvd_izlom           = 1.92%
			rhs_uniform_rva_flora           = 1.92%
			rhs_uniform_vdv_emr             = 1.92%
			rhs_uniform_vdv_emr_des         = 1.92%
			rhs_uniform_vdv_flora           = 1.92%
			rhs_uniform_vdv_mflora          = 1.92%
			rhs_uniform_vmf_flora           = 1.92%
			rhs_uniform_vmf_flora_subdued   = 1.92%
			Exile_Headgear_GasMask          = 0.32%
		*/
		MilitaryClothing[] = {"U_B_CTRG_Soldier_urb_2_F", "Exile_Headgear_GasMask", "rhs_uniform_flora", "U_B_CTRG_2", "U_O_PilotCoveralls", "U_B_CTRG_3", "rhs_uniform_mflora_patchless", "rhs_uniform_flora_patchless", "U_O_T_Soldier_F", "rhs_uniform_df15_tan", "U_B_CTRG_Soldier_F", "rhs_uniform_cu_ucp_1stcav", "rhs_uniform_gorka_r_g", "rhs_uniform_flora_patchless", "U_O_V_Soldier_Viper_hex_F", "U_O_SpecopsUniform_blk", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam", "rhs_uniform_cu_ucp_101st", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_2_F", "rhs_uniform_cu_ocp_82nd", "rhs_uniform_mvd_izlom", "rhs_uniform_gorka_r_y", "rhs_uniform_mvd_izlom", "rhs_uniform_m88_patchless", "U_B_CTRG_Soldier_urb_2_F", "rhs_uniform_flora_patchless", "rhs_uniform_gorka_r_g", "rhs_uniform_emr_des_patchless", "U_O_CombatUniform_oucamo", "rhs_chdkz_uniform_5", "U_O_T_Officer_F", "rhs_uniform_msv_emr", "rhs_uniform_invisible", "rhs_chdkz_uniform_2", "rhs_uniform_cu_ocp_1stcav", "rhs_uniform_df15_tan", "rhs_uniform_cu_ocp_101st", "U_I_Wetsuit", "rhs_uniform_m88_patchless", "rhs_uniform_emr_patchless", "rhs_uniform_flora", "U_I_CombatUniform", "U_B_GEN_Soldier_F", "rhs_uniform_vdv_mflora", "rhs_uniform_cu_ocp", "rhs_uniform_msv_emr", "U_B_T_Soldier_AR_F", "U_O_SpecopsUniform_ocamo", "rhs_uniform_m88_patchless", "rhs_uniform_gorka_r_y", "U_B_CTRG_3", "U_O_T_Soldier_F", "rhs_uniform_df15_tan", "rhs_uniform_flora_patchless_alt", "rhs_chdkz_uniform_4", "rhs_uniform_vmf_flora_subdued", "rhs_uniform_gorka_r_y", "U_I_HeliPilotCoveralls", "rhs_uniform_FROG01_wd", "rhs_uniform_vdv_mflora", "U_B_Wetsuit", "rhs_uniform_vdv_emr", "U_O_CombatUniform_ocamo", "rhs_uniform_invisible", "rhs_uniform_emr_patchless", "rhs_uniform_mflora_patchless", "rhs_uniform_cu_ocp_10th", "U_B_CombatUniform_mcam_worn", "rhs_uniform_cu_ucp_82nd", "rhs_uniform_flora_patchless_alt", "U_B_T_Soldier_SL_F", "U_I_CombatUniform_tshirt", "rhs_chdkz_uniform_3", "rhs_chdkz_uniform_5", "U_O_OfficerUniform_ocamo", "rhs_uniform_vmf_flora", "rhs_chdkz_uniform_3", "U_B_T_Soldier_AR_F", "rhs_uniform_vmf_flora", "rhs_chdkz_uniform_4", "rhs_uniform_cu_ucp_82nd", "rhs_uniform_mflora_patchless", "rhs_uniform_vdv_emr_des", "rhs_uniform_vdv_emr", "U_I_HeliPilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "rhs_uniform_cu_ocp_82nd", "rhs_uniform_FROG01_m81", "U_B_CTRG_1", "rhs_uniform_cu_ucp_101st", "rhs_chdkz_uniform_5", "rhs_uniform_df15", "rhs_uniform_flora", "rhs_uniform_vdv_emr", "rhs_uniform_cu_ocp_10th", "rhs_uniform_vdv_emr_des", "rhs_chdkz_uniform_3", "U_B_PilotCoveralls", "U_B_GEN_Soldier_F", "U_I_pilotCoveralls", "rhs_uniform_vdv_mflora", "U_O_CombatUniform_ocamo", "rhs_chdkz_uniform_2", "rhs_uniform_FROG01_wd", "rhs_chdkz_uniform_1", "U_B_GEN_Commander_F", "U_I_CombatUniform_tshirt", "U_O_T_Soldier_F", "rhs_uniform_vdv_mflora", "rhs_uniform_gorka_r_y", "U_B_CTRG_Soldier_urb_3_F", "U_B_CombatUniform_mcam_vest", "rhs_uniform_df15", "rhs_chdkz_uniform_4", "rhs_uniform_FROG01_d", "U_B_CTRG_1", "U_B_CombatUniform_mcam_worn", "rhs_uniform_flora_patchless", "U_B_CombatUniform_mcam", "U_I_CombatUniform", "rhs_uniform_vdv_flora", "U_B_HeliPilotCoveralls", "U_I_pilotCoveralls", "rhs_uniform_invisible", "rhs_uniform_mvd_izlom", "U_O_V_Soldier_Viper_F", "U_B_GEN_Commander_F", "rhs_uniform_flora", "rhs_uniform_FROG01_m81", "rhs_uniform_cu_ucp", "U_I_CombatUniform_shortsleeve", "rhs_uniform_flora_patchless_alt", "rhs_uniform_flora", "rhs_chdkz_uniform_1", "U_I_HeliPilotCoveralls", "rhs_uniform_df15", "rhs_uniform_emr_patchless", "U_O_V_Soldier_Viper_F", "rhs_uniform_invisible", "U_O_SpecopsUniform_ocamo", "rhs_uniform_vmf_flora", "rhs_uniform_df15_tan", "U_B_CTRG_Soldier_urb_1_F", "rhs_uniform_vmf_flora", "rhs_uniform_cu_ucp_82nd", "rhs_chdkz_uniform_5", "rhs_uniform_emr_patchless", "rhs_uniform_df15_tan", "rhs_chdkz_uniform_5", "U_O_PilotCoveralls", "rhs_uniform_cu_ocp_10th", "U_O_OfficerUniform_ocamo", "U_B_CombatUniform_mcam_tshirt", "rhs_chdkz_uniform_1", "rhs_uniform_vdv_flora", "rhs_uniform_emr_des_patchless", "U_O_T_Officer_F", "rhs_chdkz_uniform_2", "rhs_uniform_flora_patchless", "rhs_uniform_vdv_emr", "U_O_CombatUniform_ocamo", "U_B_CTRG_Soldier_urb_1_F", "rhs_uniform_vdv_mflora", "U_O_Wetsuit", "U_O_SpecopsUniform_blk", "U_B_HeliPilotCoveralls", "rhs_uniform_vmf_flora_subdued", "rhs_uniform_emr_des_patchless", "U_I_pilotCoveralls", "rhs_uniform_rva_flora", "rhs_uniform_emr_patchless", "rhs_uniform_emr_des_patchless", "rhs_uniform_vmf_flora_subdued", "rhs_chdkz_uniform_2", "U_O_CombatUniform_oucamo", "rhs_chdkz_uniform_2", "rhs_uniform_cu_ocp_101st", "rhs_uniform_df15_tan", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_3_F", "U_B_SpecopsUniform_sgg", "rhs_chdkz_uniform_1", "U_B_PilotCoveralls", "rhs_uniform_mflora_patchless", "U_I_CombatUniform_shortsleeve", "rhs_uniform_msv_emr", "U_I_CombatUniform_shortsleeve", "rhs_uniform_flora_patchless", "U_B_CTRG_Soldier_3_F", "rhs_uniform_cu_ocp_1stcav", "rhs_uniform_emr_des_patchless", "U_O_V_Soldier_Viper_hex_F", "rhs_uniform_FROG01_m81", "U_B_CTRG_Soldier_2_F", "U_O_OfficerUniform_ocamo", "U_B_SpecopsUniform_sgg", "U_I_Wetsuit", "rhs_uniform_m88_patchless", "rhs_uniform_msv_emr", "rhs_chdkz_uniform_1", "U_B_CTRG_3", "rhs_uniform_emr_patchless", "U_B_CTRG_2", "rhs_uniform_cu_ucp_10th", "rhs_chdkz_uniform_3", "rhs_uniform_vdv_emr_des", "rhs_uniform_FROG01_d", "rhs_uniform_cu_ucp", "rhs_uniform_gorka_r_g", "rhs_uniform_mvd_izlom", "U_O_V_Soldier_Viper_hex_F", "rhs_chdkz_uniform_3", "U_O_Wetsuit", "U_O_Wetsuit", "U_B_CTRG_Soldier_3_F", "rhs_uniform_mflora_patchless", "rhs_uniform_vdv_mflora", "rhs_uniform_cu_ocp", "rhs_uniform_vdv_emr_des", "U_B_T_Soldier_SL_F", "U_I_OfficerUniform", "rhs_uniform_vdv_emr_des", "rhs_uniform_cu_ucp_10th", "rhs_chdkz_uniform_1", "U_I_CombatUniform", "rhs_uniform_vdv_flora", "rhs_uniform_FROG01_wd", "rhs_uniform_flora", "rhs_uniform_gorka_r_y", "rhs_uniform_msv_emr", "U_B_CTRG_Soldier_F", "rhs_uniform_vdv_flora", "rhs_uniform_flora_patchless_alt", "rhs_uniform_cu_ocp_101st", "rhs_chdkz_uniform_2", "rhs_uniform_cu_ocp_82nd", "U_B_Wetsuit", "rhs_uniform_gorka_r_g", "U_I_Wetsuit", "rhs_uniform_vmf_flora", "rhs_uniform_mvd_izlom", "U_B_CombatUniform_mcam_tshirt", "U_B_Wetsuit", "rhs_uniform_rva_flora", "rhs_uniform_msv_emr", "U_B_CombatUniform_mcam_vest", "rhs_uniform_gorka_r_y", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_3_F", "rhs_chdkz_uniform_3", "U_B_SpecopsUniform_sgg", "U_B_T_Soldier_AR_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_F", "rhs_uniform_rva_flora", "U_B_CTRG_2", "U_B_GEN_Commander_F", "rhs_chdkz_uniform_4", "rhs_uniform_vdv_emr", "rhs_uniform_gorka_r_g", "rhs_uniform_cu_ocp_1stcav", "rhs_uniform_vdv_flora", "rhs_uniform_rva_flora", "rhs_uniform_cu_ucp_1stcav", "rhs_uniform_cu_ucp", "U_O_SpecopsUniform_blk", "U_O_V_Soldier_Viper_F", "U_B_CTRG_Soldier_2_F", "rhs_uniform_vmf_flora", "rhs_uniform_gorka_r_g", "rhs_uniform_vdv_emr_des", "rhs_uniform_rva_flora", "rhs_uniform_emr_des_patchless", "rhs_uniform_flora_patchless_alt", "U_B_CTRG_Soldier_urb_3_F", "rhs_uniform_mflora_patchless", "rhs_uniform_mvd_izlom", "U_O_SpecopsUniform_ocamo", "rhs_uniform_vmf_flora_subdued", "rhs_uniform_df15", "rhs_uniform_FROG01_d", "rhs_uniform_cu_ocp", "rhs_uniform_cu_ucp_1stcav", "rhs_uniform_m88_patchless", "rhs_uniform_rva_flora", "rhs_uniform_vmf_flora_subdued", "U_I_OfficerUniform", "rhs_uniform_df15", "rhs_uniform_vdv_flora", "U_B_CTRG_Soldier_urb_1_F", "rhs_uniform_m88_patchless", "rhs_uniform_invisible", "U_I_OfficerUniform", "rhs_uniform_cu_ucp_10th", "rhs_uniform_flora_patchless_alt", "rhs_chdkz_uniform_5", "rhs_uniform_vdv_emr", "U_O_CombatUniform_oucamo", "rhs_uniform_cu_ucp_101st", "U_B_HeliPilotCoveralls", "rhs_uniform_df15", "rhs_chdkz_uniform_4", "rhs_uniform_invisible", "U_B_CombatUniform_mcam_tshirt", "rhs_uniform_vmf_flora_subdued", "U_B_T_Soldier_SL_F", "rhs_chdkz_uniform_4", "U_B_GEN_Soldier_F"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F              = 4.35%
			B_Bergen_dgtl_F              = 4.35%
			B_Bergen_hex_F               = 4.35%
			B_Bergen_mcamo_F             = 4.35%
			B_Bergen_tna_F               = 4.35%
			B_Carryall_mcamo             = 8.70%
			B_Carryall_ocamo             = 8.70%
			B_Carryall_oucamo            = 8.70%
			B_Carryall_khk               = 8.70%
			B_Carryall_oli               = 8.70%
			B_Carryall_cbr               = 8.70%
			B_Carryall_ghex_F            = 8.70%
			rhsusf_assault_eagleaiii_coy = 4.35%
			rhsusf_assault_eagleaiii_ocp = 4.35%
			rhsusf_assault_eagleaiii_ucp = 4.35%
			rhsusf_falconii              = 4.35%
		*/
		MilitaryBackpacks[] = {"B_Carryall_mcamo", "B_Bergen_mcamo_F", "B_Bergen_tna_F", "B_Carryall_oli", "B_Carryall_ocamo", "B_Carryall_khk", "B_Carryall_oucamo", "B_Carryall_oucamo", "B_Bergen_hex_F", "B_Bergen_dgtl_F", "rhsusf_falconii", "B_Carryall_ghex_F", "B_Carryall_oli", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_mcamo", "rhsusf_assault_eagleaiii_ucp", "B_Bergen_Base_F", "rhsusf_assault_eagleaiii_coy", "rhsusf_assault_eagleaiii_ocp", "B_Carryall_ghex_F", "B_Carryall_cbr", "B_Carryall_ocamo"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG                   = 0.44%
			V_PlateCarrierL_CTRG                   = 0.44%
			V_PlateCarrier1_blk                    = 0.88%
			V_PlateCarrier1_rgr                    = 0.88%
			V_PlateCarrier2_rgr                    = 0.88%
			V_PlateCarrier3_rgr                    = 0.88%
			V_PlateCarrierGL_rgr                   = 0.88%
			V_PlateCarrierIA1_dgtl                 = 0.88%
			V_PlateCarrierIA2_dgtl                 = 0.88%
			V_PlateCarrierIAGL_dgtl                = 0.88%
			V_PlateCarrierSpec_rgr                 = 0.88%
			rhsusf_iotv_ocp                        = 0.44%
			rhsusf_iotv_ocp_Grenadier              = 0.44%
			rhsusf_iotv_ocp_Medic                  = 0.44%
			rhsusf_iotv_ocp_Repair                 = 0.44%
			rhsusf_iotv_ocp_Rifleman               = 0.44%
			rhsusf_iotv_ocp_SAW                    = 0.44%
			rhsusf_iotv_ocp_Squadleader            = 0.44%
			rhsusf_iotv_ocp_Teamleader             = 0.44%
			rhsusf_iotv_ucp                        = 0.44%
			rhsusf_iotv_ucp_Grenadier              = 0.44%
			rhsusf_iotv_ucp_Medic                  = 0.44%
			rhsusf_iotv_ucp_Repair                 = 0.44%
			rhsusf_iotv_ucp_Rifleman               = 0.44%
			rhsusf_iotv_ucp_SAW                    = 0.44%
			rhsusf_iotv_ucp_Squadleader            = 0.44%
			rhsusf_iotv_ucp_Teamleader             = 0.44%
			rhsusf_spc                             = 0.44%
			rhsusf_spc_corpsman                    = 0.44%
			rhsusf_spc_crewman                     = 0.44%
			rhsusf_spc_iar                         = 0.44%
			rhsusf_spc_light                       = 0.44%
			rhsusf_spc_marksman                    = 0.44%
			rhsusf_spc_mg                          = 0.44%
			rhsusf_spc_rifleman                    = 0.44%
			rhsusf_spc_squadleader                 = 0.44%
			rhsusf_spc_teamleader                  = 0.44%
			rhs_6b13                               = 0.88%
			rhs_6b13_6sh92                         = 0.88%
			rhs_6b13_6sh92_headset_mapcase         = 0.88%
			rhs_6b13_6sh92_radio                   = 0.88%
			rhs_6b13_6sh92_vog                     = 0.88%
			rhs_6b13_crewofficer                   = 0.88%
			rhs_6b13_EMR                           = 0.88%
			rhs_6b13_EMR_6sh92                     = 0.88%
			rhs_6b13_EMR_6sh92_headset_mapcase     = 0.88%
			rhs_6b13_EMR_6sh92_radio               = 0.88%
			rhs_6b13_EMR_6sh92_vog                 = 0.88%
			rhs_6b13_Flora                         = 0.88%
			rhs_6b13_Flora_6sh92                   = 0.88%
			rhs_6b13_Flora_6sh92_headset_mapcase   = 0.88%
			rhs_6b13_Flora_6sh92_radio             = 0.88%
			rhs_6b13_Flora_6sh92_vog               = 0.88%
			rhs_6b13_Flora_crewofficer             = 0.88%
			rhs_6b23                               = 0.88%
			rhs_6b23_6sh116                        = 0.88%
			rhs_6b23_6sh116_flora                  = 0.88%
			rhs_6b23_6sh116_od                     = 0.88%
			rhs_6b23_6sh116_vog                    = 0.88%
			rhs_6b23_6sh116_vog_flora              = 0.88%
			rhs_6b23_6sh116_vog_od                 = 0.88%
			rhs_6b23_6sh92                         = 0.88%
			rhs_6b23_6sh92_headset                 = 0.88%
			rhs_6b23_6sh92_headset_mapcase         = 0.88%
			rhs_6b23_6sh92_radio                   = 0.88%
			rhs_6b23_6sh92_vog                     = 0.88%
			rhs_6b23_6sh92_vog_headset             = 0.88%
			rhs_6b23_crew                          = 0.88%
			rhs_6b23_crewofficer                   = 0.88%
			rhs_6b23_digi                          = 0.88%
			rhs_6b23_digi_6sh92                    = 0.88%
			rhs_6b23_digi_6sh92_headset            = 0.88%
			rhs_6b23_digi_6sh92_headset_mapcase    = 0.88%
			rhs_6b23_digi_6sh92_headset_spetsnaz   = 0.88%
			rhs_6b23_digi_6sh92_radio              = 0.88%
			rhs_6b23_digi_6sh92_Spetsnaz           = 0.88%
			rhs_6b23_digi_6sh92_spetsnaz2          = 0.88%
			rhs_6b23_digi_6sh92_vog                = 0.88%
			rhs_6b23_digi_6sh92_vog_headset        = 0.88%
			rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz = 0.88%
			rhs_6b23_digi_6sh92_Vog_Spetsnaz       = 0.88%
			rhs_6b23_digi_crew                     = 0.88%
			rhs_6b23_digi_crewofficer              = 0.88%
			rhs_6b23_digi_engineer                 = 0.88%
			rhs_6b23_digi_medic                    = 0.88%
			rhs_6b23_digi_rifleman                 = 0.88%
			rhs_6b23_digi_sniper                   = 0.88%
			rhs_6b23_digi_vydra_3m                 = 0.88%
			rhs_6b23_engineer                      = 0.88%
			rhs_6b23_medic                         = 0.88%
			rhs_6b23_ML                            = 0.88%
			rhs_6b23_ML_6sh92                      = 0.88%
			rhs_6b23_ML_6sh92_headset              = 0.88%
			rhs_6b23_ML_6sh92_headset_mapcase      = 0.88%
			rhs_6b23_ML_6sh92_radio                = 0.88%
			rhs_6b23_ML_6sh92_vog                  = 0.88%
			rhs_6b23_ML_6sh92_vog_headset          = 0.88%
			rhs_6b23_ML_crew                       = 0.88%
			rhs_6b23_ML_crewofficer                = 0.88%
			rhs_6b23_ML_engineer                   = 0.88%
			rhs_6b23_ML_medic                      = 0.88%
			rhs_6b23_ML_rifleman                   = 0.88%
			rhs_6b23_ML_sniper                     = 0.88%
			rhs_6b23_ML_vydra_3m                   = 0.88%
			rhs_6b23_rifleman                      = 0.88%
			rhs_6b23_sniper                        = 0.88%
			rhs_6b23_vydra_3m                      = 0.88%
			rhs_6b43                               = 0.88%
			rhs_6sh46                              = 0.88%
			rhs_6sh92                              = 0.88%
			rhs_6sh92_digi                         = 0.88%
			rhs_6sh92_digi_headset                 = 0.88%
			rhs_6sh92_digi_radio                   = 0.88%
			rhs_6sh92_digi_vog                     = 0.88%
			rhs_6sh92_digi_vog_headset             = 0.88%
			rhs_6sh92_headset                      = 0.88%
			rhs_6sh92_radio                        = 0.88%
			rhs_6sh92_vog                          = 0.88%
			rhs_6sh92_vog_headset                  = 0.88%
			rhs_6sh92_vsr                          = 0.88%
			rhs_6sh92_vsr_headset                  = 0.88%
			rhs_6sh92_vsr_radio                    = 0.88%
			rhs_6sh92_vsr_vog                      = 0.88%
			rhs_6sh92_vsr_vog_headset              = 0.88%
			rhs_vest_commander                     = 0.88%
			rhs_vest_pistol_holster                = 0.88%
			rhs_vydra_3m                           = 0.88%
		*/
		MilitaryVests[] = {"rhs_6b13_EMR_6sh92_vog", "rhsusf_spc_squadleader", "rhs_6sh92_digi_vog", "rhsusf_spc_rifleman", "rhsusf_spc_teamleader", "rhs_6sh92_radio", "rhs_6b23_digi", "rhs_6b23_digi_6sh92_headset_spetsnaz", "rhs_6sh92_digi_vog_headset", "rhsusf_spc_mg", "rhs_6b23_digi_6sh92_radio", "V_PlateCarrierGL_rgr", "rhsusf_iotv_ocp_Teamleader", "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz", "rhs_6b23_digi_6sh92_vog", "rhsusf_iotv_ucp_Squadleader", "rhs_6b13_6sh92_radio", "rhs_6b23_6sh116_flora", "rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz", "rhs_6b23_digi", "V_PlateCarrier1_rgr", "rhs_6b13_crewofficer", "rhs_6b23_digi_engineer", "rhs_6b23_6sh92", "rhs_6b23_ML_crewofficer", "V_PlateCarrierIAGL_dgtl", "rhs_6b13_EMR_6sh92", "V_PlateCarrier1_blk", "rhs_6b23_6sh116_od", "rhs_6b23_6sh92_radio", "rhs_6sh92_digi_headset", "rhs_6b13_6sh92", "rhsusf_iotv_ucp_SAW", "rhs_6sh92_digi_vog", "rhs_6sh92_vsr_radio", "rhs_6b23_vydra_3m", "rhs_6b13_Flora_6sh92_vog", "rhs_6b13_EMR_6sh92_radio", "rhs_6b23_digi_6sh92_spetsnaz2", "rhs_6sh92_digi", "rhs_6b13_EMR_6sh92_radio", "rhs_6b23_digi_6sh92_Vog_Spetsnaz", "rhs_6sh92_vsr_radio", "rhsusf_iotv_ucp_Repair", "rhs_6b13_Flora_crewofficer", "rhs_6b23_6sh116_flora", "rhs_6b23_ML_crew", "rhs_6b13_EMR_6sh92_vog", "rhs_6b23_digi_medic", "rhsusf_iotv_ocp", "rhsusf_spc_crewman", "rhs_6b23_digi_engineer", "rhs_6b23_ML_engineer", "rhs_6sh92_vsr", "rhs_6sh92_digi_headset", "V_PlateCarrier1_blk", "rhs_6b23_digi_sniper", "rhs_6b23_sniper", "rhs_6b13_Flora_6sh92_headset_mapcase", "rhs_6b23_digi_6sh92_Spetsnaz", "rhs_6b23_ML_sniper", "rhs_6b23_digi_6sh92_headset_mapcase", "rhs_6b23_crew", "rhs_6b13_6sh92_radio", "rhs_6b23_6sh92_headset", "rhs_6b23_6sh116_vog_flora", "rhs_6b23_digi_6sh92", "rhs_6sh92", "rhs_6sh92_vsr_vog", "rhs_6b23_ML_6sh92_headset", "rhs_6b23_digi_crew", "rhs_6b23_6sh116", "rhsusf_iotv_ucp", "rhs_6b23_medic", "rhs_6b43", "rhs_6b13", "rhsusf_spc", "V_PlateCarrierL_CTRG", "rhs_6b23_ML_6sh92", "rhs_6sh92_headset", "rhs_6b23_ML_engineer", "rhs_6b23_ML_6sh92_headset_mapcase", "rhs_6b13_6sh92_vog", "rhsusf_spc_light", "rhsusf_spc_corpsman", "rhs_6b23_6sh116_vog", "rhs_6b23_ML_rifleman", "rhsusf_iotv_ucp_Grenadier", "rhs_6b23_digi_vydra_3m", "rhs_6sh92_vsr_vog_headset", "rhs_6b23_digi_medic", "rhs_6b23_ML_6sh92", "rhsusf_iotv_ocp_Rifleman", "rhs_vest_commander", "rhs_6sh92", "rhs_6b23_6sh92_radio", "rhs_6sh92_vog", "V_PlateCarrierIA2_dgtl", "rhs_6b23_digi_6sh92_radio", "rhs_6sh92_vog", "rhs_6b23_ML_crew", "rhsusf_spc_iar", "rhs_6sh92_digi_vog_headset", "rhs_6b23_rifleman", "rhs_6b23_6sh116_vog_od", "V_PlateCarrierSpec_rgr", "rhs_6b23_ML_rifleman", "rhs_6b13_EMR_6sh92_headset_mapcase", "rhs_6sh92_vsr_vog", "rhsusf_iotv_ocp_Medic", "V_PlateCarrierIA1_dgtl", "rhs_6b23_digi_6sh92_headset", "rhs_6b13_Flora_6sh92", "rhs_6b23_6sh92_vog_headset", "rhs_6b13_Flora_6sh92_vog", "rhsusf_iotv_ocp_Squadleader", "rhsusf_iotv_ucp_Rifleman", "rhs_6b23_digi_6sh92", "rhs_6b23_digi_crew", "rhs_6sh92_radio", "rhs_6b23_ML", "V_PlateCarrier3_rgr", "rhs_6b23_ML_vydra_3m", "rhsusf_spc_marksman", "rhs_6b23_sniper", "rhs_6b23_medic", "rhs_6b23_6sh116_vog_flora", "rhs_6b23_digi_crewofficer", "rhs_6b23_digi_6sh92_headset_mapcase", "rhs_6b13_6sh92_headset_mapcase", "rhs_6b23_crew", "rhs_6b13_Flora_crewofficer", "rhs_6b23_digi_6sh92_vog", "rhs_6b13_6sh92_vog", "rhs_6b23_ML", "rhs_6b13_EMR", "rhs_6b23_6sh92_headset", "rhs_6b23_ML_6sh92_headset", "rhs_6b23_ML_crewofficer", "rhs_6b13_crewofficer", "rhs_6b23_vydra_3m", "V_PlateCarrier3_rgr", "rhs_6b23_engineer", "rhs_6b13_EMR_6sh92", "rhs_6sh92_vsr_vog_headset", "rhs_6b23_digi_6sh92_headset_spetsnaz", "rhs_6sh92_vsr", "rhs_6b23_digi_rifleman", "rhs_vydra_3m", "rhs_6b23_6sh116", "rhsusf_iotv_ocp_Repair", "rhs_6b23_ML_medic", "rhs_6sh92_vog_headset", "rhs_6b23_ML_6sh92_vog_headset", "rhs_6b23_6sh92", "rhs_6b23_6sh116_vog", "rhs_6b23_digi_6sh92_vog_headset", "rhs_6b23_ML_6sh92_vog", "rhs_6b23_6sh92_vog", "rhs_6b13", "rhs_6b23_ML_6sh92_vog", "rhs_6sh92_digi", "rhs_6b23_6sh92_vog_headset", "rhs_6b23_ML_6sh92_radio", "rhs_6b23_6sh92_vog", "rhs_6sh92_vsr_headset", "rhs_6b23_rifleman", "V_PlateCarrier2_rgr", "rhs_6b23_engineer", "rhs_6b23_crewofficer", "rhs_6b23_digi_6sh92_Vog_Spetsnaz", "rhs_6b13_Flora_6sh92_radio", "rhs_6b13_Flora_6sh92", "rhs_6b23_digi_6sh92_spetsnaz2", "rhs_6b23_digi_rifleman", "rhsusf_iotv_ucp_Teamleader", "rhs_6b23_digi_6sh92_headset", "rhs_6sh92_vog_headset", "rhs_6b23_ML_vydra_3m", "rhs_6b23_digi_6sh92_Spetsnaz", "rhs_6b23_ML_medic", "rhs_6sh92_digi_radio", "V_PlateCarrier1_rgr", "rhs_vest_commander", "rhs_6b13_Flora", "rhs_6b23", "V_PlateCarrierSpec_rgr", "rhs_6b23_digi_6sh92_vog_headset", "rhs_6b23_6sh116_od", "rhs_6b23_digi_crewofficer", "V_PlateCarrierIA2_dgtl", "rhs_vest_pistol_holster", "rhs_6b13_Flora", "rhs_6b23_ML_6sh92_radio", "rhsusf_iotv_ocp_Grenadier", "rhs_6b13_EMR", "rhs_vest_pistol_holster", "V_PlateCarrierGL_rgr", "rhs_6b23_ML_6sh92_vog_headset", "rhs_6b23", "rhs_6b23_6sh92_headset_mapcase", "rhs_6b13_Flora_6sh92_radio", "rhs_6b13_6sh92", "V_PlateCarrierH_CTRG", "V_PlateCarrierIAGL_dgtl", "rhs_6b23_crewofficer", "rhs_6b43", "rhs_6b23_ML_sniper", "rhs_6b13_Flora_6sh92_headset_mapcase", "V_PlateCarrierIA1_dgtl", "rhs_6b13_EMR_6sh92_headset_mapcase", "rhs_6sh46", "rhsusf_iotv_ucp_Medic", "rhs_6sh92_vsr_headset", "rhs_vydra_3m", "rhs_6b23_digi_vydra_3m", "rhs_6sh46", "rhs_6sh92_digi_radio", "V_PlateCarrier2_rgr", "rhs_6b23_6sh92_headset_mapcase", "rhs_6sh92_headset", "rhs_6b13_6sh92_headset_mapcase", "rhs_6b23_6sh116_vog_od", "rhsusf_iotv_ocp_SAW", "rhs_6b23_digi_sniper"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B                              = 0.21%
			H_CrewHelmetHeli_I                              = 0.21%
			H_CrewHelmetHeli_O                              = 0.21%
			H_HelmetB_camo                                  = 0.21%
			H_HelmetCrew_B                                  = 0.21%
			H_HelmetCrew_I                                  = 0.21%
			H_HelmetCrew_O                                  = 0.21%
			H_HelmetLeaderO_ocamo                           = 0.21%
			H_HelmetLeaderO_oucamo                          = 0.21%
			H_HelmetO_ghex_F                                = 0.21%
			H_HelmetO_ocamo                                 = 0.21%
			H_HelmetO_oucamo                                = 0.21%
			H_HelmetSpecO_blk                               = 0.21%
			H_HelmetSpecO_ocamo                             = 0.21%
			H_PilotHelmetFighter_B                          = 0.21%
			H_PilotHelmetFighter_I                          = 0.21%
			H_PilotHelmetFighter_O                          = 0.21%
			H_PilotHelmetHeli_B                             = 0.21%
			H_PilotHelmetHeli_I                             = 0.21%
			H_PilotHelmetHeli_O                             = 0.21%
			H_BandMask_demon                                = 0.43%
			H_BandMask_khk                                  = 0.43%
			H_BandMask_reaper                               = 0.43%
			H_Beret_gen_F                                   = 0.43%
			H_Helmet_Skate                                  = 0.43%
			H_HelmetB_black                                 = 0.43%
			H_HelmetB_desert                                = 0.43%
			H_HelmetB_Enh_tna_F                             = 0.43%
			H_HelmetB_grass                                 = 0.43%
			H_HelmetB_light_black                           = 0.43%
			H_HelmetB_light_desert                          = 0.43%
			H_HelmetB_light_grass                           = 0.43%
			H_HelmetB_light_sand                            = 0.43%
			H_HelmetB_light_snakeskin                       = 0.43%
			H_HelmetB_Light_tna_F                           = 0.43%
			H_HelmetB_sand                                  = 0.43%
			H_HelmetB_snakeskin                             = 0.43%
			H_HelmetB_TI_tna_F                              = 0.43%
			H_HelmetB_tna_F                                 = 0.43%
			H_HelmetCrew_O_ghex_F                           = 0.43%
			H_HelmetIA_camo                                 = 0.43%
			H_HelmetIA_net                                  = 0.43%
			H_HelmetLeaderO_ghex_F                          = 0.43%
			H_HelmetSpecO_ghex_F                            = 0.43%
			H_HelmetB                                       = 0.64%
			H_HelmetB_light                                 = 0.64%
			H_HelmetB_paint                                 = 0.64%
			H_HelmetB_plain_blk                             = 0.64%
			H_HelmetIA                                      = 0.64%
			H_HelmetSpecB                                   = 0.64%
			H_HelmetSpecB_blk                               = 0.64%
			H_HelmetSpecB_paint1                            = 0.64%
			H_HelmetSpecB_paint2                            = 0.64%
			Exile_Headgear_GasMask                          = 0.21%
			H_MilCap_blue                                   = 0.43%
			H_MilCap_dgtl                                   = 0.43%
			H_MilCap_mcamo                                  = 0.43%
			H_MilCap_ocamo                                  = 0.43%
			H_MilCap_oucamo                                 = 0.43%
			H_MilCap_rucamo                                 = 0.43%
			rhs_Booniehat_m81                               = 0.43%
			rhs_Booniehat_marpatd                           = 0.43%
			rhs_Booniehat_marpatwd                          = 0.43%
			rhs_Booniehat_ocp                               = 0.43%
			rhs_Booniehat_ucp                               = 0.43%
			rhsusf_Bowman                                   = 0.43%
			rhsusf_ach_bare                                 = 0.43%
			rhsusf_ach_bare_des                             = 0.43%
			rhsusf_ach_bare_des_ess                         = 0.43%
			rhsusf_ach_bare_des_headset                     = 0.43%
			rhsusf_ach_bare_des_headset_ess                 = 0.43%
			rhsusf_ach_bare_ess                             = 0.43%
			rhsusf_ach_bare_headset                         = 0.43%
			rhsusf_ach_bare_headset_ess                     = 0.43%
			rhsusf_ach_bare_semi                            = 0.43%
			rhsusf_ach_bare_semi_ess                        = 0.43%
			rhsusf_ach_bare_semi_headset                    = 0.43%
			rhsusf_ach_bare_semi_headset_ess                = 0.43%
			rhsusf_ach_bare_tan                             = 0.43%
			rhsusf_ach_bare_tan_ess                         = 0.43%
			rhsusf_ach_bare_tan_headset                     = 0.43%
			rhsusf_ach_bare_tan_headset_ess                 = 0.43%
			rhsusf_ach_bare_wood                            = 0.43%
			rhsusf_ach_bare_wood_ess                        = 0.43%
			rhsusf_ach_bare_wood_headset                    = 0.43%
			rhsusf_ach_bare_wood_headset_ess                = 0.43%
			rhsusf_ach_helmet_ESS_ocp                       = 0.43%
			rhsusf_ach_helmet_ESS_ucp                       = 0.43%
			rhsusf_ach_helmet_M81                           = 0.43%
			rhsusf_ach_helmet_camo_ocp                      = 0.43%
			rhsusf_ach_helmet_headset_ess_ocp               = 0.43%
			rhsusf_ach_helmet_headset_ess_ucp               = 0.43%
			rhsusf_ach_helmet_headset_ocp                   = 0.43%
			rhsusf_ach_helmet_headset_ucp                   = 0.43%
			rhsusf_ach_helmet_ocp                           = 0.43%
			rhsusf_ach_helmet_ocp_norotos                   = 0.43%
			rhsusf_ach_helmet_ucp                           = 0.43%
			rhsusf_ach_helmet_ucp_norotos                   = 0.43%
			rhsusf_bowman_cap                               = 0.43%
			rhsusf_lwh_helmet_M1942                         = 0.43%
			rhsusf_lwh_helmet_marpatd                       = 0.43%
			rhsusf_lwh_helmet_marpatd_ess                   = 0.43%
			rhsusf_lwh_helmet_marpatd_headset               = 0.43%
			rhsusf_lwh_helmet_marpatwd                      = 0.43%
			rhsusf_lwh_helmet_marpatwd_ess                  = 0.43%
			rhsusf_lwh_helmet_marpatwd_headset              = 0.43%
			rhsusf_mich_bare                                = 0.43%
			rhsusf_mich_bare_alt                            = 0.43%
			rhsusf_mich_bare_alt_semi                       = 0.43%
			rhsusf_mich_bare_alt_tan                        = 0.43%
			rhsusf_mich_bare_headset                        = 0.43%
			rhsusf_mich_bare_norotos                        = 0.43%
			rhsusf_mich_bare_norotos_alt                    = 0.43%
			rhsusf_mich_bare_norotos_alt_headset            = 0.43%
			rhsusf_mich_bare_norotos_alt_semi               = 0.43%
			rhsusf_mich_bare_norotos_alt_semi_headset       = 0.43%
			rhsusf_mich_bare_norotos_alt_tan                = 0.43%
			rhsusf_mich_bare_norotos_alt_tan_headset        = 0.43%
			rhsusf_mich_bare_norotos_arc                    = 0.43%
			rhsusf_mich_bare_norotos_arc_alt                = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_headset        = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_semi           = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_semi_headset   = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_tan            = 0.43%
			rhsusf_mich_bare_norotos_arc_alt_tan_headset    = 0.43%
			rhsusf_mich_bare_norotos_arc_headset            = 0.43%
			rhsusf_mich_bare_norotos_arc_semi               = 0.43%
			rhsusf_mich_bare_norotos_arc_semi_headset       = 0.43%
			rhsusf_mich_bare_norotos_arc_tan                = 0.43%
			rhsusf_mich_bare_norotos_headset                = 0.43%
			rhsusf_mich_bare_norotos_semi                   = 0.43%
			rhsusf_mich_bare_norotos_semi_headset           = 0.43%
			rhsusf_mich_bare_norotos_tan                    = 0.43%
			rhsusf_mich_bare_norotos_tan_headset            = 0.43%
			rhsusf_mich_bare_semi                           = 0.43%
			rhsusf_mich_bare_semi_headset                   = 0.43%
			rhsusf_mich_bare_tan                            = 0.43%
			rhsusf_mich_bare_tan_headset                    = 0.43%
			rhsusf_mich_helmet_marpatdItemMap               = 0.43%
			rhsusf_mich_helmet_marpatd_altItemMap           = 0.43%
			rhsusf_mich_helmet_marpatd_alt_headset          = 0.43%
			rhsusf_mich_helmet_marpatd_headset              = 0.43%
			rhsusf_mich_helmet_marpatd_norotos              = 0.43%
			rhsusf_mich_helmet_marpatd_norotos_arc          = 0.43%
			rhsusf_mich_helmet_marpatd_norotos_arc_headset  = 0.43%
			rhsusf_mich_helmet_marpatd_norotos_headset      = 0.43%
			rhsusf_mich_helmet_marpatwd                     = 0.43%
			rhsusf_mich_helmet_marpatwd_alt                 = 0.43%
			rhsusf_mich_helmet_marpatwd_alt_headset         = 0.43%
			rhsusf_mich_helmet_marpatwd_headset             = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos             = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos_arc         = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos_arc_headset = 0.43%
			rhsusf_mich_helmet_marpatwd_norotos_headset     = 0.43%
			rhsusf_opscore_bk                               = 0.43%
			rhsusf_opscore_coy_cover                        = 0.43%
			rhsusf_opscore_coy_cover_pelt                   = 0.43%
			rhsusf_opscore_fg                               = 0.43%
			rhsusf_opscore_mc_cover                         = 0.43%
			rhsusf_opscore_mc_cover_pelt                    = 0.43%
			rhsusf_opscore_rg_cover                         = 0.43%
			rhsusf_opscore_rg_cover_pelt                    = 0.43%
			rhsusf_opscore_ut                               = 0.43%
			rhs_6b26_green                                  = 0.85%
			rhs_6b26_bala_green                             = 0.85%
			rhs_6b26_ess_green                              = 0.85%
			rhs_6b26_ess_bala_green                         = 0.85%
			rhs_6b26                                        = 0.85%
			rhs_6b26_bala                                   = 0.85%
			rhs_6b26_ess                                    = 0.85%
			rhs_6b26_ess_bala                               = 0.85%
			rhs_6b27m_green                                 = 0.85%
			rhs_6b27m_green_bala                            = 0.85%
			rhs_6b27m_green_ess                             = 0.85%
			rhs_6b27m_green_ess_bala                        = 0.85%
			rhs_6b27m_digi                                  = 0.85%
			rhs_6b27m_digi_bala                             = 0.85%
			rhs_6b27m_digi_ess                              = 0.85%
			rhs_6b27m_digi_ess_bala                         = 0.85%
			rhs_6b27m                                       = 0.85%
			rhs_6b27m_bala                                  = 0.85%
			rhs_6b27m_ess                                   = 0.85%
			rhs_6b27m_ess_bala                              = 0.85%
			rhs_6b27m_ml                                    = 0.85%
			rhs_6b27m_ml_bala                               = 0.85%
			rhs_6b27m_ml_ess                                = 0.85%
			rhs_6b27m_ML_ess_bala                           = 0.85%
			rhs_6b28_green                                  = 0.85%
			rhs_6b28_green_bala                             = 0.85%
			rhs_6b28_green_ess                              = 0.85%
			rhs_6b28_green_ess_bala                         = 0.85%
			rhs_6b28                                        = 0.85%
			rhs_6b28_bala                                   = 0.85%
			rhs_6b28_ess                                    = 0.85%
			rhs_6b28_ess_bala                               = 0.85%
			rhs_6b28_flora                                  = 0.85%
			rhs_6b28_flora_bala                             = 0.85%
			rhs_6b28_flora_ess                              = 0.85%
			rhs_6b28_flora_ess_bala                         = 0.85%
			rhs_Booniehat_digi                              = 0.85%
			rhs_Booniehat_flora                             = 0.85%
			rhs_ssh68                                       = 0.85%
		*/
		MilitaryHeadgear[] = {"rhsusf_opscore_ut", "rhsusf_mich_helmet_marpatd_norotos_arc", "H_HelmetB_desert", "rhs_6b28_green_ess", "rhs_6b28_green_ess", "rhs_6b28", "rhs_6b27m", "rhsusf_ach_bare_headset", "rhs_6b26", "H_HelmetB_tna_F", "rhsusf_mich_bare_norotos_tan", "H_HelmetB_light", "rhsusf_opscore_coy_cover_pelt", "H_HelmetIA", "rhs_6b28_flora_ess", "H_MilCap_oucamo", "rhsusf_mich_bare_tan", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_mich_bare_norotos_arc_alt", "H_MilCap_dgtl", "rhs_Booniehat_flora", "H_PilotHelmetFighter_O", "rhs_6b27m", "H_PilotHelmetFighter_B", "rhsusf_opscore_mc_cover_pelt", "rhs_6b26_green", "rhsusf_mich_helmet_marpatwd_norotos_headset", "H_HelmetB_TI_tna_F", "rhsusf_mich_bare_norotos_arc_tan", "rhsusf_mich_bare_semi_headset", "H_HelmetB_plain_blk", "rhs_Booniehat_marpatd", "Exile_Headgear_GasMask", "rhs_6b26_ess_bala_green", "rhs_6b27m_ML_ess_bala", "rhs_6b28_ess", "rhsusf_ach_helmet_ESS_ocp", "rhsusf_mich_bare_tan_headset", "H_PilotHelmetHeli_I", "rhsusf_mich_bare_norotos", "rhsusf_lwh_helmet_marpatd", "rhsusf_mich_bare_semi", "rhs_6b27m_ml_bala", "H_HelmetB_light_snakeskin", "rhs_6b26_ess_green", "rhsusf_ach_helmet_headset_ess_ocp", "rhsusf_ach_helmet_headset_ess_ocp", "rhsusf_mich_bare_norotos_alt_tan", "rhs_6b27m_bala", "rhs_6b27m_digi_ess", "H_HelmetB_paint", "rhsusf_mich_helmet_marpatd_altItemMap", "rhs_ssh68", "rhsusf_mich_bare_norotos_alt_headset", "H_HelmetSpecB_paint1", "rhsusf_ach_helmet_ucp", "H_HelmetSpecB_blk", "H_HelmetCrew_O_ghex_F", "rhsusf_mich_bare_norotos_alt_tan_headset", "H_MilCap_mcamo", "rhs_6b27m_green", "rhsusf_opscore_coy_cover", "H_HelmetIA_net", "rhsusf_mich_bare_norotos_alt", "rhs_6b28", "rhsusf_ach_bare_semi", "H_HelmetSpecB_paint2", "rhs_6b26_ess", "rhs_6b27m_digi_ess_bala", "rhs_6b28_green_ess", "rhsusf_ach_bare_des", "rhs_6b27m_ess_bala", "rhsusf_lwh_helmet_marpatd_headset", "rhsusf_ach_bare_wood_headset_ess", "rhs_6b26_bala_green", "rhsusf_Bowman", "rhs_6b28_ess", "H_HelmetSpecB_paint2", "rhsusf_ach_helmet_ucp", "rhsusf_mich_helmet_marpatwd", "H_HelmetSpecB_paint1", "rhsusf_mich_helmet_marpatd_norotos_arc_headset", "rhs_Booniehat_ucp", "rhsusf_ach_bare", "rhsusf_ach_bare_tan_headset", "rhsusf_opscore_fg", "rhsusf_mich_bare", "rhsusf_opscore_rg_cover", "rhs_Booniehat_m81", "H_HelmetO_ocamo", "rhsusf_mich_bare_norotos_arc_alt_semi", "rhs_6b28_ess_bala", "rhsusf_ach_helmet_camo_ocp", "rhsusf_mich_bare_norotos_alt_semi", "rhs_6b26_bala_green", "rhsusf_mich_helmet_marpatwd_alt", "H_HelmetB_TI_tna_F", "rhs_6b27m_ml", "rhs_6b28_flora_ess_bala", "rhs_6b27m_bala", "rhs_6b26_ess", "rhsusf_ach_helmet_ocp", "rhs_6b27m_ess", "rhs_6b28_ess", "rhsusf_mich_helmet_marpatwd_headset", "rhsusf_mich_bare_alt_tan", "rhsusf_mich_bare_norotos_headset", "rhsusf_ach_bare_tan_ess", "rhsusf_ach_helmet_headset_ucp", "rhs_6b28_flora_bala", "rhsusf_mich_bare_norotos_headset", "H_HelmetSpecB", "rhsusf_mich_bare_norotos_arc_alt_semi_headset", "rhs_6b28_green", "rhs_6b27m_digi", "rhsusf_ach_bare_semi_ess", "rhsusf_mich_bare_norotos_arc_headset", "H_HelmetSpecO_ghex_F", "rhsusf_ach_bare_tan_headset_ess", "rhsusf_opscore_ut", "rhs_6b26", "rhs_6b28_bala", "rhs_6b27m_green_ess", "H_BandMask_khk", "rhsusf_ach_helmet_ESS_ucp", "rhsusf_opscore_mc_cover", "rhs_6b26_ess_bala", "rhs_6b28_flora_bala", "rhs_Booniehat_digi", "rhs_6b27m_green_ess_bala", "rhsusf_ach_bare_semi", "rhs_6b28_flora", "rhsusf_mich_bare_norotos_arc_alt_tan", "rhs_6b27m_ml_bala", "rhsusf_opscore_coy_cover", "rhs_6b28_flora_ess_bala", "rhsusf_ach_bare_semi_headset", "rhs_6b26_ess_bala_green", "rhsusf_ach_helmet_M81", "rhs_Booniehat_ocp", "rhsusf_opscore_fg", "H_MilCap_oucamo", "rhs_6b28_ess_bala", "rhsusf_lwh_helmet_marpatwd_headset", "rhsusf_mich_bare_alt", "H_MilCap_dgtl", "H_HelmetB_tna_F", "rhsusf_ach_bare_tan_ess", "rhs_6b28_green", "rhsusf_lwh_helmet_marpatd_headset", "rhsusf_lwh_helmet_marpatwd_ess", "rhsusf_ach_helmet_ucp_norotos", "rhsusf_mich_bare_norotos_arc_headset", "rhsusf_ach_bare_wood_headset_ess", "rhsusf_mich_bare_alt_semi", "rhs_6b26_bala", "rhs_6b27m_digi_bala", "rhs_6b28_green_bala", "rhsusf_mich_bare_norotos_semi_headset", "rhs_ssh68", "rhs_6b28_green", "H_Beret_gen_F", "rhs_6b28_flora_ess", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_mich_bare_norotos_arc_alt_tan_headset", "H_Helmet_Skate", "H_HelmetB_light", "rhs_6b27m_green_bala", "rhs_6b26_ess_bala_green", "H_HelmetB_plain_blk", "H_HelmetB_grass", "H_HelmetB_Light_tna_F", "rhsusf_mich_helmet_marpatwd_alt_headset", "rhsusf_lwh_helmet_marpatwd_headset", "rhs_6b26_ess_bala", "rhs_Booniehat_flora", "rhsusf_ach_helmet_ocp_norotos", "rhs_6b27m_ess_bala", "rhsusf_mich_bare_headset", "rhsusf_mich_helmet_marpatd_norotos", "H_HelmetB_light_grass", "rhs_6b27m_green_ess", "rhsusf_mich_bare_norotos_arc_semi", "rhs_6b27m_digi_bala", "rhsusf_ach_bare_headset_ess", "rhs_6b27m_digi_bala", "H_MilCap_rucamo", "rhsusf_mich_helmet_marpatwd_norotos", "rhs_6b26_green", "rhs_6b28_green_ess_bala", "rhs_6b27m_ml_ess", "H_HelmetB_snakeskin", "H_HelmetSpecO_blk", "H_HelmetB_Enh_tna_F", "rhs_6b27m_green_bala", "rhs_6b27m_ml_bala", "rhs_6b26", "rhs_6b27m_digi_ess", "rhs_6b28_green_ess_bala", "rhsusf_mich_bare_norotos_arc_alt_tan_headset", "rhsusf_mich_bare_norotos_alt_headset", "rhsusf_ach_bare_des_headset", "rhs_6b27m_ml", "H_HelmetB_paint", "rhs_Booniehat_marpatwd", "rhsusf_mich_helmet_marpatd_norotos_headset", "rhs_Booniehat_m81", "H_HelmetLeaderO_ocamo", "rhs_6b26_bala_green", "rhs_6b27m_green_bala", "rhs_6b26_ess_green", "H_CrewHelmetHeli_B", "rhsusf_Bowman", "rhs_6b28_bala", "H_HelmetLeaderO_ghex_F", "rhsusf_ach_bare_wood_ess", "rhs_6b28_ess_bala", "rhs_6b27m_green_ess_bala", "rhsusf_mich_bare_norotos_arc_semi", "rhs_6b26_ess_bala_green", "rhsusf_mich_bare_alt_tan", "H_HelmetB_light_sand", "rhsusf_mich_helmet_marpatwd", "rhs_6b26_bala_green", "rhs_6b27m_ml", "rhsusf_ach_helmet_headset_ucp", "rhsusf_mich_bare_norotos_arc_semi_headset", "rhs_6b27m_ess_bala", "rhsusf_mich_bare_norotos_arc_alt_semi", "H_HelmetB_sand", "rhs_6b27m_green", "rhsusf_opscore_rg_cover", "rhsusf_mich_helmet_marpatd_alt_headset", "H_HelmetCrew_I", "rhs_6b27m_ml", "rhsusf_ach_bare_des_headset_ess", "rhs_6b26_ess", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_bare_alt_semi", "rhs_6b27m_green_ess_bala", "H_HelmetIA", "rhs_6b28_green_ess_bala", "rhs_6b26_ess_green", "rhsusf_ach_bare_semi_ess", "rhsusf_mich_helmet_marpatwd_norotos_arc", "rhsusf_mich_helmet_marpatd_alt_headset", "H_HelmetO_oucamo", "H_MilCap_blue", "rhs_6b27m_ess_bala", "rhs_6b27m_ML_ess_bala", "rhs_6b27m_digi_ess", "H_HelmetB_grass", "rhsusf_ach_bare_des", "rhsusf_ach_helmet_ocp", "rhsusf_mich_helmet_marpatd_norotos_arc", "H_HelmetB_light_black", "rhsusf_mich_helmet_marpatd_altItemMap", "rhs_6b27m_digi_ess_bala", "rhs_6b27m_digi", "rhs_Booniehat_flora", "H_HelmetSpecB_blk", "rhs_6b27m_green", "rhsusf_ach_bare_tan", "rhs_6b26", "rhsusf_mich_bare_norotos_tan_headset", "rhsusf_lwh_helmet_marpatd_ess", "H_HelmetB_light_grass", "rhsusf_ach_helmet_ESS_ucp", "rhs_6b27m", "rhsusf_mich_helmet_marpatdItemMap", "H_HelmetSpecB_blk", "rhsusf_ach_bare_des_ess", "rhsusf_bowman_cap", "H_PilotHelmetFighter_I", "rhsusf_mich_bare_norotos_semi", "rhs_6b28_ess", "H_MilCap_blue", "rhs_Booniehat_marpatd", "H_HelmetO_ghex_F", "rhsusf_mich_bare_norotos_arc_alt_tan", "H_HelmetB_sand", "rhsusf_lwh_helmet_marpatd", "rhs_6b28_green_ess", "rhsusf_ach_bare_ess", "rhsusf_mich_bare_norotos_arc", "rhsusf_mich_bare_norotos_semi", "rhsusf_ach_helmet_headset_ess_ucp", "rhsusf_mich_helmet_marpatd_norotos_arc_headset", "rhs_6b26_ess_bala", "rhsusf_opscore_mc_cover", "rhs_6b28_bala", "H_HelmetB_paint", "H_Helmet_Skate", "rhsusf_ach_bare_wood_headset", "H_MilCap_ocamo", "rhs_6b26_green", "rhs_6b28_flora", "rhs_6b27m_ess", "rhsusf_mich_helmet_marpatwd_norotos", "H_MilCap_ocamo", "rhs_6b28_bala", "H_HelmetB", "rhs_6b27m_green_bala", "rhs_6b28_flora_bala", "rhs_ssh68", "rhs_Booniehat_digi", "rhs_6b26_ess", "H_BandMask_reaper", "rhsusf_mich_bare_alt", "rhsusf_ach_bare_ess", "rhs_6b27m_digi_ess_bala", "rhsusf_mich_bare_norotos_alt_semi", "rhsusf_ach_bare_des_headset_ess", "H_HelmetB_desert", "rhsusf_opscore_bk", "rhsusf_mich_bare_norotos_alt_semi_headset", "H_HelmetB_black", "rhs_6b28_green_bala", "H_HelmetB_light", "rhsusf_opscore_bk", "H_PilotHelmetHeli_B", "H_HelmetB_snakeskin", "rhsusf_mich_helmet_marpatd_headset", "rhs_6b27m_ess", "rhs_Booniehat_digi", "rhsusf_ach_bare_des_headset", "rhsusf_ach_helmet_M81", "rhsusf_mich_bare_norotos_arc_alt", "H_HelmetB_light_sand", "rhs_6b28_flora_bala", "rhs_Booniehat_flora", "rhsusf_lwh_helmet_marpatd_ess", "H_HelmetB_black", "rhsusf_ach_bare_tan_headset", "rhs_6b28_flora_ess_bala", "rhs_6b26_ess_bala", "rhs_6b27m_ess", "rhs_6b28", "H_HelmetSpecB", "H_HelmetCrew_B", "rhsusf_mich_helmet_marpatd_norotos", "rhsusf_mich_bare_norotos_alt_tan_headset", "rhs_6b28_ess_bala", "rhsusf_ach_helmet_ESS_ocp", "rhsusf_mich_helmet_marpatwd_headset", "rhsusf_ach_helmet_ucp_norotos", "rhsusf_mich_bare_norotos_arc", "rhs_Booniehat_digi", "H_HelmetB_plain_blk", "rhs_6b27m_ML_ess_bala", "rhsusf_mich_helmet_marpatwd_alt", "rhsusf_ach_bare_headset_ess", "H_HelmetSpecB", "H_PilotHelmetHeli_O", "rhsusf_mich_helmet_marpatd_norotos_headset", "rhs_6b26_bala", "rhsusf_ach_bare_des_ess", "rhsusf_ach_bare_wood", "rhsusf_ach_helmet_headset_ocp", "rhs_Booniehat_ocp", "rhs_6b27m_digi", "rhs_6b27m_ml_ess", "rhsusf_mich_helmet_marpatdItemMap", "rhs_6b28_flora_ess", "rhs_6b26_ess_green", "H_BandMask_demon", "rhs_6b28_flora", "H_BandMask_khk", "rhsusf_mich_bare_semi_headset", "H_HelmetIA_camo", "H_HelmetSpecO_ghex_F", "rhs_6b26_bala", "rhs_6b27m_ml_ess", "rhsusf_ach_helmet_headset_ocp", "rhs_6b27m_digi_ess", "rhs_6b26_green", "H_HelmetB_light_black", "rhs_6b28_flora_ess_bala", "H_HelmetB", "rhsusf_bowman_cap", "rhsusf_mich_helmet_marpatd_headset", "rhsusf_mich_bare_norotos_alt", "rhsusf_lwh_helmet_marpatwd", "rhs_6b26_bala", "rhsusf_ach_bare_headset", "H_HelmetSpecO_ocamo", "rhs_6b28_flora", "rhs_6b27m_ML_ess_bala", "rhsusf_lwh_helmet_marpatwd_ess", "rhsusf_mich_bare_norotos_tan", "rhs_Booniehat_marpatwd", "rhsusf_mich_bare_norotos", "rhsusf_ach_bare_semi_headset", "rhsusf_ach_helmet_camo_ocp", "rhsusf_lwh_helmet_M1942", "rhsusf_opscore_rg_cover_pelt", "rhsusf_lwh_helmet_marpatwd", "H_HelmetSpecB_paint1", "rhs_6b28_green", "H_HelmetB_camo", "H_HelmetCrew_O", "rhs_6b27m_ml_ess", "rhs_6b28_flora_ess", "rhsusf_mich_helmet_marpatwd_norotos_headset", "rhsusf_ach_bare_tan", "H_HelmetIA_camo", "rhsusf_ach_helmet_headset_ess_ucp", "rhs_6b27m_green_ess", "rhsusf_ach_bare_tan_headset_ess", "rhs_ssh68", "rhsusf_mich_bare_norotos_arc_semi_headset", "rhsusf_mich_bare_tan_headset", "rhs_6b27m_ml_bala", "rhs_6b27m_green", "rhsusf_opscore_rg_cover_pelt", "rhsusf_mich_bare_norotos_alt_tan", "rhsusf_mich_bare_norotos_semi_headset", "H_HelmetSpecB_paint2", "H_CrewHelmetHeli_O", "rhs_6b28_green_ess_bala", "H_Beret_gen_F", "H_MilCap_mcamo", "rhsusf_ach_helmet_ocp_norotos", "rhs_6b27m_digi_bala", "rhs_6b27m", "rhsusf_mich_bare_norotos_arc_alt_headset", "H_BandMask_reaper", "rhsusf_mich_bare_norotos_tan_headset", "rhsusf_ach_bare_semi_headset_ess", "rhsusf_ach_bare_wood", "H_HelmetCrew_O_ghex_F", "rhsusf_opscore_coy_cover_pelt", "rhs_6b27m_green_ess", "H_HelmetIA_net", "rhsusf_ach_bare_semi_headset_ess", "rhsusf_mich_bare", "H_HelmetB_light_desert", "H_HelmetB_light_snakeskin", "H_HelmetB_light_desert", "rhsusf_ach_bare_wood_ess", "rhsusf_mich_bare_semi", "rhsusf_opscore_mc_cover_pelt", "rhsusf_mich_bare_norotos_arc_tan", "rhs_6b28_green_bala", "rhsusf_mich_bare_norotos_arc_alt_headset", "H_HelmetIA", "H_HelmetB_Enh_tna_F", "rhsusf_lwh_helmet_M1942", "H_HelmetLeaderO_oucamo", "rhs_6b27m_digi", "H_HelmetLeaderO_ghex_F", "rhsusf_mich_helmet_marpatwd_alt_headset", "rhs_6b28_green_bala", "rhsusf_mich_bare_norotos_alt_semi_headset", "H_HelmetB", "rhsusf_ach_bare_wood_headset", "rhs_6b27m_digi_ess_bala", "rhs_Booniehat_ucp", "rhs_6b27m_bala", "rhsusf_mich_bare_headset", "rhsusf_mich_bare_norotos_arc_alt_semi_headset", "H_CrewHelmetHeli_I", "rhsusf_mich_bare_tan", "rhs_6b28", "H_MilCap_rucamo", "H_HelmetB_Light_tna_F", "rhs_6b27m_bala", "H_BandMask_demon", "rhsusf_ach_bare", "rhs_6b27m_green_ess_bala"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33.33%
			U_O_GhillieSuit = 33.33%
			U_I_GhillieSuit = 33.33%
		*/
		Ghillies[] = {"U_B_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit", "U_I_GhillieSuit", "U_O_GhillieSuit", "U_O_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 8.70%
			U_B_FullGhillie_lsh     = 8.70%
			U_B_FullGhillie_sard    = 8.70%
			U_O_FullGhillie_ard     = 8.70%
			U_O_FullGhillie_lsh     = 8.70%
			U_O_FullGhillie_sard    = 8.70%
			U_I_FullGhillie_ard     = 8.70%
			U_I_FullGhillie_lsh     = 8.70%
			U_I_FullGhillie_sard    = 8.70%
			U_B_T_Sniper_F          = 4.35%
			U_B_T_Soldier_F         = 4.35%
			U_B_T_FullGhillie_tna_F = 4.35%
			U_O_T_Sniper_F          = 4.35%
			U_O_T_FullGhillie_tna_F = 4.35%
		*/
		DLCGhillies[] = {"U_I_FullGhillie_lsh", "U_B_FullGhillie_ard", "U_O_FullGhillie_ard", "U_O_T_FullGhillie_tna_F", "U_I_FullGhillie_lsh", "U_O_T_Sniper_F", "U_I_FullGhillie_ard", "U_O_FullGhillie_lsh", "U_B_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_O_FullGhillie_sard", "U_O_FullGhillie_ard", "U_O_FullGhillie_sard", "U_O_FullGhillie_lsh", "U_B_FullGhillie_lsh", "U_B_T_Soldier_F", "U_B_FullGhillie_ard", "U_I_FullGhillie_sard", "U_B_FullGhillie_sard", "U_I_FullGhillie_ard", "U_I_FullGhillie_sard"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4.76%
			V_PlateCarrierGL_mtp         = 4.76%
			V_PlateCarrierGL_rgr         = 4.76%
			V_PlateCarrierIAGL_dgtl      = 4.76%
			V_PlateCarrierIAGL_oli       = 4.76%
			V_PlateCarrierSpec_blk       = 4.76%
			V_PlateCarrierSpec_mtp       = 4.76%
			V_PlateCarrierSpec_rgr       = 4.76%
			V_TacChestrig_grn_F          = 4.76%
			V_TacChestrig_oli_F          = 4.76%
			V_TacChestrig_cbr_F          = 4.76%
			V_PlateCarrier1_tna_F        = 4.76%
			V_PlateCarrier2_tna_F        = 4.76%
			V_PlateCarrierSpec_tna_F     = 4.76%
			V_PlateCarrierGL_tna_F       = 4.76%
			V_HarnessO_ghex_F            = 4.76%
			V_HarnessOGL_ghex_F          = 4.76%
			V_BandollierB_ghex_F         = 4.76%
			V_TacVest_gen_F              = 4.76%
			V_PlateCarrier1_rgr_noflag_F = 4.76%
			V_PlateCarrier2_rgr_noflag_F = 4.76%
		*/
		DLCVests[] = {"V_PlateCarrierGL_mtp", "V_PlateCarrierGL_tna_F", "V_TacChestrig_grn_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_blk", "V_PlateCarrierIAGL_dgtl", "V_TacChestrig_oli_F", "V_PlateCarrierIAGL_oli", "V_TacChestrig_cbr_F", "V_PlateCarrierSpec_tna_F", "V_HarnessOGL_ghex_F", "V_HarnessO_ghex_F", "V_TacVest_gen_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrier2_rgr_noflag_F", "V_BandollierB_ghex_F", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_rgr", "V_PlateCarrier1_tna_F", "V_PlateCarrier2_tna_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIA", "V_RebreatherIR", "V_RebreatherB"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc            = 4.76%
			Exile_Item_Bandage             = 47.62%
			Exile_Item_Vishpirin           = 19.05%
			Exile_Item_Heatpack            = 19.05%
			rzinfection_antivirus_pills    = 4.76%
			rzinfection_antivirus_injector = 4.76%
		*/
		MedicalItems[] = {"Exile_Item_Vishpirin", "rzinfection_antivirus_pills", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Bandage", "rzinfection_antivirus_injector", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0.56%
			Exile_Item_Knife                = 7.22%
			Exile_Item_Cement               = 1.67%
			Exile_Item_FloodLightKit        = 1.67%
			Exile_Item_PortableGeneratorKit = 1.67%
			Exile_Item_CamoTentKit          = 2.22%
			Exile_Item_MetalBoard           = 2.22%
			Exile_Item_Foolbox              = 2.22%
			Exile_Item_Sand                 = 2.22%
			Exile_Item_Grinder              = 2.78%
			Exile_Item_MetalScrews          = 2.78%
			Exile_Melee_SledgeHammer        = 2.78%
			Exile_Item_ExtensionCord        = 4.44%
			Exile_Item_LightBulb            = 5.00%
			Exile_Item_WaterCanisterEmpty   = 5.56%
			Exile_Melee_Shovel              = 5.56%
			Exile_Item_JunkMetal            = 6.11%
			Exile_Item_Handsaw              = 7.22%
			Exile_Item_Pliers               = 7.22%
			Exile_Item_ScrewDriver          = 7.22%
			Exile_Melee_Axe                 = 12.22%
			Exile_Item_Rope                 = 6.11%
			Exile_Item_Carwheel             = 3.33%
		*/
		IndustrialItems[] = {"Exile_Item_ExtensionCord", "Exile_Item_Rope", "Exile_Melee_Axe", "Exile_Item_Sand", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_ExtensionCord", "Exile_Item_CamoTentKit", "Exile_Item_ExtensionCord", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Melee_Shovel", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Item_Rope", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_FloodLightKit", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_FloodLightKit", "Exile_Item_MetalScrews", "Exile_Item_ScrewDriver", "Exile_Item_Cement", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_Cement", "Exile_Item_ScrewDriver", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Melee_Axe", "Exile_Item_Carwheel", "Exile_Item_Knife", "Exile_Item_CamoTentKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Knife", "Exile_Item_Pliers", "Exile_Item_PortableGeneratorKit", "Exile_Item_Handsaw", "Exile_Item_CamoTentKit", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_Rope", "Exile_Item_Handsaw", "Exile_Item_Carwheel", "Exile_Melee_SledgeHammer", "Exile_Item_Rope", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_Carwheel", "Exile_Item_LightBulb", "Exile_Item_Foolbox", "Exile_Item_Knife", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Melee_SledgeHammer", "Exile_Item_Carwheel", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Item_MetalScrews", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_Carwheel", "Exile_Item_ExtensionCord", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_Cement", "Exile_Item_Handsaw", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_JunkMetal", "Exile_Item_MetalBoard", "Exile_Item_Knife", "Exile_Item_JunkMetal", "Exile_Item_Grinder", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_ExtensionCord", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Melee_Shovel", "Exile_Item_CamoTentKit", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_MetalBoard", "Exile_Item_Grinder", "Exile_Item_PortableGeneratorKit", "Exile_Item_ScrewDriver", "Exile_Item_Foolbox", "Exile_Item_ExtensionCord", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_SledgeHammer", "Exile_Melee_SledgeHammer", "Exile_Item_Rope", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_Rope", "Exile_Item_Rope", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_MetalScrews", "Exile_Item_Handsaw", "Exile_Item_Carwheel", "Exile_Item_Handsaw", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_Sand", "Exile_Item_ThermalScannerPro", "Exile_Item_Foolbox", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_FloodLightKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exile_Item_Knife", "Exile_Item_Sand", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_PortableGeneratorKit", "Exile_Item_Sand", "Exile_Item_WaterCanisterEmpty", "Exile_Item_MetalBoard", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Item_Rope", "Exile_Item_Foolbox", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 40.00%
			Exile_Item_FuelCanisterEmpty = 50.00%
			Exile_Item_DuctTape          = 10.00%
		*/
		Vehicle[] = {"Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25.00%
			Chemlight_green  = 25.00%
			Chemlight_red    = 25.00%
			Chemlight_yellow = 25.00%
		*/
		Chemlights[] = {"Chemlight_green", "Chemlight_red", "Chemlight_blue", "Chemlight_yellow"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareYellow_F", "FlareRed_F", "FlareGreen_F", "FlareWhite_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShell", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellBlue", "SmokeShellPurple", "SmokeShellYellow", "SmokeShellRed"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50.00%
			Exile_Item_BaseCameraKit = 50.00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 6.25%
			Exile_Item_Magazine02         = 6.25%
			Exile_Item_Magazine03         = 6.25%
			Exile_Item_Magazine04         = 6.25%
			Exile_Item_Can_Empty          = 25.00%
			Exile_Item_PlasticBottleEmpty = 25.00%
			Exile_Item_ToiletPaper        = 25.00%
		*/
		Trash[] = {"Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_Magazine03", "Exile_Item_ToiletPaper", "Exile_Item_Magazine01", "Exile_Item_PlasticBottleEmpty", "Exile_Item_ToiletPaper", "Exile_Item_Can_Empty", "Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine04", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine02", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty"};

		/*
			Percental Item Spawn Chances of Unused:

		*/
		Unused[] = {};
	};
};
class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 1;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 3;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 30;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 30;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 30;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 30;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 3;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 2;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 50;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 3; // Crashing your car costs you 1% respect
			suicide = 1; // Comitting suicide costs you 2% of your respect
			friendyFire = 0; // Friendly fire costs you 3% 
			npc = 2; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 10; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = 100;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"ItemCompass",
			"ItemMap", // Because why not
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 0;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 1;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 1800;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 0;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 80; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 0.5;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
		};

		// Stuff to spawn on roads
		ground[] = 
		{
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Sunny", "Cloudy", "Thunderstorm", "Thunderstorm", "Thunderstorm", "Cloudy", "Cloudy", "Cloudy", "Cloudy", "Thunderstorm", "Thunderstorm", "Thunderstorm"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.4;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.5;
			gusts = 0.75;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,6,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "jomjijqgh";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {6, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 1;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 1;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server. 
			If set to 0, it will execute '#restart'
		*/

		useShutdown = 1
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 1;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"},
			{"76561198027700602","[EXILE|DEV] Eraser1"},
			{"76561198048317094","[EXILE|DEV] HappyDayZ"},
			{"76561198105900802","[EXILE|DEV] Psycho"},
			{"76561198004111275","[EXILE|DEV] Maca134"},
			{"76561198037177305","[EXILE|DEV] Wolfkill"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox", "AbandonedSafe", "AmbientFlyOver"}; 
		enabledEscapeEvents[] = {"EscapeSupplyBox", "AmbientFlyOver", "EarthQuake"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 60;
			maxTime = 180;
			minimumPlayersOnline = 100;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 60; // minutes
			maxTime = 180; // minutes
			minimumPlayersOnline = 1;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 100; // altitude of the drop
			markerTime = 10; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Beer", "Beer", "Tools", "Food", "Food", "RepairParts"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_JunkMetal", 20},
						{"Exile_Item_MetalBoard", 20},
						{"Exile_Item_MetalPole", 20},
						{"Exile_Item_MetalWire", 20},
						{"Exile_Item_Cement", 20},
						{"Exile_Item_Sand", 20}
					};
				};

				class Food 
				{
					items[] = 
					{
						{"Exile_Item_EMRE", 10},
						{"Exile_Item_InstantCoffee", 10},
						{"Exile_Item_Catfood", 5},
						{"Exile_Item_BBQSandwich", 5},
						{"Exile_Item_BeefParts", 5},
						{"Exile_Item_Raisins", 5}
					};
				};

				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 2},
						{"Exile_Item_Screwdriver", 2},
						{"Exile_Item_Pliers", 2},
						{"Exile_Item_Handsaw", 2},
						{"Exile_Item_DuctTape", 2}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_WoodDoorwayKit", 4},
						{"Exile_Item_WoodFloorKit", 8},
						{"Exile_Item_WoodWallKit", 8},
						{"Exile_Item_WoodWindowKit", 6},
						{"Exile_Item_WoodGateKit", 2}
					};
				};
			};
		};

		class EscapeSupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_escapeSupplyBox_start";
			minTime = 3; // minutes
			maxTime = 6; // minutes
			minimumPlayersOnline = 1;
			dropAltitude = 100; // altitude of the drop
			markerTime = 5; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"CyrusBulletCam","LynxBulletCam","LRRBulletCam","MAR10BulletCam","Rahim","MkIEMR","ASP1Kir","Mk14","CMR","EBR","MXSW","Mk200"};

			class BoxTypes
			{
				class CyrusBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", 1},
						{"10Rnd_93x64_DMR_05_Mag", 3},
						{"srifle_DMR_05_blk_F", 1}
					};
				};
				class LynxBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", 1},
						{"5Rnd_127x108_Mag", 3},
						{"srifle_GM6_F", 1}
					};
				};
				class LRRBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", 1},
						{"7Rnd_408_Mag", 3},
						{"srifle_LRR_F", 1}
					};
				};
				class MAR10BulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", 1},
						{"10Rnd_338_Mag", 3},
						{"srifle_DMR_02_F", 1}
					};
				};
				class Rahim 
				{
					items[] = 
					{
						{"srifle_DMR_01_F", 1},
						{"10Rnd_762x54_Mag", 3}
					};
				};
				class MkIEMR 
				{
					items[] = 
					{
						{"srifle_DMR_03_woodland_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class ASP1Kir 
				{
					items[] = 
					{
						{"srifle_DMR_04_F", 1},
						{"10Rnd_127x54_Mag", 3}
					};
				};
				class Mk14 
				{
					items[] = 
					{
						{"srifle_DMR_06_camo_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class CMR 
				{
					items[] = 
					{
						{"srifle_DMR_07_ghex_F", 1},
						{"20Rnd_650x39_Cased_Mag_F", 2}
					};
				};
				class EBR 
				{
					items[] = 
					{
						{"srifle_EBR_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class MXSW 
				{
					items[] = 
					{
						{"arifle_MX_SW_Black_F", 1},
						{"30Rnd_65x39_caseless_mag", 2}
					};
				};
				class Mk200 
				{
					items[] = 
					{
						{"LMG_Mk200_F", 1},
						{"200Rnd_65x39_cased_Box", 1}
					};
				};
			};
		};

		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 1
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};


	///////////////////////////////////////////////////////////////////////
	// EXILE ESCAPE CONFIGURATION
	// NOTE: REQUIRES ExileEscape.MAPNAME MISSION FILE TO BE LOADED!
	///////////////////////////////////////////////////////////////////////
	class Escape
	{
		/*
			A very simple option with powerful consequences
			Set to 1 to enable Exile Escape!
		*/
		enableEscape = 0;
		
		/*
			Map Configs
		*/
		class Tanoa 
		{
			//Starting Position and radius
			startingLocation[] = {1277.18,560.44,0.00142193};
			startingAreaRadius = 100;
		};
		
		class Altis
		{
			//Starting Position and radius
			startingLocation[] = {8452.87, 25086.9, 0};
			startingAreaRadius = 200;
		};

		// Which players are allowed to spectate after they are dead.
		// Useful for admins/mods and streamers
		spectatorUIDs[] = 
		{
			"76561197985241690",	// Eichi
			"76561198022879703",	// Grim
			"76561198075905447",	// Vish
			"76561198037177305"		// WolfkillArcadia
		};
		
		//Number of players needed before the game initializes
		minimumPlayersOnline = 10;
		
		//Radius of the circle for each round
		roundZoneRadius[] = {1000, 500, 250};
		
		//Final shrink size of last round. To prevent shrinking make finalZoneRadius equal to last roundZoneRadius
		finalZoneRadius = 100;
		
		//Time in minutes after minimumPlayersOnline met before game begins
		timeBeforeStart = 5;
		
		//Total Round Minutes
		minutesPerRound = 10;
		
		//Minutes after round starts before new preview
		minutesBeforePreview = 7;

		// How much do ppl get when they win?
		respectWinKill = 1000;
		respectWinGetIn = 500;
		respectWinSuicide = 500;
		
		//Number of weapon boxes to spawn
		numberOfBoxes = 10;
	};
};