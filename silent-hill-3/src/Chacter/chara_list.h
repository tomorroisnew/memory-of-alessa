#ifndef SH3_CHARA_KINDS_H
#define SH3_CHARA_KINDS_H

/* ===================================================================================== */
/*                               characters (0x100 - 0x199)                              */
/* ===================================================================================== */

/**
 * Heather, the main player model.
 *
 * There are dozens of models with this character kind. Most of them are
 * Heather's outfits, though there are some funnier ones, such as the bearded
 * Mary model.
 */
#define HEATHER_CHARA_KIND                                                            0x100

/**
 * Complete list of models with the Heather character kind (0x100):
 *
 * - pl/chhaa.mdl
 * - pl/chhaa_wg.mdl
 * - pl/chhbb.mdl
 * - pl/chhcc.mdl
 * - pl/chhdd.mdl
 * - pl/chhee.mdl
 * - pl/chhff.mdl
 * - pl/chhgg.mdl
 * - pl/chhhh.mdl
 * - pl/chhii.mdl
 * - pl/chhjj.mdl
 * - pl/chhkk.mdl
 * - pl/chhll.mdl
 * - pl/chhmm.mdl
 * - pl/chhnn.mdl
 * - pl/chhoo.mdl
 * - pl/chhpp.mdl
 * - pl/chhqq.mdl
 * - pl/chhrr.mdl
 * - pl/chhss.mdl
 * - pl/chhtt.mdl
 * - pl/chhuk.mdl
 * - pl/chhuu.mdl
 * - pl/chhvv.mdl
 * - pl/chhww.mdl
 * - pl/chhxx.mdl
 * - pl/chhyy.mdl
 * - pl/chhzz.mdl
 * - pl/chfuda.mdl
 * - pl/pl_htr_a.mdl
 * - pl/pl_htr_a_bak.mdl
 * - pl/pl_htr_a_old.mdl
 * - pl/pl_htr_b.mdl
 * - item/chhaa.mdl
 * - item/chhaa_bak.mdl
 * - item/chhaa_cl.mdl
 * - item/chhaa_wg.mdl
 * - item/chhbb.mdl
 * - item/chhcc.mdl
 * - item/chhdd.mdl
 * - item/chhee.mdl
 * - item/chhff.mdl
 * - item/chhgg.mdl
 * - item/chhhh.mdl
 * - item/chhii.mdl
 * - item/chhjj.mdl
 * - item/chhkk.mdl
 * - item/chhll.mdl
 * - item/chhmm.mdl
 * - item/chhnn.mdl
 * - item/chhoo.mdl
 * - item/chhpp.mdl
 * - item/chhqq.mdl
 * - item/chhrr.mdl
 * - item/chhss.mdl
 * - item/chhtt.mdl
 * - item/chhuk.mdl
 * - item/chhuu.mdl
 * - item/chhvv.mdl
 * - item/chhww.mdl
 * - item/chhxx.mdl
 * - item/chhyy.mdl
 * - item/chhzz.mdl
 * - item/chfuda.mdl
 * - item/hige_lip.mdl
 * - item/pl_htr_a.mdl
 * - item/teschhaa.mdl
 * - it/anime_test.mdl
 * - it/hige_lip.mdl
 */

/**
 * Standard Douglas models.
 * 
 * Sometimes he's wearing that hat, other times he's bloodied.
 */
#define DOUGLAS_CHARA_KIND                                                            0x101

/**
 * Claudia's models.
 * 
 * She has a few models, one of them with a bloodied face.
 */
#define CLAUDIA_CHARA_KIND                                                            0x102

/**
 * Vincent's models.
 */
#define VINCENT_CHARA_KIND                                                            0x103

/**
 * Douglas model, except his jacket is fancier.
 */
#define DOUGLAS_CC_CHARA_KIND                                                         0x104

/**
 * Douglas model, except he... he's not wearing pants.
 */
#define DOUGLAS_DD_CHARA_KIND                                                         0x105

/**
 * Checks whether this character kind is a Heather model.
 */
#define IS_PLAYER_KIND(_kind) ((_kind) == 0x100)

/* ===================================================================================== */
/*                                enemies (0x200 - 0x299)                                */
/* ===================================================================================== */

/**
 * Double Head, a wretched canine monster.
 */
#define DOUBLE_HEAD_CHARA_KIND                                                        0x200

/**
 * Numb Body, a fleshy chicken-like critter that Heather encounters.
 */
#define NUMB_BODY_CHARA_KIND                                                          0x201

/**
 * Closer, a giant Mandarin-esque monster with sandbag arms.
 */
#define CLOSER_CHARA_KIND                                                             0x202

/**
 * The Silent Hill 3 nurse, pretty and somewhat human-like.
 */
#define NURSE_CHARA_KIND                                                              0x203

/**
 * Insane Cancer, a monster resembling a cancerous mass.
 */
#define INSANE_CANCER_CHARA_KIND                                                      0x204

/**
 * Pendulum, a fly-like monster.
 * 
 * Don't touch these things with a ten foot pole.
 */
#define PENDULUM_CHARA_KIND                                                           0x205

/**
 * Scraper, a monster resembling the Missionary.
 */
#define SCRAPER_CHARA_KIND                                                            0x206

/**
 * Sewer monster that Heather kills with the blow dryer.
 */
#define SEWER_MONSTER_CHARA_KIND                                                      0x207

/**
 * A rock-like model.
 */
#define EN_DED1_CHARA_KIND                                                            0x208

/**
 * Horsey!
 */
#define CAROUSEL_HORSE_CHARA_KIND                                                     0x209

/**
 * Slurper (`en_lie`), has a more reddish yellow color tone.
 */
#define SLURPER_E_CHARA_KIND                                                          0x20a

/**
 * Slurper (`en_lix`), has a flatter beak and paler color.
 */
#define SLURPER_X_CHARA_KIND                                                          0x20b

/**
 * Split Worm, the first boss.
 */
#define SPLIT_WORM_CHARA_KIND                                                         0x210

/**
 * Missionary, the second boss.
 */
#define MISSIONARY_CHARA_KIND                                                         0x211

/**
 * Valtiel, a dark angel worshipped by a branch of the Order.
 *
 * Valtiel is of great symbolic importance in Silent Hill lore.
 */
#define VALTIEL_CHARA_KIND                                                            0x212

/**
 * Leonard, a very annoying third boss.
 */
#define LEONARD_WOLF_CHARA_KIND                                                       0x213

/**
 * God Herself, the final boss.
 */
#define GOD_CHARA_KIND                                                                0x214

/**
 * THE MEMORY OF ALESSA
 */
#define MEMORY_OF_ALESSA_CHARA_KIND                                                   0x215

/* ===================================================================================== */
/*                      various background & test models (0x500 - 0x599)                 */
/* ===================================================================================== */

/*
#define BG_HUO_CHARA_KIND                                                             0x500
#define ANIME_TEST_CHARA_KIND                                                         0x500
#define BG_FEL_CHARA_KIND                                                             0x500
#define BG_HUO_CHARA_KIND                                                             0x500
#define BG_WG1_CHARA_KIND                                                             0x500
#define BG_WG2_CHARA_KIND                                                             0x500
#define BG_WG3_CHARA_KIND                                                             0x500
#define BG_WG4_CHARA_KIND                                                             0x500
#define BG_WG5_CHARA_KIND                                                             0x500
#define CHDAA_LIP_CHARA_KIND                                                          0x500
#define CHDAA_TEST_CHARA_KIND                                                         0x500
#define DISP_CHCAA_CHARA_KIND                                                         0x500
#define DISP_CHDAA_CHARA_KIND                                                         0x500
#define DISP_CHDBB_CHARA_KIND                                                         0x500
#define DISP_CHHAA_CHARA_KIND                                                         0x500
#define DISP_CHVAA_CHARA_KIND                                                         0x500
#define FACE_TEST1_CHARA_KIND                                                         0x500
#define IT_FIR_CHARA_KIND                                                             0x500
#define IT_HUM_CHARA_KIND                                                             0x500
#define IT_LIG_CHARA_KIND                                                             0x500
#define IT_SUB_CHARA_KIND                                                             0x500
#define IT_SWO_CHARA_KIND                                                             0x500
#define POOH_CHARA_KIND                                                               0x500
#define TOMMY_CHARA_KIND                                                              0x500
*/
#define CHCAA_CNO_CHARA_KIND                                                          0x505
#define BG_TRAXX_CHARA_KIND                                                           0x509

/* ===================================================================================== */
/*                                weapons (0x800 - 0x899)                                */
/* ===================================================================================== */

#define WEAPON_HGUN_CHARA_KIND                                                        0x801
#define WEAPON_SHO_CHARA_KIND                                                         0x802
#define WEAPON_SUB_CHARA_KIND                                                         0x803
#define WEAPON_KNIFE_CHARA_KIND                                                       0x804
#define WEAPON_PIPE_CHARA_KIND                                                        0x805
#define WEAPON_SWO_CHARA_KIND                                                         0x806
#define WEAPON_HUM_CHARA_KIND                                                         0x807
#define WEAPON_STU_CHARA_KIND                                                         0x808
#define WEAPON_LIG_CHARA_KIND                                                         0x809
#define WEAPON_FIR_CHARA_KIND                                                         0x80a
#define WEAPON_PIPEG_CHARA_KIND                                                       0x80d
#define WEAPON_PIPES_CHARA_KIND                                                       0x80e
#define WEAPON_HGUNS_CHARA_KIND                                                       0x80f
#define WEAPON_SUBS_CHARA_KIND                                                        0x810
#define WEAPON_U_SUB_CHARA_KIND                                                       0x811
#define WEAPON_U_SUBS_CHARA_KIND                                                      0x812


/* ===================================================================================== */
/*                                   beef jerky (0x900)                                  */
/* ===================================================================================== */

/**
 * Beef jerky.
 *
 * This may have been an in-joke on the team, lol. `func_002a2ae0` seems to
 * spawn a bunch of jerky for no reason, and this model is for some reason the
 * only one that begins with `0x9`.
 */
#define IT_JERKY_CHARA_KIND                                                           0x900


/* ===================================================================================== */
/*                                underscore models (0xe00)                              */
/* ===================================================================================== */

/**
 * Both of these models have filenames that end in an underscore. It's not clear why.
 */

#define BG_MES__CHARA_KIND                                                            0xe00
#define BG_SLV__CHARA_KIND                                                            0xe00


/* ===================================================================================== */
/*                       background, item, & test models (0x1000+)                       */
/* ===================================================================================== */

#define TEST_CHDCC_CHARA_KIND                                                         0x1001
#define IT_MKEY_CHARA_KIND                                                            0x1002
#define IT_MKEY_CHARA_KIND                                                            0x1002
#define IT_TOG_CHARA_KIND                                                             0x1003
#define IT_TOG_CHARA_KIND                                                             0x1003
#define BG_CPW_CHARA_KIND                                                             0x1004
#define BG_CPW_CHARA_KIND                                                             0x1004
#define IT_NECKLACE_CHARA_KIND                                                        0x1005
#define IT_NECKLACE_CHARA_KIND                                                        0x1005
#define BG_HUM_CHARA_KIND                                                             0x1006
#define BG_HUM_CHARA_KIND                                                             0x1006
#define IT_HGUN_CHARA_KIND                                                            0x1007
#define IT_HGUN_CHARA_KIND                                                            0x1007
#define BG_WMN_CHARA_KIND                                                             0x1008
#define BG_WMN_CHARA_KIND                                                             0x1008
#define BG_TRA_CHARA_KIND                                                             0x1009
#define BG_TRA_CHARA_KIND                                                             0x1009
#define IT_JUWAKI_CHARA_KIND                                                          0x100b
#define IT_JUWAKI4_CHARA_KIND                                                         0x100b
#define IT_JUWAKI_CHARA_KIND                                                          0x100b
#define IT_JUWAKI4_CHARA_KIND                                                         0x100b
#define IT_DRY_CHARA_KIND                                                             0x100c
#define IT_DRY_CHARA_KIND                                                             0x100c
#define BG_HRY_CHARA_KIND                                                             0x100d
#define BG_HRY_CHARA_KIND                                                             0x100d
#define IT_HANGER_CHARA_KIND                                                          0x100e
#define IT_HANGER_CHARA_KIND                                                          0x100e
#define BG_ROD_CHARA_KIND                                                             0x100f
#define BG_ROD_CHARA_KIND                                                             0x100f
#define IT_JACKI_CHARA_KIND                                                           0x1010
#define IT_JACKI_CHARA_KIND                                                           0x1010
#define IT_NOTE_CHARA_KIND                                                            0x1011
#define IT_NOTE_CHARA_KIND                                                            0x1011
#define IT_MAP_CHARA_KIND                                                             0x1012
#define IT_MAP_CHARA_KIND                                                             0x1012
#define IT_CLW_CHARA_KIND                                                             0x1013
#define IT_CLW_CHARA_KIND                                                             0x1013
#define IT_CL2_CHARA_KIND                                                             0x1014
#define IT_CL2_CHARA_KIND                                                             0x1014
#define IT_DRIVER_CHARA_KIND                                                          0x1015
#define IT_DRIVER_CHARA_KIND                                                          0x1015
#define TEST_WAVE_CHARA_KIND                                                          0x1016
#define IT_JUWAKI2_CHARA_KIND                                                         0x1017
#define IT_JUWAKI2_CHARA_KIND                                                         0x1017
#define IT_TRS_CHARA_KIND                                                             0x1018
#define IT_TRS_CHARA_KIND                                                             0x1018
#define BG_DOR_CHARA_KIND                                                             0x1019
#define BG_DOR_CHARA_KIND                                                             0x1019
#define IT_HGUN2_CHARA_KIND                                                           0x101a
#define IT_HGUN2_CHARA_KIND                                                           0x101a
#define BG_TES_CHARA_KIND                                                             0x101b
#define BG_TES_2_CHARA_KIND                                                           0x101b
#define BG_FRE_CHARA_KIND                                                             0x101c
#define BG_FRE_CHARA_KIND                                                             0x101c
#define BG_SPI_CHARA_KIND                                                             0x101f
#define BG_SPI_CHARA_KIND                                                             0x101f
#define BG_MES_CHARA_KIND                                                             0x1020
#define BG_MES_CHARA_KIND                                                             0x1020
#define DEKOBOKO_CHARA_KIND                                                           0x1021
#define DEKOBOKO2_CHARA_KIND                                                          0x1022
#define IT_JYUWAKI4_CHARA_KIND                                                        0x1023
#define BG_SYA_CHARA_KIND                                                             0x1024
#define BG_SYA_CHARA_KIND                                                             0x1024
#define IT_PHOTO_CHARA_KIND                                                           0x1025
#define IT_PHOTO_CHARA_KIND                                                           0x1025
#define IT_CAMERA_CHARA_KIND                                                          0x1026
#define IT_CAMERA_CHARA_KIND                                                          0x1026
#define BG_BLD_CHARA_KIND                                                             0x1027
#define BG_BLD_CHARA_KIND                                                             0x1027
#define IT_LIV_CHARA_KIND                                                             0x1028
#define IT_LIV_CHARA_KIND                                                             0x1028
#define IT_OXI_CHARA_KIND                                                             0x102a
#define IT_OXI_CHARA_KIND                                                             0x102a
#define IT_MCH_CHARA_KIND                                                             0x102b
#define IT_MCH_CHARA_KIND                                                             0x102b
#define IT_MC2_CHARA_KIND                                                             0x102c
#define IT_MC2_CHARA_KIND                                                             0x102c
#define BG_TKA_CHARA_KIND                                                             0x102d
#define BG_TKA_CHARA_KIND                                                             0x102d
#define IT_LIFEKEY_CHARA_KIND                                                         0x102e
#define IT_LIFEKEY_CHARA_KIND                                                         0x102e
#define IT_CAN_CHARA_KIND                                                             0x102f
#define IT_CAN_CHARA_KIND                                                             0x102f
#define BG_ISU_CHARA_KIND                                                             0x1030
#define BG_ISU_CHARA_KIND                                                             0x1030
#define IT_BBOOK_CHARA_KIND                                                           0x1031
#define IT_BBOOK_CHARA_KIND                                                           0x1031
#define IT_KNIFE_CHARA_KIND                                                           0x1032
#define IT_KNIFE_CHARA_KIND                                                           0x1032
#define IT_DAGGER_CHARA_KIND                                                          0x1033
#define IT_DAGGER_CHARA_KIND                                                          0x1033
#define BG_DEN_CHARA_KIND                                                             0x1034
#define BG_DEN_CHARA_KIND                                                             0x1034
#define BG_JET_CHARA_KIND                                                             0x1035
#define BG_JET_CHARA_KIND                                                             0x1035
#define IT_NECKLACE2_CHARA_KIND                                                       0x1036
#define IT_NECKLACE2_CHARA_KIND                                                       0x1036
#define IT_TABLET_CHARA_KIND                                                          0x1037
#define IT_TABLET_CHARA_KIND                                                          0x1037
#define BG_DED1_CHARA_KIND                                                            0x1038
#define BG_DED1_CHARA_KIND                                                            0x1038
#define IT_MEATLUMP_CHARA_KIND                                                        0x1039
#define IT_MEATLUMP_CHARA_KIND                                                        0x1039
#define IT_CHAIN_CHARA_KIND                                                           0x103a
#define IT_CHAIN_CHARA_KIND                                                           0x103a
#define BG_DED2_CHARA_KIND                                                            0x103b
#define BG_DED3_CHARA_KIND                                                            0x103c
#define EN_ZBB_CHARA_KIND                                                             0x103d
#define EN_ZBB_CHARA_KIND                                                             0x103d
#define BG_SLV_CHARA_KIND                                                             0x103e
#define BG_SLV_CHARA_KIND                                                             0x103e
#define BG_CAR_CHARA_KIND                                                             0x103f
#define BG_CAR_CHARA_KIND                                                             0x103f
#define IT_TEAR_CHARA_KIND                                                            0x1040
#define IT_TEAR_CHARA_KIND                                                            0x1040
#define IT_JUWAKI5_CHARA_KIND                                                         0x1041
#define IT_JUWAKI5_CHARA_KIND                                                         0x1041
#define IT_BLD_CHARA_KIND                                                             0x1042
#define BG_DDD_CHARA_KIND                                                             0x1043
#define BG_DDD_CHARA_KIND                                                             0x1043
#define IT_KNIFE2_CHARA_KIND                                                          0x1044
#define IT_KNIFE2_CHARA_KIND                                                          0x1044
#define IT_DAGGER2_CHARA_KIND                                                         0x1045
#define IT_DAGGER2_CHARA_KIND                                                         0x1045
#define IT_PIPEG_CHARA_KIND                                                           0x1046
#define IT_PIPES_CHARA_KIND                                                           0x1047
#define BG_WG1_CHARA_KIND                                                             0x1048
#define BG_WG2_CHARA_KIND                                                             0x1049
#define BG_WG3_CHARA_KIND                                                             0x104a
#define BG_WG4_CHARA_KIND                                                             0x104b
#define BG_WG5_CHARA_KIND                                                             0x104c
#define IT_RADIO2_CHARA_KIND                                                          0x104e
#define IT_RADIO2_CHARA_KIND                                                          0x104e
#define BG_LYC_CHARA_KIND                                                             0x104f
#define BG_LYC_CHARA_KIND                                                             0x104f
#define IT_BLD2_CHARA_KIND                                                            0x1050
#define IT_BLD2_CHARA_KIND                                                            0x1050
#define IT_CTEAR_CHARA_KIND                                                           0x1051
#define IT_CTEAR_CHARA_KIND                                                           0x1051

#endif // SH3_CHARA_KINDS_H
