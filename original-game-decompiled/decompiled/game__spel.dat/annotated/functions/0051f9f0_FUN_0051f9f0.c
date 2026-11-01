
/* ==== FUN_0051f9f0 @ 0051f9f0 ==== 
 * signature: undefined __cdecl FUN_0051f9f0(int param_1, int param_2, int param_3, int param_4, undefined4 param_5, double * param_6, double * param_7, double * param_8)
 * body: 0051f9f0-0051fabc
 */

void __cdecl
FUN_0051f9f0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,double *param_6,
            double *param_7,double *param_8)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_20 [8];
  double local_18;
  double local_10;
  double local_8;
  
  FUN_0051f3e0(local_20,param_5);
  iVar1 = *(int *)(param_1 + 4);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar4 = 0;
    piVar2 = *(int **)(*(int *)(param_1 + 8) + iVar1 * 4);
    piVar3 = piVar2;
    if (0 < (short)piVar2[3]) {
      do {
        piVar3 = piVar3 + 4;
        FUN_0051f420(local_20,piVar2,(int)piVar3,param_2,param_3,param_4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (short)piVar2[3]);
    }
  }
  if (1e-19 <= local_18) {
    *param_6 = local_10 / local_18;
    *param_7 = local_18;
    *param_8 = local_8 / local_18;
    return;
  }
  *(undefined4 *)param_7 = 0;
  *(undefined4 *)((int)param_7 + 4) = 0;
  *(undefined4 *)param_6 = 0;
  *(undefined4 *)((int)param_6 + 4) = 0;
  *(undefined4 *)param_8 = 0;
  *(undefined4 *)((int)param_8 + 4) = 0x3ff00000;
  return;
}


