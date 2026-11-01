
/* ==== FUN_00530010 @ 00530010 ==== 
 * signature: undefined __cdecl FUN_00530010(int * param_1, int param_2, int * param_3, int param_4)
 * body: 00530010-00530186
 */

void __cdecl FUN_00530010(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_4;
  piVar1 = param_3;
  iVar4 = param_2;
  FUN_0052cd70(param_2,(int)param_3,param_4,&param_2,&local_4,&local_8,&local_c,&local_10);
  param_3 = (int *)FUN_0052db00(iVar4,(int)piVar1,iVar3);
  FUN_00514af0(param_3);
  FUN_00558953(param_1,&DAT_005c3290);
  FUN_00514ba0((int *)&param_3);
  if (param_2 != 0) {
    if (iVar4 == 0) {
      param_4 = piVar1[1];
    }
    else {
      param_4 = iVar4;
    }
    DAT_0074c6d4 = DAT_0074c6d4 + 1;
    DAT_0074c6d0 = DAT_0074c6d0 + 1;
    iVar4 = param_4;
    do {
      iVar3 = *(int *)(iVar4 + 0x34);
      if ((*(uint *)(iVar4 + 0x50) & 0x800) == 0) {
        iVar2 = *(int *)(iVar3 + 8);
        iVar3 = *(int *)(iVar3 + 4);
        iVar5 = *(int *)(*(int *)(iVar4 + 0x3c) + 8);
      }
      else {
        iVar2 = *(int *)(iVar3 + 4);
        iVar3 = *(int *)(iVar3 + 8);
        iVar5 = *(int *)(*(int *)(iVar4 + 0x3c) + 4);
      }
      if (*(int *)(iVar4 + 0x48) == DAT_0074c6d0) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_printextremes_2d__loop_in_fac_005c37e8);
        FUN_005258d0(5,iVar4,iVar5);
      }
      if (*(int *)(iVar4 + 0x48) != 0) {
        if (*(int *)(iVar2 + 0x10) != DAT_0074c6d4) {
          *(int *)(iVar2 + 0x10) = DAT_0074c6d4;
          FUN_005164c0(*(uint *)(iVar2 + 8));
          FUN_00558953(param_1,&DAT_005c3290);
        }
        if (*(int *)(iVar3 + 0x10) != DAT_0074c6d4) {
          *(int *)(iVar3 + 0x10) = DAT_0074c6d4;
          FUN_005164c0(*(uint *)(iVar3 + 8));
          FUN_00558953(param_1,&DAT_005c3290);
        }
      }
      *(int *)(iVar4 + 0x48) = DAT_0074c6d0;
    } while ((iVar5 != 0) && (iVar4 = iVar5, iVar5 != param_4));
  }
  return;
}


