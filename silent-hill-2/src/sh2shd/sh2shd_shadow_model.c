#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_init_shadow);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_reset_shadow);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_add_char);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_Draw_ShadowChar);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_add_map);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_exe_shadow);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_renew_shadow_man);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", make_chara_reftag_pool_and_kick_packet_for_spot);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", make_bg_reftag_pool_and_kick_packet_for_spot);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", make_chara_reftag_pool_and_kick_packet_for_point);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", make_chara_reftag_pool_and_kick_packet_for_self);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", make_chara_reftag_pool_and_kick_packet_for_parallel);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", make_bg_reftag_pool_and_kick_packet_for_parallel);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", get_spot_camera_angle);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", get_distance_from_light_to_chara);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_exe_drop_shadow);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_renew_drop_shadow_man);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_make_stencil_drop_shadow_plane);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_make_drop_shadow_plane);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_reset_shadow_off_work);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_add_map_to_shadow_off_work);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_off_obj);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_add_char_to_shadow_off_work);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_off_char_obj);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_off_char_all_parts);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_bg_shadow_off);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", check_self_spot);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", check_self_para);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_del_jms_upper_body);

INCLUDE_ASM("asm/nonmatchings/sh2shd/sh2shd_shadow_model", sh2shd_del_jms_head);
