
/* ==== FUN_004239e0 @ 004239e0 ==== 
 * signature: undefined __stdcall FUN_004239e0(void)
 * body: 004239e0-00423a20
 */

void FUN_004239e0(void)

{
  DWORD DVar1;
  DWORD DVar2;
  
  if (DAT_005d343c != 0) {
    DVar1 = GetTickCount();
    DVar2 = GetTickCount();
    if (199 < DVar2 - DAT_005d344c) {
      DAT_005d3448 = (uint)(DAT_005d3448 == 0);
      DAT_005d344c = DVar1;
    }
  }
  return;
}


