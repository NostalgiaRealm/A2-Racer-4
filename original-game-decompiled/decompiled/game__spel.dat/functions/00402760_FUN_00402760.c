
/* ==== FUN_00402760 @ 00402760 ==== 
 * signature: char * __cdecl FUN_00402760(undefined4 param_1)
 * body: 00402760-004027ed
 */

char * __cdecl FUN_00402760(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return s_AI_STAGE_REVERSE_0058e5f8;
  case 1:
    return s_AI_STAGE_BRAKE_0058e60c;
  case 2:
    return s_AI_STAGE_PAUSE_0058e61c;
  case 3:
    return s_AI_STAGE_FORWARD_0058e62c;
  case 4:
    return s_AI_STAGE_FRONTAL_CHASE_0058e640;
  case 5:
    return s_AI_STAGE_FRONTAL_STAYINLANE_0058e658;
  case 6:
    return s_AI_STAGE_FRONTAL_SLOWDOWN_0058e674;
  case 7:
    return s_AI_STAGE_FRONTAL_HANDBRAKE_0058e690;
  case 8:
    return s_AI_STAGE_FRONTAL_PAUSE_0058e6ac;
  case 9:
    return s_AI_STAGE_REAR_STAYINLANE_0058e6c4;
  case 10:
    return s_AI_STAGE_REAR_BASH_0058e6e0;
  case 0xb:
    return s_AI_STAGE_SIDEWAYS_CHASE_0058e6f4;
  case 0xc:
    return s_AI_STAGE_SIDEWAYS_MEGAPHONE_0058e70c;
  case 0xd:
    return s_AI_STAGE_SIDEWAYS_BASH_0058e728;
  case 0xe:
    return s_AI_STAGE_SIDEWAYS_PAUSE_0058e740;
  case 0xf:
    return s_AI_STAGE_BREAKFREE_FORWARD_0058e758;
  case 0x10:
    return s_AI_STAGE_BREAKFREE_REVERSE_0058e774;
  case 0x11:
    return s_AI_STAGE_BREAKFREE_STOP_0058e790;
  case 0x12:
    return s_AI_STAGE_BASH_BASH_0058e7a8;
  case 0x13:
    return s_AI_STAGE_BASH_PAUSE_0058e7bc;
  default:
    return &DAT_0058e7d0;
  }
}


