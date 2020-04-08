/*
    Harvest the good shit by GolovaRaoul
*/
private ["_player","_weed"];
switch (true) do {
    disableUserInput true;
    _weed = nearestObject [player, "CUP_p_fiberPlant_EP1"];
    deleteVehicle _weed;
    systemChat "Started Harvesting the Good Shit Man";
    if(vehicle player != player) exitWith {};
    for "_i" from 0 to 2 do
    {
    player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
    sleep 2.5;
    };
    systemChat "You hands are all sticky, but you harvested some good shit man! Go sell the money at Trader City!";
    disableUserInput false;
    player addItem "CUP_Item_Money"
    exitWith{};
}; 