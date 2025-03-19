#include "script_component.hpp"

GVAR(ACEClipboardLoaded) = if (getNumber (configFile >> "CfgPatches" >> "ace_main" >> "version") >= 3.18) then {
    [0, 2] select (("ace" callExtension ["version", []]) params [["_versionEx", "", [""]], ["_returnCode", -1, [-1]]])
} else {
    parseNumber (isClass (configFile >> "ACE_Extensions" >> "ace_clipboard"))
};
