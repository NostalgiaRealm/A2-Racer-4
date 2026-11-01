
/* ==== FUN_004c6880 @ 004c6880 ==== 
 * signature: undefined4 __cdecl FUN_004c6880(int param_1, undefined2 param_2, int param_3, int param_4)
 * body: 004c6880-004c69a9;004c69ad-004c69b2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c69aa-004c69ac
 */

undefined4 __cdecl FUN_004c6880(int param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
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
  undefined4 local_4;
  
  local_20 = param_1;
  local_1c = param_1 * param_3;
  uStack_28 = 0;
  puStack_30 = &local_14;
  local_8 = 0;
  _local_24 = CONCAT22((param_4 != 0) + 1,1);
  local_c = 0;
  local_4 = 0;
  _local_18 = CONCAT22(param_2,(short)param_3);
  local_14 = 0x14;
  local_10 = 1;
  puStack_2c = &DAT_0074092c;
  piStack_34 = DAT_00740924;
  iVar1 = (**(code **)(*DAT_00740924 + 0xc))();
  if (iVar1 != 0) {
    this(iVar1);
    FUN_004c3fa0((byte *)s__s__d____error_creating_sound_bu_005b4f48);
    return 0x2afa;
  }
  iVar1 = (**(code **)(*DAT_0074092c + 0x38))(DAT_0074092c,&piStack_34);
  if (iVar1 != 0) {
    this(iVar1);
    FUN_004c3fa0((byte *)s__s__d____error_setting_format____005b4f20);
    return 0x2afa;
  }
  iVar1 = (**(code **)(*DAT_0074092c + 0x30))(DAT_0074092c,0,0,1);
  if (iVar1 != 0) {
    this(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_starting_primary_s_005b4eec);
  }
  return 0;
}


