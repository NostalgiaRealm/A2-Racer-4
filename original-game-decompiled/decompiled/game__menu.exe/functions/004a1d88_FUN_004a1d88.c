
/* ==== FUN_004a1d88 @ 004a1d88 ==== 
 * signature: undefined FUN_004a1d88(void)
 * body: 004a1d88-004a1dac
 */

int FUN_004a1d88(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = 0;
  do {
    if (*(char *)(param_1 + 0x1f8 + (uint)bVar1 * 0x10) != '\0') {
      iVar2 = iVar2 + 1;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  return iVar2;
}


