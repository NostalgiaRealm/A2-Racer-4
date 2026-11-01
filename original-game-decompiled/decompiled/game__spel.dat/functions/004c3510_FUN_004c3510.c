
/* ==== FUN_004c3510 @ 004c3510 ==== 
 * signature: undefined __fastcall FUN_004c3510(int * param_1)
 * body: 004c3510-004c3582
 */

void __fastcall FUN_004c3510(int *param_1)

{
  int iVar1;
  
  if (param_1[3] == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_005586c5(iVar1,0x1d8,*(int *)(iVar1 + -4),FUN_004c2de0);
      FUN_0054b339((LPVOID)(iVar1 + -4));
    }
  }
  if (param_1[3] != 0) {
    FUN_0054b339((LPVOID)param_1[4]);
    param_1[3] = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


