
/* ==== FUN_00450190 @ 00450190 ==== 
 * signature: undefined __stdcall FUN_00450190(void)
 * body: 00450190-004501b6
 */

void FUN_00450190(void)

{
  DWORD DVar1;
  
  if (DAT_006fbb48 != 0) {
    DVar1 = GetTickCount();
    if (9999 < (int)(DVar1 - DAT_006fbb30)) {
      DAT_006fbb30 = DVar1;
    }
  }
  return;
}


