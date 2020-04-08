if (isServer) then {

 _vehicle_99 = objNull;

 if (true) then
 {
 _this = createVehicle ["CargoNet_01_box_F", [22506.4,20058.8,0], [], 0, "CAN_COLLIDE"];
 _vehicle_99 = _this;
 _this setDir 20;
 _this setVariable ["permaLoot",true];

 clearWeaponCargoGlobal _this;
 clearMagazineCargoGlobal _this;


 _this addItemCargoGlobal ["Exile_Item_DuctTape",15];
 _this addItemCargoGlobal ["Exile_Item_JunkMetal",50];
 _this addItemCargoGlobal ["Exile_Item_MetalPole",50];
 _this addItemCargoGlobal ["Exile_Item_WoodFloorKit",50];
 _this addItemCargoGlobal ["Exile_Item_WoodPlank",50];
 _this addItemCargoGlobal ["Exile_Item_WoodWallKit",50];
 _this addItemCargoGlobal ["Exile_Item_FortificationUpgrade",100];
 _this addItemCargoGlobal ["Exile_Item_Flag",5];
 _this addItemCargoGlobal ["Exile_Item_BaseCameraKit",10];
 _this addItemCargoGlobal ["Exile_Item_Laptop",5];
 _this addItemCargoGlobal ["Exile_Item_PortableGeneratorKit",5];
 _this addItemCargoGlobal ["Exile_Item_ExtensionCord",5];
 _this addItemCargoGlobal ["Exile_Item_MetalBoard",50];
 _this addItemCargoGlobal ["Exile_Item_FloodLightKit",10];
 _this addItemCargoGlobal ["Exile_Item_LightBulb",10];
 _this addMagazineCargoGlobal ["Exile_Magazine_Battery",5];
 _this addItemCargoGlobal ["Exile_Item_SafeKit",10];
 _this addWeaponCargoGlobal ["Exile_Melee_Axe",5];
 _this addItemCargoGlobal ["Exile_Item_WoodLog", 20];
 _this addItemCargoGlobal ["Exile_Item_WoodWallHalfKit",50];
 _this addItemCargoGlobal ["Exile_Item_Rope",20];
 _this addItemCargoGlobal ["Exile_Item_WoodDoorKit",20];
 _this addItemCargoGlobal ["Exile_Item_WoodWindowKit",20];
 _this addItemCargoGlobal ["Exile_Item_Handsaw",5];
 _this addItemCargoGlobal ["Exile_Item_InstaDoc",10];
 
 };
 };