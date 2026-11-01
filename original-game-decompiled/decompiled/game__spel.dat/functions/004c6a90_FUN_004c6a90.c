
/* ==== FUN_004c6a90 @ 004c6a90 ==== 
 * signature: undefined4 __cdecl FUN_004c6a90(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined2 param_5, int param_6, int param_7)
 * body: 004c6a90-004c6b4b;004c6b4f-004c6b7f;004c6b83-004c6b88
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c6b4c-004c6b4e 004c6b80-004c6b82
 */

undefined4 __cdecl
FUN_004c6a90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined2 param_5,int param_6,int param_7)

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
  local_20 = param_4;
  local_1c = param_4 * param_6;
  local_8 = 0;
  _local_18 = CONCAT22(param_5,(short)param_6);
  _local_24 = CONCAT22((param_7 != 0) + 1,1);
  local_14 = 0x14;
  local_10 = 0xb8;
  local_c = param_3;
  iVar1 = (**(code **)(*DAT_00740924 + 0xc))(DAT_00740924,&local_14,param_1,0);
  if (iVar1 != 0) {
    FUN_004c65b0(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_creating_sound_bu_005b4f48);
  }
  iVar1 = (*(code *)**(undefined4 **)*param_1)((undefined4 *)*param_1,&DAT_00578d80,local_8);
  if (iVar1 != 0) {
    FUN_004c65b0(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_creating_3d_sound_005b4f90);
  }
  return 0;
}


