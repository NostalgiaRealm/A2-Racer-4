
/* ==== FUN_005023f0 @ 005023f0 ==== 
 * signature: undefined __cdecl FUN_005023f0(int param_1, int param_2, void * param_3)
 * body: 005023f0-005024ac
 */

void __cdecl FUN_005023f0(int param_1,int param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  double local_18;
  double local_10;
  int local_8;
  
  pvVar2 = param_3;
  iVar1 = param_2;
  local_18 = *(double *)(param_1 + 0xc0);
  if (local_18 <= 1.000000013351432e-10) {
    local_10 = 9999999866.485682;
  }
  else {
    local_10 = 1.0 / local_18;
  }
  uVar3 = (uint)*(ushort *)(param_2 + 2);
  local_8 = param_1;
  while (uVar3 = uVar3 - 1, 1 < (int)uVar3) {
    param_1 = *(int *)(*(int *)(iVar1 + 4) + uVar3 * 4);
    FUN_00501a40(&param_1,&local_18,pvVar2);
  }
  if (uVar3 == 1) {
    param_1 = *(int *)(*(int *)(iVar1 + 4) + 4);
    FUN_00501a40(&param_1,&local_18,pvVar2);
  }
  else if (uVar3 != 0) {
    return;
  }
  param_1 = **(int **)(iVar1 + 4);
  FUN_00501a40(&param_1,&local_18,pvVar2);
  return;
}


