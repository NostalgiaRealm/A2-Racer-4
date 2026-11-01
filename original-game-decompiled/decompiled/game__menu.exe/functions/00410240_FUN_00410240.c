
/* ==== FUN_00410240 @ 00410240 ==== 
 * signature: undefined __register FUN_00410240(undefined4 * param_1, int param_2, int param_3)
 * body: 00410240-0041028e
 */

void FUN_00410240(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  if ((param_3 < 0) || ((int)param_1[2] <= param_3)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_3);
  }
  iVar1 = param_1[1];
  uVar2 = *(undefined4 *)(iVar1 + param_2 * 4);
  *(undefined4 *)(iVar1 + param_2 * 4) = *(undefined4 *)(param_1[1] + param_3 * 4);
  *(undefined4 *)(iVar1 + param_3 * 4) = uVar2;
  return;
}


