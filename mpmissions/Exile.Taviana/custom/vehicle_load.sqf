while {true} do {

uiSleep 30;

private["_vehicle","_simulationShouldBeEnabled","_position"];
{
	_vehicle = _x;
	_simulationShouldBeEnabled = false;
	if !(crew _vehicle isEqualTo []) then 
	{
		_simulationShouldBeEnabled = true;	
	}
	else 
	{
		_position = getPos _vehicle;
		if (_position select 2 > 20) then
		{
			_simulationShouldBeEnabled = true;
		}
		else 
		{
			if ([_position, 250] call ExileClient_util_world_isAlivePlayerInRange) then
			{
				_simulationShouldBeEnabled = true;
			};
		};
	};
	if (_simulationShouldBeEnabled) then
	{
		if !(simulationEnabled _vehicle) then
		{
			_vehicle enableSimulationGlobal true;
		};
	}
	else 
	{
		if (simulationEnabled _vehicle) then
		{
			_vehicle enableSimulationGlobal false;
		};
	};
}
forEach ExileSimulationMonitoredVehicles;
true

};