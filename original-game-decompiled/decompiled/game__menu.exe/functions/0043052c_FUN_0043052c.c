
/* ==== FUN_0043052c @ 0043052c ==== 
 * signature: int __register FUN_0043052c(double * param_1, int param_2)
 * body: 0043052c-00430564
 */

int FUN_0043052c(double *param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    iVar3 = 1;
    pdVar1 = param_1;
    do {
      pdVar1 = pdVar1 + 1;
      if (*pdVar1 < param_1[iVar2]) {
        iVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar2;
}


