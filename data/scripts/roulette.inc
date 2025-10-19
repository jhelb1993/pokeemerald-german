Roulette_EventScript_Table1::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Table2::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Play::
	special PlayRoulette
	waitstate
	end

Roulette_Text_PlayMinimumWagerIsX::
	.string "Der Einsatz an diesem Tisch ist\n"
	.string "{STR_VAR_1}. Möchtest du spielen?$"

Roulette_Text_NotEnoughCoins::
	.string "Du hast nicht genug MÜNZEn.$"

Roulette_Text_SpecialRateTable::
	.string "Und nun eine Bonusrunde!$"

Roulette_Text_ControlsInstruction::
	.string "Mache den Einsatz mit dem Steuer-\n"
	.string "kreuz und drücke dann den A-Knopf.$"

Roulette_Text_ItsAHit::
	.string "Ein Treffer!$"

Roulette_Text_Jackpot::
	.string "Jackpot!$"

Roulette_Text_NothingDoing::
	.string "Das war nichts!$"

Roulette_Text_YouveWonXCoins::
	.string "Du hast {STR_VAR_1} MÜNZEn gewonnen!$"

Roulette_Text_NoCoinsLeft::
	.string "Nicht mehr genug MÜNZEn übrig…$"

Roulette_Text_KeepPlaying::
	.string "Weiterspielen?$"

Roulette_Text_BoardWillBeCleared::
	.string "Der ROULETTE-Tisch wird abgeräumt.$"

@ Unused
Roulette_Text_YouDontHaveACoinCase::
	.string "You don’t have a COIN CASE.$"

Roulette_Text_CoinCaseIsFull::
	.string "Dein MÜNZKORB ist voll! MÜNZEn können\n"
	.string "gegen Preise eingetauscht werden.$"
