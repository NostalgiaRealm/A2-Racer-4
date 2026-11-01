
/* ==== FUN_0044cb30 @ 0044cb30 ==== 
 * signature: undefined __stdcall FUN_0044cb30(void)
 * body: 0044cb30-0044cb77
 */

void FUN_0044cb30(void)

{
  bool bVar1;
  float10 fVar2;
  
  if (DAT_006fb8a0 == 0) {
    bVar1 = DAT_006fb8d0 != 0;
    fVar2 = FUN_004a6800(0x7128b0);
    if (((float10)1.0 / fVar2 < (float10)10.0) && ((int)((-(uint)bVar1 & 10) + 0xf) < DAT_006fb8b0))
    {
      DAT_006fb8b0 = DAT_006fb8b0 + -1;
    }
  }
  return;
}


