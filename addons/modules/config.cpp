#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(moduleAddFullArsenal),
            QGVAR(moduleAmbientAnim),
            QGVAR(moduleAmbientFlyby),
            QGVAR(moduleArsenal),
            QGVAR(moduleAssignZeus),
            QGVAR(moduleAttachEffect),
            QGVAR(moduleAttachFlag),
            QGVAR(moduleAttachTo),
            QGVAR(moduleBindVariable),
            QGVAR(moduleCASGun),
            QGVAR(moduleCASMissile),
            QGVAR(moduleCASGunMissile),
            QGVAR(moduleCASBomb),
            QGVAR(moduleChangeHeight),
            QGVAR(moduleChatter),
            QGVAR(moduleConvoyParameters),
            QGVAR(moduleCreateIED),
            QGVAR(moduleCreateIntel),
            QGVAR(moduleCreateLZ),
            QGVAR(moduleCreateMinefield),
            QGVAR(moduleCreateRP),
            QGVAR(moduleCreateTarget),
            QGVAR(moduleCreateTeleporter),
            QGVAR(moduleCrewToGunner),
            QGVAR(moduleDamageBuildings),
            QGVAR(moduleEarthquake),
            QGVAR(moduleEditableObjects),
            QGVAR(moduleEffectFire),
            QGVAR(moduleEquipWithECM),
            QGVAR(moduleExportMissionSQF),
            QGVAR(moduleExecuteCode),
            QGVAR(moduleFireGL),
            QGVAR(moduleFireLauncher),
            QGVAR(moduleFireMission),
            QGVAR(moduleFlyHeight),
            QGVAR(moduleFunctionsViewer),
            QGVAR(moduleGarrison),
            QGVAR(moduleGlobalAISkill),
            QGVAR(moduleGlobalHint),
            QGVAR(moduleGroupSide),
            QGVAR(moduleHeal),
            QGVAR(moduleHideZeus),
            QGVAR(moduleLightSource),
            QGVAR(moduleMakeInvincible),
            QGVAR(moduleNuke),
            QGVAR(modulePatrolArea),
            QGVAR(moduleThrowSelect),
            QGVAR(moduleThrowBottle),
            QGVAR(moduleRemoveArsenal),
            QGVAR(moduleRotateObject),
            QGVAR(moduleSearchBuilding),
            QGVAR(moduleSetDate),
            QGVAR(moduleShowInConfig),
            QGVAR(moduleSideRelations),
            QGVAR(moduleSimulation),
            QGVAR(moduleSitOnChair),
            QGVAR(moduleSmokePillar),
            QGVAR(moduleSpawnCarrier),
            QGVAR(moduleSpawnDestroyer),
            QGVAR(moduleSpawnReinforcements),
            QGVAR(moduleSuicideBomber),
            QGVAR(moduleTeleportPlayers),
            QGVAR(moduleToggleFlashlights),
            QGVAR(moduleToggleIRLasers),
            QGVAR(moduleToggleLamps),
            QGVAR(moduleTurretOptics),
            QGVAR(moduleUnGarrison),
            QGVAR(moduleVisibility),
            QGVAR(moduleWeather)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"zen_attributes"};
        author = ECSTRING(main,Author);
        authors[] = {"mharis001", "Ampersand"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

PRELOAD_ADDONS;

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "gui.hpp"
