class CfgPatches
{
	class exile_crash
	{
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"exile_server"
		};
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};

class CfgFunctions
{
    class exile_crash
    {
        class Bootstrap
        {
            file = "\exile_crash\bootstrap";
            class preInit
            {
                preInit = 1;
            };
            class postInit
            {
                postInit = 1;
            };
        };
    };
};

class cfgCrash
{
	class options
	{
	    minPlayer = 1; /* Minimum number of players who have to be online for crash. */
        spawnFly = 1; /* This parameter is responsible for the appearance of bots in the air or on the ground. 0 - on the ground, 1 - in the air */
        startCrash = 300; /* After what time the helicrash starts to fall after the restart. In seconds */	
        betweenTime = 1800; /* After what time does the next crash occur. In seconds. */
		betweenTimeEndCrash = 1000; /* After what time is the current crash removed?. */
        startCountBots = 5; /* Ab wieviel wird die Anzahl der Bots im Hubschrauber sein. Zufällig */
        endCountBots = 5; /* Wie viele Bots werden sich im Hubschrauber befinden? Zufällig */
        startCountVehicleBots = 5; /* Ab wie vielen wird die Anzahl der Bots im Bodentransport sein. Zufällig */
        endCountVehicleBots = 5; /* Wie viele Bots wird es im Bodentransport geben? Zufällig */		
        betweenTimeCrash = 2; /* Verzögerung in Sekunden vor dem Fallen */
        betweenTimeBots = 3; /* Die Verzögerung in Sekunden zwischen dem Beginn des Absturzes des Hubschraubers und der Landung */	
        betweenTimeYawik = 4; /* Die Verzögerung in Sekunden vor dem Erscheinen der Box */
        heightCrash = 600; /* Die Höhe, auf die der Hubschrauber fällt */	
        countItemBots = 3; /* Die Menge an willkürlicher Beute in Bots. Nimm es zufällig */	
        minPlayerMetrsCrash = 2000; /* Mindestabstand zum Erscheinen des Spielers */
		maxPlayerMetrsCrash = 3000; /* Maximaler Abstand zum Erscheinungsbild des Spielers */
        mincountWeapon = 2; /* Mindestanzahl beliebiger Waffen in der Beutebox. Nimm es zufällig */
		maxcountWeapon = 2; /* Die maximale Anzahl beliebiger Waffen in der Beutebox. Nimm es zufällig */
		mincountItems = 5; /* Mindestmenge an willkürlicher Beute in einer Beutebox. Nimm es zufällig */
        maxcountItems = 5; /* maximale Menge an willkürlicher Beute in einer Beutebox. Nimm es zufällig */
        countBackpack = 2; /* Die Anzahl der Rucksäcke in einer Beutebox. Nimm es zufällig */
        radiusMetrsCrash = 50; /* Der Radius der Bewegung von Bots im passiven Modus. Wenn sie das Ziel sehen, werden sie es verfolgen. */	
        crashType = 1; /* 0 - alle Arten von Abstürzen, 1 - nur Hubschrauber, 2 - nur Ausrüstung. */
        classBoats = "O_Soldier_unarmed_F"; /* Bot-Klasse */
        classHeli = "B_Heli_Transport_01_F"; /* Hubschrauber-Klasse */
        classVehicle = "B_MRAP_01_hmg_F"; /* Fahrzeug-Klasse */	
        classBox = "Box_IND_Ammo_F"; /* Schubladenklasse */
        markerCrashEnabled = 1; /* Markierung auf der Karte anzeigen */
        markerCrashText = "Heli Crash"; /* Markierungstext */
        minrespectKilledBoat = 50; /* Respekt per Bot */
        maxrespectKilledBoat = 100; /* Respekt per Bot */
        alertCrashEnabled = 1; /* Textalarm aktivieren */
        alertCrashTitle = "Heli Crash?"; /* Crash-Header */
        alertCrashContent = "A group of soldiers have crashed their helicopter. Maybe there is still something to be found there?"; /* Absturzinhalt */ 		
	};
	
	class crashLoot
	{
		/* Liste der Bot-Waffen */
		class weaponBots
		{
			weapon1[] = {"arifle_MX_SW_F","100Rnd_65x39_caseless_mag_Tracer",5}; 
			weapon2[] = {"hgun_PDW2000_F","30Rnd_9x21_Mag",5}; 
			weapon3[] = {"arifle_MXM_F","30Rnd_65x39_caseless_mag",5};
			weapon4[] = {"LMG_Mk200_F","200Rnd_65x39_cased_Box",5};
            weapon5[] = {"LMG_Mk200_F","200Rnd_65x39_cased_Box",5};
            weapon6[] = {"LMG_Mk200_F","200Rnd_65x39_cased_Box",5};				
		};
		
		/* Liste der Kleinwaffen für Bots. {"", "", 0} - bedeutet, dass keine Sekundärwaffen vorhanden sind*/
		class weaponSecondaryBots
		{
			weapon1[] = {"","",0}; 
			weapon2[] = {"CUP_launch_RPG18","CUP_RPG18_M",1}; 
			weapon3[] = {"launch_RPG7_F","RPG7_F",2};
			weapon4[] = {"launch_RPG7_F","RPG7_F",2};
		};
		
		/* Primärwaffe */
		weaponBotsPrimary[] = {"weapon1","weapon2","weapon3","weapon4","weapon5","weapon6"};
		/* Sekundäre Waffe */
		weaponBotsSecondary[] = {"weapon1","weapon2","weapon3","weapon4"};
		/* Optikliste für Bots */
		rifleOpticsBots[] = {"optic_ERCO_khk_F","optic_MRCO","optic_Hamr","optic_ERCO_khk_F","optic_MRCO","optic_Hamr"};
		/* Kleiderliste für Bots */
		uniformBots[] = {"U_OG_Guerilla3_2","U_O_CombatUniform_ocamo","U_O_PilotCoveralls"};
		/* Kugelsichere Westen für Bots */
		vestBots[] = {"V_PlateCarrier_Kerry","V_Press_F","V_PlateCarrierL_CTRG"};
		/* Rucksäcke für Bots werden nur angezeigt, wenn der Parameter _spawnFly = 0 ist. Wenn Sie das Array leer lassen [], gibt es einfach keine Rucksäcke für Bots. */
		backpacksBots[] = {"B_Kitbag_rgr","B_Kitbag_mcamo","B_TacticalPack_mcamo"};
		/* Beliebige Beute in Bots */
		itemBots[] = {"Exile_Item_EMRE","Exile_Item_Surstromming_Cooked","Exile_Item_PowerDrink"};
		/* Bot Rangliste */
		rankBoats[] = {"CORPORAL","SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"};
		/* Zufällige Liste der Botsteifigkeiten. Von 0 bis 1 gebildet, beträgt beispielsweise 50% 0,5 */
		abilityBots[] = {0.5,0.6,0.7,0.8,0.9};
		
		/* Mailbox-Einstellungen */
		/* Waffe in der Box */
		class weaponAmmo
		{
			weapon1[] = {"arifle_MX_SW_F","100Rnd_65x39_caseless_mag_Tracer",3}; 
			weapon2[] = {"hgun_PDW2000_F","30Rnd_9x21_Mag",3}; 
			weapon3[] = {"arifle_MXM_F","30Rnd_65x39_caseless_mag",3};
			weapon4[] = {"LMG_Mk200_F","200Rnd_65x39_cased_Box",3};
		};
		/* Primärwaffe */
		weaponBoxPrimary[] = {"weapon1","weapon2","weapon3","weapon4"};
		/* Liste der Optiken in einer Box */
		rifleOptics[] = {"optic_ERCO_khk_F","optic_MRCO","optic_Hamr","optic_ERCO_khk_F","optic_MRCO","optic_Hamr"};
		/* Liste der Rucksäcke in einer Box */
		backpacks[] = {"B_Kitbag_rgr","B_Kitbag_mcamo","B_TacticalPack_mcamo"};
		/* Beuteliste in einer Kiste */
		itemmy[] = {"muzzle_snds_L","muzzle_snds_H_SW","muzzle_snds_M","muzzle_snds_L","muzzle_snds_M","U_OG_Guerilla3_2","U_O_CombatUniform_ocamo","Exile_Item_EMRE","Exile_Item_Surstromming_Cooked","Exile_Item_PowerDrink","Exile_Item_PlasticBottleCoffee","Exile_Item_Vishpirin","Exile_Item_Matches","Exile_Item_DuctTape","Exile_Item_CanOpener","Exile_Item_Bandage","Exile_Item_InstaDoc"};	
    };
};