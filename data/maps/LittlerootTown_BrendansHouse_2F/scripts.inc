# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

LittlerootTown_BrendansHouse_2F_CheatConsole::
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_2F_CheatConsole_Text_0, MSGBOX_YESNO
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BrendansHouse_2F_CheatConsole_2
LittlerootTown_BrendansHouse_2F_CheatConsole_1:
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

LittlerootTown_BrendansHouse_2F_CheatConsole_2:
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_2F_CheatConsole_Text_1, MSGBOX_YESNO
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BrendansHouse_2F_CheatConsole_5
LittlerootTown_BrendansHouse_2F_CheatConsole_4:
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_2F_CheatConsole_Text_2, MSGBOX_YESNO
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BrendansHouse_2F_CheatConsole_8
LittlerootTown_BrendansHouse_2F_CheatConsole_7:
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_2F_CheatConsole_Text_3, MSGBOX_YESNO
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BrendansHouse_2F_CheatConsole_10
	goto LittlerootTown_BrendansHouse_2F_CheatConsole_1

LittlerootTown_BrendansHouse_2F_CheatConsole_5:
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
	goto LittlerootTown_BrendansHouse_2F_CheatConsole_4

LittlerootTown_BrendansHouse_2F_CheatConsole_8:
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_MASTER_BALL, 999
	goto LittlerootTown_BrendansHouse_2F_CheatConsole_7

LittlerootTown_BrendansHouse_2F_CheatConsole_10:
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 999
	goto LittlerootTown_BrendansHouse_2F_CheatConsole_1


LittlerootTown_BrendansHouse_2F_CheatConsole_Text_0:
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you wish to access cheat items?$"

LittlerootTown_BrendansHouse_2F_CheatConsole_Text_1:
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Receive Rare Candies?$"

LittlerootTown_BrendansHouse_2F_CheatConsole_Text_2:
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Receive Master Balls?$"

LittlerootTown_BrendansHouse_2F_CheatConsole_Text_3:
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Receive (gold) Nuggets?$"
