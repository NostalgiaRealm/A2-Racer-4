
/* ==== FUN_00563ea5 @ 00563ea5 ==== 
 * signature: undefined4 __stdcall FUN_00563ea5(void)
 * body: 00563ea5-00563f35
 */

undefined4 FUN_00563ea5(void)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_0074dcf0 == 0) {
    PTR_PTR_005c8590 = (undefined *)&PTR_PTR_005c8598;
    FUN_00564284(DAT_0074df74);
    FUN_00559d4e(DAT_0074df74);
    DAT_0074df74 = (int *)0x0;
    return 0;
  }
  piVar1 = FUN_0055ab88(1,0xac);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00563f36((char *)piVar1);
    if (uVar2 == 0) {
      PTR_PTR_005c8590 = (undefined *)piVar1;
      FUN_00564284(DAT_0074df74);
      FUN_00559d4e(DAT_0074df74);
      DAT_0074df74 = piVar1;
      return 0;
    }
    FUN_00564284(piVar1);
    FUN_00559d4e(piVar1);
  }
  return 1;
}


