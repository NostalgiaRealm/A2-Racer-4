
/* ==== FUN_004c6860 @ 004c6860 ==== 
 * signature: int __stdcall FUN_004c6860(void)
 * body: 004c6860-004c687b
 */

int FUN_004c6860(void)

{
  int iVar1;
  
  iVar1 = FUN_004c66c0(0x14);
  if (iVar1 == 0) {
    DirectSoundEnumerateA(FUN_004c6740,0);
    iVar1 = 0;
  }
  return iVar1;
}


