switch (typeOf player) do
{
    case "rhs_msv_machinegunner":
    {
        removeBackpack player;
        player addBackpack "rhs_sidor";
        player addMagazines ["rhs_100Rnd_762x54mmR",3];
    };
    case "rhs_msv_at":
    {
        removeBackpack player;
        player addBackpack "rhs_rpg_empty";
        player addMagazines ["rhs_rpg7_OG7V_mag",2];
        player addMagazines ["rhs_rpg7_PG7VL_mag",2];
    };
    case "rhs_msv_emr_aa":
    {
        removeBackpack player;
        player addBackpack "rhs_rpg_empty";
        player addMagazine "rhs_mag_9k38_rocket";
    };
    default {};
};
