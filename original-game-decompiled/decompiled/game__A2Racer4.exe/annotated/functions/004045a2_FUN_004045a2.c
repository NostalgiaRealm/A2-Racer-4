
/* ==== FUN_004045a2 @ 004045a2 ==== 
 * signature: int __stdcall FUN_004045a2(void)
 * body: 004045a2-004045f9
 */

int FUN_004045a2(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 3;
  if (3 < DAT_00409340) {
    do {
      pFVar1 = *(FILE **)(DAT_00408328 + iVar3 * 4);
      if (pFVar1 != (FILE *)0x0) {
        if ((pFVar1->_flag & 0x83) != 0) {
          iVar2 = FUN_00404e68(pFVar1);
          if (iVar2 != -1) {
            iVar4 = iVar4 + 1;
          }
        }
        if (0x13 < iVar3) {
          FUN_00403657(*(LPVOID *)(DAT_00408328 + iVar3 * 4));
          *(undefined4 *)(DAT_00408328 + iVar3 * 4) = 0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00409340);
  }
  return iVar4;
}


