
/* ==== FUN_00407280 @ 00407280 ==== 
 * signature: undefined __stdcall FUN_00407280(void)
 * body: 00407280-004072a6
 */

void FUN_00407280(void)

{
  LPVOID pvVar1;
  
  pvVar1 = DAT_005caf74;
  if (DAT_005caf74 != (LPVOID)0x0) {
    FUN_00406cf0(DAT_005caf74);
    FUN_0054b339(pvVar1);
    DAT_005caf74 = (LPVOID)0x0;
  }
  return;
}


