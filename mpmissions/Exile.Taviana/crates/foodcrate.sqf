if (isServer) then {
 
 _vehicle_99 = objNull;
 
 if (true) then
 {
 _this = createVehicle ["CargoNet_01_box_F", [22468.1,19473.6,0], [], 0, "CAN_COLLIDE"];
 _vehicle_99 = _this;
 _this setDir 20;
 _this setVariable ["permaLoot",true];

 clearWeaponCargoGlobal _this;
 clearMagazineCargoGlobal _this;


 _this addItemCargoGlobal ["Exile_Item_InstaDoc",10];
 _this addItemCargoGlobal ["Exile_Item_BBQSandwich_Cooked",20];
 _this addItemCargoGlobal ["Exile_Item_CatFood_Cooked",20];
 _this addItemCargoGlobal ["Exile_Item_ChristmasTinner_Cooked",20];
 _this addItemCargoGlobal ["Exile_Item_PlasticBottleCoffee",20];
 _this addItemCargoGlobal ["Exile_Item_Energydrink",20];
 _this addItemCargoGlobal ["Exile_Item_GloriousKnakworst_Cooked",20];
 _this addItemCargoGlobal ["Exile_Item_Energydrink",20];
 _this addItemCargoGlobal ["Exile_Item_PlasticBottleFreshWater",20];
 _this addItemCargoGlobal ["Exile_Item_SausageGravy_Cooked",20];
 _this addItemCargoGlobal ["Exile_Item_CanOpener",5];
 _this addItemCargoGlobal ["Exile_Item_Beer",20];
 _this addBackpackCargoGlobal ["B_Carryall_ocamo",4];

 };
 };