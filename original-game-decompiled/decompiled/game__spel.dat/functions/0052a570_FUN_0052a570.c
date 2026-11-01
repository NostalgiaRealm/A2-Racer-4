
/* ==== FUN_0052a570 @ 0052a570 ==== 
 * signature: int __cdecl FUN_0052a570(double * param_1, int * param_2, double * param_3, int * param_4)
 * body: 0052a570-0052a6ea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0052a570(double *param_1,int *param_2,double *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  double *pdVar5;
  bool bVar6;
  int local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  puVar2 = FUN_0051e110(DAT_0074c03c * 4);
  iVar1 = DAT_0074c60c;
  if (DAT_0074c60c != 0) {
    for (; (iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0)); iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == DAT_0074c60c) {
        if (DAT_0074c03c != 0) {
          puVar4 = puVar2 + DAT_0074c03c + -1;
          iVar3 = DAT_0074c03c + -1;
          do {
            *puVar4 = (uint)(0.0 < *(double *)(*(int *)(iVar1 + 0x18) + iVar3 * 8));
            puVar4 = puVar4 + -1;
            bVar6 = iVar3 != 0;
            iVar3 = iVar3 + -1;
          } while (bVar6);
        }
      }
      else if ((local_18 == 0) && (iVar3 = DAT_0074c03c + -1, DAT_0074c03c != 0)) {
        puVar4 = puVar2 + iVar3;
        pdVar5 = (double *)(*(int *)(iVar1 + 0x18) + iVar3 * 8);
        do {
          if (*puVar4 != (uint)(0.0 < *pdVar5)) {
            local_18 = 1;
            break;
          }
          pdVar5 = pdVar5 + -1;
          puVar4 = puVar4 + -1;
          bVar6 = iVar3 != 0;
          iVar3 = iVar3 + -1;
        } while (bVar6);
      }
      if (*(int *)(iVar1 + 0x48) != DAT_0074c6d0) {
        FUN_005273a0(param_1,iVar1,(double *)&local_10);
        *param_4 = *param_4 + 1;
        if ((*param_3 < (double)CONCAT44(uStack_c,local_10)) &&
           (((*(uint *)(iVar1 + 0x50) & 0x10000) == 0 ||
            (_DAT_0074be10 < (double)CONCAT44(uStack_c,local_10))))) {
          *(undefined4 *)param_3 = local_10;
          *(undefined4 *)((int)param_3 + 4) = uStack_c;
          *param_2 = iVar1;
        }
      }
    }
  }
  FUN_0051e2b0(puVar2,DAT_0074c03c * 4);
  return local_18;
}


