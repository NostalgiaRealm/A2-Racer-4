
/* ==== FUN_004ce950 @ 004ce950 ==== 
 * signature: undefined __cdecl FUN_004ce950(int param_1)
 * body: 004ce950-004ceb8f;004ceb93-004ceb99
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ceb90-004ceb92
 */

void __cdecl FUN_004ce950(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar1 = DAT_00740d44 +
          *(int *)(*(int *)(DAT_00740a1c + 8 + DAT_005b6b24 * 0xc) + 4 + DAT_005b6b28 * 8) * 0x20;
  local_18 = *(int *)(iVar1 + 8) + DAT_005b6b08;
  local_14 = *(int *)(iVar1 + 0xc) + DAT_005b6b0c;
  if ((((-1 < local_18) && (DAT_005b6b08 <= DAT_005b3798)) && (-1 < local_14)) &&
     (DAT_005b6b0c <= DAT_005b379c)) {
    local_20 = DAT_005b6b08;
    if (DAT_005b6b08 < 0) {
      local_20 = 0;
    }
    local_1c = DAT_005b6b0c;
    if (DAT_005b6b0c < 0) {
      local_1c = 0;
    }
    if (DAT_005b379c < local_14) {
      local_14 = DAT_005b379c;
    }
    if (DAT_005b3798 < local_18) {
      local_18 = DAT_005b3798;
    }
    if ((local_20 < local_18) && (local_1c < local_14)) {
      local_8 = local_18 - local_20;
      local_4 = local_14 - local_1c;
      local_10 = 0;
      local_c = 0;
      if (param_1 == 0) {
        FUN_004c4a60(DAT_007408ac);
        iVar1 = (**(code **)(*DAT_007408ac + 0x14))
                          (DAT_007408ac,&local_20,DAT_0074b318,&local_10,0x1000000,0);
        if (iVar1 != 0) {
          FUN_004c4400(iVar1);
LAB_004ceb81:
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d_____restore_mouse_button__b_005b6c38);
        }
      }
      else if (param_1 == 1) {
        FUN_004c4a60(DAT_007408b0);
        iVar1 = (**(code **)(*DAT_007408b0 + 0x14))
                          (DAT_007408b0,&local_20,DAT_0074b318,&local_10,0x1000000,0);
        if (iVar1 != 0) {
          FUN_004c4400(iVar1);
          goto LAB_004ceb81;
        }
      }
      else if (param_1 == 2) {
        FUN_004c4a60(DAT_00740890);
        iVar1 = (**(code **)(*DAT_00740890 + 0x14))
                          (DAT_00740890,&local_20,DAT_0074b318,&local_10,0x1000000,0);
        if (iVar1 != 0) {
          FUN_004c4400(iVar1);
          goto LAB_004ceb81;
        }
      }
    }
  }
  return;
}


