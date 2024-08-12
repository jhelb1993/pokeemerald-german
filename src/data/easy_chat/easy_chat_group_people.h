const u8 gEasyChatWord_Opponent[] = _("FEIND");
const u8 gEasyChatWord_I[] = _("ICH");
const u8 gEasyChatWord_You[] = _("DU");
const u8 gEasyChatWord_Yours[] = _("DEINE");
const u8 gEasyChatWord_Son[] = _("DEIN");
const u8 gEasyChatWord_Your[] = _("DEINER");
const u8 gEasyChatWord_Youre[] = _("DU BIST");
const u8 gEasyChatWord_Youve[] = _("DU HAST");
const u8 gEasyChatWord_Mother[] = _("MUTTER");
const u8 gEasyChatWord_Grandfather[] = _("GROSSVATER");
const u8 gEasyChatWord_Uncle[] = _("ONKEL");
const u8 gEasyChatWord_Father[] = _("VATER");
const u8 gEasyChatWord_Boy[] = _("JUNGE");
const u8 gEasyChatWord_Adult[] = _("ERWACHSENER");
const u8 gEasyChatWord_Brother[] = _("BRUDER");
const u8 gEasyChatWord_Sister[] = _("SCHWESTER");
const u8 gEasyChatWord_Grandmother[] = _("GROSSMUTTER");
const u8 gEasyChatWord_Aunt[] = _("TANTE");
const u8 gEasyChatWord_Parent[] = _("ELTERN");
const u8 gEasyChatWord_Man[] = _("MAN");
const u8 gEasyChatWord_Me[] = _("MICH");
const u8 gEasyChatWord_Girl[] = _("MÄDCHEN");
const u8 gEasyChatWord_Babe[] = _("DICH");
const u8 gEasyChatWord_Family[] = _("FAMILIE");
const u8 gEasyChatWord_Her[] = _("IHR");
const u8 gEasyChatWord_Him[] = _("IHM");
const u8 gEasyChatWord_He[] = _("ER");
const u8 gEasyChatWord_Place[] = _("ORT");
const u8 gEasyChatWord_Daughter[] = _("TOCHTER");
const u8 gEasyChatWord_His[] = _("SEIN");
const u8 gEasyChatWord_Hes[] = _("ER IST");
const u8 gEasyChatWord_Arent[] = _("SIND NICHT");
const u8 gEasyChatWord_Siblings[] = _("GESCHWISTER");
const u8 gEasyChatWord_Kid[] = _("KINDCHEN");
const u8 gEasyChatWord_Children[] = _("KINDER");
const u8 gEasyChatWord_Mr[] = _("HERR");
const u8 gEasyChatWord_Mrs[] = _("FRAU");
const u8 gEasyChatWord_Myself[] = _("MIR");
const u8 gEasyChatWord_IWas[] = _("ICH WAR");
const u8 gEasyChatWord_ToMe[] = _("ZU MIR");
const u8 gEasyChatWord_My[] = _("MEIN");
const u8 gEasyChatWord_IAm[] = _("ICH BIN");
const u8 gEasyChatWord_Ive[] = _("ICH HABE");
const u8 gEasyChatWord_Who[] = _("WER");
const u8 gEasyChatWord_Someone[] = _("JEMAND");
const u8 gEasyChatWord_WhoWas[] = _("MEINE");
const u8 gEasyChatWord_ToWhom[] = _("FÜR WEN");
const u8 gEasyChatWord_Whose[] = _("WESSEN");
const u8 gEasyChatWord_WhoIs[] = _("WER IST");
const u8 gEasyChatWord_Its[] = _("DAS IST");
const u8 gEasyChatWord_Lady[] = _("DAME");
const u8 gEasyChatWord_Friend[] = _("FREUND");
const u8 gEasyChatWord_Ally[] = _("VERBÜNDETER");
const u8 gEasyChatWord_Person[] = _("PERSON");
const u8 gEasyChatWord_Dude[] = _("TYPE");
const u8 gEasyChatWord_They[] = _("IHNEN");
const u8 gEasyChatWord_TheyWere[] = _("SIE WAREN");
const u8 gEasyChatWord_ToThem[] = _("FÜR SIE");
const u8 gEasyChatWord_Their[] = _("EUCH");
const u8 gEasyChatWord_Theyre[] = _("SIE SIND");
const u8 gEasyChatWord_Theyve[] = _("SIE HABEN");
const u8 gEasyChatWord_We[] = _("WIR");
const u8 gEasyChatWord_Been[] = _("WAREN");
const u8 gEasyChatWord_ToUs[] = _("FÜR UNS");
const u8 gEasyChatWord_Our[] = _("UNSER");
const u8 gEasyChatWord_WeRe[] = _("WIR SIND");
const u8 gEasyChatWord_Rival[] = _("RIVALE");
const u8 gEasyChatWord_Weve[] = _("WIR HABEN");
const u8 gEasyChatWord_Woman[] = _("SIE KONNTEN");
const u8 gEasyChatWord_She[] = _("SIE");
const u8 gEasyChatWord_SheWas[] = _("SIE WAR");
const u8 gEasyChatWord_ToHer[] = _("FÜR ALLE");
const u8 gEasyChatWord_Hers[] = _("EURE");
const u8 gEasyChatWord_SheIs[] = _("SIE IST");
const u8 gEasyChatWord_Some[] = _("SIE HATTE");

const struct EasyChatWordInfo gEasyChatGroup_People[] = {
    [EC_INDEX(EC_WORD_OPPONENT)] =
    {
        .text = gEasyChatWord_Opponent,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I)] =
    {
        .text = gEasyChatWord_I,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU)] =
    {
        .text = gEasyChatWord_You,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOURS)] =
    {
        .text = gEasyChatWord_Yours,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SON)] =
    {
        .text = gEasyChatWord_Son,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOUR)] =
    {
        .text = gEasyChatWord_Your,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU_RE)] =
    {
        .text = gEasyChatWord_Youre,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOU_VE)] =
    {
        .text = gEasyChatWord_Youve,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MOTHER)] =
    {
        .text = gEasyChatWord_Mother,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRANDFATHER)] =
    {
        .text = gEasyChatWord_Grandfather,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNCLE)] =
    {
        .text = gEasyChatWord_Uncle,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FATHER)] =
    {
        .text = gEasyChatWord_Father,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BOY)] =
    {
        .text = gEasyChatWord_Boy,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ADULT)] =
    {
        .text = gEasyChatWord_Adult,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BROTHER)] =
    {
        .text = gEasyChatWord_Brother,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SISTER)] =
    {
        .text = gEasyChatWord_Sister,
        .alphabeticalOrder = 72,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GRANDMOTHER)] =
    {
        .text = gEasyChatWord_Grandmother,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AUNT)] =
    {
        .text = gEasyChatWord_Aunt,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARENT)] =
    {
        .text = gEasyChatWord_Parent,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAN)] =
    {
        .text = gEasyChatWord_Man,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ME)] =
    {
        .text = gEasyChatWord_Me,
        .alphabeticalOrder = 71,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIRL)] =
    {
        .text = gEasyChatWord_Girl,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BABE)] =
    {
        .text = gEasyChatWord_Babe,
        .alphabeticalOrder = 63,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FAMILY)] =
    {
        .text = gEasyChatWord_Family,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HER)] =
    {
        .text = gEasyChatWord_Her,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIM)] =
    {
        .text = gEasyChatWord_Him,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HE)] =
    {
        .text = gEasyChatWord_He,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PLACE)] =
    {
        .text = gEasyChatWord_Place,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAUGHTER)] =
    {
        .text = gEasyChatWord_Daughter,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIS)] =
    {
        .text = gEasyChatWord_His,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HE_S)] =
    {
        .text = gEasyChatWord_Hes,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AREN_T)] =
    {
        .text = gEasyChatWord_Arent,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SIBLINGS)] =
    {
        .text = gEasyChatWord_Siblings,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KID)] =
    {
        .text = gEasyChatWord_Kid,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHILDREN)] =
    {
        .text = gEasyChatWord_Children,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MR)] =
    {
        .text = gEasyChatWord_Mr,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MRS)] =
    {
        .text = gEasyChatWord_Mrs,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MYSELF)] =
    {
        .text = gEasyChatWord_Myself,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_WAS)] =
    {
        .text = gEasyChatWord_IWas,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_ME)] =
    {
        .text = gEasyChatWord_ToMe,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MY)] =
    {
        .text = gEasyChatWord_My,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_AM)] =
    {
        .text = gEasyChatWord_IAm,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_VE)] =
    {
        .text = gEasyChatWord_Ive,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO)] =
    {
        .text = gEasyChatWord_Who,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOMEONE)] =
    {
        .text = gEasyChatWord_Someone,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO_WAS)] =
    {
        .text = gEasyChatWord_WhoWas,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_WHOM)] =
    {
        .text = gEasyChatWord_ToWhom,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHOSE)] =
    {
        .text = gEasyChatWord_Whose,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHO_IS)] =
    {
        .text = gEasyChatWord_WhoIs,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IT_S)] =
    {
        .text = gEasyChatWord_Its,
        .alphabeticalOrder = 66,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LADY)] =
    {
        .text = gEasyChatWord_Lady,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRIEND)] =
    {
        .text = gEasyChatWord_Friend,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALLY)] =
    {
        .text = gEasyChatWord_Ally,
        .alphabeticalOrder = 69,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PERSON)] =
    {
        .text = gEasyChatWord_Person,
        .alphabeticalOrder = 60,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DUDE)] =
    {
        .text = gEasyChatWord_Dude,
        .alphabeticalOrder = 74,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY)] =
    {
        .text = gEasyChatWord_They,
        .alphabeticalOrder = 73,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_WERE)] =
    {
        .text = gEasyChatWord_TheyWere,
        .alphabeticalOrder = 68,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_THEM)] =
    {
        .text = gEasyChatWord_ToThem,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEIR)] =
    {
        .text = gEasyChatWord_Their,
        .alphabeticalOrder = 70,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_RE)] =
    {
        .text = gEasyChatWord_Theyre,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THEY_VE)] =
    {
        .text = gEasyChatWord_Theyve,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE)] =
    {
        .text = gEasyChatWord_We,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEEN)] =
    {
        .text = gEasyChatWord_Been,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_US)] =
    {
        .text = gEasyChatWord_ToUs,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OUR)] =
    {
        .text = gEasyChatWord_Our,
        .alphabeticalOrder = 64,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE_RE)] =
    {
        .text = gEasyChatWord_WeRe,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIVAL)] =
    {
        .text = gEasyChatWord_Rival,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WE_VE)] =
    {
        .text = gEasyChatWord_Weve,
        .alphabeticalOrder = 62,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOMAN)] =
    {
        .text = gEasyChatWord_Woman,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE)] =
    {
        .text = gEasyChatWord_She,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE_WAS)] =
    {
        .text = gEasyChatWord_SheWas,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO_HER)] =
    {
        .text = gEasyChatWord_ToHer,
        .alphabeticalOrder = 61,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERS)] =
    {
        .text = gEasyChatWord_Hers,
        .alphabeticalOrder = 67,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHE_IS)] =
    {
        .text = gEasyChatWord_SheIs,
        .alphabeticalOrder = 65,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOME)] =
    {
        .text = gEasyChatWord_Some,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
};
