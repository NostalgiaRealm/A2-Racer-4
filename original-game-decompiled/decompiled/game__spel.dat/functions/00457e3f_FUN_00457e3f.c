
/* ==== FUN_00457e3f @ 00457e3f ==== 
 * signature: undefined __stdcall FUN_00457e3f(void)
 * body: 00457e3f-00457e94
 */

void FUN_00457e3f(void)

{
  int iVar1;
  
  if (DAT_006fb968 != 0) {
    iVar1 = FUN_00457dd0();
    if (iVar1 != 0) {
      if ((&DAT_006fa61c)[DAT_006fb898 * 0x25] == 1) {
        FUN_00457da0();
      }
      else {
        FUN_00457d20();
      }
      DAT_0059becc = 0x2c;
      DAT_006fcf88 = 1;
    }
  }
  return;
}


