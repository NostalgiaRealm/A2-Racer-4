
/* ==== FUN_00500590 @ 00500590 ==== 
 * signature: undefined __stdcall FUN_00500590(int param_1, int * param_2)
 * body: 00500590-005005b2
 */

void FUN_00500590(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    *param_2 = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return;
}


