private "_units";

_unit = _this select 0;

switch (typeOf _unit) do
{
    case "rhs_msv_machinegunner":
    {
        removeBackpack _unit;
        _unit addBackpack "rhs_sidor";
        _unit addBackpackCargo ["rhs_100Rnd_762x54mmR",3];
    };
    case "rhs_msv_at":
    {
        removeBackpack _unit;
        _unit addBackpack "rhs_rpg_empty";
        _unit addBackpackCargo ["rhs_rpg7_OG7V_mag",2];
        _unit addBackpackCargo ["rhs_rpg7_PG7VL_mag",2];
    };
};
