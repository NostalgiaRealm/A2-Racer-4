
/* ==== FUN_004cd150 @ 004cd150 ==== 
 * signature: int __stdcall FUN_004cd150(void)
 * body: 004cd150-004cd16b
 */

int FUN_004cd150(void)

{
  int iVar1;
  
  iVar1 = FUN_004cce20(0x14);
  if (iVar1 == 0) {
    DirectDrawEnumerateA(FUN_004ccf60,0);
    iVar1 = 0;
  }
  return iVar1;
}


