
/* ==== FUN_004cab50 @ 004cab50 ==== 
 * signature: undefined4 __cdecl FUN_004cab50(LPCSTR param_1, int param_2)
 * body: 004cab50-004cabb3;004cabb7-004cac24
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cabb4-004cabb6
 */

undefined4 __cdecl FUN_004cab50(LPCSTR param_1,int param_2)

{
  FILE *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  char local_300;
  undefined1 local_2ff [767];
  
  pFVar1 = (FILE *)FUN_004c62c0(param_1);
  if (pFVar1 == (FILE *)0x0) {
    return 1000;
  }
  FUN_004c6160((int *)pFVar1,-0x300,2);
  FUN_00558b35(&local_300,0x300,1,(int *)pFVar1);
  if ((pFVar1->_flag & 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_reading_005b5dc0);
  }
  iVar2 = 0;
  puVar3 = local_2ff;
  do {
    *(undefined1 *)(iVar2 + DAT_007409f0) = puVar3[-1];
    *(undefined1 *)(iVar2 + 1 + DAT_007409f0) = *puVar3;
    *(undefined1 *)(iVar2 + 2 + DAT_007409f0) = puVar3[1];
    iVar2 = iVar2 + 4;
    puVar3 = puVar3 + 3;
  } while (iVar2 < 0x400);
  if (param_2 != 0) {
    FUN_004c9e70(DAT_007409f0,0,0x100);
  }
  FUN_004c6430(pFVar1);
  return 0;
}


