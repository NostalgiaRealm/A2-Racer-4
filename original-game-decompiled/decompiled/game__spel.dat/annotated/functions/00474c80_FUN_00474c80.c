
/* ==== FUN_00474c80 @ 00474c80 ==== 
 * signature: undefined __stdcall FUN_00474c80(undefined4 * param_1, int * param_2, void * param_3, undefined4 param_4, char param_5)
 * body: 00474c80-00474d48
 */

void FUN_00474c80(undefined4 *param_1,int *param_2,void *param_3,undefined4 param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  pvVar5 = FUN_00479a80(param_3,&local_18,0);
  dVar1 = *(double *)((int)pvVar5 + 0x10);
  FUN_004cf650(&local_18);
  pvVar5 = FUN_00479a80(param_3,&local_18,1);
  dVar2 = *(double *)((int)pvVar5 + 0x10);
  FUN_004cf650(&local_18);
  pvVar5 = FUN_00479a80(param_3,&local_18,2);
  dVar3 = *(double *)((int)pvVar5 + 0x10);
  FUN_004cf650(&local_18);
  pvVar5 = FUN_00479a80(param_3,&local_18,3);
  iVar4 = *(int *)((int)pvVar5 + 0x10);
  FUN_004cf650(&local_18);
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_004a79d0(*param_2,0,0,0,0,0,0,(float)dVar1,(float)dVar2,(float)dVar3,iVar4 == 1,FUN_00454af0,
               '\0',1);
  FUN_004a7190(*param_2);
  iVar7 = 1;
  iVar4 = *(int *)(DAT_0073b168 +
                  *(int *)(DAT_0073b0d0 + *(int *)(*param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 4
                          ) * 9);
  if (1 < iVar4) {
    local_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    do {
      iVar6 = FUN_00454de0(*param_2,iVar7);
      FUN_004a79d0(iVar6,0,local_18,uStack_14,uStack_10,uStack_c,uStack_8,0.0,0.0,(float)dVar1,
                   param_5,FUN_00454af0,'\0',1);
      FUN_004a7190(iVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


