
/* ==== FUN_0042e4a0 @ 0042e4a0 ==== 
 * signature: undefined __stdcall FUN_0042e4a0(void)
 * body: 0042e4a0-0042e4fd
 */

void FUN_0042e4a0(void)

{
  int *piVar1;
  int iVar2;
  int local_18 [6];
  
  if (DAT_006fb964 != 0) {
    piVar1 = (int *)&stack0xffffffe4;
    iVar2 = 6;
    do {
      piVar1 = piVar1 + 1;
      FUN_004483a0(*piVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


