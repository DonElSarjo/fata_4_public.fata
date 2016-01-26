_start_pos_3d = _this select 0;
_end_pos_3d = _this select 1;
_multiplicator = _this select 2;

private ["_start_pos_2d", "_end_pos_2d", "_return"];

_start_pos_2d = [(_start_pos_3d select 0), (_start_pos_3d select 1)];
_end_pos_2d = [(_end_pos_3d select 0), (_end_pos_3d select 1)];

_distance_start_end = _start_pos_2d distance _end_pos_2d;
_steps = _distance_start_end/_multiplicator;

_vector =
[
	((_end_pos_2d select 0) - (_start_pos_2d select 0)),
	((_end_pos_2d select 1) - (_start_pos_2d select 1))
];

_n = sqrt((_vector select 0)^2 + (_vector select 1)^2);

_vector_n =
[
	((_vector select 0)/_n),
	((_vector select 1)/_n)
];

for "_i" from 0 to _multiplicator step 1 do

{
	_start_pos_2d =
	[
		((_start_pos_2d select 0) + ((_vector_n select 0)*_steps)),
		((_start_pos_2d select 1) + ((_vector_n select 1)*_steps))

	];
	if (surfaceIsWater _start_pos_2d) exitWith {};
};
_return = surfaceIsWater _start_pos_2d;
_return;
