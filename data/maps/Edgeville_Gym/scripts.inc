Edgeville_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Edgeville_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Edgeville_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Edgeville_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

Edgeville_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
	setrespawn HEAL_LOCATION_EDGEVILLE
	call EDGEVILLE_GYM_METATILES
	call EDGEVILLE_GYM_STATE
	return


EDGEVILLE_GYM_METATILES::
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 5
	goto_if_ge EDGEVILLE_GYM_METATILES_2
EDGEVILLE_GYM_METATILES_1:
	return

EDGEVILLE_GYM_METATILES_2:
	setmetatile 1, 15, METATILE_PokeScape_Sewers_GATE_OPEN_UP, 0
	setmetatile 1, 16, METATILE_PokeScape_Sewers_GATE_OPEN_DOWN, 1
	setmetatile 2, 15, METATILE_PokeScape_Sewers_SEWER_FLOOR_ENCOUNTERS, 0
	setmetatile 2, 16, METATILE_PokeScape_Sewers_SEWER_FLOOR_ENCOUNTERS, 0
	goto EDGEVILLE_GYM_METATILES_1


EDGEVILLE_GYM_STATE::
	goto_if_unset FLAG_BADGE05_GET, EDGEVILLE_GYM_STATE_1
	return

EDGEVILLE_GYM_STATE_1:
	setflag FLAG_ITEM_EDGEVILLE_2
	setflag FLAG_BRASS_KEY
	setflag FLAG_TEMP_B
	removeobject 5
	removeobject 7
	removeobject 10
	removeobject 11
	removeobject 13
	return

