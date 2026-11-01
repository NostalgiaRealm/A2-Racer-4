
/* ==== FUN_004cbc70 @ 004cbc70 ==== 
 * signature: undefined4 __cdecl FUN_004cbc70(int param_1, int param_2)
 * body: 004cbc70-004cbcc3;004cbcc7-004cbd14
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cbcc4-004cbcc6
 */

undefined4 __cdecl FUN_004cbc70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 1) {
    return 2000;
  }
  DAT_005b5ea8 = param_1;
  DAT_00740d44 = LocalAlloc(0x40,param_1 << 5);
  if (DAT_00740d44 == (HLOCAL)0x0) {
    return 2000;
  }
  if ((param_2 != 2) && (param_2 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____alloc_mem_images___unko_005b5ec8);
  }
  iVar2 = 0;
  if (0 < DAT_005b5ea8) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + (int)DAT_00740d44) = 0;
      *(int *)(iVar1 + 0x18 + (int)DAT_00740d44) = param_2;
      *(undefined4 *)(iVar1 + 0x1c + (int)DAT_00740d44) = 0;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < DAT_005b5ea8);
  }
  DAT_00740d4c = 1;
  return 0;
}


