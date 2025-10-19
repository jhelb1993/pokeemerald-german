const struct BattleFrontierTrainer gBattleFrontierTrainers[FRONTIER_TRAINERS_COUNT] =
{
    [FRONTIER_TRAINER_BRADY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("RICO"),
        .speechBefore = {EC_WORD_I, EC_WORD_WON_T, EC_WORD_LOSE, EC_WORD_EXCL, EC_WORD_NEVER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I_AM, EC_WORD_TOUGH, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_BUT, EC_WORD_WHY, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Brady
    },
    [FRONTIER_TRAINER_CONNER] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("ROLAND"),
        .speechBefore = {EC_WORD_LOSE, EC_WORD_DOESN_T, EC_WORD_MYSELF, EC_WORD_NOTHING, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_A, EC_WORD_VICTORY, EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_AWESOME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_DARN, EC_WORD_ELLIPSIS, EC_WORD_LOSE, EC_WORD_DOESN_T, EC_WORD_MYSELF, EC_WORD_WHAT},
        .monSet = gBattleFrontierTrainerMons_Conner
    },
    [FRONTIER_TRAINER_BRADLEY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("RENZO"),
        .speechBefore = {EC_WORD_HEY_THERE, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_TODAY, EC_WORD_MY, EC_WORD_FOE},
        .speechWin = {EC_WORD_HAHAHA, EC_WORD_EXCL, EC_WORD_MEET_YOU, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_MORNING, EC_WORD_FIGHT, EC_WORD_WE, EC_WORD_AGREE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Bradley
    },
    [FRONTIER_TRAINER_CYBIL] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("SIBILLE"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_DON_T, EC_WORD_VERY, EC_WORD_SCARY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IS_IT_QUES, EC_WORD_SAD, EC_WORD_BABE, EC_WORD_FIGHT, EC_WORD_TO, EC_WORD_WORKS},
        .speechLose = {EC_WORD_THAT, EC_WORD_HAS, EC_WORD_DON_T, EC_WORD_EVENT, EC_WORD_CAN, EC_WORD_QUES_EXCL},
        .monSet = gBattleFrontierTrainerMons_Cybil
    },
    [FRONTIER_TRAINER_RODETTE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("ROLANDA"),
        .speechBefore = {EC_WORD_OH, EC_WORD_THAT, EC_WORD_IS, EC_WORD_SO, EC_WORD_EXCITING, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_TOUGHNESS, EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_OH_DEAR, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_SIMPLE, EC_WORD_DON_T, EC_WORD_ALL_RIGHT},
        .monSet = gBattleFrontierTrainerMons_Rodette
    },
    [FRONTIER_TRAINER_PEGGY] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("GRETE"),
        .speechBefore = {EC_WORD_DO, EC_WORD_BABE, EC_WORD_READY, EC_WORD_FOR, EC_WORD_A, EC_WORD_DESTROYED},
        .speechWin = {EC_WORD_HAHAHA, EC_WORD_EXCL_EXCL, EC_WORD_ONCE, EC_WORD_LOLLING, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_NOW, EC_WORD_SAD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Peggy
    },
    [FRONTIER_TRAINER_KEITH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("KARL"),
        .speechBefore = {EC_WORD_I, EC_WORD_LEARN, EC_WORD_DON_T, EC_WORD_ONLY, EC_WORD_VERY, EC_WORD_A_LOT},
        .speechWin = {EC_WORD_MAYBE, EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_MORE, EC_WORD_STUDY, EC_WORD_QUES},
        .speechLose = {EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_MORE, EC_WORD_STUDY, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Keith
    },
    [FRONTIER_TRAINER_GRAYSON] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("RUPERT"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_FIGHTING, EC_WORD_ISN_T, EC_WORD_CHILD_S_PLAY, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_DONE, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WE, EC_WORD_BEEN, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_HOW_DO, EC_WORD_TOYS},
        .monSet = gBattleFrontierTrainerMons_Grayson
    },
    [FRONTIER_TRAINER_GLENN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GERRIT"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_COOL, EC_WORD_IF, EC_WORD_I, EC_WORD_WIN, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_COOL, EC_WORD_EXCL, EC_WORD_YES, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_COOL},
        .speechLose = {EC_WORD_I, EC_WORD_WON_T, EC_WORD_COOL, EC_WORD_HIS, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Glenn
    },
    [FRONTIER_TRAINER_LILIANA] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("REGINA"),
        .speechBefore = {EC_WORD_NEVER, EC_WORD_GIVE_UP, EC_WORD_UNTIL, EC_WORD_I, EC_WORD_WIN, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SURRENDER, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_IN, EC_WORD_MYSELF, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_IT, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_GIVE_UP},
        .monSet = gBattleFrontierTrainerMons_Liliana
    },
    [FRONTIER_TRAINER_ELISE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("RENATE"),
        .speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_STRATEGY, EC_WORD_IS, EC_WORD_FROM, EC_WORD_FATHER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_WIN, EC_WORD_FATHER, EC_WORD_EXCL, EC_WORD_I_VE, EC_WORD_WON},
        .speechLose = {EC_WORD_EXCUSE_ME, EC_WORD_FATHER, EC_WORD_I, EC_WORD_HAVE, EC_WORD_LOST, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Elise
    },
    [FRONTIER_TRAINER_ZOEY] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ROMANA"),
        .speechBefore = {EC_WORD_BATTLE, EC_WORD_PLEASE, EC_WORD_VERY, EC_WORD_DECIDED, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_QUITE, EC_WORD_THANK_YOU, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_QUITE, EC_WORD_VERY, EC_WORD_DECIDED, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Zoey
    },
    [FRONTIER_TRAINER_MANUEL] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("ROGER"),
        .speechBefore = {EC_WORD_I, EC_WORD_AND, EC_WORD_LOSE, EC_WORD_QUES, EC_WORD_IT_S, EC_WORD_PREPOSTEROUS},
        .speechWin = {EC_WORD_NATURAL, EC_WORD_HAVE, EC_WORD_I, EC_WORD_WON, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_I, EC_WORD_HAVE, EC_WORD_LOST, EC_WORD_MOTHER},
        .monSet = gBattleFrontierTrainerMons_Manuel
    },
    [FRONTIER_TRAINER_RUSS] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("ROMAN"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_YEAH_YEAH, EC_WORD_YEAH_YEAH, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_DO, EC_WORD_AN, EC_WORD_POKEMON, EC_WORD_PARTY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_HOW_DO, EC_WORD_HAS, EC_WORD_THAT, EC_WORD_EVENT, EC_WORD_CAN, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Russ
    },
    [FRONTIER_TRAINER_DUSTIN] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("RUBEN"),
        .speechBefore = {EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_SO, EC_WORD_COOL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_TOO, EC_WORD_COOL, EC_WORD_IF, EC_WORD_LET_ME_WIN, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IF_I_LOSE, EC_WORD_IS, EC_WORD_THAT, EC_WORD_TOO, EC_WORD_COOL, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Dustin
    },
    [FRONTIER_TRAINER_TINA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("TINA"),
        .speechBefore = {EC_WORD_IF_I_WIN, EC_WORD_GIVES, EC_WORD_IT, EC_WORD_OF, EC_MOVE2(SWEET_KISS), EC_EMPTY_WORD},
        .speechWin = {EC_WORD_HERE, EC_WORD_IS, EC_WORD_SON, EC_MOVE2(SWEET_KISS), EC_WORD_FROM, EC_POKEMON_NATIONAL(JYNX)},
        .speechLose = {EC_WORD_MAYBE, EC_WORD_BETTER, EC_WORD_FAST, EC_WORD_OF, EC_MOVE2(MEGA_KICK), EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Tina
    },
    [FRONTIER_TRAINER_GILLIAN1] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("GESA"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_GOURMET, EC_WORD_THING, EC_WORD_IS, EC_WORD_FROM, EC_WORD_YESTERDAY},
        .speechWin = {EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_ALWAYS, EC_WORD_IN, EC_WORD_FASHION, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_LOSE, EC_WORD_DISAPPOINT, EC_WORD_ME, EC_WORD_DON_T, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Gillian
    },
    [FRONTIER_TRAINER_ZOE] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ZITA"),
        .speechBefore = {EC_WORD_I, EC_WORD_WORRY, EC_WORD_ME, EC_WORD_DON_T, EC_WORD_DASH, EC_WORD_NEVER},
        .speechWin = {EC_WORD_THAT, EC_WORD_LIFE, EC_WORD_IS, EC_WORD_ALL_RIGHT, EC_WORD_TO, EC_WORD_MYSELF},
        .speechLose = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_SKILL, EC_WORD_DOESN_T, EC_WORD_MYSELF, EC_WORD_WORRY},
        .monSet = gBattleFrontierTrainerMons_Zoe
    },
    [FRONTIER_TRAINER_CHEN] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("OLAF"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_TODAY, EC_WORD_ABSOLUTELY, EC_WORD_POWER, EC_WORD_FROM, EC_WORD_ROCK},
        .speechWin = {EC_WORD_I_VE, EC_WORD_ABSOLUTELY, EC_WORD_POWER, EC_WORD_FOR, EC_WORD_MORE, EC_WORD_BATTLE},
        .speechLose = {EC_WORD_I_VE, EC_MOVE(FOCUS_ENERGY), EC_WORD_AND, EC_WORD_TOUGHNESS, EC_WORD_LOST, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Chen
    },
    [FRONTIER_TRAINER_AL] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("ADAM"),
        .speechBefore = {EC_WORD_SON, EC_WORD_LOOK, EC_WORD_SAYS, EC_WORD_YOU_RE, EC_WORD_CORRECT, EC_WORD_TOUGH},
        .speechWin = {EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_CORRECT, EC_WORD_TOUGH, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YES, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_CORRECT, EC_WORD_TOUGH, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Al
    },
    [FRONTIER_TRAINER_MITCH] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("MALTE"),
        .speechBefore = {EC_WORD_MOTHER, EC_MOVE(NATURE_POWER), EC_WORD_IS, EC_WORD_MY, EC_WORD_ALLY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_THOSE_WERE, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_QUES},
        .speechLose = {EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_WITH, EC_WORD_MOTHER, EC_MOVE(NATURE_POWER), EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Mitch
    },
    [FRONTIER_TRAINER_ANNE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ANNINA"),
        .speechBefore = {EC_WORD_GO, EC_WORD_EXCL, EC_WORD_LET_S, EC_WORD_FIGHT, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_HAPPINESS, EC_WORD_IS, EC_WORD_OVERWHELMING, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_MY, EC_WORD_HAPPINESS, EC_WORD_IS, EC_WORD_DESTROYED, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Anne
    },
    [FRONTIER_TRAINER_ALIZE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ELENA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_CUTE, EC_WORD_AND, EC_WORD_AWFULLY, EC_WORD_TOUGH, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YES, EC_WORD_I_AM, EC_WORD_CUTE, EC_WORD_AND, EC_WORD_AWFULLY, EC_WORD_TOUGH},
        .speechLose = {EC_WORD_I_AM, EC_WORD_WEAK, EC_WORD_ELLIPSIS, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_CUTE},
        .monSet = gBattleFrontierTrainerMons_Alize
    },
    [FRONTIER_TRAINER_LAUREN] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("LINA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_OLD, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_TOO, EC_WORD_ALL_RIGHT},
        .speechWin = {EC_WORD_I, EC_WORD_SAID, EC_WORD_YES, EC_WORD_I_AM, EC_WORD_OLD, EC_WORD_ALL_RIGHT},
        .speechLose = {EC_WORD_THAT, EC_WORD_WAS, EC_WORD_A, EC_WORD_DREAM, EC_WORD_WEIRD, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Lauren
    },
    [FRONTIER_TRAINER_KIPP] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("KIM"),
        .speechBefore = {EC_WORD_IF_I_WIN, EC_WORD_DO, EC_WORD_I, EC_WORD_OUT, EC_MOVE2(SURF), EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YEAH, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_A, EC_MOVE2(SURF), EC_WORD_EXCL},
        .speechLose = {EC_WORD_OH, EC_WORD_NO, EC_WORD_A, EC_MOVE(WHIRLPOOL), EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Kipp
    },
    [FRONTIER_TRAINER_JASON] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JÖRG"),
        .speechBefore = {EC_WORD_TEACHES, EC_WORD_ME, EC_WORD_AN, EC_WORD_STRATEGY, EC_WORD_ALL_RIGHT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_YOURS, EC_WORD_STRATEGY, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WOW, EC_WORD_EXCL, EC_WORD_WHAT, EC_WORD_FOR, EC_WORD_AN, EC_WORD_STRATEGY},
        .monSet = gBattleFrontierTrainerMons_Jason
    },
    [FRONTIER_TRAINER_JOHN] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("URS"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_NEW, EC_WORD_TRAINER, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_NEW, EC_WORD_BUT, EC_WORD_I_VE, EC_WORD_WON, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAN, EC_WORD_NEW, EC_WORD_IS, EC_WORD_LOSE, EC_WORD_OH_KAY, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_John
    },
    [FRONTIER_TRAINER_ANN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ANNE"),
        .speechBefore = {EC_WORD_THAT, EC_WORD_IS, EC_WORD_YES, EC_WORD_EVERY, EC_WORD_SO, EC_WORD_EXCITING},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_HAPPY, EC_WORD_I, EC_WORD_WANT, EC_WORD_MEET},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_SAD, EC_WORD_I, EC_WORD_WANT, EC_WORD_MEET},
        .monSet = gBattleFrontierTrainerMons_Ann
    },
    [FRONTIER_TRAINER_EILEEN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("EIKA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_QUITE, EC_WORD_A, EC_WORD_ADULT, EC_WORD_OK_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SO, EC_WORD_IS, EC_WORD_IT, EC_WORD_ALSO, EC_WORD_THAN, EC_WORD_ADULT},
        .speechLose = {EC_WORD_A, EC_WORD_ADULT, EC_WORD_HAS, EC_WORD_VERSUS, EC_WORD_BABE, EC_WORD_LOST},
        .monSet = gBattleFrontierTrainerMons_Eileen
    },
    [FRONTIER_TRAINER_CARLIE] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ILSA"),
        .speechBefore = {EC_WORD_MY, EC_WORD_SUMMER, EC_WORD_VACATION, EC_WORD_IS, EC_WORD_FOR, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_MY, EC_WORD_SUMMER, EC_WORD_VACATION, EC_WORD_BECOMES, EC_WORD_AWESOME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_SO, EC_WORD_BECOMES, EC_WORD_THAT, EC_WORD_NOTHING, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Carlie
    },
    [FRONTIER_TRAINER_GORDON] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("GEORG"),
        .speechBefore = {EC_WORD_THE, EC_WORD_VICTORY, EC_WORD_BECOMES, EC_WORD_TO, EC_WORD_MYSELF, EC_WORD_COME},
        .speechWin = {EC_WORD_OH_YEAH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_I_VE, EC_WORD_QUITE, EC_WORD_WON},
        .speechLose = {EC_WORD_IT, EC_WORD_CAME, EC_WORD_SOMETHING, EC_WORD_ELSE, EC_WORD_TO_ME, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Gordon
    },
    [FRONTIER_TRAINER_AYDEN] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("RÜDIGER"),
        .speechBefore = {EC_WORD_COME_ON, EC_EMPTY_WORD, EC_WORD_THE, EC_WORD_FIGHTING, EC_WORD_BECOMES, EC_WORD_HOT},
        .speechWin = {EC_WORD_NOW, EC_WORD_NEED, EC_WORD_I, EC_WORD_WATER, EC_WORD_BEAUTIFUL, EC_WORD_COLD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_ICE, EC_WORD_COLD, EC_WORD_TO, EC_WORD_MYSELF},
        .monSet = gBattleFrontierTrainerMons_Ayden
    },
    [FRONTIER_TRAINER_MARCO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("RUDOLF"),
        .speechBefore = {EC_WORD_I_AM, EC_MOVE2(SURF), EC_WORD_TOO, EC_WORD_IN, EC_WORD_WINTER, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_NOW, EC_WORD_A, EC_MOVE2(SURF), EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAN, EC_MOVE2(SURF), EC_WORD_NEED, EC_WORD_I, EC_WORD_NOW, EC_MOVE2(BEAT_UP)},
        .monSet = gBattleFrontierTrainerMons_Marco
    },
    [FRONTIER_TRAINER_CIERRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("ROSWITA"),
        .speechBefore = {EC_WORD_MY, EC_WORD_SWIFT_SWIM, EC_WORD_IS, EC_WORD_FULL, EC_WORD_SYNCHRONIZE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_TOO, EC_WORD_FULL, EC_WORD_SYNCHRONIZE},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_SYNCHRONIZE, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Cierra
    },
    [FRONTIER_TRAINER_MARCY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("MAJA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_HOW_DO, EC_WORD_KNOCKOUT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_DO, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_THAT, EC_WORD_KNOCKOUT},
        .speechLose = {EC_WORD_I, EC_WORD_DO, EC_WORD_MYSELF, EC_WORD_THAT, EC_WORD_EASY, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Marcy
    },
    [FRONTIER_TRAINER_KATHY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("KATJA"),
        .speechBefore = {EC_WORD_TODAY, EC_WORD_HAVE, EC_WORD_I, EC_WORD_ALWAYS, EC_WORD_WON, EC_WORD_EXCL},
        .speechWin = {EC_WORD_IS_IT_QUES, EC_WORD_SO, EC_WORD_GREAT, EC_WORD_TO, EC_WORD_WINS, EC_WORD_EXCL},
        .speechLose = {EC_WORD_EH_QUES, EC_EMPTY_WORD, EC_WORD_I_VE, EC_WORD_DON_T, EC_WORD_WON, EC_WORD_QUES_EXCL},
        .monSet = gBattleFrontierTrainerMons_Kathy
    },
    [FRONTIER_TRAINER_PEYTON] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("RUFUS"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_DISAPPOINTS, EC_WORD_ME, EC_WORD_NEVER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_WHEN_I_WIN, EC_WORD_WITH, EC_WORD_THEY, EC_WORD_TOGETHER},
        .speechLose = {EC_WORD_IF_I_LOSE, EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_SHE, EC_WORD_MORE, EC_WORD_ADORE},
        .monSet = gBattleFrontierTrainerMons_Peyton
    },
    [FRONTIER_TRAINER_JULIAN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("JULIAN"),
        .speechBefore = {EC_WORD_BEING, EC_WORD_POKEMON, EC_WORD_MUST_BE, EC_WORD_MAN, EC_WORD_ADORE, EC_WORD_ISN_T_IT_QUES},
        .speechWin = {EC_WORD_THAT, EC_WORD_IS, EC_WORD_QUITE, EC_WORD_NONE, EC_WORD_QUESTION, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YES, EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_ADORE},
        .monSet = gBattleFrontierTrainerMons_Julian
    },
    [FRONTIER_TRAINER_QUINN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("RALF"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_A, EC_WORD_DREAM, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_DREAM, EC_WORD_IS, EC_WORD_WONDER, EC_WORD_BEAUTIFUL, EC_WORD_EXCL},
        .speechLose = {EC_WORD_MY, EC_WORD_DREAM, EC_WORD_IS, EC_WORD_A, EC_MOVE(NIGHTMARE), EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Quinn
    },
    [FRONTIER_TRAINER_HAYLEE] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("JULIA"),
        .speechBefore = {EC_WORD_WHAT, EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_ONLY, EC_WORD_FEELING, EC_WORD_QUES},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_JOY, EC_WORD_IS, EC_WORD_OVERWHELMING, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_NOW, EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_SAD, EC_WORD_HIS, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Haylee
    },
    [FRONTIER_TRAINER_AMANDA] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("AMANDA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_OFF, EC_WORD_THE, EC_WORD_TRAINER, EC_WORD_FAMILY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THE, EC_WORD_VICTORY, EC_WORD_TODAY, EC_WORD_IS, EC_WORD_AN, EC_WORD_TREASURE},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_NOW, EC_WORD_GO_HOME, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Amanda
    },
    [FRONTIER_TRAINER_STACY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("SELINA"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_POKEMON, EC_WORD_GOT, EC_WORD_OF, EC_WORD_CUTE_CHARM, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IS, EC_WORD_THAT, EC_WORD_NOW, EC_WORD_FINALLY, EC_WORD_NATURALLY, EC_WORD_QUES},
        .speechLose = {EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_DON_T, EC_WORD_ADORE},
        .monSet = gBattleFrontierTrainerMons_Stacy
    },
    [FRONTIER_TRAINER_RAFAEL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("SANDRO"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_EXCL, EC_WORD_MAN, EC_WORD_MUST_BE, EC_WORD_VITAL_SPIRIT, EC_WORD_SHOW},
        .speechWin = {EC_WORD_AS, EC_WORD_EXCL, EC_WORD_THAT, EC_WORD_IS, EC_WORD_TRULY, EC_WORD_VITAL_SPIRIT},
        .speechLose = {EC_WORD_VITAL_SPIRIT, EC_WORD_WAS, EC_WORD_THAT, EC_WORD_DON_T, EC_WORD_QUITE, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Rafael
    },
    [FRONTIER_TRAINER_OLIVER] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OLIVER"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_TRULY, EC_WORD_A, EC_EMPTY_WORD, EC_WORD_GENIUS, EC_WORD_EXCL},
        .speechWin = {EC_WORD_SO, EC_WORD_DOESN_T, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_OF, EC_WORD_FIGHTING},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_TRULY, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Oliver
    },
    [FRONTIER_TRAINER_PAYTON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("SAM"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_THOSE_ARE, EC_WORD_THAN, EC_WORD_KID, EC_WORD_TRAINS, EC_WORD_EXCL},
        .speechWin = {EC_WORD_TRAIN, EC_WORD_IS, EC_WORD_GREAT, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_LOSE, EC_WORD_DOESN_T, EC_WORD_A, EC_MOVE2(SOFT_BOILED), EC_WORD_OFF, EC_WORD_MYSELF},
        .monSet = gBattleFrontierTrainerMons_Payton
    },
    [FRONTIER_TRAINER_PAMELA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("PIA"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_POKEMON, EC_WORD_ADORE, EC_WORD_OF, EC_WORD_KIND, EC_WORD_TRAINER},
        .speechWin = {EC_WORD_YOU_VE, EC_WORD_KIND, EC_WORD_LOST, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_KIND, EC_WORD_AND, EC_WORD_TOO, EC_WORD_TOUGH, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Pamela
    },
    [FRONTIER_TRAINER_ELIZA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("SANDRA"),
        .speechBefore = {EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_POKEMON, EC_WORD_ADORE, EC_WORD_HOW_DO, EC_WORD_CHILDREN},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_HAPPY, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_WORD_POKEMON},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_SAD, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_WORD_POKEMON},
        .monSet = gBattleFrontierTrainerMons_Eliza
    },
    [FRONTIER_TRAINER_MARISA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("SASKIA"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_PROMISE, EC_WORD_SERIOUSLY, EC_WORD_TO, EC_WORD_FIGHT},
        .speechWin = {EC_WORD_GIVE_ME, EC_WORD_THAT, EC_WORD_PROMISE, EC_WORD_BETTER, EC_WORD_TO, EC_WORD_FIGHT},
        .speechLose = {EC_WORD_GIVE_ME, EC_WORD_THAT, EC_WORD_PROMISE, EC_WORD_OUT, EC_WORD_OTHER, EC_WORD_BATTLE},
        .monSet = gBattleFrontierTrainerMons_Marisa
    },
    [FRONTIER_TRAINER_LEWIS] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LUDWIG"),
        .speechBefore = {EC_WORD_BUG, EC_WORD_THOSE, EC_WORD_SCARY, EC_WORD_QUES, EC_WORD_HAHAHA, EC_WORD_EXCL},
        .speechWin = {EC_WORD_LOOKS, EC_WORD_A, EC_WORD_BUG, EC_WORD_EXCL, EC_WORD_HOW_DO, EC_WORD_SCARY},
        .speechLose = {EC_WORD_OH, EC_WORD_BUG, EC_WORD_THOSE, EC_WORD_DON_T, EC_WORD_SCARY, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Lewis
    },
    [FRONTIER_TRAINER_YOSHI] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("JOST"),
        .speechBefore = {EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_YES, EC_WORD_SO, EC_WORD_LOVEY_DOVEY},
        .speechWin = {EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_SIMPLE, EC_WORD_GREAT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_DON_T, EC_WORD_UNDERSTAND},
        .monSet = gBattleFrontierTrainerMons_Yoshi
    },
    [FRONTIER_TRAINER_DESTIN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("DRUDILO"),
        .speechBefore = {EC_WORD_HERE, EC_WORD_IS, EC_WORD_IT, EC_WORD_A_LOT, EC_WORD_HOT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IS_IT_QUES, EC_WORD_SOON, EC_WORD_TIME, EC_WORD_FOR, EC_WORD_OF, EC_MOVE(OVERHEAT)},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_GIVE_ME, EC_WORD_MYSELF, EC_WORD_WATER, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Destin
    },
    [FRONTIER_TRAINER_KEON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("SANDOR"),
        .speechBefore = {EC_WORD_EXCUSE_ME, EC_WORD_BUT, EC_WORD_HERE, EC_WORD_COME_ON, EC_WORD_I, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_EXCUSE_ME, EC_WORD_PLEASE, EC_WORD_WHO_WAS, EC_WORD_SUPER, EC_WORD_POWER, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_EXCUSE_ME, EC_WORD_ME, EC_WORD_PLEASE, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Keon
    },
    [FRONTIER_TRAINER_STUART] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("SIMON"),
        .speechBefore = {EC_WORD_OUR, EC_WORD_FIGHTING, EC_WORD_BECOMES, EC_WORD_QUITE, EC_WORD_HOT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_MASTER, EC_WORD_COOL, EC_WORD_EXCL, EC_WORD_YEAH, EC_WORD_EXCL},
        .speechLose = {EC_WORD_AWW, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_QUITE, EC_WORD_COOL},
        .monSet = gBattleFrontierTrainerMons_Stuart
    },
    [FRONTIER_TRAINER_NESTOR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("SÖNCKE"),
        .speechBefore = {EC_WORD_AN, EC_WORD_MOVE, EC_WORD_MUST_BE, EC_WORD_SMOOTH, EC_WORD_HIS, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOURS, EC_WORD_MOVE, EC_WORD_WAS, EC_WORD_DON_T, EC_WORD_SMOOTH, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOURS, EC_WORD_MOVE, EC_WORD_WAS, EC_WORD_SUPER, EC_WORD_SMOOTH, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Nestor
    },
    [FRONTIER_TRAINER_DERRICK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("STEFAN"),
        .speechBefore = {EC_WORD_CAN_T, EC_WORD_YOU, EC_MOVE2(MEDITATE), EC_WORD_SO, EC_WORD_HOW_DO, EC_WORD_I},
        .speechWin = {EC_WORD_WHO_WAS, EC_MOVE2(MEDITATE), EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_BEAUTIFUL, EC_EMPTY_WORD},
        .speechLose = {EC_MOVE2(MEDITATE), EC_WORD_BECOMES, EC_WORD_MYSELF, EC_MOVE2(CALM_MIND), EC_WORD_GIVE, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Derrick
    },
    [FRONTIER_TRAINER_BRYSON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("STEFFEN"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_MOVE2(COTTON_SPORE), EC_WORD_MOVE, EC_WORD_HAS, EC_MOVE2(POISON_POWDER), EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IS, EC_WORD_MY, EC_MOVE2(POISON_POWDER), EC_WORD_DON_T, EC_WORD_INVINCIBLE, EC_WORD_QUES},
        .speechLose = {EC_WORD_MY, EC_MOVE2(POISON_POWDER), EC_WORD_IS, EC_WORD_USELESS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Bryson
    },
    [FRONTIER_TRAINER_CLAYTON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("STUART"),
        .speechBefore = {EC_WORD_EH_QUES, EC_WORD_ELLIPSIS, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_HE, EC_WORD_QUES},
        .speechWin = {EC_WORD_WHERE, EC_WORD_IS, EC_WORD_ONLY, EC_WORD_MY, EC_WORD_POKENAV, EC_WORD_QUES},
        .speechLose = {EC_WORD_AND, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_THE, EC_WORD_SENSE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Clayton
    },
    [FRONTIER_TRAINER_TRENTON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("SVEN"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANT, EC_WORD_TASTY, EC_WORD_WATER, EC_WORD_GIVE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MMM, EC_WORD_EXCL, EC_WORD_THAT, EC_WORD_WATER, EC_WORD_IS, EC_WORD_TASTY},
        .speechLose = {EC_WORD_THAT, EC_WORD_WATER, EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_SHOPPING, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Trenton
    },
    [FRONTIER_TRAINER_JENSON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("TOBIAS"),
        .speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_DOWNCAST, EC_WORD_BABE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_CAN, EC_WORD_DON_T, EC_WORD_ALL_RIGHT, EC_MOVE(CUT)},
        .speechLose = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_TRAINER, EC_WORD_THE, EC_WORD_DOWNCAST, EC_WORD_IS},
        .monSet = gBattleFrontierTrainerMons_Jenson
    },
    [FRONTIER_TRAINER_WESLEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("REMUS"),
        .speechBefore = {EC_POKEMON_NATIONAL(MEW), EC_POKEMON_NATIONAL(MEW), EC_WORD_THAT, EC_WORD_IS, EC_WORD_MY, EC_WORD_CRY},
        .speechWin = {EC_WORD_YES, EC_WORD_I, EC_WORD_KNOWS, EC_WORD_I_AM, EC_WORD_CUTE, EC_WORD_EXCL},
        .speechLose = {EC_POKEMON_NATIONAL(MEW), EC_POKEMON_NATIONAL(MEW), EC_POKEMON_NATIONAL(MEW), EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Wesley
    },
    [FRONTIER_TRAINER_ANTON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ANTON"),
        .speechBefore = {EC_WORD_DO, EC_WORD_BABE, EC_WORD_READY, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_MOVE(THRASH)},
        .speechWin = {EC_WORD_WAHAHAHA, EC_WORD_EXCL, EC_WORD_SORRY, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IT, EC_WORD_IS, EC_WORD_HARD, EC_WORD_TO, EC_WORD_LOSE, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Anton
    },
    [FRONTIER_TRAINER_LAWSON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("THEODOR"),
        .speechBefore = {EC_WORD_MY, EC_WORD_GHOST, EC_WORD_IS, EC_WORD_YOUNG, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SON, EC_WORD_GHOST, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_COOL, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_MY, EC_WORD_GHOST, EC_WORD_IS, EC_WORD_BUT, EC_WORD_DON_T, EC_WORD_COOL},
        .monSet = gBattleFrontierTrainerMons_Lawson
    },
    [FRONTIER_TRAINER_SAMMY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("TIMO"),
        .speechBefore = {EC_WORD_WE, EC_WORD_THOSE, EC_WORD_TOUGH, EC_WORD_HOW_DO, EC_WORD_ROCK, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WE, EC_WORD_THOSE, EC_WORD_SIMPLE, EC_WORD_SO, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WE, EC_WORD_THOSE, EC_WORD_NOW, EC_WORD_VERY, EC_WORD_SAD, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Sammy
    },
    [FRONTIER_TRAINER_ARNIE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ARNIE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_ABSOLUTELY, EC_WORD_NO_1, EC_WORD_YOU_RE, EC_WORD_NONE, EC_WORD_RIVAL},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_NONE, EC_WORD_RIVAL, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT, EC_WORD_WANTS, EC_WORD_I, EC_WORD_DON_T, EC_WORD_ACCEPT, EC_WORD_EXCL_EXCL},
        .monSet = gBattleFrontierTrainerMons_Arnie
    },
    [FRONTIER_TRAINER_ADRIAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("THURE"),
        .speechBefore = {EC_WORD_YAHOO, EC_WORD_EXCL, EC_WORD_YAHOO, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_THANK_YOU, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_GOOD_BYE, EC_WORD_EXCL, EC_WORD_GOOD_BYE, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Adrian
    },
    [FRONTIER_TRAINER_TRISTAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TIM"),
        .speechBefore = {EC_WORD_CONFUSED, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_A, EC_WORD_GENIUS},
        .speechWin = {EC_WORD_HAH, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_QUITE, EC_WORD_A, EC_WORD_GENIUS},
        .speechLose = {EC_WORD_I_AM, EC_WORD_IN, EC_WORD_FIGHT, EC_WORD_NONE, EC_WORD_GENIUS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Tristan
    },
    [FRONTIER_TRAINER_JULIANA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("SILVIA"),
        .speechBefore = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_SHOPPING, EC_WORD_IS, EC_WORD_MY, EC_WORD_HOBBY},
        .speechWin = {EC_WORD_BUT, EC_WORD_I, EC_WORD_WANTS, EC_WORD_POKEMON, EC_WORD_PLUSH_DOLL, EC_WORD_GOT},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_OTHER, EC_WORD_POKEMON, EC_WORD_PLUSH_DOLL, EC_WORD_GOT},
        .monSet = gBattleFrontierTrainerMons_Juliana
    },
    [FRONTIER_TRAINER_RYLEE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("SOFIA"),
        .speechBefore = {EC_WORD_ARE, EC_WORD_YOU, EC_WORD_AROUND, EC_WORD_CORRECT, EC_WORD_GUTSY, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_DON_T, EC_WORD_GUTSY, EC_WORD_THOSE_WERE, EC_WORD_GOOD_BYE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_GUTSY, EC_WORD_ELLIPSIS, EC_WORD_YOU_RE, EC_WORD_CORRECT, EC_WORD_SUPER},
        .monSet = gBattleFrontierTrainerMons_Rylee
    },
    [FRONTIER_TRAINER_CHELSEA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("SOLVEIG"),
        .speechBefore = {EC_WORD_I, EC_WORD_DO, EC_WORD_SERIOUSLY, EC_WORD_I, EC_WORD_WANTS, EC_WORD_WINS},
        .speechWin = {EC_WORD_TO, EC_WORD_WINS, EC_WORD_WAS, EC_WORD_MY, EC_MOVE2(WISH), EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_A_LOT, EC_WORD_TOO_STRONG, EC_WORD_FOR, EC_WORD_ME, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Chelsea
    },
    [FRONTIER_TRAINER_DANELA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("SINA"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_NOW, EC_WORD_MY, EC_WORD_FOE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_UH_OH, EC_WORD_TOO_WEAK, EC_WORD_BUT, EC_WORD_DON_T, EC_WORD_GIVE_UP, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_ALL_RIGHT, EC_WORD_AND, EC_WORD_NOW, EC_WORD_GOOD_BYE, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Danela
    },
    [FRONTIER_TRAINER_LIZBETH] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("SONJA"),
        .speechBefore = {EC_WORD_IF_I_LOSE, EC_WORD_GIVES, EC_WORD_IT, EC_WORD_EVEN_SO, EC_WORD_A, EC_MOVE2(PRESENT)},
        .speechWin = {EC_WORD_THAN, EC_MOVE2(PRESENT), EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_BABE, EC_WORD_PRAISE},
        .speechLose = {EC_WORD_WHAT_S_UP_QUES, EC_WORD_SON, EC_MOVE2(PRESENT), EC_WORD_QUES_EXCL, EC_WORD_A, EC_MOVE(DOUBLE_SLAP)},
        .monSet = gBattleFrontierTrainerMons_Lizbeth
    },
    [FRONTIER_TRAINER_AMELIA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("STELLA"),
        .speechBefore = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_ON, EC_WORD_CUTENESS, EC_WORD_FASHION, EC_WORD_APPEAL},
        .speechWin = {EC_WORD_SON, EC_WORD_SENSE, EC_WORD_FOR, EC_WORD_FASHION, EC_WORD_IS, EC_WORD_TERRIBLE},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_AWFUL, EC_WORD_I, EC_WORD_WANTS, EC_WORD_HOME, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Amelia
    },
    [FRONTIER_TRAINER_JILLIAN] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("SUSAN"),
        .speechBefore = {EC_WORD_WHAT, EC_WORD_IS, EC_WORD_THAT, EC_WORD_FOR, EC_WORD_A, EC_WORD_SMELL},
        .speechWin = {EC_WORD_IT_S, EC_WORD_THE, EC_MOVE(SWEET_SCENT), EC_WORD_FROM, EC_WORD_TASTY, EC_WORD_WATER},
        .speechLose = {EC_WORD_IT_S, EC_WORD_YOURS, EC_WORD_OFFENSIVE, EC_WORD_STENCH, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Jillian
    },
    [FRONTIER_TRAINER_ABBIE] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ALMA"),
        .speechBefore = {EC_WORD_HOW_DO, EC_WORD_IS, EC_WORD_WHO_WAS, EC_WORD_MYSTERY, EC_MOVE(AROMATHERAPY), EC_WORD_QUES},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_MYSTERY, EC_MOVE(AROMATHERAPY), EC_WORD_IS, EC_WORD_AWFUL, EC_WORD_EXCL},
        .speechLose = {EC_WORD_IS, EC_WORD_SON, EC_WORD_SMELL, EC_WORD_SENSE, EC_WORD_NORMAL, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Abbie
    },
    [FRONTIER_TRAINER_BRIANA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("SUSE"),
        .speechBefore = {EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_HAS, EC_WORD_TO, EC_WORD_A_LOT, EC_WORD_WORK},
        .speechWin = {EC_WORD_BUT, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_QUES},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_LONESOME, EC_WORD_WITHOUT, EC_WORD_FRIEND, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Briana
    },
    [FRONTIER_TRAINER_ANTONIO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("TILL"),
        .speechBefore = {EC_WORD_GO, EC_WORD_EXCL, EC_WORD_I, EC_WORD_KNOWS, EC_WORD_WHAT, EC_WORD_GOES},
        .speechWin = {EC_WORD_GO, EC_WORD_EXCL, EC_WORD_DANCE, EC_WORD_DOESN_T, EC_WORD_JOY, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_GO, EC_WORD_GO, EC_WORD_DANCE, EC_WORD_HOW_DO, EC_MOVE(FLAIL), EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Antonio
    },
    [FRONTIER_TRAINER_JADEN] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("TINO"),
        .speechBefore = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_BABE, EC_WORD_ADORE},
        .speechWin = {EC_WORD_I, EC_WORD_DO, EC_MOVE(THRASH), EC_WORD_OFF, EC_MOVE2(FRUSTRATION), EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_IT, EC_WORD_ELLIPSIS, EC_WORD_ELLIPSIS, EC_WORD_AND, EC_WORD_GOOD_BYE},
        .monSet = gBattleFrontierTrainerMons_Jaden
    },
    [FRONTIER_TRAINER_DAKOTA] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("TOMMY"),
        .speechBefore = {EC_WORD_MAN, EC_WORD_MUST_BE, EC_WORD_WITH, EC_WORD_POWER, EC_WORD_DANCE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_UNDERSTOOD, EC_WORD_QUES, EC_WORD_DANCE, EC_WORD_WITH, EC_WORD_POWER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_OH_KAY, EC_WORD_EXCL, EC_WORD_YOU_VE, EC_WORD_IT, EC_WORD_UNDERSTOOD, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Dakota
    },
    [FRONTIER_TRAINER_BRAYDEN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("TRISTAN"),
        .speechBefore = {EC_WORD_COLOR_CHANGE, EC_WORD_AT, EC_WORD_TOYS, EC_WORD_IS, EC_WORD_NEGATIVE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_MAN, EC_WORD_MUST_BE, EC_WORD_ABSOLUTELY, EC_WORD_NORMAL, EC_WORD_VERSION, EC_WORD_COLLECT},
        .speechLose = {EC_WORD_COLOR_CHANGE, EC_WORD_AT, EC_WORD_TOYS, EC_WORD_HAS, EC_MOVE(SWEET_SCENT), EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Brayden
    },
    [FRONTIER_TRAINER_CORSON] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("ULF"),
        .speechBefore = {EC_WORD_FOR, EC_WORD_BABE, EC_WORD_BECOMES, EC_WORD_IT, EC_MOVE2(BEAT_UP), EC_WORD_GIVE},
        .speechWin = {EC_WORD_HOW_DO, EC_WORD_SIMPLE, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_COOL, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WHY, EC_WORD_QUES_EXCL, EC_WORD_ELLIPSIS, EC_MOVE2(CURSE), EC_WORD_OUT, EC_WORD_BABE},
        .monSet = gBattleFrontierTrainerMons_Corson
    },
    [FRONTIER_TRAINER_TREVIN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("UDO"),
        .speechBefore = {EC_WORD_NOTHING, EC_WORD_IS, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_I, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YUP, EC_WORD_EXCL, EC_WORD_NOTHING, EC_WORD_IS, EC_WORD_BETTER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_SERIOUS, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Trevin
    },
    [FRONTIER_TRAINER_PATRICK] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("ULRICH"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_PERFECT, EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_GIVE_UP, EC_WORD_EXCL},
        .speechWin = {EC_WORD_DON_T, EC_WORD_SAD, EC_WORD_HIS, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_PERFECT},
        .speechLose = {EC_WORD_WHY, EC_WORD_QUES, EC_WORD_I_AM, EC_WORD_PERFECT, EC_WORD_ELLIPSIS, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Patrick
    },
    [FRONTIER_TRAINER_KADEN] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("UWE"),
        .speechBefore = {EC_WORD_WHAT_S_UP_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_AN, EC_WORD_SURPRISE, EC_WORD_FOR, EC_WORD_ME, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_KNOWS, EC_WORD_DON_T, EC_WORD_WHO, EC_WORD_I_AM, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Kaden
    },
    [FRONTIER_TRAINER_MAXWELL] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("VEIT"),
        .speechBefore = {EC_WORD_HEY_THERE, EC_WORD_EXCL, EC_WORD_WHO_IS, EC_WORD_SON, EC_WORD_RIVAL, EC_WORD_QUES},
        .speechWin = {EC_WORD_MY, EC_WORD_RIVAL, EC_WORD_IS, EC_WORD_MY, EC_WORD_GIRL, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_NOW, EC_WORD_MY, EC_WORD_RIVAL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Maxwell
    },
    [FRONTIER_TRAINER_DARYL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DANTE"),
        .speechBefore = {EC_WORD_I, EC_WORD_KNOWS, EC_WORD_ONLY, EC_WORD_WHAT, EC_WORD_FROM, EC_MOVE(CHARGE)},
        .speechWin = {EC_WORD_I_AM, EC_WORD_OVERWHELMING, EC_WORD_OR, EC_WORD_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_READY, EC_WORD_FOR, EC_WORD_AN, EC_WORD_LEGEND, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Daryl
    },
    [FRONTIER_TRAINER_KENNETH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("VIKTOR"),
        .speechBefore = {EC_WORD_BE, EC_WORD_PLEASE, EC_WORD_JUST, EC_WORD_NONE, EC_MOVE2(SLACK_OFF), EC_WORD_EXCL},
        .speechWin = {EC_WORD_HAS, EC_WORD_BABE, EC_WORD_MY, EC_MOVE2(TAUNT), EC_WORD_CONFUSED, EC_WORD_QUES},
        .speechLose = {EC_WORD_SORRY, EC_WORD_EXCL, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Kenneth
    },
    [FRONTIER_TRAINER_RICH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("RICK"),
        .speechBefore = {EC_WORD_YOURS, EC_MOVE(FACADE), EC_WORD_IS, EC_WORD_A, EC_MOVE2(TRICK), EC_WORD_EXCL},
        .speechWin = {EC_WORD_SERIOUS, EC_WORD_DASH, EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_OK_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_QUITE, EC_WORD_MEAN, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Rich
    },
    [FRONTIER_TRAINER_CADEN] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("VINZENT"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_ME, EC_WORD_DON_T, EC_WORD_FAINT, EC_WORD_EXCL},
        .speechWin = {EC_WORD_FIRE, EC_WORD_EXCL, EC_WORD_FIRE, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_AM, EC_WORD_TIRED, EC_WORD_ELLIPSIS, EC_WORD_IS_IT_QUES, EC_WORD_SO, EC_WORD_HOT},
        .monSet = gBattleFrontierTrainerMons_Caden
    },
    [FRONTIER_TRAINER_MARLON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("ANTON"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEDEX, EC_WORD_IS, EC_WORD_A, EC_WORD_RADIO, EC_WORD_QUES_EXCL},
        .speechWin = {EC_WORD_A, EC_WORD_RADIO, EC_WORD_HUH_QUES, EC_WORD_IT_S, EC_WORD_SO, EC_WORD_COOL},
        .speechLose = {EC_WORD_IS_IT_QUES, EC_WORD_NONE, EC_WORD_RADIO, EC_WORD_BUT, EC_WORD_A, EC_WORD_POKENAV},
        .monSet = gBattleFrontierTrainerMons_Marlon
    },
    [FRONTIER_TRAINER_NASH] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("VIRGIL"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_HOT, EC_WORD_HOW_DO, EC_WORD_FIRE, EC_WORD_BABY, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THERE, EC_WORD_WAS, EC_WORD_ONLY, EC_WORD_TOTALLY, EC_MOVE2(EMBER), EC_EMPTY_WORD},
        .speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_PLEASE, EC_WORD_NONE, EC_WORD_WATER},
        .monSet = gBattleFrontierTrainerMons_Nash
    },
    [FRONTIER_TRAINER_ROBBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("VITALI"),
        .speechBefore = {EC_WORD_HAHAHA, EC_WORD_EXCL, EC_WORD_BEAUTIFUL, EC_WORD_BABE, EC_WORD_TO, EC_WORD_WORKS},
        .speechWin = {EC_WORD_I_AM, EC_WORD_LEADER, EC_WORD_WITH, EC_WORD_REFRESHING, EC_WORD_SERENE_GRACE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_MY, EC_WORD_TOYS, EC_WORD_CHANGE, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Robby
    },
    [FRONTIER_TRAINER_REECE] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("VOLKMAR"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(QUICK_ATTACK), EC_WORD_DEFEATED, EC_MOVE2(TELEPORT), EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_DARN, EC_WORD_FAST, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT, EC_MOVE2(TELEPORT), EC_WORD_THING, EC_WORD_WAS, EC_WORD_KIDDING, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Reece
    },
    [FRONTIER_TRAINER_KATHRYN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("VRONI"),
        .speechBefore = {EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_QUITE, EC_WORD_MORE, EC_WORD_TRAIN, EC_WORD_QUES},
        .speechWin = {EC_WORD_GAME, EC_WORD_DON_T, EC_MOVE2(TAUNT), EC_WORD_WITH, EC_WORD_MYSELF, EC_WORD_OK_QUES},
        .speechLose = {EC_WORD_WHY, EC_WORD_HAVE, EC_WORD_I, EC_WORD_DEFEATED, EC_WORD_WILL, EC_WORD_CAN},
        .monSet = gBattleFrontierTrainerMons_Kathryn
    },
    [FRONTIER_TRAINER_ELLEN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("ELLEN"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_FAINTED, EC_WORD_HOW_DO, EC_WORD_A, EC_WORD_EGG, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_A, EC_WORD_TASTY, EC_WORD_VICTORY, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_TOO_STRONG, EC_WORD_FOR, EC_WORD_OF, EC_MOVE(ROCK_SMASH), EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Ellen
    },
    [FRONTIER_TRAINER_RAMON] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("WIELAND"),
        .speechBefore = {EC_WORD_OH_KAY, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_IT_S, EC_WORD_ABSOLUTELY, EC_WORD_PERFECTION},
        .speechWin = {EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_OVER, EC_WORD_MY, EC_WORD_VICTORY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WHO_WAS, EC_WORD_JOY, EC_WORD_IS, EC_WORD_A, EC_WORD_SECRET, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Ramon
    },
    [FRONTIER_TRAINER_ARTHUR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ARTUR"),
        .speechBefore = {EC_WORD_HERE_I_COME, EC_WORD_EXCL, EC_WORD_READY, EC_WORD_FOR, EC_WORD_EVERY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_S_IT_EXCL, EC_WORD_THAT_WAS, EC_WORD_FABULOUS, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT, EC_WORD_WAS, EC_WORD_DON_T, EC_WORD_WHAT, EC_WORD_I, EC_WORD_NEED},
        .monSet = gBattleFrontierTrainerMons_Arthur
    },
    [FRONTIER_TRAINER_ALONDRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("TABITHA"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_DAYS, EC_WORD_THOSE, EC_WORD_GREAT, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_MOVE2(DIVE), EC_WORD_BECOMES, EC_WORD_AN, EC_WORD_LEGEND, EC_WORD_HIS},
        .speechLose = {EC_WORD_MY, EC_MOVE2(DIVE), EC_WORD_BECOMES, EC_WORD_NEVER, EC_WORD_LEGEND, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Alondra
    },
    [FRONTIER_TRAINER_ADRIANA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("URSEL"),
        .speechBefore = {EC_WORD_WHO, EC_WORD_WANT, EC_WORD_UNBELIEVABLE, EC_WORD_SWIFT_SWIM, EC_WORD_WORKS, EC_WORD_QUES},
        .speechWin = {EC_WORD_AT, EC_WORD_MYSELF, EC_WORD_SEES, EC_WORD_IT, EC_WORD_SIMPLE, EC_WORD_OFF},
        .speechLose = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_WEAK, EC_WORD_AND, EC_WORD_TIRED, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Adriana
    },
    [FRONTIER_TRAINER_MALIK] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("WILHELM"),
        .speechBefore = {EC_WORD_OH, EC_WORD_PLEASE, EC_WORD_DON_T, EC_WORD_THAT_S, EC_WORD_FIGHT, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_AND, EC_WORD_FINALLY, EC_WORD_WON, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_TIRED},
        .speechLose = {EC_WORD_AND, EC_WORD_FINALLY, EC_WORD_LOST, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_TIRED},
        .monSet = gBattleFrontierTrainerMons_Malik
    },
    [FRONTIER_TRAINER_JILL] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("AGNES"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_MOVE2(QUICK_ATTACK), EC_WORD_TRAINER, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THE, EC_MOVE2(QUICK_ATTACK), EC_WORD_TRAINER, EC_WORD_HAS, EC_WORD_WON, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THE, EC_MOVE2(QUICK_ATTACK), EC_WORD_TRAINER, EC_WORD_GIVES, EC_WORD_OUT, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Jill
    },
    [FRONTIER_TRAINER_ERIK] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("WINNIE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_SPEED_BOOST, EC_WORD_HERO, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THE, EC_WORD_SPEED_BOOST, EC_WORD_HERO, EC_WORD_SAYS, EC_WORD_THANK_YOU, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_NO, EC_WORD_NO, EC_WORD_EXCL_EXCL},
        .monSet = gBattleFrontierTrainerMons_Erik
    },
    [FRONTIER_TRAINER_YAZMIN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("WILMA"),
        .speechBefore = {EC_WORD_RUN, EC_WORD_IS, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_THAT, EC_WORD_BIKE},
        .speechWin = {EC_WORD_YES, EC_WORD_EXCL, EC_WORD_RUN, EC_WORD_IS, EC_WORD_A_LOT, EC_WORD_BETTER},
        .speechLose = {EC_WORD_YES, EC_WORD_RUN, EC_WORD_HOW_DO, EC_WORD_A, EC_WORD_RUN_AWAY, EC_WORD_GOOD_BYE},
        .monSet = gBattleFrontierTrainerMons_Yazmin
    },
    [FRONTIER_TRAINER_JAMAL] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("WOLFRAM"),
        .speechBefore = {EC_WORD_YES, EC_WORD_I_AM, EC_WORD_SOON, EC_WORD_A, EC_WORD_FATHER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YES, EC_WORD_WE_VE, EC_WORD_SOON, EC_WORD_A, EC_WORD_BABY, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_FATHER, EC_WORD_HIS, EC_WORD_BECOMES, EC_WORD_SIMPLE, EC_WORD_AWESOME, EC_WORD_HIS},
        .monSet = gBattleFrontierTrainerMons_Jamal
    },
    [FRONTIER_TRAINER_LESLIE] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("BRITTA"),
        .speechBefore = {EC_WORD_YES, EC_WORD_I_AM, EC_WORD_SOON, EC_WORD_AN, EC_WORD_MOTHER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_A, EC_WORD_BABY, EC_WORD_BECOMES, EC_WORD_AN, EC_WORD_CHALLENGE, EC_WORD_HIS},
        .speechLose = {EC_WORD_I_AM, EC_WORD_TO, EC_WORD_HAPPY, EC_WORD_FOR, EC_WORD_OF, EC_MOVE(OUTRAGE)},
        .monSet = gBattleFrontierTrainerMons_Leslie
    },
    [FRONTIER_TRAINER_DAVE] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("YVES"),
        .speechBefore = {EC_WORD_WHAT, EC_WORD_CAN, EC_WORD_WE, EC_WORD_TODAY, EC_WORD_MAKE, EC_WORD_QUES},
        .speechWin = {EC_WORD_SPORTS, EC_WORD_DOESN_T, EC_WORD_MYSELF, EC_WORD_TODAY, EC_WORD_JOY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_A, EC_WORD_GAME, EC_WORD_PLAY, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Dave
    },
    [FRONTIER_TRAINER_CARLO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("YAN"),
        .speechBefore = {EC_WORD_HAH, EC_WORD_EXCL_EXCL, EC_WORD_YEAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_DO, EC_WORD_EVERY, EC_WORD_WITH, EC_MOVE(EXTREME_SPEED), EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_VE, EC_WORD_WITH, EC_MOVE(EXTREME_SPEED), EC_WORD_LOST, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Carlo
    },
    [FRONTIER_TRAINER_EMILIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("XENIA"),
        .speechBefore = {EC_WORD_I, EC_WORD_IN, EC_WORD_WORRY, EC_WORD_QUES, EC_WORD_NO, EC_WORD_NEVER},
        .speechWin = {EC_WORD_AHAHA, EC_WORD_EXCL, EC_WORD_ISN_T_IT_QUES, EC_WORD_THAT_WAS, EC_WORD_FANTASTIC, EC_WORD_EXCL},
        .speechLose = {EC_WORD_AHAHA, EC_WORD_EXCL, EC_WORD_ISN_T_IT_QUES, EC_WORD_THAT_WAS, EC_WORD_ENTERTAINING, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Emilia
    },
    [FRONTIER_TRAINER_DALIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("YVETTE"),
        .speechBefore = {EC_WORD_MY, EC_WORD_BIKE, EC_WORD_IS, EC_WORD_VERY, EC_WORD_EXPENSIVE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_DON_T, EC_WORD_TO, EC_WORD_NEAR, EC_WORD_ON, EC_WORD_MY, EC_WORD_BIKE},
        .speechLose = {EC_WORD_MY, EC_WORD_BIKE, EC_WORD_IS, EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Dalia
    },
    [FRONTIER_TRAINER_HITOMI] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("ABEL"),
        .speechBefore = {EC_WORD_YEAH, EC_WORD_EXCL_EXCL, EC_WORD_HAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHAT, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_WORD_I_VE, EC_WORD_WON, EC_WORD_QUES_EXCL},
        .speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_WORD_EXCUSE_ME, EC_WORD_PLEASE, EC_WORD_EXCL_EXCL},
        .monSet = gBattleFrontierTrainerMons_Hitomi
    },
    [FRONTIER_TRAINER_RICARDO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("CARSTEN"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_EXCL, EC_WORD_GAME, EC_WORD_TIME, EC_WORD_IS, EC_WORD_OFF},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_DON_T, EC_WORD_MORE, EC_WORD_IN, EC_WORD_RUN, EC_WORD_EXCL},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_DON_T, EC_WORD_SMITE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Ricardo
    },
    [FRONTIER_TRAINER_SHIZUKA] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("ALAIN"),
        .speechBefore = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_QUITE, EC_WORD_SERIOUS, EC_WORD_HIS, EC_WORD_QUES},
        .speechWin = {EC_WORD_I, EC_WORD_WON_T, EC_WORD_FORGET, EC_WORD_EXCL, EC_WORD_SERIOUS, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_PERFECT, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Shizuka
    },
    [FRONTIER_TRAINER_JOANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("CLAIR"),
        .speechBefore = {EC_WORD_YOU_VE, EC_WORD_THOSE_ARE, EC_WORD_SO, EC_WORD_ALL_RIGHT, EC_WORD_HOW_DO, EC_WORD_LOST},
        .speechWin = {EC_WORD_I_VE, EC_WORD_WON, EC_WORD_LISTENING, EC_WORD_MY, EC_MOVE2(ROAR), EC_WORD_EXCL},
        .speechLose = {EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_OF, EC_MOVE(OUTRAGE), EC_WORD_ACCEPT, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Joana
    },
    [FRONTIER_TRAINER_KELLY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KARLA"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_NIGHT, EC_WORD_SCHOOL, EC_WORD_IS, EC_WORD_QUITE, EC_WORD_SCARY},
        .speechWin = {EC_WORD_THERE, EC_WORD_APPEARS, EC_WORD_AN, EC_WORD_GHOST, EC_WORD_LADY, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_ABSOLUTELY, EC_WORD_HOME, EC_WORD_WORK, EC_WORD_IS, EC_WORD_AWFULLY, EC_WORD_SCARY},
        .monSet = gBattleFrontierTrainerMons_Kelly
    },
    [FRONTIER_TRAINER_RAYNA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ELVIRA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_ABSOLUTELY, EC_WORD_NO_1, EC_WORD_AT, EC_WORD_POWER, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_WHO_WAS, EC_WORD_POWER, EC_WORD_NOW, EC_WORD_WORKS},
        .speechLose = {EC_WORD_AWFULLY, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_AWFULLY, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Rayna
    },
    [FRONTIER_TRAINER_EVAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("TONI"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_BATTLE, EC_WORD_GOT, EC_WORD_OF, EC_WORD_SMELL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_OH, EC_WORD_EXCL, EC_WORD_THE, EC_MOVE(SWEET_SCENT), EC_WORD_FROM, EC_WORD_VICTORY},
        .speechLose = {EC_WORD_LOSE, EC_WORD_EEK, EC_WORD_ABSOLUTELY, EC_WORD_STENCH, EC_WORD_IS, EC_WORD_AWFULLY},
        .monSet = gBattleFrontierTrainerMons_Evan
    },
    [FRONTIER_TRAINER_JORDAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("ALBERT"),
        .speechBefore = {EC_WORD_ALL_RIGHT, EC_WORD_EXCL, EC_WORD_COME_ON, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_ME, EC_WORD_DON_T, EC_WORD_FAINT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WHAT, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_WORD_BUT, EC_WORD_HOW_DO, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Jordan
    },
    [FRONTIER_TRAINER_JOEL] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JOEL"),
        .speechBefore = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_HAHAHA, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Joel
    },
    [FRONTIER_TRAINER_KRISTEN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("ANGELA"),
        .speechBefore = {EC_WORD_HAHAHA, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_A, EC_WORD_KID, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_QUITE, EC_WORD_ONLY, EC_WORD_A, EC_WORD_KINDERGARTEN, EC_WORD_KID, EC_WORD_EXCL},
        .speechLose = {EC_WORD_HUMPH, EC_WORD_EXCL, EC_WORD_THAT, EC_WORD_KID, EC_WORD_IS, EC_WORD_TOUGH},
        .monSet = gBattleFrontierTrainerMons_Kristen
    },
    [FRONTIER_TRAINER_SELPHY] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("ANITA"),
        .speechBefore = {EC_WORD_HUH_QUES, EC_WORD_WHAT_S_UP_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_OH, EC_WORD_YES, EC_EMPTY_WORD, EC_WORD_WHY, EC_WORD_DON_T, EC_WORD_QUES},
        .speechLose = {EC_WORD_OH, EC_WORD_NO, EC_WORD_WHAT, EC_WORD_WHY, EC_WORD_ONLY, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Selphy
    },
    [FRONTIER_TRAINER_CHLOE] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("ANNIKA"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_EXCL, EC_WORD_WE, EC_WORD_FIGHT, EC_WORD_NOW, EC_WORD_EXCL},
        .speechWin = {EC_WORD_MORE, EC_WORD_EXCL, EC_WORD_TOTALLY, EC_WORD_MORE, EC_WORD_BATTLE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_OH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_TOUGH},
        .monSet = gBattleFrontierTrainerMons_Chloe
    },
    [FRONTIER_TRAINER_NORTON] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("NORBERT"),
        .speechBefore = {EC_WORD_WITHOUT, EC_WORD_NATURAL_CURE, EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_DON_T, EC_WORD_WINS},
        .speechWin = {EC_WORD_EXCUSE_ME, EC_WORD_BUT, EC_WORD_YOU_RE, EC_WORD_AN, EC_WORD_PUSHOVER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_SOMEHOW, EC_WORD_AWESOME, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Norton
    },
    [FRONTIER_TRAINER_LUKAS] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ANSELM"),
        .speechBefore = {EC_WORD_JOKING, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_EASY, EC_WORD_FOR, EC_WORD_ME},
        .speechWin = {EC_WORD_SON, EC_WORD_ROCK_HEAD, EC_WORD_EXISTS, EC_WORD_FOR, EC_WORD_THAT, EC_WORD_SHINE},
        .speechLose = {EC_WORD_SON, EC_WORD_ROCK_HEAD, EC_WORD_BECOMES, EC_WORD_SHINE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Lukas
    },
    [FRONTIER_TRAINER_ZACH] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ANSGAR"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_MOVE2(MIMIC), EC_WORD_IS, EC_WORD_EXCELLENT, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_HOW_DO, EC_WORD_A, EC_POKEMON_NATIONAL(TOGEPI), EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_ANGRY, EC_WORD_HOW_DO, EC_WORD_A, EC_POKEMON_NATIONAL(MANKEY), EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Zach
    },
    [FRONTIER_TRAINER_KAITLYN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("ADRIANA"),
        .speechBefore = {EC_WORD_THINGS, EC_WORD_RECEIVED, EC_WORD_WITH, EC_MOVE(PSYCHIC), EC_MOVE(ROCK_SMASH), EC_WORD_EXCL},
        .speechWin = {EC_WORD_MY, EC_WORD_VICTORY, EC_WORD_BECOMES, EC_WORD_NEWS, EC_WORD_MAKE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_NO, EC_WORD_NO, EC_WORD_ELLIPSIS, EC_WORD_THAT, EC_WORD_GOES, EC_WORD_DON_T},
        .monSet = gBattleFrontierTrainerMons_Kaitlyn
    },
    [FRONTIER_TRAINER_BREANNA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("MARLEN"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_MOVE(ROCK_SMASH), EC_WORD_FOR, EC_WORD_BABE},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_TOTALLY, EC_WORD_MORE, EC_WORD_GOT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_VE, EC_WORD_GUTS, EC_WORD_AND, EC_WORD_SKILL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Breanna
    },
    [FRONTIER_TRAINER_KENDRA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KENDRA"),
        .speechBefore = {EC_WORD_BE, EC_WORD_SMART, EC_WORD_AND, EC_WORD_DO, EC_WORD_NOW, EC_WORD_STOP},
        .speechWin = {EC_WORD_I, EC_WORD_SAID, EC_WORD_YES, EC_WORD_DASH, EC_WORD_DO, EC_WORD_STOP},
        .speechLose = {EC_WORD_I, EC_WORD_SAID, EC_WORD_STOP, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Kendra
    },
    [FRONTIER_TRAINER_MOLLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("MOLLY"),
        .speechBefore = {EC_WORD_MY, EC_WORD_CUTE_CHARM, EC_WORD_IS, EC_MOVE2(ATTRACT), EC_WORD_FOR, EC_WORD_BABE},
        .speechWin = {EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_NOW, EC_WORD_MY, EC_WORD_TOYS},
        .speechLose = {EC_WORD_OH, EC_WORD_HOW_DO, EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_ONLY, EC_WORD_QUES_EXCL},
        .monSet = gBattleFrontierTrainerMons_Molly
    },
    [FRONTIER_TRAINER_JAZMIN] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("ANNA"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_FORECAST, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_IS, EC_WORD_AWFUL},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_FORECAST, EC_WORD_WAS, EC_WORD_ALSO, EC_WORD_AGREE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_WITH, EC_MOVE2(FORESIGHT), EC_WORD_DON_T, EC_WORD_TO, EC_WORD_WORKS},
        .monSet = gBattleFrontierTrainerMons_Jazmin
    },
    [FRONTIER_TRAINER_KELSEY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("RUTH"),
        .speechBefore = {EC_WORD_MY, EC_WORD_SLEEP, EC_WORD_IS, EC_WORD_VERY, EC_WORD_WELL, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_MY, EC_WORD_SLEEP, EC_WORD_BECOMES, EC_WORD_NOW, EC_WORD_EXCELLENT, EC_WORD_HIS},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_THAT, EC_WORD_END, EC_WORD_FOR, EC_WORD_SLEEP, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Kelsey
    },
    [FRONTIER_TRAINER_JALEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("ARNO"),
        .speechBefore = {EC_WORD_POKEMON, EC_WORD_WEREN_T, EC_WORD_DON_T, EC_MOVE(THRASH), EC_WORD_MAKE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_HAHAHA, EC_WORD_EXCL, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_ANGRY, EC_WORD_QUES},
        .speechLose = {EC_WORD_WHY, EC_WORD_IS, EC_WORD_THAT, EC_WORD_SO, EC_WORD_HARD, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Jalen
    },
    [FRONTIER_TRAINER_GRIFFEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("ARNDT"),
        .speechBefore = {EC_WORD_A, EC_MOVE2(SLUDGE), EC_WORD_DOESN_T, EC_WORD_ME, EC_WORD_TO, EC_MOVE2(TRANSFORM)},
        .speechWin = {EC_WORD_I_VE, EC_WORD_A, EC_MOVE(GROWTH), EC_WORD_ON, EC_MOVE2(ACID_ARMOR), EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_VE, EC_WORD_A, EC_MOVE(GROWTH), EC_WORD_ON, EC_WORD_SUCTION_CUPS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Griffen
    },
    [FRONTIER_TRAINER_XANDER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("ARTHUR"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_OUT, EC_WORD_RENTAL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_UNBELIEVABLE, EC_WORD_WHO_WAS, EC_WORD_RENTAL, EC_WORD_POKEMON, EC_WORD_GOT, EC_WORD_WON},
        .speechLose = {EC_WORD_RENTAL, EC_WORD_POKEMON, EC_WORD_MAKE, EC_WORD_NONE, EC_MOVE2(SCRATCH), EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Xander
    },
    [FRONTIER_TRAINER_MARVIN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("AUGUST"),
        .speechBefore = {EC_WORD_ARE, EC_WORD_YOU, EC_WORD_READY, EC_WORD_FOR, EC_WORD_ABSOLUTELY, EC_WORD_CHALLENGE},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_SIMPLE, EC_WORD_DON_T, EC_WORD_ALL_RIGHT, EC_WORD_THOSE_WERE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_PERFECT, EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Marvin
    },
    [FRONTIER_TRAINER_BRENNAN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BERTRAM"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_ABSOLUTELY, EC_WORD_NEWS, EC_WORD_WORKS, EC_WORD_EXCL},
        .speechWin = {EC_WORD_DRIZZLE, EC_WORD_IS, EC_WORD_FOR, EC_WORD_COMICS, EC_WORD_A, EC_MOVE2(WATER_SPORT)},
        .speechLose = {EC_WORD_MOVIE, EC_WORD_AND, EC_WORD_TELEVISION, EC_WORD_THOSE, EC_WORD_LIVING, EC_WORD_QUES_EXCL},
        .monSet = gBattleFrontierTrainerMons_Brennan
    },
    [FRONTIER_TRAINER_BALEY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BASTIAN"),
        .speechBefore = {EC_WORD_THE, EC_MOVE(SCREECH), EC_WORD_IS, EC_WORD_MUSIC, EC_WORD_FOR, EC_WORD_ME},
        .speechWin = {EC_WORD_WHO_WAS, EC_MOVE(SCREECH), EC_WORD_STRATEGY, EC_WORD_IS, EC_WORD_GREAT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_AND, EC_WORD_YOU_VE, EC_WORD_SOUNDPROOF, EC_WORD_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Baley
    },
    [FRONTIER_TRAINER_ZACKARY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("BENNI"),
        .speechBefore = {EC_WORD_CAN_T, EC_WORD_YOU, EC_MOVE(DIG), EC_WORD_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_TOUGH, EC_WORD_HOW_DO, EC_WORD_A, EC_WORD_SAND_STREAM, EC_WORD_EXCL},
        .speechLose = {EC_WORD_BREAK, EC_WORD_EXCL, EC_MOVE(DIG), EC_WORD_TIME, EC_WORD_FOR, EC_WORD_ME},
        .monSet = gBattleFrontierTrainerMons_Zackary
    },
    [FRONTIER_TRAINER_GABRIEL] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GABRIEL"),
        .speechBefore = {EC_MOVE2(POUND), EC_WORD_OUT, EC_WORD_THICK_FAT, EC_WORD_FROM, EC_MOVE2(BELLY_DRUM), EC_WORD_EXCL},
        .speechWin = {EC_MOVE2(POUND), EC_WORD_OUT, EC_MOVE2(BELLY_DRUM), EC_MOVE2(POUND), EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHO_WAS, EC_MOVE2(BELLY_DRUM), EC_WORD_WAS, EC_WORD_TOO_WEAK, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Gabriel
    },
    [FRONTIER_TRAINER_EMILY] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("BETTINA"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_A_LITTLE, EC_MOVE(HYPNOSIS), EC_WORD_FOR, EC_WORD_BABE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WHO_WAS, EC_MOVE(HYPNOSIS), EC_WORD_STRATEGY, EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_PERFECT},
        .speechLose = {EC_WORD_WHO_WAS, EC_MOVE(HYPNOSIS), EC_WORD_STRATEGY, EC_WORD_IS, EC_WORD_RATHER, EC_WORD_WELL},
        .monSet = gBattleFrontierTrainerMons_Emily
    },
    [FRONTIER_TRAINER_JORDYN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("BLASIUS"),
        .speechBefore = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_MY, EC_WORD_SECRET, EC_WORD_KNOW, EC_WORD_QUES},
        .speechWin = {EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_HOW_DO, EC_WORD_IT, EC_WORD_APPEARS, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_MY, EC_WORD_SECRET, EC_WORD_WORKS, EC_WORD_QUES_EXCL},
        .monSet = gBattleFrontierTrainerMons_Jordyn
    },
    [FRONTIER_TRAINER_SOFIA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("BURGA"),
        .speechBefore = {EC_POKEMON(LOUDRED), EC_WORD_HAS, EC_WORD_PROBABLY, EC_WORD_SOMETHING, EC_MOVE(SWEET_SCENT), EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IT_S, EC_WORD_THAT, EC_WORD_FEELING, EC_WORD_THAT, EC_WORD_I, EC_WORD_HAVE},
        .speechLose = {EC_WORD_DEPT_STORE, EC_WORD_IS, EC_WORD_WORK, EC_WORD_FOR, EC_WORD_ME, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Sofia
    },
    [FRONTIER_TRAINER_BRADEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BORIS"),
        .speechBefore = {EC_WORD_I_CHOOSE_YOU, EC_WORD_EXCL, EC_WORD_YAY, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_YES, EC_WORD_SO, EC_WORD_SUPER, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_ALSO, EC_WORD_ALL_RIGHT, EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_ME, EC_WORD_SURRENDER},
        .monSet = gBattleFrontierTrainerMons_Braden
    },
    [FRONTIER_TRAINER_KAYDEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRUNO"),
        .speechBefore = {EC_WORD_SHE, EC_WORD_OVERDO, EC_WORD_IT, EC_WORD_WITH, EC_WORD_GOURMET, EC_WORD_THINGS},
        .speechWin = {EC_WORD_GOURMET, EC_WORD_THINGS, EC_WORD_THOSE, EC_WORD_NOTHING, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_HEY, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_BUT, EC_WORD_TASTY, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Kayden
    },
    [FRONTIER_TRAINER_COOPER] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("CARLOS"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_NOTHING, EC_WORD_ELSE, EC_WORD_THAN, EC_WORD_AN, EC_WORD_PUSHOVER},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_MYSELF, EC_WORD_ALMOST, EC_WORD_TO, EC_WORD_EXCITING, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_SORRY, EC_WORD_EXCL, EC_WORD_PLEASE, EC_WORD_ELLIPSIS, EC_WORD_EXCUSE_ME, EC_WORD_PLEASE},
        .monSet = gBattleFrontierTrainerMons_Cooper
    },
    [FRONTIER_TRAINER_JULIA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("GERDA"),
        .speechBefore = {EC_WORD_AN, EC_WORD_TOUGH, EC_WORD_SPIRIT, EC_WORD_ALONE, EC_WORD_ISN_T, EC_WORD_VICTORY},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_THAT, EC_WORD_ACCEPT, EC_WORD_WITH, EC_WORD_SERENE_GRACE},
        .speechLose = {EC_WORD_GOOD_BYE, EC_WORD_BUT, EC_WORD_IS_IT_QUES, EC_WORD_DON_T, EC_WORD_TO, EC_WORD_END},
        .monSet = gBattleFrontierTrainerMons_Julia
    },
    [FRONTIER_TRAINER_AMARA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("CAROLIN"),
        .speechBefore = {EC_WORD_WROOOAAR_EXCL, EC_WORD_EXCL_EXCL, EC_WORD_I_AM, EC_WORD_READY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_AT, EC_WORD_GUTS, EC_WORD_IF_I_LOSE, EC_WORD_ME, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IT_S, EC_WORD_TO, EC_WORD_A_LOT, EC_WORD_FOR, EC_MOVE2(TACKLE), EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Amara
    },
    [FRONTIER_TRAINER_LYNN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("CAMILLA"),
        .speechBefore = {EC_WORD_SON, EC_WORD_SECRET, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_FOREVER, EC_WORD_MYSTERY},
        .speechWin = {EC_WORD_I, EC_WORD_KNOWS, EC_WORD_SON, EC_WORD_SECRET, EC_WORD_NOW, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_VE, EC_WORD_OF, EC_MOVE(SAFEGUARD), EC_WORD_FOR, EC_WORD_SON, EC_WORD_SECRET},
        .monSet = gBattleFrontierTrainerMons_Lynn
    },
    [FRONTIER_TRAINER_JOVAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("CEDRIC"),
        .speechBefore = {EC_WORD_SON, EC_WORD_FIGHTING, EC_WORD_SENSE, EC_WORD_IS, EC_WORD_RATHER, EC_WORD_LACKING},
        .speechWin = {EC_WORD_MY, EC_WORD_FIGHTING, EC_WORD_SENSE, EC_WORD_IS, EC_WORD_COOL, EC_WORD_ISN_T_IT_QUES},
        .speechLose = {EC_WORD_I_WAS, EC_WORD_TODAY, EC_WORD_BELOW, EC_WORD_THE, EC_WORD_NORMAL, EC_WORD_POWER},
        .monSet = gBattleFrontierTrainerMons_Jovan
    },
    [FRONTIER_TRAINER_DOMINIC] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("COLIN"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_CAMERA, EC_WORD_THOSE, EC_WORD_QUITE, EC_WORD_EXCELLENT, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_CAMERA, EC_WORD_THOSE, EC_WORD_AWFULLY, EC_WORD_EXPENSIVE, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_WHO_WAS, EC_WORD_CAMERA, EC_WORD_SHOW, EC_WORD_DON_T, EC_WORD_EVERY, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Dominic
    },
    [FRONTIER_TRAINER_NIKOLAS] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("CLAUDIO"),
        .speechBefore = {EC_WORD_I, EC_WORD_DO, EC_WORD_POKEMON, EC_MOVE2(MIMIC), EC_WORD_AFTER, EC_WORD_FIGHT},
        .speechWin = {EC_WORD_WHEN_I_WIN, EC_WORD_DO, EC_WORD_I, EC_WORD_OUT, EC_POKEMON_NATIONAL(TAUROS), EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IF_I_LOSE, EC_WORD_DO, EC_WORD_I, EC_WORD_OUT, EC_POKEMON_NATIONAL(MILTANK), EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Nikolas
    },
    [FRONTIER_TRAINER_VALERIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("CONNIE"),
        .speechBefore = {EC_WORD_PLEASE, EC_WORD_DON_T, EC_MOVE2(GLARE), EC_WORD_SHOW, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SON, EC_MOVE2(GLARE), EC_WORD_IS, EC_WORD_MEAN, EC_WORD_REALLY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOURS, EC_MOVE(SCARY_FACE), EC_WORD_IS, EC_WORD_REALLY, EC_WORD_AWFULLY, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Valeria
    },
    [FRONTIER_TRAINER_DELANEY] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("CORINNA"),
        .speechBefore = {EC_WORD_SCHOOL, EC_WORD_IS, EC_WORD_OFF, EC_WORD_TIME, EC_WORD_TO, EC_WORD_PLAY},
        .speechWin = {EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_BECOMES, EC_WORD_SOON, EC_WORD_COME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_SOON, EC_WORD_WORKING, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Delaney
    },
    [FRONTIER_TRAINER_MEGHAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("COSIMA"),
        .speechBefore = {EC_WORD_SCHOOL, EC_WORD_IS, EC_WORD_OFF, EC_WORD_I, EC_WORD_WANTS, EC_WORD_PLAY},
        .speechWin = {EC_WORD_FOR, EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_THOSE, EC_WORD_COMICS, EC_WORD_ALL_RIGHT},
        .speechLose = {EC_WORD_SOON, EC_WORD_IS, EC_WORD_SCHOOL, EC_WORD_ELLIPSIS, EC_WORD_SIGH, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Meghan
    },
    [FRONTIER_TRAINER_ROBERTO] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DARIUS"),
        .speechBefore = {EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_INVINCIBLE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_DON_T, EC_WORD_WELL, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_BETTER},
        .speechLose = {EC_WORD_ARE, EC_WORD_YOU, EC_WORD_NOW, EC_WORD_FINALLY, EC_WORD_SATISFIED, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Roberto
    },
    [FRONTIER_TRAINER_DAMIAN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DETLEF"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_PURE_POWER, EC_WORD_IS, EC_WORD_HOW_DO, EC_WORD_AN, EC_WORD_MACHINE},
        .speechWin = {EC_WORD_MY, EC_MOVE2(MACH_PUNCH), EC_WORD_BECOMES, EC_WORD_OF, EC_MOVE(BRICK_BREAK), EC_WORD_MAKE},
        .speechLose = {EC_WORD_ARRGH, EC_WORD_EXCL, EC_WORD_NO, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Damian
    },
    [FRONTIER_TRAINER_BRODY] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DEREK"),
        .speechBefore = {EC_WORD_MY, EC_WORD_FASHION, EC_WORD_SENSE, EC_WORD_APPEARS, EC_WORD_PREPOSTEROUS, EC_WORD_QUES},
        .speechWin = {EC_WORD_IT_S, EC_WORD_MY, EC_WORD_LOOK, EC_WORD_AT, EC_WORD_STAY_AT_HOME, EC_WORD_EXCL},
        .speechLose = {EC_WORD_QUESTION, EC_WORD_DASH, EC_WORD_YOU_VE, EC_WORD_QUITE, EC_WORD_FASHION, EC_WORD_SENSE},
        .monSet = gBattleFrontierTrainerMons_Brody
    },
    [FRONTIER_TRAINER_GRAHAM] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DIDIER"),
        .speechBefore = {EC_WORD_YEAH, EC_WORD_EXCL, EC_WORD_YEAH_YEAH, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WAHAHAHA, EC_WORD_EXCL, EC_WORD_WAHAHAHA, EC_WORD_WAHAHAHA, EC_WORD_WAHAHAHA, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_EXCUSE_ME, EC_WORD_PLEASE, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_WELL},
        .monSet = gBattleFrontierTrainerMons_Graham
    },
    [FRONTIER_TRAINER_TYLOR] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("ULAND"),
        .speechBefore = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_WHO_WAS, EC_MOVE2(HEAT_WAVE), EC_WORD_FEELING, EC_WORD_QUES},
        .speechWin = {EC_WORD_YES, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_HOT, EC_WORD_YEAH, EC_WORD_EXCL},
        .speechLose = {EC_WORD_BUT, EC_WORD_THAT_WAS, EC_WORD_TOO, EC_WORD_HOT, EC_WORD_FOR, EC_WORD_BABE},
        .monSet = gBattleFrontierTrainerMons_Tylor
    },
    [FRONTIER_TRAINER_JAREN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("KAMILLA"),
        .speechBefore = {EC_WORD_FIGHTING, EC_WORD_GHOST, EC_WORD_I, EC_WORD_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_MORE, EC_WORD_POKEMON, EC_WORD_WITH, EC_WORD_CUTENESS},
        .speechLose = {EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_WORKS, EC_WORD_CUTE, EC_WORD_OFF, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Jaren
    },
    [FRONTIER_TRAINER_CORDELL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("ZENO"),
        .speechBefore = {EC_WORD_SON, EC_WORD_FIGHTING, EC_WORD_GHOST, EC_WORD_MUST_BE, EC_WORD_DECIDED, EC_WORD_HIS},
        .speechWin = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_THAT, EC_WORD_DON_T, EC_WORD_ACCEPT, EC_WORD_QUES},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_NOW, EC_WORD_GOING, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Cordell
    },
    [FRONTIER_TRAINER_JAZLYN] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("DAPHNE"),
        .speechBefore = {EC_WORD_IS, EC_WORD_SON, EC_WORD_POKEDEX, EC_WORD_QUITE, EC_WORD_AWESOME, EC_WORD_QUES},
        .speechWin = {EC_WORD_OH_YEAH, EC_WORD_WOW, EC_WORD_SON, EC_WORD_POKEDEX, EC_WORD_IS, EC_WORD_SUPER},
        .speechLose = {EC_WORD_A, EC_WORD_AVANT_GARDE, EC_WORD_POKEDEX, EC_WORD_COULD, EC_WORD_SUPER, EC_WORD_HIS},
        .monSet = gBattleFrontierTrainerMons_Jazlyn
    },
    [FRONTIER_TRAINER_ZACHERY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("DONATO"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_OF, EC_WORD_PLACE, EC_WORD_FOR, EC_WORD_ME, EC_WORD_ALONE},
        .speechWin = {EC_WORD_ABSOLUTELY, EC_WORD_TIME, EC_WORD_IS, EC_WORD_BEAUTIFUL, EC_WORD_FOR, EC_WORD_ME},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_MY, EC_WORD_HAPPINESS, EC_WORD_SMALL, EC_WORD_MAKE},
        .monSet = gBattleFrontierTrainerMons_Zachery
    },
    [FRONTIER_TRAINER_JOHAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("ALEX"),
        .speechBefore = {EC_WORD_SOON, EC_WORD_BECOMES, EC_WORD_THE, EC_WORD_WINTER, EC_WORD_COME, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MY, EC_WORD_ALLOWANCE, EC_WORD_COULD, EC_WORD_BETTER, EC_WORD_HIS, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_I_VE, EC_WORD_ALWAYS, EC_WORD_TO, EC_WORD_A_TINY_BIT, EC_WORD_ALLOWANCE, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Johan
    },
    [FRONTIER_TRAINER_SHEA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("FIONA"),
        .speechBefore = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_WHO_WAS, EC_WORD_BEAUTY, EC_WORD_FAINT, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOURS, EC_WORD_WAY, EC_WORD_TO, EC_WORD_FIGHT, EC_WORD_IS, EC_WORD_UGLY},
        .speechLose = {EC_WORD_WHAT, EC_WORD_IS, EC_WORD_BEAUTY, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Shea
    },
    [FRONTIER_TRAINER_KAILA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("WIENCKE"),
        .speechBefore = {EC_WORD_I, EC_WORD_NEED, EC_WORD_SOMETHING, EC_WORD_TO, EC_WORD_DRINK, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_MY, EC_WORD_DRINK, EC_WORD_MUST_BE, EC_WORD_COLD, EC_WORD_HIS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_LOSE, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_VERY, EC_WORD_REFRESHING, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Kaila
    },
    [FRONTIER_TRAINER_ISIAH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("ED"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_WEREN_T, EC_WORD_SO, EC_WORD_STUDY, EC_WORD_HOW_DO, EC_WORD_I},
        .speechWin = {EC_WORD_MOTHER, EC_WORD_MUST_BE, EC_WORD_MYSELF, EC_WORD_MORE, EC_WORD_ALLOWANCE, EC_WORD_GIVE},
        .speechLose = {EC_WORD_STUDY, EC_WORD_DOESN_T, EC_WORD_DON_T, EC_WORD_THINK, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Isiah
    },
    [FRONTIER_TRAINER_GARRETT] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("MICHEL"),
        .speechBefore = {EC_WORD_COMICS, EC_WORD_AND, EC_WORD_THIS, EC_WORD_GAME, EC_WORD_THOSE, EC_WORD_FANTASTIC},
        .speechWin = {EC_WORD_THIS, EC_WORD_MUSIC, EC_WORD_IDOL, EC_WORD_IS, EC_WORD_TOO, EC_WORD_GREAT},
        .speechLose = {EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_MORE, EC_WORD_STUDY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Garrett
    },
    [FRONTIER_TRAINER_HAYLIE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("EGIA"),
        .speechBefore = {EC_WORD_CARE, EC_WORD_MAKE, EC_WORD_SLEEP, EC_WORD_IMPOSSIBLE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_A, EC_WORD_VICTORY, EC_WORD_GIVES, EC_WORD_MYSELF, EC_MOVE2(CALM_MIND), EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHO_WAS, EC_WORD_INSOMNIA, EC_WORD_BECOMES, EC_WORD_AWFUL, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Haylie
    },
    [FRONTIER_TRAINER_MEGAN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("MAIKE"),
        .speechBefore = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_ON, EC_WORD_A, EC_MOVE(AROMATHERAPY), EC_WORD_BATH},
        .speechWin = {EC_WORD_A, EC_WORD_CLEAR_BODY, EC_WORD_DOESN_T, EC_WORD_HEALTHY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_ABSOLUTELY, EC_MOVE(AROMATHERAPY), EC_WORD_IS, EC_WORD_A_LOT, EC_WORD_TO, EC_WORD_EXPENSIVE},
        .monSet = gBattleFrontierTrainerMons_Megan
    },
    [FRONTIER_TRAINER_ISSAC] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("EDMUND"),
        .speechBefore = {EC_WORD_WHAT, EC_WORD_QUES, EC_WORD_MY, EC_EMPTY_WORD, EC_WORD_HOBBY, EC_WORD_QUES},
        .speechWin = {EC_WORD_ABSOLUTELY, EC_MOVE2(WATER_SPORT), EC_WORD_MOVE, EC_WORD_IS, EC_WORD_GREAT, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_MOVE2(MUD_SPORT), EC_WORD_IS, EC_WORD_DON_T, EC_WORD_VERY, EC_WORD_ALL_RIGHT, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Issac
    },
    [FRONTIER_TRAINER_QUINTON] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("EGIL"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_TOO_WEAK, EC_WORD_THAT, EC_WORD_DOESN_T, EC_WORD_ME, EC_WORD_SAD},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_DON_T, EC_WORD_TOO_STRONG, EC_WORD_FOR, EC_WORD_ME, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_HEY_QUES, EC_WORD_HOW_DO, EC_WORD_IS, EC_WORD_THAT, EC_WORD_EVENT, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Quinton
    },
    [FRONTIER_TRAINER_SALMA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("EIBA"),
        .speechBefore = {EC_WORD_YOU_VE, EC_WORD_SEEMS, EC_WORD_VERY, EC_WORD_A_LOT, EC_WORD_HUSTLE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU_VE, EC_WORD_HUSTLE, EC_WORD_BUT, EC_WORD_I, EC_WORD_WIN, EC_WORD_EVEN_SO},
        .speechLose = {EC_WORD_WHAT_S_UP_QUES, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Salma
    },
    [FRONTIER_TRAINER_ANSLEY] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("EILA"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_WAIT, EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_DANCE, EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_BORING, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_NOW, EC_WORD_HAVE, EC_WORD_I, EC_WORD_WAIT, EC_WORD_AND, EC_MOVE2(FRUSTRATION)},
        .monSet = gBattleFrontierTrainerMons_Ansley
    },
    [FRONTIER_TRAINER_HOLDEN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("EGON"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_AT, EC_WORD_FIGHT, EC_WORD_WHO_WAS, EC_WORD_COOLNESS, EC_WORD_COMMEMORATE},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_FOR, EC_WORD_THAT, EC_WORD_PRAISE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_SON, EC_WORD_FIGHTING, EC_WORD_GHOST, EC_WORD_IS, EC_WORD_AMUSING, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Holden
    },
    [FRONTIER_TRAINER_LUCA] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("XAVER"),
        .speechBefore = {EC_WORD_OUR, EC_WORD_FIGHTING, EC_WORD_BECOMES, EC_WORD_SO, EC_WORD_COOL, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_I_VE, EC_WORD_COOL, EC_WORD_WON, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_HELLO, EC_WORD_QUES, EC_WORD_I_AM, EC_WORD_ONLY, EC_WORD_A, EC_WORD_KID},
        .monSet = gBattleFrontierTrainerMons_Luca
    },
    [FRONTIER_TRAINER_JAMISON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("ELIAS"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_MOVE2(SECRET_POWER), EC_WORD_IS, EC_WORD_OVERWHELMING, EC_WORD_FOR, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_THAT, EC_WORD_NOW, EC_WORD_UNDERSTAND, EC_WORD_QUES},
        .speechLose = {EC_WORD_I, EC_WORD_DO, EC_MOVE(SMOKESCREEN), EC_WORD_FOR, EC_WORD_ABSOLUTELY, EC_WORD_ESCAPE},
        .monSet = gBattleFrontierTrainerMons_Jamison
    },
    [FRONTIER_TRAINER_GUNNAR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("ELIO"),
        .speechBefore = {EC_WORD_MY, EC_WORD_OPPONENT, EC_WORD_BECOMES, EC_WORD_NEVER, EC_WORD_WINS, EC_WORD_CAN},
        .speechWin = {EC_WORD_BECOMES, EC_WORD_THAT, EC_WORD_A, EC_MOVE(GRUDGE), EC_WORD_GOT, EC_WORD_QUES},
        .speechLose = {EC_WORD_MUST_BE, EC_WORD_THESE, EC_MOVE(SCARY_FACE), EC_WORD_QUITE, EC_WORD_HIS, EC_WORD_QUES_EXCL},
        .monSet = gBattleFrontierTrainerMons_Gunnar
    },
    [FRONTIER_TRAINER_CRAIG] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("EMANUEL"),
        .speechBefore = {EC_WORD_WHERE, EC_WORD_THOSE, EC_WORD_ONLY, EC_WORD_ABSOLUTELY, EC_WORD_LOCOMOTIVE, EC_WORD_QUES},
        .speechWin = {EC_WORD_ABSOLUTELY, EC_WORD_LOCOMOTIVE, EC_WORD_THOSE, EC_WORD_TOTALLY, EC_WORD_DON_T, EC_WORD_THERE},
        .speechLose = {EC_WORD_ABSOLUTELY, EC_WORD_LOCOMOTIVE, EC_WORD_THOSE, EC_WORD_THERE, EC_WORD_GOOD_BYE, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Craig
    },
    [FRONTIER_TRAINER_PIERCE] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("EMIL"),
        .speechBefore = {EC_WORD_THERE, EC_WORD_WAS, EC_WORD_ONCE, EC_WORD_AN, EC_MOVE2(HEAT_WAVE), EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_AN, EC_MOVE2(HEAT_WAVE), EC_WORD_IS, EC_WORD_DON_T, EC_WORD_BEAUTIFUL, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THERE, EC_WORD_WAS, EC_WORD_TOO, EC_WORD_A, EC_MOVE(HAIL), EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Pierce
    },
    [FRONTIER_TRAINER_REGINA] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ELSE"),
        .speechBefore = {EC_WORD_PLAY, EC_WORD_IN, EC_WORD_WATER, EC_WORD_IS, EC_WORD_BEAUTIFUL, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_ALWAYS, EC_WORD_CHANNEL, EC_WORD_MAKE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_DON_T, EC_WORD_ALL_RIGHT, EC_WORD_IN, EC_WORD_WATER, EC_WORD_PLAY},
        .monSet = gBattleFrontierTrainerMons_Regina
    },
    [FRONTIER_TRAINER_ALISON] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ELSBETH"),
        .speechBefore = {EC_WORD_THIS, EC_WORD_KINDERGARTEN, EC_WORD_MAGAZINE, EC_WORD_IS, EC_WORD_TO, EC_WORD_A_LOT},
        .speechWin = {EC_WORD_HOW_DO, EC_WORD_ANGERS, EC_WORD_MAN, EC_WORD_OF, EC_WORD_TEACHER, EC_WORD_QUES},
        .speechLose = {EC_WORD_WE, EC_WORD_ENJOY, EC_WORD_EAT, EC_WORD_IN, EC_WORD_THE, EC_WORD_SCHOOL},
        .monSet = gBattleFrontierTrainerMons_Alison
    },
    [FRONTIER_TRAINER_HANK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("HANS"),
        .speechBefore = {EC_WORD_SOON, EC_WORD_GIVES, EC_WORD_IT, EC_WORD_BUG, EC_WORD_EVENTS, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SHE, EC_WORD_SHOW, EC_WORD_RANK, EC_WORD_BUG, EC_WORD_FASHION, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THOSE, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_AWFUL, EC_WORD_FOR, EC_WORD_BABE},
        .monSet = gBattleFrontierTrainerMons_Hank
    },
    [FRONTIER_TRAINER_EARL] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("EMMO"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_THAN, EC_WORD_BUG, EC_WORD_TRAINER, EC_WORD_INVINCIBLE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SIMPLE, EC_WORD_INVINCIBLE, EC_WORD_THAN, EC_WORD_BUG, EC_WORD_TRAINER},
        .speechLose = {EC_WORD_NOW, EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_BUG, EC_WORD_FAST, EC_WORD_RUN},
        .monSet = gBattleFrontierTrainerMons_Earl
    },
    [FRONTIER_TRAINER_RAMIRO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("ENRIK"),
        .speechBefore = {EC_WORD_I, EC_WORD_WENT, EC_WORD_OUT, EC_WORD_AN, EC_WORD_FISHING, EC_WORD_SCHOOL},
        .speechWin = {EC_WORD_REALLY, EC_WORD_I_AM, EC_WORD_IN, EC_WORD_THE, EC_WORD_FISHING, EC_WORD_HALL_OF_FAME},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_BACK, EC_WORD_TO, EC_WORD_THE, EC_WORD_SCHOOL},
        .monSet = gBattleFrontierTrainerMons_Ramiro
    },
    [FRONTIER_TRAINER_HUNTER] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("EPHRAIM"),
        .speechBefore = {EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_OF, EC_WORD_COOL, EC_MOVE(CROSS_CHOP), EC_WORD_QUES},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_FOR, EC_WORD_OF, EC_WORD_COOL, EC_MOVE(CROSS_CHOP)},
        .speechLose = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_MAYBE, EC_WORD_A, EC_WORD_MISTAKE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Hunter
    },
    [FRONTIER_TRAINER_AIDEN] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ERLAND"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_WORK, EC_WORD_IS, EC_WORD_HEALTHY, EC_WORD_FOR, EC_WORD_ME},
        .speechWin = {EC_WORD_MAN, EC_WORD_SEES, EC_WORD_DASH, EC_WORD_I_AM, EC_WORD_HEALTHY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_BUT, EC_WORD_TOO, EC_WORD_VERY, EC_WORD_HEALTHY, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Aiden
    },
    [FRONTIER_TRAINER_XAVIER] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ERNST"),
        .speechBefore = {EC_WORD_HEY_THERE, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_LOOKS, EC_WORD_LOOKS, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_GOOD_BYE, EC_WORD_AND, EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_THAT_WAS, EC_WORD_FUNNY},
        .speechLose = {EC_WORD_OOPS, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_OH, EC_WORD_NO, EC_WORD_EXCL_EXCL},
        .monSet = gBattleFrontierTrainerMons_Xavier
    },
    [FRONTIER_TRAINER_CLINTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("INGO"),
        .speechBefore = {EC_WORD_ALSO, EC_WORD_READY, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_MOVE(HYPNOSIS), EC_WORD_QUES},
        .speechWin = {EC_WORD_YOURS, EC_MOVE2(FURY_SWIPES), EC_WORD_IS, EC_WORD_YOURS, EC_WORD_TOUGHNESS, EC_WORD_TRAINER},
        .speechLose = {EC_WORD_TCH, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_I_AM, EC_WORD_TOO_WEAK, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Clinton
    },
    [FRONTIER_TRAINER_JESSE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ETZEL"),
        .speechBefore = {EC_WORD_THE, EC_WORD_FIGHTING, EC_WORD_IS, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_WORD_MOTHER},
        .speechWin = {EC_WORD_MOTHER, EC_WORD_BECOMES, EC_WORD_OVER, EC_WORD_ME, EC_WORD_HAPPY, EC_WORD_HIS},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_BACK, EC_WORD_TO, EC_WORD_MOTHER, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Jesse
    },
    [FRONTIER_TRAINER_EDUARDO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("FABIAN"),
        .speechBefore = {EC_WORD_WE, EC_WORD_MAKE, EC_WORD_IN, EC_WORD_THE, EC_WORD_NIGHT, EC_WORD_MUSIC},
        .speechWin = {EC_WORD_NIGHTTIME, EC_WORD_MUSIC, EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_GREAT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_LET_S, EC_WORD_PARTY, EC_WORD_MAKE, EC_WORD_UNTIL, EC_WORD_TO, EC_MOVE(MORNING_SUN)},
        .monSet = gBattleFrontierTrainerMons_Eduardo
    },
    [FRONTIER_TRAINER_HAL] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("HARDI"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_TRENDY, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_HIP_AND, EC_WORD_HAPPENING, EC_WORD_EXCL, EC_WORD_OH_YEAH, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_EVEN_SO, EC_WORD_TRENDY, EC_WORD_EXCL, EC_WORD_THANK_YOU, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Hal
    },
    [FRONTIER_TRAINER_GAGE] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("FABRICE"),
        .speechBefore = {EC_WORD_HERE_GOES, EC_WORD_AN, EC_WORD_HIDDEN, EC_WORD_FLYING, EC_WORD_TYPE, EC_WORD_MOVE},
        .speechWin = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_FLYING, EC_WORD_TYPE, EC_WORD_VICTORY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_IF_I_LOSE, EC_WORD_DASH, EC_WORD_MUST_BE, EC_WORD_I, EC_WORD_FLYING, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Gage
    },
    [FRONTIER_TRAINER_ARNOLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("ARNOLD"),
        .speechBefore = {EC_WORD_MY, EC_WORD_DREAM, EC_WORD_DOESN_T, EC_WORD_ME, EC_WORD_WEIRD, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOURS, EC_MOVE(SCARY_FACE), EC_WORD_WAS, EC_WORD_IN, EC_WORD_MY, EC_WORD_DREAM},
        .speechLose = {EC_WORD_MY, EC_WORD_DREAM, EC_WORD_WAS, EC_WORD_QUITE, EC_WORD_TO, EC_WORD_WEIRD},
        .monSet = gBattleFrontierTrainerMons_Arnold
    },
    [FRONTIER_TRAINER_JARRETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("FRIEDER"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_DANCE, EC_WORD_AS_IF, EC_WORD_IT, EC_WORD_YESTERDAY, EC_WORD_BE},
        .speechWin = {EC_WORD_MY, EC_WORD_DANCE, EC_WORD_IS, EC_WORD_BEAUTIFUL, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_MY, EC_WORD_DANCE, EC_WORD_DON_T, EC_WORD_ENJOY},
        .monSet = gBattleFrontierTrainerMons_Jarrett
    },
    [FRONTIER_TRAINER_GARETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("FEDOR"),
        .speechBefore = {EC_WORD_MY, EC_WORD_GIRL, EC_WORD_GIVES, EC_WORD_MYSELF, EC_WORD_OF, EC_MOVE2(SWEET_KISS)},
        .speechWin = {EC_WORD_MY, EC_WORD_GIRL, EC_WORD_IS, EC_WORD_WHO_WAS, EC_WORD_TREASURE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_AN, EC_WORD_TREASURE, EC_WORD_IS, EC_WORD_NOT, EC_WORD_MONEY, EC_WORD_EXCL_EXCL},
        .monSet = gBattleFrontierTrainerMons_Garett
    },
    [FRONTIER_TRAINER_EMANUEL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("FIDELIO"),
        .speechBefore = {EC_WORD_SMARTNESS, EC_WORD_ALONE, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_WHEN, EC_WORD_VICTORY},
        .speechWin = {EC_WORD_I_AM, EC_WORD_NOT_VERY, EC_WORD_SMART, EC_WORD_BUT, EC_WORD_I_VE, EC_WORD_WON},
        .speechLose = {EC_WORD_HAS, EC_WORD_ME, EC_WORD_A, EC_MOVE2(FAKE_OUT), EC_WORD_DEFEATED, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Emanuel
    },
    [FRONTIER_TRAINER_GUSTAVO] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("FILIPPO"),
        .speechBefore = {EC_MOVE(CHARGE), EC_WORD_EXCL, EC_MOVE(CHARGE), EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU_VE, EC_WORD_BABE, EC_WORD_SURRENDER, EC_WORD_QUES, EC_WORD_THOSE_ARE, EC_WORD_QUES_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_ME, EC_WORD_TOTALLY, EC_WORD_DON_T, EC_WORD_SURRENDER},
        .monSet = gBattleFrontierTrainerMons_Gustavo
    },
    [FRONTIER_TRAINER_KAMERON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("FLAVIO"),
        .speechBefore = {EC_WORD_TAKE_THAT, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_WHO_WAS, EC_WORD_FIERY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WAS, EC_WORD_WHO_WAS, EC_WORD_FIERY, EC_WORD_A, EC_MOVE(ASTONISH), EC_WORD_QUES},
        .speechLose = {EC_WORD_WHO_WAS, EC_WORD_FIERY, EC_WORD_IS, EC_WORD_BORING, EC_WORD_FOR, EC_WORD_BABE},
        .monSet = gBattleFrontierTrainerMons_Kameron
    },
    [FRONTIER_TRAINER_ALFREDO] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("FLORENS"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_FIERY, EC_WORD_GOURMET, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_TASTY, EC_WORD_GOURMET, EC_WORD_VICTORY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_YES, EC_WORD_QUITE, EC_WORD_A, EC_WORD_DISASTER, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Alfredo
    },
    [FRONTIER_TRAINER_RUBEN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("TRUTZ"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANT, EC_WORD_WHEN, EC_WORD_VERSUS, EC_WORD_BABE, EC_WORD_FIGHT},
        .speechWin = {EC_WORD_TIME, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_TO, EC_WORD_GOING, EC_WORD_GOOD_BYE},
        .speechLose = {EC_WORD_TIME, EC_WORD_FOR, EC_WORD_ME, EC_WORD_TO, EC_WORD_GOING, EC_WORD_GOOD_BYE},
        .monSet = gBattleFrontierTrainerMons_Ruben
    },
    [FRONTIER_TRAINER_LAMAR] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("SILVIO"),
        .speechBefore = {EC_WORD_COME_OVER, EC_WORD_A, EC_MOVE2(PRESENT), EC_WORD_FOR, EC_WORD_ME, EC_WORD_QUES},
        .speechWin = {EC_WORD_MMM, EC_WORD_ELLIPSIS, EC_WORD_IT_S, EC_WORD_VERY, EC_WORD_TASTY, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_OH, EC_WORD_IT_S, EC_WORD_A, EC_WORD_GAME, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Lamar
    },
    [FRONTIER_TRAINER_JAXON] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("KONRAD"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_AN, EC_WORD_SHELL_ARMOR, EC_WORD_GOT, EC_WORD_EXCL},
        .speechWin = {EC_WORD_FATHER, EC_WORD_AND, EC_WORD_MOTHER, EC_WORD_ACCEPT, EC_WORD_THAT, EC_WORD_DON_T},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_PLEASE, EC_WORD_AN, EC_WORD_SHELL_ARMOR, EC_WORD_GOT},
        .monSet = gBattleFrontierTrainerMons_Jaxon
    },
    [FRONTIER_TRAINER_LOGAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("FONS"),
        .speechBefore = {EC_WORD_IF_I_LOSE, EC_WORD_LEARN, EC_WORD_I, EC_WORD_FOR, EC_WORD_ABSOLUTELY, EC_WORD_SCHOOL},
        .speechWin = {EC_WORD_I, EC_WORD_AND, EC_WORD_STUDY, EC_WORD_QUES, EC_WORD_LIKELY_TO, EC_WORD_NEVER},
        .speechLose = {EC_WORD_NO, EC_WORD_THANK_YOU, EC_WORD_I, EC_WORD_NEED, EC_WORD_NOW, EC_WORD_SLEEP},
        .monSet = gBattleFrontierTrainerMons_Logan
    },
    [FRONTIER_TRAINER_EMILEE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("FLORA"),
        .speechBefore = {EC_WORD_IS, EC_WORD_THESE, EC_WORD_WAY, EC_WORD_FIGHTING, EC_WORD_OK_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YES, EC_WORD_I_AM, EC_WORD_A, EC_MOVE(ICY_WIND), EC_MOVE2(SURF), EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_YES, EC_WORD_HOW_DO, EC_WORD_A, EC_MOVE(ROCK_SLIDE), EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Emilee
    },
    [FRONTIER_TRAINER_JOSIE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("FOLINA"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_FASHION, EC_WORD_CONTEST, EC_WORD_IS, EC_WORD_PRETTY},
        .speechWin = {EC_WORD_FASHION, EC_WORD_THINGS, EC_WORD_THOSE, EC_WORD_QUITE, EC_WORD_SUPER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_VE, EC_WORD_NONE, EC_WORD_SENSE, EC_WORD_FOR, EC_WORD_FASHION, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Josie
    },
    [FRONTIER_TRAINER_ARMANDO] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("FRANKO"),
        .speechBefore = {EC_WORD_I, EC_WORD_NEED, EC_WORD_MORE, EC_WORD_TYPE, EC_WORD_GRASS, EC_WORD_POKEMON},
        .speechWin = {EC_WORD_TRADE, EC_WORD_PLEASE, EC_WORD_GRASS, EC_WORD_POKEMON, EC_WORD_WITH, EC_WORD_MYSELF},
        .speechLose = {EC_WORD_IT, EC_WORD_GIVES, EC_WORD_DON_T, EC_WORD_THOSE_WERE, EC_WORD_GRASS, EC_WORD_POKEMON},
        .monSet = gBattleFrontierTrainerMons_Armando
    },
    [FRONTIER_TRAINER_SKYLER] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("FOSTER"),
        .speechBefore = {EC_MOVE2(INGRAIN), EC_WORD_IS, EC_WORD_AT, EC_WORD_FIGHT, EC_WORD_MOVE, EC_WORD_NO_1},
        .speechWin = {EC_WORD_THE, EC_WORD_GROUND, EC_WORD_GIVES, EC_WORD_MYSELF, EC_WORD_POWER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_HOW_DO, EC_WORD_A, EC_MOVE(EARTHQUAKE), EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Skyler
    },
    [FRONTIER_TRAINER_RUTH] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("RUTH"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_BATTLE, EC_WORD_ENJOY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_QUITE, EC_WORD_A_LOT, EC_WORD_TO, EC_WORD_SIMPLE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THOSE_WERE, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_DON_T, EC_WORD_TO, EC_WORD_ENJOY},
        .monSet = gBattleFrontierTrainerMons_Ruth
    },
    [FRONTIER_TRAINER_MELODY] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("FRANKA"),
        .speechBefore = {EC_WORD_SUNDAY, EC_WORD_MUST_BE, EC_WORD_A, EC_MOVE2(SUNNY_DAY), EC_WORD_WILL, EC_WORD_EXCL},
        .speechWin = {EC_WORD_BECOMES, EC_WORD_IT, EC_WORD_SOON, EC_WORD_SUNDAY, EC_WORD_HIS, EC_WORD_QUES},
        .speechLose = {EC_WORD_SOON, EC_WORD_BECOMES, EC_WORD_IT, EC_WORD_OF, EC_MOVE(HAIL), EC_WORD_GIVE},
        .monSet = gBattleFrontierTrainerMons_Melody
    },
    [FRONTIER_TRAINER_PEDRO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("FRED"),
        .speechBefore = {EC_WORD_CHANNEL, EC_WORD_IS, EC_WORD_ALL_RIGHT, EC_WORD_FOR, EC_WORD_BABE, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_OF, EC_WORD_OPPONENT, EC_WORD_SIMPLE, EC_WORD_SINK},
        .speechLose = {EC_WORD_UH_OH, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_A, EC_MOVE(WHIRLPOOL), EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Pedro
    },
    [FRONTIER_TRAINER_ERICK] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("FREDRIK"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(TACKLE), EC_WORD_DOESN_T, EC_WORD_BABE, EC_WORD_DONE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_ONLY, EC_WORD_A, EC_WORD_RUN_AWAY, EC_WORD_THINKS, EC_WORD_ON, EC_WORD_ESCAPE},
        .speechLose = {EC_WORD_SON, EC_MOVE(COUNTER), EC_WORD_IS, EC_WORD_A, EC_WORD_WONDER, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Erick
    },
    [FRONTIER_TRAINER_ELAINE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("FRAUKE"),
        .speechBefore = {EC_WORD_THAN, EC_WORD_HEROINE, EC_WORD_NEED, EC_WORD_I, EC_WORD_ADVENTURE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_THAT, EC_WORD_NEED, EC_WORD_I, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I, EC_WORD_KNOWS, EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_AN, EC_WORD_HEROINE},
        .monSet = gBattleFrontierTrainerMons_Elaine
    },
    [FRONTIER_TRAINER_JOYCE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("JOSI"),
        .speechBefore = {EC_WORD_IN, EC_WORD_WATER, EC_WORD_DANCE, EC_WORD_IS, EC_WORD_SUPER, EC_WORD_AHAHA},
        .speechWin = {EC_WORD_LALALA, EC_WORD_LOSE, EC_WORD_GIVES, EC_WORD_IT, EC_WORD_DON_T, EC_WORD_EXCL},
        .speechLose = {EC_WORD_LALALA, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_WORD_EH_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Joyce
    },
    [FRONTIER_TRAINER_TODD] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TIM"),
        .speechBefore = {EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_LIGHTNINGROD, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_WORD_POWER},
        .speechWin = {EC_WORD_MORE, EC_WORD_CAN_T, EC_WORD_YOU, EC_WORD_DON_T, EC_WORD_WITH, EC_MOVE(ABSORB)},
        .speechLose = {EC_WORD_YOU_VE, EC_MOVE2(REFLECT), EC_WORD_VERSUS, EC_WORD_WHO_WAS, EC_WORD_POWER, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Todd
    },
    [FRONTIER_TRAINER_GAVIN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("GAVIN"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_A_LOT, EC_WORD_TIME, EC_WORD_AND, EC_MOVE(BIDE), EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHAT, EC_WORD_QUES, EC_WORD_IS_IT_QUES, EC_WORD_THOSE_ARE, EC_WORD_OFF, EC_WORD_QUES_EXCL},
        .speechLose = {EC_WORD_MY, EC_WORD_MISTAKE, EC_WORD_TIME, EC_WORD_IS, EC_WORD_MONEY, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Gavin
    },
    [FRONTIER_TRAINER_MALORY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("FREIA"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_POKEMON, EC_WORD_WITH, EC_WORD_CUTENESS, EC_WORD_WORKS},
        .speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_TCH, EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_AREN_T, EC_WORD_VERY, EC_WORD_NICE},
        .monSet = gBattleFrontierTrainerMons_Malory
    },
    [FRONTIER_TRAINER_ESTHER] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("FULVIA"),
        .speechBefore = {EC_WORD_A, EC_MOVE2(PRESENT), EC_WORD_MUST_BE, EC_WORD_NICE, EC_WORD_HIS, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_GAME, EC_WORD_GOT},
        .speechLose = {EC_WORD_CARDS, EC_WORD_THAN, EC_MOVE2(PRESENT), EC_WORD_THOSE, EC_WORD_WEAK, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Esther
    },
    [FRONTIER_TRAINER_OSCAR] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("FURIO"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_YOURS, EC_WORD_TOUGHNESS, EC_WORD_WORKS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_EVERY, EC_WORD_QUES, EC_WORD_COME_OVER, EC_WORD_ELLIPSIS_EXCL},
        .speechLose = {EC_WORD_VERY, EC_WORD_FUNNY, EC_WORD_ELLIPSIS, EC_WORD_YOU_RE, EC_WORD_TOO_STRONG, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Oscar
    },
    [FRONTIER_TRAINER_WILSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("GARLIEB"),
        .speechBefore = {EC_WORD_WORK, EC_WORD_IS, EC_WORD_HOW_DO, EC_WORD_A, EC_WORD_EARLY_BIRD, EC_WORD_EXCL},
        .speechWin = {EC_WORD_ONLY, EC_WORD_WORKING, EC_WORD_AND, EC_WORD_NEVER, EC_WORD_PLAY, EC_WORD_ELLIPSIS},
        .speechLose = {EC_MOVE(ENDURE), EC_WORD_IS, EC_WORD_EVERY, EC_WORD_WHAT, EC_WORD_TOTALLY, EC_WORD_GOES},
        .monSet = gBattleFrontierTrainerMons_Wilson
    },
    [FRONTIER_TRAINER_CLARE] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("GALINA"),
        .speechBefore = {EC_WORD_YAY, EC_WORD_EXCL, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_TOUGH, EC_WORD_EXCL},
        .speechWin = {EC_WORD_OI_OI_OI, EC_WORD_EXCL, EC_WORD_A, EC_WORD_WIMPY, EC_WORD_TRAINER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_COOL, EC_WORD_EXCL, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_GENIUS, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Clare
    },
    [FRONTIER_TRAINER_TESS] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("GELI"),
        .speechBefore = {EC_WORD_A, EC_POKEMON(GULPIN), EC_WORD_DESIGN, EC_WORD_WINNER, EC_WORD_IS, EC_WORD_TASTY},
        .speechWin = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_GOURMET, EC_WORD_MYSTERY, EC_WORD_ITEM},
        .speechLose = {EC_WORD_VERY, EC_WORD_TASTY, EC_WORD_AND, EC_WORD_TOO, EC_WORD_REFRESHING, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Tess
    },
    [FRONTIER_TRAINER_LEON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("GERLACH"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_OTHER, EC_WORD_TRAINER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_A, EC_MOVE2(JUMP_KICK), EC_WORD_OFF, EC_WORD_JOY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_NOW, EC_WORD_WANTS, EC_WORD_I, EC_WORD_GO_HOME, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Leon
    },
    [FRONTIER_TRAINER_ALONZO] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("GERSOM"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_TOTALLY, EC_WORD_NEVER, EC_WORD_LOST, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_MAN, EC_WORD_SEES, EC_WORD_YOU_RE, EC_WORD_SAD, EC_WORD_DASH, EC_WORD_ALL_RIGHT},
        .speechLose = {EC_WORD_THAT, EC_WORD_BELIEVE, EC_WORD_I, EC_WORD_SIMPLE, EC_WORD_DON_T, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Alonzo
    },
    [FRONTIER_TRAINER_VINCE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("VITUS"),
        .speechBefore = {EC_WORD_YES, EC_WORD_I_AM, EC_WORD_A, EC_WORD_TOP, EC_WORD_TRAINER, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_YES, EC_WORD_I_AM, EC_WORD_QUITE, EC_WORD_TOP, EC_WORD_RANK, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THAT, EC_WORD_BECOMES, EC_WORD_OF, EC_MOVE(OUTRAGE), EC_WORD_GIVE, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Vince
    },
    [FRONTIER_TRAINER_BRYON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("GERWIG"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(BARRAGE), EC_WORD_IS, EC_MOVE2(SLAM), EC_WORD_FOR, EC_WORD_BABE},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_DON_T, EC_WORD_COUNT_ON, EC_WORD_LESS, EC_WORD_QUES},
        .speechLose = {EC_WORD_I_VE, EC_WORD_THAT, EC_WORD_NOW, EC_WORD_DON_T, EC_WORD_UNDERSTOOD, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Bryon
    },
    [FRONTIER_TRAINER_AVA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("ANKE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_TREASURE, EC_WORD_FOR, EC_WORD_THESE, EC_WORD_WORLD},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_WORLD, EC_WORD_IS, EC_WORD_FULL, EC_WORD_WONDER, EC_WORD_EXCL},
        .speechLose = {EC_WORD_WHY, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_SO, EC_WORD_TERRIBLE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Ava
    },
    [FRONTIER_TRAINER_MIRIAM] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("MIRIAM"),
        .speechBefore = {EC_WORD_OH_QUES, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_WITH, EC_MOVE(SCARY_FACE), EC_WORD_EXCL},
        .speechWin = {EC_WORD_AHAHA, EC_WORD_ONLY, EC_WORD_SON, EC_WORD_LOOK, EC_WORD_IS, EC_WORD_AWFUL},
        .speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_AWFULLY, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Miriam
    },
    [FRONTIER_TRAINER_CARRIE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("CALLA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_GUTSY, EC_WORD_DASH, EC_WORD_YOU, EC_WORD_TOO, EC_WORD_QUES},
        .speechWin = {EC_WORD_IT_S, EC_WORD_EVERY, EC_WORD_ONLY, EC_WORD_GUTS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_UH_OH, EC_WORD_EXCL, EC_WORD_I, EC_WORD_NEED, EC_WORD_A, EC_MOVE(SELF_DESTRUCT)},
        .monSet = gBattleFrontierTrainerMons_Carrie
    },
    [FRONTIER_TRAINER_GILLIAN2] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("GESA"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_SEEK, EC_WORD_TRULY, EC_WORD_GREAT, EC_WORD_FIGHT},
        .speechWin = {EC_WORD_A, EC_WORD_FIGHTING, EC_WORD_MUST_BE, EC_WORD_A_LOT, EC_WORD_BETTER, EC_WORD_HIS},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_A_LITTLE, EC_WORD_TO, EC_WORD_BIG, EC_WORD_FOR, EC_WORD_ME},
        .monSet = gBattleFrontierTrainerMons_Gillian2
    },
    [FRONTIER_TRAINER_TYLER] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("GUNTER"),
        .speechBefore = {EC_WORD_YO, EC_WORD_EXCL, EC_EMPTY_WORD, EC_WORD_ALSO, EC_WORD_GO, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_YO, EC_WORD_EXCL, EC_WORD_I_VE, EC_WORD_WON, EC_WORD_YO, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YO, EC_WORD_EXCL, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_YO, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Tyler
    },
    [FRONTIER_TRAINER_CHAZ] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("MICHEL"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_SIMPLE, EC_WORD_TOO_STRONG, EC_WORD_EXCL},
        .speechWin = {EC_WORD_NOW, EC_WORD_GOT, EC_WORD_SHE, EC_WORD_TOTALLY, EC_WORD_MORE, EC_WORD_POWER},
        .speechLose = {EC_WORD_HMM, EC_WORD_THEY_VE, EC_WORD_TO, EC_WORD_A_LOT, EC_WORD_POWER, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Chaz
    },
    [FRONTIER_TRAINER_NELSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NINO"),
        .speechBefore = {EC_WORD_BECOMES, EC_WORD_THIS, EC_WORD_POKEMON, EC_WORD_ALL_RIGHT, EC_WORD_FIGHT, EC_WORD_QUES},
        .speechWin = {EC_WORD_IT, EC_WORD_WAS, EC_WORD_QUITE, EC_WORD_VERY, EC_WORD_TOUGH, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I, EC_WORD_MODE, EC_WORD_I_WAS, EC_WORD_DON_T, EC_WORD_QUITE, EC_WORD_ALL_RIGHT},
        .monSet = gBattleFrontierTrainerMons_Nelson
    },
    [FRONTIER_TRAINER_SHANIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("TRAUDE"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_ADORE, EC_WORD_ME, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_WITH, EC_WORD_CUTE_CHARM, EC_WORD_DOESN_T, EC_WORD_JOY},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_SO, EC_WORD_MEAN, EC_WORD_TO, EC_WORD_CUTE, EC_WORD_POKEMON},
        .monSet = gBattleFrontierTrainerMons_Shania
    },
    [FRONTIER_TRAINER_STELLA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("GINA"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_WORKS, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THOSE, EC_WORD_SHE, EC_WORD_DON_T, EC_WORD_SOMETHING, EC_WORD_BORING, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_QUITE, EC_WORD_UNBELIEVABLE, EC_WORD_ALL_RIGHT},
        .monSet = gBattleFrontierTrainerMons_Stella
    },
    [FRONTIER_TRAINER_DORINE] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("GIESE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_YOUNG, EC_WORD_AND, EC_WORD_TOUGH, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_QUITE, EC_WORD_ALL_RIGHT, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT, EC_WORD_GOES, EC_WORD_SO, EC_WORD_SIMPLE, EC_WORD_DON_T, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Dorine
    },
    [FRONTIER_TRAINER_MADDOX] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("GIORGIO"),
        .speechBefore = {EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_WHO_WAS, EC_WORD_CHOICE, EC_WORD_NO_1},
        .speechWin = {EC_WORD_WITH, EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_WHEN_I_WIN, EC_WORD_ALWAYS, EC_WORD_EXCL},
        .speechLose = {EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_WEREN_T, EC_WORD_DON_T, EC_WORD_LOSE, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Maddox
    },
    [FRONTIER_TRAINER_DAVIN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("GISMAR"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_YOURS, EC_MOVE2(ROAR), EC_WORD_HEAR, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WROOOAAR_EXCL, EC_WORD_EXCL, EC_WORD_WON, EC_WORD_EXCL_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WROOOAAR_EXCL, EC_WORD_EXCL, EC_WORD_WHY, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Davin
    },
    [FRONTIER_TRAINER_TREVON] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("GLEN"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_ALWAYS, EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_GOT},
        .speechWin = {EC_WORD_WITH, EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_IS, EC_WORD_EVERY, EC_WORD_PERFECT},
        .speechLose = {EC_WORD_WITH, EC_WORD_DRAGON, EC_WORD_POKEMON, EC_WORD_IS, EC_WORD_IT, EC_WORD_DESTROYED},
        .monSet = gBattleFrontierTrainerMons_Trevon
    },
    [FRONTIER_TRAINER_MATEO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("GODWIN"),
        .speechBefore = {EC_WORD_WE, EC_WORD_WEREN_T, EC_WORD_SOON, EC_WORD_DONE, EC_WORD_HIS, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YES, EC_WORD_THAT_WAS, EC_WORD_QUITE, EC_WORD_FAST, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHAT, EC_WORD_I_WAS, EC_WORD_SO, EC_WORD_FAST, EC_WORD_NO_MATCH, EC_WORD_QUES_EXCL},
        .monSet = gBattleFrontierTrainerMons_Mateo
    },
    [FRONTIER_TRAINER_BRET] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("BILL"),
        .speechBefore = {EC_WORD_ROCK_SOLID, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_SIMPLE, EC_WORD_INVINCIBLE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_EVERY, EC_WORD_GOES, EC_WORD_WITH, EC_WORD_THOSE_WERE, EC_WORD_TOUGHNESS, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_VE, EC_WORD_TOO, EC_WORD_AN, EC_WORD_PLUSH_DOLL, EC_WORD_COLLECTION, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Bret
    },
    [FRONTIER_TRAINER_RAUL] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("LIONEL"),
        .speechBefore = {EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_WEAK, EC_WORD_TRAINER, EC_WORD_REJECT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_HUMPH, EC_WORD_EXCL, EC_WORD_A, EC_WORD_WEAK, EC_WORD_TRAINER, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_QUITE, EC_WORD_NONE, EC_WORD_WEAK, EC_WORD_TRAINER, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Raul
    },
    [FRONTIER_TRAINER_KAY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("HELEN"),
        .speechBefore = {EC_WORD_AND, EC_WORD_QUES, EC_WORD_TOTALLY, EC_WORD_ONCE, EC_WORD_FIGHT, EC_WORD_QUES},
        .speechWin = {EC_WORD_I_VE, EC_WORD_WON, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_TIRED, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_FINALLY, EC_WORD_IS, EC_WORD_THE, EC_WORD_FIGHTING, EC_WORD_OFF, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Kay
    },
    [FRONTIER_TRAINER_ELENA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("GITTE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_FIGHTING, EC_WORD_GIRL, EC_WORD_YEAH, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THOSE, EC_WORD_FIGHTING, EC_WORD_GIRL, EC_WORD_DON_T, EC_WORD_COOL, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_FIGHTING, EC_WORD_GIRL, EC_WORD_DISLIKE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Elena
    },
    [FRONTIER_TRAINER_ALANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("GISA"),
        .speechBefore = {EC_WORD_MY, EC_WORD_ATTACK, EC_WORD_BECOMES, EC_WORD_INVINCIBLE, EC_WORD_HIS, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU_VE, EC_WORD_TOTALLY, EC_WORD_A_LOT, EC_WORD_TO, EC_WORD_STUDY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_SO, EC_WORD_A_LOT, EC_WORD_TO, EC_WORD_ATTACK, EC_WORD_AND, EC_WORD_INVINCIBLE},
        .monSet = gBattleFrontierTrainerMons_Alana
    },
    [FRONTIER_TRAINER_ALEXAS] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("GORDON"),
        .speechBefore = {EC_WORD_BEAUTIFUL, EC_WORD_BABE, EC_WORD_TO, EC_WORD_WORKS, EC_WORD_YOUNG, EC_WORD_TRAINER},
        .speechWin = {EC_WORD_WAHAHAHA, EC_WORD_EXCL, EC_WORD_YOU_VE, EC_WORD_BABE, EC_WORD_SURRENDER, EC_WORD_EXCL_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_TOUGH, EC_WORD_TRAINER, EC_WORD_KID, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Alexas
    },
    [FRONTIER_TRAINER_WESTON] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("GOSBERT"),
        .speechBefore = {EC_WORD_IT_S, EC_WORD_NONE, EC_WORD_GAME, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_YOU_RE, EC_WORD_VERY, EC_WORD_EASY, EC_WORD_TO, EC_WORD_FAINT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YES, EC_WORD_YES, EC_WORD_ELLIPSIS, EC_WORD_I_VE, EC_WORD_ME, EC_WORD_SURRENDER},
        .monSet = gBattleFrontierTrainerMons_Weston
    },
    [FRONTIER_TRAINER_JASPER] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("GÖTZ"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_OLD, EC_WORD_I_AM, EC_WORD_SKILLED, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YUP, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_VERY, EC_WORD_SKILLED, EC_WORD_EXCL},
        .speechLose = {EC_WORD_OH, EC_WORD_NO, EC_WORD_I_AM, EC_WORD_QUITE, EC_WORD_SHOCKED, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Jasper
    },
    [FRONTIER_TRAINER_NADIA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("GULIA"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_ME, EC_WORD_DON_T, EC_WORD_SMITE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_HAH, EC_WORD_EXCL, EC_WORD_I_VE, EC_WORD_BABE, EC_WORD_DEFEATED, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DONE, EC_WORD_AND, EC_WORD_DOWNCAST, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Nadia
    },
    [FRONTIER_TRAINER_MIRANDA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("GUNDEL"),
        .speechBefore = {EC_WORD_ALSO, EC_WORD_ALL_RIGHT, EC_WORD_LET_S, EC_WORD_FIGHT, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WHAT_S_UP_QUES, EC_WORD_YOU_RE, EC_WORD_AROUND, EC_WORD_THOSE_ARE, EC_WORD_DEFEATED, EC_WORD_QUES},
        .speechLose = {EC_WORD_YES, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_QUITE, EC_WORD_TOO_WEAK, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Miranda
    },
    [FRONTIER_TRAINER_EMMA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("ELKE"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_HEARING, EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_QUES},
        .speechWin = {EC_WORD_I_VE, EC_WORD_ME, EC_WORD_MISHEARD, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_I_VE, EC_WORD_CORRECT, EC_WORD_HEARING, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Emma
    },
    [FRONTIER_TRAINER_ROLANDO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("NEPOMUK"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_SUPER, EC_WORD_HERO, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_THOSE_WERE, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_OF, EC_WORD_HERO, EC_WORD_DON_T, EC_WORD_SMITE},
        .monSet = gBattleFrontierTrainerMons_Rolando
    },
    [FRONTIER_TRAINER_STANLY] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("SÖREN"),
        .speechBefore = {EC_WORD_THE, EC_WORD_FIGHTING, EC_WORD_VERSUS, EC_WORD_BABE, EC_WORD_BECOMES, EC_WORD_EASY},
        .speechWin = {EC_WORD_HAH, EC_WORD_THAT, EC_WORD_WAS, EC_WORD_QUITE, EC_WORD_EASY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_AND, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_NOW, EC_WORD_HAPPY, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Stanly
    },
    [FRONTIER_TRAINER_DARIO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("DARIO"),
        .speechBefore = {EC_WORD_MY, EC_MOVE2(FORESIGHT), EC_WORD_SAYS, EC_WORD_I, EC_WORD_WON_T, EC_WORD_LOSE},
        .speechWin = {EC_WORD_MY, EC_MOVE2(FORESIGHT), EC_WORD_IS, EC_WORD_QUITE, EC_WORD_PERFECT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_SON, EC_MOVE(REVERSAL), EC_WORD_WAS, EC_WORD_IMPOSSIBLE, EC_WORD_TO, EC_WORD_WORKS},
        .monSet = gBattleFrontierTrainerMons_Dario
    },
    [FRONTIER_TRAINER_KARLEE] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("GWEN"),
        .speechBefore = {EC_WORD_THAT, EC_WORD_BECOMES, EC_WORD_ALL_RIGHT, EC_WORD_OFF, EC_WORD_GOING, EC_WORD_EXCL},
        .speechWin = {EC_WORD_THIS, EC_WORD_END, EC_WORD_IS, EC_WORD_REALLY, EC_WORD_FANTASTIC, EC_WORD_EXCL},
        .speechLose = {EC_WORD_THIS, EC_WORD_END, EC_WORD_IS, EC_WORD_ALL_RIGHT, EC_WORD_FOR, EC_WORD_BABE},
        .monSet = gBattleFrontierTrainerMons_Karlee
    },
    [FRONTIER_TRAINER_JAYLIN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("GUTTA"),
        .speechBefore = {EC_WORD_ALL, EC_WORD_TRAINER, EC_WORD_BEEN, EC_WORD_UNTIL, EC_WORD_NOW, EC_WORD_TOO_WEAK},
        .speechWin = {EC_WORD_THE, EC_WORD_FIGHTING, EC_WORD_WAS, EC_WORD_A, EC_MOVE(YAWN), EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_A, EC_MOVE(YAWN), EC_WORD_AND, EC_WORD_THOSE_ARE, EC_WORD_IF_I_LOSE, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Jaylin
    },
    [FRONTIER_TRAINER_INGRID] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("HANNAH"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_MEAN, EC_WORD_THAN, EC_WORD_TRAINER, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WAS, EC_WORD_THE, EC_WORD_FIGHTING, EC_WORD_DON_T, EC_WORD_ALL_RIGHT, EC_WORD_QUES},
        .speechLose = {EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_YOU_RE, EC_WORD_MEAN, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Ingrid
    },
    [FRONTIER_TRAINER_DELILAH] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("LORE"),
        .speechBefore = {EC_WORD_NONE, EC_MOVE(GRUDGE), EC_WORD_PLEASE, EC_WORD_IF, EC_WORD_LET_ME_WIN, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_IS_IT_QUES, EC_WORD_SAD, EC_WORD_YOURS, EC_WORD_ANGER, EC_WORD_TO, EC_WORD_WORKS},
        .speechLose = {EC_WORD_THAT, EC_WORD_BECOMES, EC_WORD_A, EC_MOVE(GRUDGE), EC_WORD_GOT, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Delilah
    },
    [FRONTIER_TRAINER_CARLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("HEDWIG"),
        .speechBefore = {EC_WORD_I, EC_WORD_SCATTER, EC_WORD_SOMETHING, EC_MOVE2(POISON_POWDER), EC_WORD_ABOUT, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_SCARY, EC_WORD_HOW_DO, EC_WORD_ALL_RIGHT, EC_WORD_WHO_WAS, EC_WORD_STRATEGY, EC_WORD_IS},
        .speechLose = {EC_WORD_YOU, EC_WORD_AND, EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_MEAN},
        .monSet = gBattleFrontierTrainerMons_Carly
    },
    [FRONTIER_TRAINER_LEXIE] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("HEIDRUN"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_SCARY, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_DON_T, EC_WORD_CORRECT, EC_WORD_SCARY, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_BUT, EC_WORD_TOO, EC_WORD_SCARY},
        .monSet = gBattleFrontierTrainerMons_Lexie
    },
    [FRONTIER_TRAINER_MILLER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MARIUS"),
        .speechBefore = {EC_WORD_HELLO, EC_WORD_QUES, EC_WORD_HELLO, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_HELLO, EC_EMPTY_WORD, EC_WORD_MOTHER, EC_WORD_I_VE, EC_WORD_WON, EC_WORD_EXCL},
        .speechLose = {EC_WORD_MY, EC_WORD_PHONE, EC_WORD_GOES, EC_WORD_DON_T, EC_WORD_MORE, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Miller
    },
    [FRONTIER_TRAINER_MARV] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MALTE"),
        .speechBefore = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_YOURS, EC_MOVE(SWAGGER), EC_WORD_NOW, EC_WORD_FORGET},
        .speechWin = {EC_MOVE(SWAGGER), EC_WORD_DOESN_T, EC_WORD_A_TINY_BIT, EC_WORD_JOY, EC_WORD_WHAT, EC_WORD_QUES},
        .speechLose = {EC_WORD_ONLY, EC_WORD_GO_AHEAD, EC_WORD_WITH, EC_WORD_YOUR, EC_MOVE(SWAGGER), EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Marv
    },
    [FRONTIER_TRAINER_LAYTON] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("HEIMO"),
        .speechBefore = {EC_WORD_I, EC_WORD_KNOWS, EC_WORD_I_AM, EC_WORD_SUPER, EC_WORD_COOL, EC_WORD_EXCL},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_ME, EC_WORD_NOW, EC_WORD_ADORE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_RE, EC_WORD_SO, EC_WORD_COOL, EC_WORD_EXCL, EC_WORD_REALLY, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Layton
    },
    [FRONTIER_TRAINER_BROOKS] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("TANKO"),
        .speechBefore = {EC_WORD_OUR, EC_WORD_FIGHTING, EC_WORD_LEVEL, EC_WORD_BECOMES, EC_WORD_HIGH, EC_WORD_HIS},
        .speechWin = {EC_WORD_THE, EC_WORD_LEVEL, EC_WORD_WAS, EC_WORD_QUITE, EC_WORD_HIGH, EC_WORD_EXCITING},
        .speechLose = {EC_WORD_SON, EC_WORD_FIGHTING, EC_WORD_LEVEL, EC_WORD_IS, EC_WORD_TO, EC_WORD_HIGH},
        .monSet = gBattleFrontierTrainerMons_Brooks
    },
    [FRONTIER_TRAINER_GREGORY] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("JOHANN"),
        .speechBefore = {EC_WORD_MY, EC_WORD_AGE, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_TO, EC_WORD_HIGH},
        .speechWin = {EC_WORD_MY, EC_WORD_AGE, EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_PERFECT, EC_WORD_EXCL},
        .speechLose = {EC_WORD_PLEASE, EC_WORD_QUES, EC_WORD_IT_S, EC_WORD_MY, EC_WORD_AGE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Gregory
    },
    [FRONTIER_TRAINER_REESE] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("TOM"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_THERE, EC_WORD_SO, EC_WORD_THINGS, EC_WORD_ELLIPSIS, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_INSTEAD, EC_WORD_A_TINY_BIT, EC_WORD_EAT, EC_WORD_DO, EC_WORD_BETTER, EC_WORD_SPORTS},
        .speechLose = {EC_WORD_BOOK, EC_WORD_THOSE, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_THE, EC_WORD_TELEVISION},
        .monSet = gBattleFrontierTrainerMons_Reese
    },
    [FRONTIER_TRAINER_MASON] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("MAREK"),
        .speechBefore = {EC_WORD_BE, EC_WORD_PLEASE, EC_WORD_DON_T, EC_WORD_TO, EC_WORD_SCARY, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_NOW, EC_WORD_HAPPY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DISAPPOINTED, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Mason
    },
    [FRONTIER_TRAINER_TOBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("TOBIAS"),
        .speechBefore = {EC_WORD_LISTENING, EC_WORD_EXCL, EC_WORD_I, EC_WORD_WIN, EC_WORD_ALWAYS, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_I_AM, EC_WORD_SIMPLE, EC_WORD_A, EC_WORD_GENIUS, EC_WORD_DON_T, EC_WORD_QUES},
        .speechLose = {EC_WORD_BUT, EC_WORD_WHO_WAS, EC_WORD_SMARTNESS, EC_WORD_OVER, EC_WORD_MEETS, EC_WORD_YOURS},
        .monSet = gBattleFrontierTrainerMons_Toby
    },
    [FRONTIER_TRAINER_DOROTHY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("HELENA"),
        .speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_SPORTS, EC_WORD_WORLD, EC_WORD_MUST_BE, EC_WORD_POKEMON, EC_WORD_ACCEPT},
        .speechWin = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_THE, EC_WORD_VICTORY, EC_WORD_WAS, EC_WORD_REFRESHING},
        .speechLose = {EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_LOSE, EC_WORD_WAS, EC_WORD_REFRESHING, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Dorothy
    },
    [FRONTIER_TRAINER_PIPER] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("HELGA"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_OF, EC_WORD_SPEED_BOOST, EC_WORD_GOT},
        .speechWin = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_MORE, EC_WORD_GUTS, EC_WORD_USE, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_OH, EC_WORD_YOU, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Piper
    },
    [FRONTIER_TRAINER_FINN] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ISAAK"),
        .speechBefore = {EC_WORD_DON_T, EC_WORD_TOTALLY, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_FIGHTING, EC_WORD_ELLIPSIS},
        .speechWin = {EC_WORD_BECOMES, EC_WORD_THAT, EC_WORD_NEVER, EC_WORD_A, EC_WORD_END, EC_WORD_GOT},
        .speechLose = {EC_WORD_FINALLY, EC_WORD_ONCE, EC_WORD_TIME, EC_WORD_FOR, EC_WORD_SOMETHING, EC_MOVE2(REST)},
        .monSet = gBattleFrontierTrainerMons_Finn
    },
    [FRONTIER_TRAINER_SAMIR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SAMIR"),
        .speechBefore = {EC_WORD_I_AM, EC_MOVE2(DIVE), EC_WORD_AND, EC_WORD_TOO, EC_MOVE2(SURF), EC_WORD_EXCL},
        .speechWin = {EC_WORD_YAHOO, EC_WORD_BE, EC_WORD_TOO, EC_WORD_ONCE, EC_WORD_A, EC_MOVE2(DIVE)},
        .speechLose = {EC_WORD_YOU, EC_WORD_ENJOYS, EC_WORD_ME, EC_WORD_TO, EC_WORD_SINK, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Samir
    },
    [FRONTIER_TRAINER_FIONA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("HELLA"),
        .speechBefore = {EC_WORD_IS, EC_WORD_MAYBE, EC_WORD_LIMBER, EC_WORD_YOURS, EC_WORD_TOUGHNESS, EC_WORD_QUES},
        .speechWin = {EC_WORD_MAN, EC_WORD_MUST_BE, EC_WORD_READY, EC_WORD_HIS, EC_WORD_FOR, EC_WORD_EVERY},
        .speechLose = {EC_WORD_I_VE, EC_WORD_DON_T, EC_WORD_THOSE_WERE, EC_WORD_LIMBER, EC_WORD_ELLIPSIS, EC_WORD_SIGH},
        .monSet = gBattleFrontierTrainerMons_Fiona
    },
    [FRONTIER_TRAINER_GLORIA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("GLORIA"),
        .speechBefore = {EC_WORD_MOVE, EC_WORD_WITH, EC_WORD_SUCTION_CUPS, EC_WORD_IS, EC_WORD_INCREDIBLE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_YOU_RE, EC_WORD_DONE, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_HOW_DO, EC_WORD_GOES, EC_WORD_ABSOLUTELY, EC_WORD_SUCTION_CUPS, EC_WORD_MOVE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Gloria
    },
    [FRONTIER_TRAINER_NICO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("NIKO"),
        .speechBefore = {EC_WORD_I_VE_ARRIVED, EC_WORD_EXCL, EC_WORD_HOW_DO, EC_WORD_WITH, EC_MOVE(SONIC_BOOM), EC_WORD_EXCL},
        .speechWin = {EC_WORD_SAD, EC_WORD_BABE, EC_WORD_SO, EC_WORD_DOWNCAST, EC_WORD_TO, EC_WORD_WORKS},
        .speechLose = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_WITH, EC_MOVE(SONIC_BOOM), EC_WORD_SPEED_BOOST, EC_WORD_GOING},
        .monSet = gBattleFrontierTrainerMons_Nico
    },
    [FRONTIER_TRAINER_JEREMY] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("JENS"),
        .speechBefore = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_MASTER, EC_WORD_IT_S, EC_WORD_MY, EC_WORD_DREAM},
        .speechWin = {EC_WORD_MY, EC_WORD_DREAM, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_MORE, EC_WORD_FAR},
        .speechLose = {EC_WORD_MY, EC_WORD_DREAM, EC_WORD_BECOMES, EC_WORD_NEVER, EC_WORD_TRULY, EC_WORD_HIS},
        .monSet = gBattleFrontierTrainerMons_Jeremy
    },
    [FRONTIER_TRAINER_CAITLIN] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("ISOLDE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_CUTE, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_AM, EC_WORD_MORE, EC_WORD_THAN, EC_WORD_ONLY, EC_WORD_CUTE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_MY, EC_WORD_CUTE_CHARM, EC_WORD_HAS, EC_WORD_NONE, EC_MOVE2(ATTRACT), EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Caitlin
    },
    [FRONTIER_TRAINER_REENA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("REGINA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_ALWAYS, EC_WORD_HAPPY, EC_WORD_HAPPY, EC_WORD_HAPPY, EC_WORD_EXCL_EXCL},
        .speechWin = {EC_WORD_OH, EC_WORD_YAHOO, EC_WORD_HOO_HAH, EC_WORD_OUT, EC_WORD_ME, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YAHOO, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_HAPPY, EC_WORD_FOR, EC_WORD_BABE},
        .monSet = gBattleFrontierTrainerMons_Reena
    },
    [FRONTIER_TRAINER_AVERY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("OLAF"),
        .speechBefore = {EC_WORD_I_VE, EC_WORD_SO, EC_WORD_MUCH, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_EXCL},
        .speechWin = {EC_WORD_ALL, EC_WORD_WHO_WAS, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_UNBELIEVABLE},
        .speechLose = {EC_WORD_ALL, EC_WORD_WHO_WAS, EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_UPSIDE_DOWN},
        .monSet = gBattleFrontierTrainerMons_Avery
    },
    [FRONTIER_TRAINER_LIAM] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("GEORG"),
        .speechBefore = {EC_WORD_FIRE, EC_WORD_AND, EC_WORD_FLYING, EC_WORD_IS, EC_WORD_WELL, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_BUG, EC_WORD_POKEMON, EC_WORD_AREN_T, EC_WORD_WELL, EC_WORD_WHAT, EC_WORD_QUES},
        .speechLose = {EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_BUG, EC_WORD_DISLIKE, EC_WORD_WHAT, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Liam
    },
    [FRONTIER_TRAINER_THEO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("THEO"),
        .speechBefore = {EC_WORD_FISHING, EC_WORD_IS, EC_WORD_QUITE, EC_WORD_MY, EC_WORD_LIFE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WATER, EC_WORD_POKEMON, EC_WORD_GOT, EC_MOVE2(ATTRACT), EC_WORD_WITHOUT, EC_WORD_END},
        .speechLose = {EC_WORD_THAT, EC_WORD_BECOMES, EC_WORD_DON_T, EC_WORD_THAT_S, EC_WORD_EVENT, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Theo
    },
    [FRONTIER_TRAINER_BAILEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("BALDO"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_ADULT, EC_WORD_I, EC_WORD_BATTLE, EC_WORD_EASY},
        .speechWin = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_ADULT, EC_WORD_AND, EC_WORD_JOY, EC_MOVE2(SWALLOW)},
        .speechLose = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_ADULT, EC_WORD_AND, EC_MOVE2(FRUSTRATION), EC_MOVE2(SWALLOW)},
        .monSet = gBattleFrontierTrainerMons_Bailey
    },
    [FRONTIER_TRAINER_HUGO] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("JANNES"),
        .speechBefore = {EC_WORD_ONLY, EC_WORD_BEST, EC_WORD_DOESN_T, EC_WORD_ME, EC_WORD_SATISFIED, EC_WORD_EXCL},
        .speechWin = {EC_WORD_WINS, EC_WORD_GOES, EC_WORD_ALWAYS, EC_WORD_IF, EC_WORD_MAN, EC_WORD_WANTS},
        .speechLose = {EC_WORD_I_VE, EC_WORD_IT, EC_WORD_TRIES, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Hugo
    },
    [FRONTIER_TRAINER_BRYCE] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("DANILO"),
        .speechBefore = {EC_WORD_I_WAS, EC_WORD_UNTIL, EC_WORD_YESTERDAY, EC_WORD_IN, EC_WORD_VACATION, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_I_VE, EC_WORD_TOTALLY, EC_WORD_NOTHING, EC_WORD_FORGET, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THAT_WAS, EC_WORD_IT, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_NEED, EC_WORD_SLEEP},
        .monSet = gBattleFrontierTrainerMons_Bryce
    },
    [FRONTIER_TRAINER_GIDEON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("INGO"),
        .speechBefore = {EC_WORD_WHAT_S_UP_QUES, EC_WORD_I_AM, EC_WORD_SCARY, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_QUES},
        .speechWin = {EC_WORD_I_AM, EC_WORD_COOL, EC_WORD_BUT, EC_WORD_DON_T, EC_WORD_SCARY, EC_WORD_EXCL},
        .speechLose = {EC_WORD_LOOKS, EC_WORD_MY, EC_WORD_FASHION, EC_WORD_SENSE, EC_WORD_IS, EC_WORD_INCREDIBLE},
        .monSet = gBattleFrontierTrainerMons_Gideon
    },
    [FRONTIER_TRAINER_TRISTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("HENKE"),
        .speechBefore = {EC_WORD_WORKS, EC_WORD_WE, EC_WORD_POKEMON, EC_WORD_SIMPLE, EC_WORD_ONLY, EC_WORD_ON},
        .speechWin = {EC_WORD_HUH_QUES, EC_WORD_I_VE, EC_WORD_WON, EC_WORD_QUES_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_CAN_WIN, EC_WORD_BETTER, EC_WORD_HIS, EC_WORD_THAN, EC_WORD_WORKS, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Triston
    },
    [FRONTIER_TRAINER_CHARLES] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("HERBALD"),
        .speechBefore = {EC_WORD_A, EC_WORD_FIGHTING, EC_WORD_VERSUS, EC_WORD_ME, EC_WORD_IS, EC_WORD_PREPOSTEROUS},
        .speechWin = {EC_WORD_I_AM, EC_WORD_A, EC_MOVE(SUBMISSION), EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_IT, EC_WORD_GOES, EC_WORD_DOWN, EC_WORD_DOWN, EC_WORD_DOWN, EC_WORD_EXCL_EXCL},
        .monSet = gBattleFrontierTrainerMons_Charles
    },
    [FRONTIER_TRAINER_RAYMOND] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("HERKE"),
        .speechBefore = {EC_WORD_LISTENS, EC_WORD_HER, EC_WORD_TOO, EC_WORD_WHO_WAS, EC_WORD_SONGS, EC_WORD_QUES},
        .speechWin = {EC_WORD_I_AM, EC_WORD_YES, EC_WORD_SO, EC_WORD_SATISFIED, EC_WORD_SATISFIED, EC_WORD_SATISFIED},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_MORE, EC_WORD_SATISFIED, EC_WORD_SATISFIED, EC_WORD_SATISFIED},
        .monSet = gBattleFrontierTrainerMons_Raymond
    },
    [FRONTIER_TRAINER_DIRK] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("DIRK"),
        .speechBefore = {EC_WORD_POKEMON, EC_WORD_ABSOLUTELY, EC_WORD_FLYING, EC_WORD_THOSE, EC_WORD_SIMPLE, EC_WORD_FABULOUS},
        .speechWin = {EC_WORD_YOU_VE, EC_WORD_LOST, EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_FLYING, EC_WORD_EXCL},
        .speechLose = {EC_WORD_GIVES, EC_WORD_IT, EC_WORD_OTHER, EC_WORD_POKEMON, EC_WORD_ABSOLUTELY, EC_WORD_FLYING},
        .monSet = gBattleFrontierTrainerMons_Dirk
    },
    [FRONTIER_TRAINER_HAROLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("HARALD"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_GOT, EC_MOVE2(ATTRACT), EC_WORD_OUT, EC_WORD_BABE},
        .speechWin = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_NICE, EC_WORD_ISN_T_IT_QUES, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_DON_T, EC_WORD_NICE, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Harold
    },
    [FRONTIER_TRAINER_OMAR] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("OMAR"),
        .speechBefore = {EC_WORD_LET_ME_WIN, EC_WORD_IN, EC_WORD_TRADE, EC_WORD_VERSUS, EC_WORD_A, EC_MOVE2(PRESENT)},
        .speechWin = {EC_WORD_HERE, EC_WORD_PLEASE, EC_WORD_VERY, EC_MOVE2(TOXIC), EC_WORD_TO, EC_WORD_SWEETS},
        .speechLose = {EC_WORD_SON, EC_MOVE2(PRESENT), EC_WORD_DASH, EC_WORD_FOR, EC_WORD_WHAT, EC_WORD_QUES},
        .monSet = gBattleFrontierTrainerMons_Omar
    },
    [FRONTIER_TRAINER_PETER] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PETER"),
        .speechBefore = {EC_WORD_WHO_WAS, EC_WORD_JOY, EC_WORD_IS, EC_WORD_CORRECT, EC_WORD_BIG, EC_WORD_EXCL},
        .speechWin = {EC_WORD_LISTENING, EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_BRAG, EC_WORD_WITH, EC_WORD_JOY},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DISAPPOINTED, EC_WORD_YOU_VE, EC_WORD_ME, EC_WORD_DON_T, EC_WORD_HEARING},
        .monSet = gBattleFrontierTrainerMons_Peter
    },
    [FRONTIER_TRAINER_DEV] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DAVID"),
        .speechBefore = {EC_WORD_COME_ON, EC_WORD_EXCL, EC_WORD_WE, EC_WORD_WEREN_T, EC_WORD_FIGHT, EC_WORD_EXCL},
        .speechWin = {EC_WORD_NOW, EC_WORD_WANTS, EC_WORD_I, EC_WORD_A, EC_WORD_NAP, EC_WORD_MAKE},
        .speechLose = {EC_WORD_NOW, EC_WORD_NEED, EC_WORD_I, EC_WORD_A, EC_WORD_NAP, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Dev
    },
    [FRONTIER_TRAINER_COREY] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("HAJO"),
        .speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_BABE, EC_WORD_WHO_WAS, EC_WORD_TOUGHNESS, EC_WORD_TEACH},
        .speechWin = {EC_WORD_LOOKS, EC_WORD_EXCL, EC_WORD_THAT_WAS, EC_WORD_MY, EC_MOVE(BRICK_BREAK), EC_WORD_EXCL},
        .speechLose = {EC_MOVE2(FRUSTRATION), EC_WORD_IS, EC_WORD_SOON, EC_WORD_AN, EC_MOVE2(ERUPTION), EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Corey
    },
    [FRONTIER_TRAINER_ANDRE] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("HERLOF"),
        .speechBefore = {EC_WORD_A, EC_WORD_FLAME_BODY, EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_PERFECT, EC_WORD_EXCL},
        .speechWin = {EC_WORD_LOOKS, EC_WORD_EXCL, EC_WORD_MY, EC_WORD_FIRE, EC_WORD_DANCE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_YOU_VE, EC_WORD_AN, EC_MOVE2(EXPLOSION), EC_WORD_GET, EC_WORD_PLEASE, EC_WORD_VERY},
        .monSet = gBattleFrontierTrainerMons_Andre
    },
    [FRONTIER_TRAINER_FERRIS] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("FIETE"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_NO_1, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_WORD_AGE, EC_WORD_RANK},
        .speechWin = {EC_WORD_YES, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_ABSOLUTELY, EC_WORD_NO_1, EC_WORD_EXCL},
        .speechLose = {EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_MORE, EC_WORD_ABSOLUTELY, EC_WORD_NO_1, EC_WORD_ELLIPSIS},
        .monSet = gBattleFrontierTrainerMons_Ferris
    },
    [FRONTIER_TRAINER_ALIVIA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("HERA"),
        .speechBefore = {EC_WORD_MYSELF, EC_WORD_IS, EC_WORD_GIDDY, EC_WORD_ELLIPSIS, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechWin = {EC_WORD_THAT_WAS, EC_WORD_EVERY, EC_WORD_TOGETHER, EC_WORD_TO, EC_WORD_SIMPLE, EC_WORD_ELLIPSIS},
        .speechLose = {EC_WORD_I_AM, EC_WORD_CONFUSED, EC_WORD_I, EC_WORD_WANTS, EC_WORD_NOW, EC_WORD_GOING},
        .monSet = gBattleFrontierTrainerMons_Alivia
    },
    [FRONTIER_TRAINER_PAIGE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("LORETTA"),
        .speechBefore = {EC_WORD_LET_S, EC_WORD_TOGETHER, EC_WORD_JOY, EC_WORD_ON, EC_WORD_FIGHT, EC_WORD_GOT},
        .speechWin = {EC_WORD_THIS_IS_IT_EXCL, EC_EMPTY_WORD, EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THIS_IS_IT_EXCL, EC_EMPTY_WORD, EC_WORD_DO, EC_WORD_ONLY, EC_WORD_GO_AHEAD, EC_WORD_EXCL},
        .monSet = gBattleFrontierTrainerMons_Paige
    },
    [FRONTIER_TRAINER_ANYA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("KATJA"),
        .speechBefore = {EC_WORD_COME_OVER, EC_WORD_SO, EC_WORD_PRETTY, EC_WORD_IS, EC_WORD_FASHION, EC_WORD_NEVER},
        .speechWin = {EC_WORD_FASHION, EC_WORD_MUST_BE, EC_WORD_WITH, EC_WORD_THE, EC_WORD_PERSON, EC_WORD_MATCH_UP},
        .speechLose = {EC_WORD_PRETTY, EC_WORD_COULD, EC_WORD_TOO, EC_WORD_ALL_RIGHT, EC_WORD_HIS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Anya
    },
    [FRONTIER_TRAINER_DAWN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("OLIVIA"),
        .speechBefore = {EC_WORD_BEAUTY, EC_WORD_IS, EC_WORD_YES, EC_WORD_SO, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL},
        .speechWin = {EC_WORD_BE, EC_WORD_PLEASE, EC_WORD_NONE, EC_WORD_BABY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_YOU_VE, EC_WORD_YES, EC_WORD_WON, EC_WORD_EXCL, EC_WORD_SIMPLE, EC_WORD_UNBELIEVABLE},
        .monSet = gBattleFrontierTrainerMons_Dawn
    },
    [FRONTIER_TRAINER_ABBY] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("HERMINE"),
        .speechBefore = {EC_WORD_MEETS, EC_WORD_MAN, EC_WORD_TRAINER, EC_WORD_IS, EC_WORD_THAT, EC_WORD_REFRESHING},
        .speechWin = {EC_WORD_A, EC_WORD_VICTORY, EC_WORD_HAS, EC_MOVE(SWEET_SCENT), EC_EMPTY_WORD, EC_EMPTY_WORD},
        .speechLose = {EC_WORD_THESE, EC_WORD_STENCH, EC_WORD_IS, EC_WORD_AWFULLY, EC_EMPTY_WORD, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Abby
    },
    [FRONTIER_TRAINER_GRETEL] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("HIDDA"),
        .speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_CAUSE, EC_WORD_FOR, EC_WORD_OF, EC_MOVE(OUTRAGE)},
        .speechWin = {EC_WORD_IT_S, EC_WORD_ONLY, EC_WORD_NATURAL, EC_WORD_SEE_YA, EC_WORD_BYE_BYE, EC_WORD_EXCL},
        .speechLose = {EC_WORD_SIMPLE, EC_WORD_UNBELIEVABLE, EC_WORD_BUT, EC_WORD_ELLIPSIS, EC_WORD_CONGRATS, EC_EMPTY_WORD},
        .monSet = gBattleFrontierTrainerMons_Gretel
    }
};
