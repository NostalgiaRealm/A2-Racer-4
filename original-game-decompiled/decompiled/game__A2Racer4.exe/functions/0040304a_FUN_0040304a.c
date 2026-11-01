
/* ==== FUN_0040304a @ 0040304a ==== 
 * signature: undefined FUN_0040304a(void)
 * body: 0040304a-0040305d
 */

int FUN_0040304a(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00404691();
  if (DAT_00407f84 != '\0') {
    iVar4 = 0;
    iVar2 = 3;
    if (3 < DAT_00409340) {
      do {
        pFVar1 = *(FILE **)(DAT_00408328 + iVar2 * 4);
        if (pFVar1 != (FILE *)0x0) {
          if ((pFVar1->_flag & 0x83) != 0) {
            iVar3 = FUN_00404e68(pFVar1);
            if (iVar3 != -1) {
              iVar4 = iVar4 + 1;
            }
          }
          if (0x13 < iVar2) {
            FUN_00403657(*(LPVOID *)(DAT_00408328 + iVar2 * 4));
            *(undefined4 *)(DAT_00408328 + iVar2 * 4) = 0;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00409340);
    }
    return iVar4;
  }
  return iVar2;
}


