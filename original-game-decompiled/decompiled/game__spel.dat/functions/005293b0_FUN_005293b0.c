
/* ==== FUN_005293b0 @ 005293b0 ==== 
 * signature: undefined __cdecl FUN_005293b0(int param_1, int * param_2, double * param_3, uint param_4, double * param_5, double * param_6, int * param_7)
 * body: 005293b0-00529514
 */

void __cdecl
FUN_005293b0(int param_1,int *param_2,double *param_3,uint param_4,double *param_5,double *param_6,
            int *param_7)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  uint local_10;
  int local_c [2];
  
  iVar5 = param_1 + -1;
  local_10 = param_4;
  local_c[0] = 0;
  FUN_00528030(param_2,iVar5,param_1,&local_10,param_7);
  if (iVar5 != 0) {
    piVar6 = param_2 + param_1 + -2;
    iVar4 = param_1 + -2;
    do {
      if (*(double *)(*piVar6 + iVar4 * 8) < 0.0) {
        local_10 = local_10 ^ 1;
      }
      piVar6 = piVar6 + -1;
      bVar7 = iVar4 != 0;
      iVar4 = iVar4 + -1;
    } while (bVar7);
  }
  if (*param_7 == 0) {
    FUN_005271c0((int)param_2,iVar5,param_1,local_10,(int)param_5,local_c);
    if (local_c[0] == 0) goto LAB_005294d1;
    DAT_0074cb88 = DAT_0074cb88 + 1;
    if (DAT_0074be68 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_sethyperplane_gauss__singular_005c1f20);
    }
  }
  else {
    DAT_0074cb88 = DAT_0074cb88 + 1;
    if (DAT_0074be68 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_sethyperplane_gauss__nearly_s_005c1f7c);
    }
    FUN_005271c0((int)param_2,iVar5,param_1,local_10,(int)param_5,local_c);
  }
  if (local_c[0] != 0) {
    *param_7 = 1;
  }
LAB_005294d1:
  FUN_005285e0(param_5,param_1,1,(double *)0x0,(undefined4 *)0x0);
  pdVar3 = param_3 + 1;
  *param_6 = -(*param_3 * *param_5);
  if (iVar5 != 0) {
    iVar4 = 8 - (int)pdVar3;
    do {
      pdVar1 = (double *)((int)param_5 + iVar4 + (int)pdVar3);
      dVar2 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      iVar5 = iVar5 + -1;
      *param_6 = *param_6 - *pdVar1 * dVar2;
    } while (iVar5 != 0);
  }
  return;
}


