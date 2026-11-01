
/* ==== FUN_004c4e00 @ 004c4e00 ==== 
 * signature: undefined __cdecl FUN_004c4e00(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, uint param_6)
 * body: 004c4e00-004c4f5b;004c4f5f-004c4f62
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4f5c-004c4f5e
 */

void __cdecl
FUN_004c4e00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6)

{
  int iVar1;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [20];
  uint local_14;
  
  local_74 = param_2;
  local_6c = param_4;
  local_68 = param_5;
  local_70 = param_3;
  local_64[0] = 100;
  if ((DAT_005b37a0 == 0x10) || (DAT_005b37a0 == 0x18)) {
    local_14 = param_6;
    if (DAT_007408f4 != 0) {
      local_14 = FUN_004c81b0(param_6,0x18);
    }
  }
  else {
    local_14 = param_6;
  }
  if (param_1 == 0) {
    FUN_004c4a60(DAT_007408ac);
    iVar1 = (**(code **)(*DAT_007408ac + 0x14))(DAT_007408ac,&local_74,0,0,0x1000400,local_64);
    if (iVar1 != 0) {
      FUN_004c4400(iVar1);
LAB_004c4f4d:
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____blitting_error___s___005b39c8);
    }
  }
  else if (param_1 == 1) {
    FUN_004c4a60(DAT_007408b0);
    iVar1 = (**(code **)(*DAT_007408b0 + 0x14))(DAT_007408b0,&local_74,0,0,0x1000400,local_64);
    if (iVar1 != 0) {
      FUN_004c4400(iVar1);
      goto LAB_004c4f4d;
    }
  }
  else if (param_1 == 2) {
    FUN_004c4a60(DAT_00740890);
    iVar1 = (**(code **)(*DAT_00740890 + 0x14))(DAT_00740890,&local_74,0,0,0x1000400,local_64);
    if (iVar1 != 0) {
      FUN_004c4400(iVar1);
      goto LAB_004c4f4d;
    }
  }
  return;
}


