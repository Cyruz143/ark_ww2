class CfgPatches {
    class ark_ww2_acre {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "ark_main",
            "acre_main",
            "WW2_Core_c_IF_ZZZ_LastLoaded_c"
        };
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class Extended_PostInit_EventHandlers {
    class ark_ww2_acre {
        clientinit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_ww2_acre\client_postinit.sqf';";
    };
};