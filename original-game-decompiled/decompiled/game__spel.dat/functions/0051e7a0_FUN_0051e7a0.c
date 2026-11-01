
/* ==== FUN_0051e7a0 @ 0051e7a0 ==== 
 * signature: int __cdecl FUN_0051e7a0(double * param_1, int param_2, double * param_3, int param_4, char * param_5, undefined4 param_6, int * param_7)
 * body: 0051e7a0-0051e8da
 */

int __cdecl
FUN_0051e7a0(double *param_1,int param_2,double *param_3,int param_4,char *param_5,
            undefined4 param_6,int *param_7)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  int unaff_ESI;
  double *unaff_EDI;
  bool bVar4;
  void *pvVar5;
  
  if (DAT_005be850 != 0) {
    FUN_0051e3d0(param_7);
    DAT_005be850 = 0;
  }
  pvVar5 = (void *)0x6;
  iVar2 = _strncmp(param_5,s_qhull_005be8c8,6);
  if (iVar2 != 0) {
    FUN_00558953(param_7,(byte *)s_qh_new_qhull__start_qhull_cmd_ar_005be890);
    pvVar5 = (void *)0x1;
    FUN_00559c79(1);
  }
  FUN_0051d8e0(0,param_6,param_7);
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_new_qhull__build_new_Qhull_fo_005be854);
  }
  iVar2 = __setjmp3((undefined4 *)&DAT_0074c514,0,pvVar5,unaff_EDI);
  if (iVar2 == 0) {
    DAT_0074c69c = iVar2;
    FUN_0051ae80(param_5,(byte *)param_5);
    if (DAT_0074be40 != 0) {
      DAT_0074bf8c = 1;
    }
    pdVar3 = param_3;
    if (DAT_0074be64 != 0) {
      pdVar1 = (double *)((int)param_1 + -1);
      pdVar3 = pdVar1;
      FUN_00533cf0((byte *)pdVar1,unaff_EDI,unaff_ESI);
      pdVar3 = FUN_0052c750(param_1,param_2,param_3,DAT_0074c030,pdVar3,unaff_EDI);
      bVar4 = param_4 != 0;
      param_4 = 1;
      param_1 = pdVar1;
      if (bVar4) {
        FUN_00559d4e(param_3);
      }
    }
    FUN_0051ad70(pdVar3,param_2,(int)param_1,param_4);
    FUN_00524a80();
  }
  DAT_0074c69c = 1;
  return iVar2;
}


