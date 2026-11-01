
/* ==== FUN_004b1e00 @ 004b1e00 ==== 
 * signature: undefined __fastcall FUN_004b1e00(undefined4 * param_1)
 * body: 004b1e00-004b1e52
 */

void __fastcall FUN_004b1e00(undefined4 *param_1)

{
  if (param_1[3] == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339((LPVOID)*param_1);
  }
  if (param_1[3] != 0) {
    FUN_0054b339((LPVOID)param_1[4]);
    param_1[3] = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


