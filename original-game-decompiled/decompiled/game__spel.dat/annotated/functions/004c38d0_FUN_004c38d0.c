
/* ==== FUN_004c38d0 @ 004c38d0 ==== 
 * signature: undefined4 __cdecl FUN_004c38d0(uint param_1)
 * body: 004c38d0-004c395d;004c3961-004c39cf
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c395e-004c3960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004c38d0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0073b894 != 0) {
    if (DAT_0073b894 == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      FUN_0054b339(DAT_0073b888);
    }
    if (DAT_0073b894 != 0) {
      FUN_0054b339(DAT_0073b898);
      DAT_0073b894 = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  DAT_0073b888 = operator_new(param_1 * 4);
  DAT_0073b88c = param_1;
  _DAT_0073b890 = 0;
  DAT_0073b898 = operator_new(param_1);
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  DAT_0073b894 = 1;
  iVar1 = 0;
  if (0 < (int)param_1) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)((int)DAT_0073b898 + iVar1) = 0;
      iVar1 = iVar2;
    } while (iVar2 < (int)param_1);
  }
  return 0;
}


