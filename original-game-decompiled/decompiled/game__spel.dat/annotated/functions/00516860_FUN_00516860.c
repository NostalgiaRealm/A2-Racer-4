
/* ==== FUN_00516860 @ 00516860 ==== 
 * signature: undefined __cdecl FUN_00516860(int param_1, int param_2, int param_3, uint param_4)
 * body: 00516860-005168a9
 */

void __cdecl FUN_00516860(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_4 + 1;
  iVar2 = *(int *)(param_2 + uVar1 * 4);
  if (iVar2 != 0) {
    while (iVar2 != param_1) {
      param_4 = (param_3 <= (int)uVar1) - 1 & uVar1;
      iVar2 = *(int *)(param_2 + 4 + param_4 * 4);
      uVar1 = param_4 + 1;
      if (iVar2 == 0) {
        *(int *)(param_2 + 4 + param_4 * 4) = param_1;
        return;
      }
    }
    if (iVar2 != 0) {
      return;
    }
  }
  *(int *)(param_2 + 4 + param_4 * 4) = param_1;
  return;
}


