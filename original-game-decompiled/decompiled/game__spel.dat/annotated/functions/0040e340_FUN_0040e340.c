
/* ==== FUN_0040e340 @ 0040e340 ==== 
 * signature: undefined __cdecl FUN_0040e340(int param_1, int * param_2, int * param_3)
 * body: 0040e340-0040e59b
 */

void __cdecl FUN_0040e340(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_c;
  
  piVar2 = param_2;
  FUN_004c3fa0((byte *)s_BACKTRACK_SPEED_TRIGGER_00592000);
  *param_2 = 0;
  *param_3 = 0;
  iVar4 = param_1 * 0xf0;
  iVar3 = *(int *)(iVar4 + 0x34 + DAT_00715e50);
  FUN_004c3fa0((byte *)s_Chunk____d__0059201c);
  iVar5 = *(int *)(iVar4 + 0x50 + DAT_00715e50);
  FUN_004c3fa0((byte *)s_Side____d__0059202c);
  if (iVar5 == 0) {
    if (DAT_006fb8e8 == 0) {
      param_2 = (int *)0x1;
      pcVar6 = s_Side_is_left__00592038;
    }
    else {
      param_2 = (int *)0xffffffff;
      pcVar6 = s_Side_is_left__00592048;
    }
  }
  else if (DAT_006fb8e8 == 0) {
    param_2 = (int *)0xffffffff;
    pcVar6 = s_Side_is_right__00592058;
  }
  else {
    param_2 = (int *)0x1;
    pcVar6 = s_Side_is_right__00592068;
  }
  FUN_004c3fa0((byte *)pcVar6);
  FUN_004c3fa0((byte *)s_Starting_loop____00592078);
  FUN_004c3fa0((byte *)s_Checking_chunk__d__0059208c);
  if (iVar3 <= DAT_00715258 + -1) {
    local_c = iVar3 * 0x994 + 0xfc;
    do {
      if (iVar3 < 0) break;
      iVar5 = 0;
      param_1 = local_c;
      do {
        FUN_004c3fa0((byte *)s_Checking_trigger__d__005920e8);
        iVar1 = *(int *)(param_1 + DAT_00715f00);
        if ((3 < iVar1) && ((iVar1 < 7 || (iVar1 == 8)))) {
          FUN_004c3fa0((byte *)s_Speed_trigger_found___d__00592100);
          FUN_004c3fa0((byte *)s__p_speed_trigger____d__0059211c);
          FUN_004c3fa0((byte *)s_NO_TRIGGER____d__00592134);
          if (*piVar2 == 0) {
            FUN_004c3fa0((byte *)s_Speed_trigger_not_yet_set__00592148);
            *piVar2 = iVar1;
            if (*param_3 != 0) {
              FUN_004c3fa0((byte *)s_All_triggers_found__returning__00592164);
              return;
            }
          }
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 4;
      } while (iVar5 < 2);
      iVar3 = iVar3 + (int)param_2;
      local_c = local_c + (int)param_2 * 0x994;
      FUN_004c3fa0((byte *)s_Checking_chunk__d__0059208c);
    } while (iVar3 <= DAT_00715258 + -1);
  }
  FUN_004c3fa0((byte *)s_Illegal_chunk__returning_default_005920a0);
  if (*piVar2 == 0) {
    *piVar2 = 8;
  }
  if (*param_3 == 0) {
    DAT_005d1b04 = DAT_005d1b04 + 1;
    FUN_004c3fa0((byte *)s___04d__No_lane_trigger_found__005920c8);
    if (*(int *)(iVar4 + 0x50 + DAT_00715e50) == 1) {
      *param_3 = 0x13;
    }
    if (*(int *)(iVar4 + 0x50 + DAT_00715e50) == 0) {
      *param_3 = 0x29;
    }
  }
  return;
}


