#include "script_component.hpp"
/*
 * Author: Ampersand
 * Zeus module function to make unit throw a frag grenade.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [LOGIC] call zen_modules_fnc_moduleThrowFrag
 *
 * Public: No
 */

params ["_logic"];

private _unit = attachedTo _logic;
deleteVehicle _logic;

if (isNull _unit) exitWith {
    [LSTRING(NoObjectSelected)] call EFUNC(common,showMessage);
};

if !(_unit isKindOf "Man") exitWith {
    [LSTRING(OnlyInfantry)] call EFUNC(common,showMessage);
};

if !(alive _unit) exitWith {
    [LSTRING(OnlyAlive)] call EFUNC(common,showMessage);
};

// Get target position
[_unit, {
	params ["_successful", "_unit", "_mousePosASL"];
	private _magazine = "HandGrenade";
	private _muzzle = "HandGrenadeMuzzle";
	private _firemode = "HandGrenadeMuzzle";
	[_unit, _magazine, _muzzle, _firemode, _mousePosASL] call zen_modules_fnc_projectiles_zeus;
}, [], LSTRING(ModuleThrowFrag)] call EFUNC(common,selectPosition);