
/* ==== FUN_004c69c0 @ 004c69c0 ==== 
 * signature: undefined4 __cdecl FUN_004c69c0(undefined4 param_1, int param_2, undefined2 param_3, int param_4, int param_5)
 * body: 004c69c0-004c6a7a;004c6a7e-004c6a85
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c6a7b-004c6a7d
 */

undefined4 __cdecl
FUN_004c69c0(undefined4 param_1,int param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined2 local_24;
  short sStack_22;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)&local_24;
  local_20 = param_2;
  local_1c = param_2 * param_4;
  _local_18 = CONCAT22(param_3,(short)param_4);
  local_8 = 0;
  _local_24 = CONCAT22((param_5 != 0) + 1,1);
  local_14 = 0x14;
  local_10 = 0xe8;
  local_c = param_1;
  iVar1 = (**(code **)(*DAT_00740924 + 0xc))(DAT_00740924,&local_14,&param_5,0);
  if (iVar1 != 0) {
    FUN_004c65b0(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_creating_sound_bu_005b4f48);
  }
  return param_1;
}


