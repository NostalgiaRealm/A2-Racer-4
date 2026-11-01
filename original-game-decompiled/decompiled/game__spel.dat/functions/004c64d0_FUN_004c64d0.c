
/* ==== FUN_004c64d0 @ 004c64d0 ==== 
 * signature: undefined4 __cdecl FUN_004c64d0(LPCSTR param_1)
 * body: 004c64d0-004c655a
 */

undefined4 __cdecl FUN_004c64d0(LPCSTR param_1)

{
  int iVar1;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_00740914 == 0) || (DAT_00740918 == 1)) {
    pFVar2 = (FILE *)FUN_005589a5(param_1,&DAT_005b496c);
    if (pFVar2 == (FILE *)0x0) {
      return 0;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_00740908) {
      iVar3 = 0;
      do {
        iVar1 = __strcmpi((char *)(iVar3 + DAT_0074090c),param_1);
        if (iVar1 == 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x1c;
      } while (iVar4 < DAT_00740908);
    }
    pFVar2 = (FILE *)FUN_005589a5(param_1,&DAT_005b496c);
    if (pFVar2 == (FILE *)0x0) {
      return 0;
    }
  }
  FUN_005588fd(pFVar2);
  return 1;
}


