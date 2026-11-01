
/* ==== FUN_0042a404 @ 0042a404 ==== 
 * signature: undefined __register FUN_0042a404(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0042a404-0042a448
 */

void FUN_0042a404(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0042781c(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_004277e0(param_1,iVar3);
      FUN_00402ef0(piVar2,param_2,param_3);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


