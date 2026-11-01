
/* ==== FUN_00450184 @ 00450184 ==== 
 * signature: undefined __stdcall FUN_00450184(void)
 * body: 00450184-0045018f
 */

void FUN_00450184(void)

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


