
/* ==== FUN_004749b0 @ 004749b0 ==== 
 * signature: undefined __cdecl FUN_004749b0(undefined4 * param_1, int * param_2, void * param_3)
 * body: 004749b0-00474aee
 */

void __cdecl FUN_004749b0(undefined4 *param_1,int *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  void *pvVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
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
  local_14 = 0;
  local_10 = 0;
  FUN_004a79d0(*param_2,0,0,0,0,0,0,(float)dVar1,(float)dVar2,(float)dVar3,iVar4 == 1,FUN_00454af0,
               '\0',1);
  FUN_004a7190(*param_2);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


