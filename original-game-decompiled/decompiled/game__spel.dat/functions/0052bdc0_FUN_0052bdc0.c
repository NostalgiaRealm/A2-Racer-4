
/* ==== FUN_0052bdc0 @ 0052bdc0 ==== 
 * signature: undefined __cdecl FUN_0052bdc0(double * param_1, int param_2, undefined4 * param_3)
 * body: 0052bdc0-0052be18
 */

void __cdecl FUN_0052bdc0(double *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  
  pdVar2 = param_1;
  if (0 < param_2) {
    param_1 = (double *)param_2;
    do {
      *param_3 = pdVar2;
      param_3 = param_3 + 1;
      pdVar3 = pdVar2;
      iVar4 = param_2;
      do {
        iVar1 = FUN_0052bd10();
        pdVar2 = pdVar3 + 1;
        iVar4 = iVar4 + -1;
        *pdVar3 = (double)iVar1 * 9.313225750491594e-10 - 1.0;
        pdVar3 = pdVar2;
      } while (iVar4 != 0);
      param_1 = (double *)((int)param_1 + -1);
    } while (param_1 != (double *)0x0);
    *param_3 = pdVar2;
    return;
  }
  *param_3 = param_1;
  return;
}


