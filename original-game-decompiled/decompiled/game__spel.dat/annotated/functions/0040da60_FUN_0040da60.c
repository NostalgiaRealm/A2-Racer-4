
/* ==== FUN_0040da60 @ 0040da60 ==== 
 * signature: undefined __cdecl FUN_0040da60(int param_1)
 * body: 0040da60-0040da80;0040da85-0040dacb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040da81-0040da84
 */

void __cdecl FUN_0040da60(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < 6)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s_Illegal_cop__this_is_a_racer___s_00591aa4);
  }
  iVar2 = 0;
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  do {
    if ((&DAT_005d33ec)[iVar2] == iVar1) {
      (&DAT_005d33ec)[iVar2] = 0xffffffff;
      iVar2 = 0x14;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  (&DAT_005ce9e8)[param_1 * 0xa5] = 0xffffffff;
  FUN_0040d410(&DAT_005ce9e8 + param_1 * 0xa5,0xffffffff);
  return;
}


