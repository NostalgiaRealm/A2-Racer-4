
/* ==== FUN_0046f3a4 @ 0046f3a4 ==== 
 * signature: undefined __register FUN_0046f3a4(int * param_1)
 * body: 0046f3a4-0046f3db
 */

void FUN_0046f3a4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    iVar2 = *(int *)(*param_1 + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_004102b0((undefined4 *)*param_1,iVar3);
        FUN_00402f9c(piVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00402f9c((int *)*param_1);
    *param_1 = 0;
  }
  return;
}


