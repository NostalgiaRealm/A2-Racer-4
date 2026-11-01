
/* ==== FUN_00469a10 @ 00469a10 ==== 
 * signature: undefined __fastcall FUN_00469a10(int * param_1)
 * body: 00469a10-00469a49
 */

void __fastcall FUN_00469a10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_005586c5(iVar1,0x10,*(int *)(iVar1 + -4),FUN_004695e0);
    FUN_0054b339((LPVOID)(iVar1 + -4));
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}


