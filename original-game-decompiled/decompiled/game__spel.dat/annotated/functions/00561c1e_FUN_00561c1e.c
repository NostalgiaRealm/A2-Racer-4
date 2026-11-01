
/* ==== FUN_00561c1e @ 00561c1e ==== 
 * signature: int __stdcall FUN_00561c1e(void)
 * body: 00561c1e-00561c75
 */

int FUN_00561c1e(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 3;
  if (3 < DAT_00751400) {
    do {
      pFVar1 = *(FILE **)(DAT_007503e0 + iVar3 * 4);
      if (pFVar1 != (FILE *)0x0) {
        if ((pFVar1->_flag & 0x83) != 0) {
          iVar2 = FUN_005588fd(pFVar1);
          if (iVar2 != -1) {
            iVar4 = iVar4 + 1;
          }
        }
        if (0x13 < iVar3) {
          FUN_00559d4e(*(LPVOID *)(DAT_007503e0 + iVar3 * 4));
          *(undefined4 *)(DAT_007503e0 + iVar3 * 4) = 0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00751400);
  }
  return iVar4;
}


