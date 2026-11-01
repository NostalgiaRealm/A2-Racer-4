
/* ==== FUN_00500540 @ 00500540 ==== 
 * signature: undefined __stdcall FUN_00500540(int param_1, int * param_2)
 * body: 00500540-0050055f
 */

void FUN_00500540(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_2 = param_1;
  return;
}


