
/* ==== FUN_00474af0 @ 00474af0 ==== 
 * signature: undefined __cdecl FUN_00474af0(undefined4 * param_1, int * param_2, void * param_3)
 * body: 00474af0-00474c78
 */

void __cdecl FUN_00474af0(undefined4 *param_1,int *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  void *pvVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18 [6];
  
  pvVar8 = FUN_00479a80(param_3,&local_30,0);
  dVar1 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_30);
  pvVar8 = FUN_00479a80(param_3,&local_30,1);
  dVar2 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_30);
  pvVar8 = FUN_00479a80(param_3,&local_30,2);
  dVar3 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_30);
  pvVar8 = FUN_00479a80(param_3,&local_30,3);
  iVar7 = *(int *)((int)pvVar8 + 0x10);
  FUN_004cf650(&local_30);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  pvVar8 = FUN_00479a80(param_3,local_18,3);
  dVar4 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(local_18);
  pvVar8 = FUN_00479a80(param_3,local_18,4);
  dVar5 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(local_18);
  pvVar8 = FUN_00479a80(param_3,local_18,5);
  dVar6 = *(double *)((int)pvVar8 + 0x10);
  FUN_004cf650(local_18);
  FUN_004a79d0(*param_2,local_30,local_2c,local_28,(float)dVar4,(float)dVar5,(float)dVar6,
               (float)dVar1,(float)dVar2,(float)dVar3,iVar7 == 1,FUN_00454af0,'\0',1);
  FUN_004a7190(*param_2);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


