
/* ==== FUN_004ce6d0 @ 004ce6d0 ==== 
 * signature: undefined __cdecl FUN_004ce6d0(int param_1)
 * body: 004ce6d0-004ce90b;004ce90f-004ce941
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ce90c-004ce90e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004ce6d0(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = DAT_00740d44 +
          *(int *)(*(int *)(DAT_00740a1c + 8 + DAT_005b6b24 * 0xc) + 4 + DAT_005b6b28 * 8) * 0x20;
  local_8 = *(int *)(iVar1 + 8) + DAT_0074b2ec;
  local_4 = *(int *)(iVar1 + 0xc) + DAT_0074b2f0;
  if ((((-1 < local_8) && (DAT_0074b2ec <= DAT_005b3798)) && (-1 < local_4)) &&
     (DAT_0074b2f0 <= DAT_005b379c)) {
    local_10 = DAT_0074b2ec;
    if (DAT_0074b2ec < 0) {
      local_10 = 0;
    }
    local_c = DAT_0074b2f0;
    if (DAT_0074b2f0 < 0) {
      local_c = 0;
    }
    if (DAT_005b379c < local_4) {
      local_4 = DAT_005b379c;
    }
    if (DAT_005b3798 < local_8) {
      local_8 = DAT_005b3798;
    }
    if ((local_10 < local_8) && (local_c < local_4)) {
      local_18 = local_8 - local_10;
      local_14 = local_4 - local_c;
      local_20 = 0;
      local_1c = 0;
      if (param_1 == 0) {
        FUN_004c4a60(DAT_007408ac);
        iVar1 = (**(code **)(*DAT_0074b318 + 0x14))
                          (DAT_0074b318,&local_20,DAT_007408ac,&local_10,0x1000000,0);
        if (iVar1 != 0) {
          hardware(iVar1);
LAB_004ce8fd:
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d_____store_mouse_button__bl_005b6bb4);
        }
      }
      else if (param_1 == 1) {
        FUN_004c4a60(DAT_007408b0);
        iVar1 = (**(code **)(*DAT_0074b318 + 0x14))
                          (DAT_0074b318,&local_20,DAT_007408b0,&local_10,0x1000000,0);
        if (iVar1 != 0) {
          hardware(iVar1);
          goto LAB_004ce8fd;
        }
      }
      else if (param_1 == 2) {
        FUN_004c4a60(DAT_00740890);
        iVar1 = (**(code **)(*DAT_0074b318 + 0x14))
                          (DAT_0074b318,&local_20,DAT_00740890,&local_10,0x1000000,0);
        if (iVar1 != 0) {
          hardware(iVar1);
          goto LAB_004ce8fd;
        }
      }
      _DAT_005b6b10 = DAT_005b6b08;
      _DAT_005b6b14 = DAT_005b6b0c;
      DAT_005b6b08 = DAT_0074b2ec;
      DAT_005b6b0c = DAT_0074b2f0;
    }
  }
  return;
}


