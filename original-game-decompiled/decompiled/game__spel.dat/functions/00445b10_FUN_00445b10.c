
/* ==== FUN_00445b10 @ 00445b10 ==== 
 * signature: int __stdcall FUN_00445b10(void)
 * body: 00445b10-00445b3e
 */

int FUN_00445b10(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00445950(iVar2);
    if (*(int *)(&DAT_006ed830 + iVar1 * 0x134) == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 100);
  return -1;
}


