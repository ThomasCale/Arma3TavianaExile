if (isServer) then {

 _vehicle_99 = objNull;

 if (true) then
 {
 _this = createVehicle ["CargoNet_01_box_F", [22915.7,19492,0], [], 0, "CAN_COLLIDE"];
 _vehicle_99 = _this;
 _this setDir 20;
 _this setVariable ["permaLoot",true];

 clearWeaponCargoGlobal _this;
 clearMagazineCargoGlobal _this;


 _this addWeaponCargoGlobal ["srifle_EBR_F",2];
 _this addWeaponCargoGlobal ["srifle_DMR_01_F",2];
 _this addWeaponCargoGlobal ["LMG_Zafir_F",2];
 _this addWeaponCargoGlobal ["arifle_MX_SW_Black_F",2];
 _this addWeaponCargoGlobal ["arifle_MXC_Black_F",2];
 _this addWeaponCargoGlobal ["arifle_Mk20_GL_F",2];
 _this addWeaponCargoGlobal ["SMG_01_F",2];
 _this addWeaponCargoGlobal ["srifle_GM6_camo_F",2];
 _this addWeaponCargoGlobal ["srifle_DMR_03_woodland_F",2];
 _this addWeaponCargoGlobal ["srifle_GM6_F",2];
 _this addWeaponCargoGlobal ["LMG_Mk200_F",2];
 _this addWeaponCargoGlobal ["arifle_Mk20_F",2];
 _this addMagazineCargoGlobal ["30Rnd_556x45_Stanag",20];
 _this addMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",10];
 _this addMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Green",10];
 _this addMagazineCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Yellow",20];
 _this addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag",20];
 _this addMagazineCargoGlobal ["30Rnd_65x39_caseless_green",10];
 _this addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag_Tracer",10];
 _this addMagazineCargoGlobal ["30Rnd_65x39_caseless_green_mag_Tracer",10];
 _this addMagazineCargoGlobal ["20Rnd_762x51_Mag",10];
 _this addMagazineCargoGlobal ["7Rnd_408_Mag",10];
 _this addMagazineCargoGlobal ["5Rnd_127x108_Mag",10];
 _this addMagazineCargoGlobal ["100Rnd_65x39_caseless_mag",10];
 _this addMagazineCargoGlobal ["100Rnd_65x39_caseless_mag_Tracer",10];
 _this addMagazineCargoGlobal ["200Rnd_65x39_cased_Box",10];
 _this addMagazineCargoGlobal ["200Rnd_65x39_cased_Box_Tracer",10];
 _this addMagazineCargoGlobal ["30Rnd_9x21_Mag",10];
 _this addMagazineCargoGlobal ["16Rnd_9x21_Mag",10];
 _this addMagazineCargoGlobal ["30Rnd_45ACP_Mag_SMG_01",10];
 _this addMagazineCargoGlobal ["30Rnd_45ACP_Mag_SMG_01_Tracer_Green",10];
 _this addMagazineCargoGlobal ["9Rnd_45ACP_Mag",10];
 _this addMagazineCargoGlobal ["150Rnd_762x51_Box",10];
 _this addMagazineCargoGlobal ["150Rnd_762x51_Box_Tracer",10];
 _this addMagazineCargoGlobal ["150Rnd_762x54_Box",10];
 _this addMagazineCargoGlobal ["150Rnd_762x54_Box_Tracer",10];
 _this addMagazineCargoGlobal ["11Rnd_45ACP_Mag",10];
 _this addMagazineCargoGlobal ["6Rnd_45ACP_Cylinder",10];
 _this addMagazineCargoGlobal ["10Rnd_762x51_Mag",10];
 _this addMagazineCargoGlobal ["10Rnd_762x54_Mag",10];
 _this addMagazineCargoGlobal ["5Rnd_127x108_APDS_Mag",10];
 _this addMagazineCargoGlobal ["10Rnd_338_Mag",10];
 _this addMagazineCargoGlobal ["130Rnd_338_Mag",10];
 _this addMagazineCargoGlobal ["10Rnd_127x54_Mag",10];
 _this addMagazineCargoGlobal ["150Rnd_93x64_Mag",10];
 _this addMagazineCargoGlobal ["10Rnd_93x64_DMR_05_Mag",10];
 _this addItemCargoGlobal ["optic_Nightstalker",2];
 _this addItemCargoGlobal ["optic_SOS",5];
 _this addItemCargoGlobal ["optic_Aco_smg",5];
 _this addItemCargoGlobal ["optic_ACO_grn_smg",5];
 _this addItemCargoGlobal ["optic_Holosight",2];
 _this addItemCargoGlobal ["Rangefinder",2];
 _this addItemCargoGlobal ["optic_MRCO",2];
 _this addItemCargoGlobal ["muzzle_snds_338_green",2];
 _this addItemCargoGlobal ["NVGoggles",2];
 _this addItemCargoGlobal ["optic_NVS",3];
 _this addItemCargoGlobal ["Exile_Item_InstaDoc",10];

 };
 };
