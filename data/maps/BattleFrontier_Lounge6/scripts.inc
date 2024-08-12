BattleFrontier_Lounge6_MapScripts::
	.byte 0

BattleFrontier_Lounge6_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox BattleFrontier_Lounge6_Text_WouldYouLikeToTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge6_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge6_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, BattleFrontier_Lounge6_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt, MSGBOX_DEFAULT
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
	release
	end

BattleFrontier_Lounge6_EventScript_DeclineTrade::
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_TradeCompleted::
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_Text_WouldYouLikeToTrade:
	.string "Mein POKéMON ist ein {STR_VAR_2}.\n"
	.string "Kennst du das?\l"
	.string "Es ist sehr süß und hübsch.\p"
	.string "Diesen kleinen Schatz könnte ich ohne\n"
	.string "Bedenken tauschen.\p"
	.string "Möchtest du mein {STR_VAR_2} haben?\n"
	.string "Dann gib mir ein {STR_VAR_1}.$"

BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt:
	.string "Oh, das ist einfach meganiedlich.\n"
	.string "Vielen Dank! Ich verspreche, es\l"
	.string "wird es gut bei mir haben!\p"
	.string "Oh! Und ich hoffe, du bist auch gut\n"
	.string "zu meinem {STR_VAR_2}!$"

BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon:
	.string "Oh, tut mir Leid!\n"
	.string "Ich tausche nur, wenn ich dafür ein\l"
	.string "{STR_VAR_1} bekomme!$"

BattleFrontier_Lounge6_Text_WellThatsFineToo:
	.string "Oh, du magst nicht tauschen?\n"
	.string "Nun, das ist auch in Ordnung.\l"
	.string "Komm doch bald mal wieder vorbei.$"

BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined:
	.string "Kicher!\n"
	.string "Ein ENECO ist viel süüüßer, als ich\l"
	.string "gedacht habe. Ich bin total glücklich!$"
