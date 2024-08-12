@ NOTE: The brailleformat macro in this file is leftover from RS.
@       The numbers are simply skipped over. If you'd like to omit
@       this macro you must also stop it from skipping over this
@       section by editing ScrCmd_braillemessage.
Underwater_SealedChamber_Braille_GoUpHere:
	brailleformat 4, 6, 26, 13, 7, 9
	.braille "HIER HINAUF"
	.byte 0x3F, 0x10 @ .
	.braille "$"

SealedChamber_OuterRoom_Braille_ABC:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "ABCD$"

SealedChamber_OuterRoom_Braille_GHI:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "IJKL$"

SealedChamber_OuterRoom_Braille_MNO:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "QRST$"

SealedChamber_OuterRoom_Braille_TUV:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "YZ$"

SealedChamber_OuterRoom_Braille_DEF:
	brailleformat 7, 6, 21, 13, 10, 9
    .braille "EFGH$"

SealedChamber_OuterRoom_Braille_JKL:
	brailleformat 7, 6, 21, 13, 10, 9
    .braille "MNOP$"

SealedChamber_OuterRoom_Braille_PQRS:
	brailleformat 7, 6, 21, 13, 10, 9
	.braille "UVWX$"

SealedChamber_OuterRoom_Braille_Period:
	brailleformat 9, 6, 19, 13, 12, 9
	.byte 0x3F, 0x10 @ .
	.braille "$"

SealedChamber_OuterRoom_Braille_WXYZ:
	brailleformat 7, 6, 21, 13, 10, 9
	.byte 0x1A, 0x26, 0x2D @ ÄÖÜ
	.braille "$"

SealedChamber_OuterRoom_Braille_Comma:
	brailleformat 9, 6, 19, 13, 12, 9
	.byte 0x3F, 0x04 @ ,
	.braille "$"

SealedChamber_OuterRoom_Braille_DigHere:
	brailleformat 7, 4, 23, 15, 10, 7
	.braille "SCHAUFLE\n"
	.braille "HIER"
	.byte 0x3F, 0x10 @ .
	.braille "$"

SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth:
	brailleformat 0, 0, 29, 19, 3, 3
	.braille "ZUERST\n"
	.braille "WAILORD"
    .byte 0x3F, 0x04 @ ,
    .braille "\n"
    .braille "ZULETZT\n"
    .braille "RELICANTH"
    .byte 0x3F, 0x10 @ .
    .braille "$"

SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived:
	brailleformat 2, 0, 26, 19, 5, 3
	.braille "IN DIESER\n"
	.braille "H"
	.byte 0x26 @ Ö
	.braille "HLE HABEN\n"
	.braille "WIR GELEBT"
	.byte 0x3F, 0x10 @ .
	.braille "$"

SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon:
	brailleformat 7, 2, 23, 17, 10, 5
	.braille "WIR VERDANKEN\n"
	.braille "ALLES DEN\n"
	.braille "POKEMON"
	.byte 0x3F, 0x04 @ ,
	.braille "$"

SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "DENNOCH\n"
	.braille "SPERRTEN WIR\n"
	.braille "DIE POKEMON\n"
	.braille "WEG"
	.byte 0x3F, 0x10 @ .
	.braille "$"

SealedChamber_InnerRoom_Braille_WeFearedIt:
	brailleformat 5, 6, 25, 13, 8, 9
	.braille "WIR HATTEN\n"
	.braille "ANGST"
	.byte 0x3F, 0x10 @ .
	.braille "$"

SealedChamber_InnerRoom_Braille_ThoseWithCourageHope:
	brailleformat 6, 0, 24, 19, 9, 3
	.braille "DENJENIGEN"
	.byte 0x3F, 0x04 @ ,
	.braille "\n"
	.braille "DIE HOFFEN UND\n"
	.braille "MUTIG SIND"
	.byte 0x3F, 0x04 @ ,
	.braille "\n"
	.braille "WIRD SICH$"

SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits:
	brailleformat 3, 2, 27, 17, 6, 5
	.braille "EINE T"
	.byte 0x2D @ Ü
	.braille "RE ZU\n"
	.braille "EINEM EWIGEN\n"
	.braille "POKEMON\n"
	.byte 0x26 @ Ö
	.braille "FFNEN"
	.byte 0x3F, 0x10 @ .
	.braille "$"

DesertRuins_Braille_UseRockSmash:
	brailleformat 1, 0, 27, 19, 4, 3
	.braille "ZWEI LINKS"
	.byte 0x3F, 0x04 @ ,
	.braille "\n"
	.braille "ZWEI RUNTER"
	.byte 0x3F, 0x04 @ ,
	.braille "\n"
	.braille "ANSCHLIESSEND\n"
	.braille "ZERTR"
	.byte 0x2D @ Ü
	.braille "MMERER"
	.byte 0x3F, 0x10 @ .
	.braille "$"

IslandCave_Braille_RunLapAroundWall:
	brailleformat 5, 0, 25, 19, 8, 3
	.braille "BLEIB NAHE\n"
	.braille "DER WAND UND\n"
	.braille "RENN EINE\n"
	.braille "RUNDE UMHER"
	.byte 0x3F, 0x10 @ .
	.braille "$"

AncientTomb_Braille_ShineInTheMiddle:
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "DIE UNSEREN\n"
	.braille "WILLEN ERBEN"
	.byte 0x3F, 0x04 @ ,
	.braille "\n"
	.braille "ERSTRAHLEN \n"
	.braille "IM ZENTRUM"
	.byte 0x3F, 0x10 @ .
	.braille "$"
