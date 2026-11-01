
/* ==== FUN_00444800 @ 00444800 ==== 
 * signature: int __stdcall FUN_00444800(void)
 * body: 00444800-00444832
 */

int FUN_00444800(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_004447a0(iVar2);
    if (*(int *)(&DAT_006cfa44 + iVar1 * 0x1910) == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  return -1;
}


