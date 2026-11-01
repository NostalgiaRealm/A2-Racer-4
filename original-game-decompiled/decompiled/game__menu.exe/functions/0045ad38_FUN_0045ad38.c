
/* ==== FUN_0045ad38 @ 0045ad38 ==== 
 * signature: undefined __register FUN_0045ad38(int * param_1)
 * body: 0045ad38-0045ad52
 */

void FUN_0045ad38(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 5;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    param_1 = (int *)thunk_FUN_00402808((uint)param_1);
  }
  if (param_1[5] < 1) {
    FUN_00402f9c(param_1);
  }
  return;
}


