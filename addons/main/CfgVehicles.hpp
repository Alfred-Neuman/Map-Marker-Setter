class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class TFAR_Radio {
                class ADDON {
                    condition = QUOTE(visibleMap);
                    displayName = "Map Markers";
                    EXCEPTIONS;
                    //icon = ICON_ROOT;

                    class GVAR(saveMapMarkers) {
                        condition = QUOTE(true);
                        displayName = "$STR_disp_int_save";
                        EXCEPTIONS;
                        //icon = ICON_SAVE;
                        insertChildren = QUOTE(_player call FUNC(interactSaveMapMarkers));
                    };

                    class GVAR(loadMapMarkers) {
                        condition = QUOTE(true);
                        displayName = "$STR_disp_me_load";
                        EXCEPTIONS;
                        //icon = ICON_LOAD;
                        insertChildren = QUOTE(_player call FUNC(profileMenusLoad));
                    };

                    class GVAR(deleteProfile) {
                         condition = QUOTE(GETPRVAR(QQGVAR(profileNames),[]) isNotEqualTo []);
                         displayName = "Delete";
                         EXCEPTIONS;
                         //icon = ICON_DELETE;
                         statement = QUOTE(DELETE_PROFILE call FUNC(gui_selectProfile));
                    };

                    class GVAR(newProfile) {
                         condition = QUOTE(true);
                         displayName = "Create/Import";
                         EXCEPTIONS;
                         //icon = ICON_ADD;
                         statement = QUOTE(call FUNC(gui_createProfile));
                    };

                    class GVAR(exportProfile) {
                         condition = QUOTE(GETPRVAR(QQGVAR(profileNames),[]) isNotEqualTo []);
                         displayName = "Export";
                         EXCEPTIONS;
                         //icon = ICON_ADD;
                         statement = QUOTE(EXPORT_PROFILE call FUNC(gui_selectProfile));
                    };
                };
            };
        };
    };
};
