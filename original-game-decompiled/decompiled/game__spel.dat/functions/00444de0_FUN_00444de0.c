
/* ==== FUN_00444de0 @ 00444de0 ==== 
 * signature: undefined __cdecl FUN_00444de0(int param_1, int param_2)
 * body: 00444de0-00444e5b;00444e5f-00444eb6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00444e5c-00444e5e
 */

void __cdecl FUN_00444de0(int param_1,int param_2)

{
  int iVar1;
  
  if (DAT_006fb90c != 0) {
    if (3 < param_2) {
      if (DAT_006ed684 < 4) {
        iVar1 = FUN_00444800();
        if (iVar1 == -1) {
          DAT_006ed684 = 3;
          return;
        }
        FUN_00444c40(iVar1,param_1,param_2);
        DAT_006ed684 = param_2;
        DAT_0059d604 = iVar1;
        return;
      }
      if (DAT_0059d604 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s___d__No_current_skidmark__0059d6dc);
      }
      iVar1 = FUN_004447a0(DAT_0059d604);
      if (*(int *)(&DAT_006cfa44 + iVar1 * 0x1910) == 0) {
        DAT_0059d604 = 0xffffffff;
        DAT_006ed684 = 3;
        return;
      }
      FUN_00444d20(DAT_0059d604,param_1,param_2);
    }
    DAT_006ed684 = param_2;
  }
  return;
}


