private["_territoryLevelConfigs","_territoryLevelConfig","_numberOfConstructionsAllowed","_display", "_territoryDropDown", "_playerUID", "_flag", "_buildRights", "_size", "_level", "_parts", "_index", "_kickButton", "_leaveButton", "_promoteButton", "_demoteButton", "_radiusButton"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_territoryDropDown = _display displayCtrl 4132;
lbClear _territoryDropDown;
_playerUID = getPlayerUID player;
{
	_flag = _x;
	_buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
	if (_playerUID in _buildRights) then
	{
		_name = _flag getVariable ["ExileTerritoryName", ""];
		_size = _flag getVariable ["ExileTerritorySize", 0];
		_level = _flag getVariable ["ExileTerritoryLevel", 0];
		_parts = count (_flag nearObjects ["Exile_Construction_Abstract_Static", _size]);
		_territoryLevelConfigs = getArray (missionConfigFile >> "CfgTerritories" >> "prices");
		_territoryLevelConfig = _territoryLevelConfigs select ((_flag getVariable ["ExileTerritoryLevel", 0]) - 1);
		_numberOfConstructionsAllowed = _territoryLevelConfig select 2;
		_index = _territoryDropDown lbAdd (format ["%1 (Level: %2, Radius: %3m, Parts: %4/%5, Coords: %6)",_name, _level, _size, _parts,_numberOfConstructionsAllowed,mapGridPosition _flag]);
		_territoryDropDown lbSetData [_index, netId _flag]; 
	};
}
forEach (allMissionObjects "Exile_Construction_Flag_Static");
_kickButton = _display displayCtrl 4134;
_kickButton ctrlEnable false;
_leaveButton = _display displayCtrl 4135;
_leaveButton ctrlEnable false;
_promoteButton = _display displayCtrl 4136;
_promoteButton ctrlEnable false;
_demoteButton = _display displayCtrl 4137;
_demoteButton ctrlEnable false;
_radiusButton = _display displayCtrl 4138;
_radiusButton ctrlEnable false;
_territoryDropDown lbSetCurSel 0;
true