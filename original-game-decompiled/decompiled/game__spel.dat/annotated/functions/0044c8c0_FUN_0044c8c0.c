
/* ==== FUN_0044c8c0 @ 0044c8c0 ==== 
 * signature: undefined __stdcall FUN_0044c8c0(void)
 * body: 0044c8c0-0044c940
 */

void FUN_0044c8c0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (((&DAT_006fa61c)[DAT_006fb898 * 0x25] == 1) && (DAT_006fb8a0 == 0)) {
    bVar1 = FUN_004486a0(0xb);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      DAT_0059a190 = 1;
      FUN_0044cda0(6);
      return;
    }
    iVar2 = FUN_00448470(0xb);
    iVar2 = iVar2 / 1000;
    if ((iVar2 < 6) && (iVar2 != DAT_006fb988)) {
      DAT_006fb988 = iVar2;
      FUN_00450950(s_TIME_TICK_005a1918,0);
    }
  }
  return;
}


