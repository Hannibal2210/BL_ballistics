#define true	1
#define false	0

class CfgPatches {
	class BL_ballistics {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {"A3_Weapons_F", "A3_Weapons_F_beta", "A3_Weapons_F_Acc", "A3_Weapons_F_Beta_Acc", "hlcweapons_aks", "hlcweapons_core", "hlcweapons_falpocalypse", "hlcweapons_g3", "hlcweapons_m14","hlcweapons_g3", "RH_de_cfg", "rhs_c_weapons", "rhsusf_c_weapons", "hlcweapons_core", "ace_ballistics"};
		version = 0.1;
		authorUrl = "http://www.black-legion.co.uk";
	};
};

class CfgMods {
	class BL_ballistics {
		dir = "BL_ballistics";
		name = "Black Legion: Addon";
		picture = "bl_ballistics\BLemblem.paa";
		icon = "bl_ballistics\BLemblem.paa";
		logo = "bl_ballistics\BLemblem.paa";
		hidePicture = "false";
		hideName = "true";
		actionName = "Website";
		action = "http://www.black-legion.co.uk";
	};
};
#include "CfgAmmo.hpp"
#include "West\CfgWeapons.hpp"
#include "West\CfgMagazines.hpp"

