
/* ==== FUN_004469b0 @ 004469b0 ==== 
 * signature: int __stdcall FUN_004469b0(void)
 * body: 004469b0-004469de
 */

int FUN_004469b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_004463c0(iVar2);
    if (*(int *)(&DAT_006f51b8 + iVar1 * 300) == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x46);
  return -1;
}


