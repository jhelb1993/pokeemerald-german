BattleFrontier_Lounge5_MapScripts::
	.byte 0

BattleFrontier_Lounge5_EventScript_NatureGirl::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	special ChoosePartyMon
	waitstate
	lock
	faceplayer
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
	special ShowNatureGirlMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_Gentleman::
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_BlackBelt::
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_LittleBoy::
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
	end

BattleFrontier_Lounge5_Text_NatureGirlGreeting::
	.string "Hihihi! Ich kann die Gedanken\n"
	.string "von POKéMON lesen!\p"
	.string "Bitte! Darf ich deine POKéMON mal\n"
	.string "sehen? Bitte, bitte, bitte, bitte…$"

BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
	.string "Booh!\n"
	.string "Fiesling!$"

BattleFrontier_Lounge5_Text_NatureGirlHardy::
	.string "Hmm…\p"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
	.string "Es wird sogar kämpfen, wenn es\l"
	.string "ganz viele Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlLonely::
	.string "Hmm…\p"
	.string "Dieses hier liebt es, sich anzu-\n"
	.string "schleichen. Tut ihm aber zu viel weh,\l"
	.string "dann wird es sich wehren.$"

BattleFrontier_Lounge5_Text_NatureGirlBrave::
	.string "Hmm…\p"
	.string "Dieses hier sagt, dass es Kämpfe mag.\n"
	.string "Tut es sich im Kampf sehr weh, wird\l"
	.string "es sich um sich selbst kümmern.$"

BattleFrontier_Lounge5_Text_NatureGirlAdamant::
	.string "Hmm…\p"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
	.string "Es wird sogar kämpfen, wenn es\l"
	.string "ganz viele Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlNaughty::
	.string "Hmm…\p"
	.string "Dieses hier passt auf sich selbst auf!\n"
	.string "Wenn es genug Autschies hat, dann wird\l"
	.string "es sich auch wehren.$"

BattleFrontier_Lounge5_Text_NatureGirlBold::
	.string "Hmm…\p"
	.string "Dieses hier liebt es, heimtückisch\n"
	.string "zu sein. Tut es sich im Kampf sehr\l"
	.string "weh, kümmert es sich um sich selbst.$"

BattleFrontier_Lounge5_Text_NatureGirlDocileNaiveQuietQuirky::
	.string "Hmm…\p"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
	.string "Es wird sogar kämpfen, wenn es\l"
	.string "ganz viele Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlRelaxed::
	.string "Hmm…\p"
	.string "Dieses hier liebt es, sich anzu-\n"
	.string "schleichen. Tut ihm aber zu viel weh,\l"
	.string "dann wird es sich wehren.$"

BattleFrontier_Lounge5_Text_NatureGirlImpish::
	.string "Hmm…\p"
	.string "Dieses hier sagt, dass es Kämpfe mag.\n"
	.string "Tut es sich im Kampf sehr weh, wird\l"
	.string "es sich um sich selbst kümmern.$"

BattleFrontier_Lounge5_Text_NatureGirlLax::
	.string "Hmm…\p"
	.string "Dieses hier liebt es, heimtückisch\n"
	.string "zu sein. Auch wenn es ganz viele\l"
	.string "Autschies hat, wird es das tun.$"

BattleFrontier_Lounge5_Text_NatureGirlTimid::
	.string "Hmm…\p"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
	.string "Aber wenn es genug Autschies hat, wird\l"
	.string "es heimtückisch.$"

BattleFrontier_Lounge5_Text_NatureGirlHasty::
	.string "Hmm…\p"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
	.string "Es wird sogar kämpfen, wenn es\l"
	.string "ganz viele Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlSerious::
	.string "Hmm…\p"
	.string "Dieses hier liebt es, sich anzu-\n"
	.string "schleichen. Auch wenn es ganz viele\l"
	.string "Autschies hat, wird es das tun.$"

BattleFrontier_Lounge5_Text_NatureGirlJolly::
	.string "Hmm…\p"
	.string "Dieses hier liebt es, heimtückisch\n"
	.string "zu sein. Tut es sich im Kampf sehr\l"
	.string "weh, kümmert es sich um sich selbst.$"

BattleFrontier_Lounge5_Text_NatureGirlModest::
	.string "Hmm…\p"
	.string "Dieses kümmert sich um sich selbst.\n"
	.string "Egal, ob es Autschies hat oder nicht.$"

BattleFrontier_Lounge5_Text_NatureGirlMild::
	.string "Hmm…\p"
	.string "Dieses passt auf sich selbst auf. Hat\n"
	.string "es genug Autschies, wird es\l"
	.string "heimtückisch.$"

BattleFrontier_Lounge5_Text_NatureGirlBashful::
	.string "Hmm…\p"
	.string "Dieses kümmert sich um sich selbst.\n"
	.string "Auch wenn es ganz viele Autschies hat.$"

BattleFrontier_Lounge5_Text_NatureGirlRash::
	.string "Hmm…\p"
	.string "Dieses hier liebt es, heimtückisch\n"
	.string "zu sein. Auch wenn es ganz viele\l"
	.string "Autschies hat, wird es das tun.$"

BattleFrontier_Lounge5_Text_NatureGirlCalm::
	.string "Hmm…\p"
	.string "Dieses kümmert sich um sich selbst.\n"
	.string "Auch wenn es ganz viele Autschies hat.$"

BattleFrontier_Lounge5_Text_NatureGirlGentle::
	.string "Hmm…\p"
	.string "Dieses kümmert sich um sich selbst.\n"
	.string "Aber wenn es genug Autschies hat, wird\l"
	.string "es sich wehren!$"

BattleFrontier_Lounge5_Text_NatureGirlSassy::
	.string "Hmm…\p"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
	.string "Aber wenn es genug Autschies hat, wird\l"
	.string "es heimtückisch.$"

BattleFrontier_Lounge5_Text_NatureGirlCareful::
	.string "Hmm…\p"
	.string "Dieses passt auf sich selbst auf. Hat\n"
	.string "es genug Autschies, wird es\l"
	.string "heimtückisch.$"

BattleFrontier_Lounge5_Text_NatureGirlEgg::
	.string "Du bist komisch! Das ist ein EI. Das\n"
	.string "schläft doch! Wie soll ich damit reden?!$"

BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
	.string "Wie charmant!\n"
	.string "Diese kleine Dame hier behauptet, sie\l"
	.string "könne die POKéMON verstehen!$"

BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
	.string "Ich habe das Gefühl, dies kleine\n"
	.string "Mädchen sagt profunde Dinge!$"

BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
	.string "Ich weiß was! Ich weiß was!\p"
	.string "Das kleine Mädchen spielt ganz oft\n"
	.string "im roten Haus!$"

