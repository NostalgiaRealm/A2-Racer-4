
/* ==== FUN_004f3330 @ 004f3330 ==== 
 * signature: undefined __fastcall FUN_004f3330(undefined4 * param_1)
 * body: 004f3330-004f3334
 */

void __fastcall FUN_004f3330(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005782e0;
  if ((void *)param_1[4] != (void *)0x0) {
    FUN_004f2c10((void *)param_1[4],(int)param_1);
  }
  if ((LPVOID)param_1[5] != (LPVOID)0x0) {
    FUN_00559d4e((LPVOID)param_1[5]);
    param_1[5] = 0;
  }
  param_1[6] = 0;
  return;
}


