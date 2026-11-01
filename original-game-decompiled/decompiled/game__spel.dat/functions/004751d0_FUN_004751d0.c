
/* ==== FUN_004751d0 @ 004751d0 ==== 
 * signature: undefined __cdecl FUN_004751d0(undefined4 * param_1, int * param_2, void * param_3)
 * body: 004751d0-004752f2
 */

void __cdecl FUN_004751d0(undefined4 *param_1,int *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18 [6];
  
  local_24 = 1.0;
  local_20 = 1.0;
  local_1c = 1.0;
  pvVar2 = FUN_00479a80(param_3,&local_3c,0);
  iVar1 = *(int *)((int)pvVar2 + 0x10);
  FUN_004cf650(&local_3c);
  FUN_00479a80(param_3,&local_3c,1);
  FUN_004cf650(&local_3c);
  pvVar2 = FUN_00479a80(param_3,local_18,2);
  local_3c = (float)*(double *)((int)pvVar2 + 0x10);
  FUN_004cf650(local_18);
  pvVar2 = FUN_00479a80(param_3,local_18,3);
  local_38 = (float)*(double *)((int)pvVar2 + 0x10);
  FUN_004cf650(local_18);
  pvVar2 = FUN_00479a80(param_3,local_18,4);
  local_34 = (float)*(double *)((int)pvVar2 + 0x10);
  FUN_004cf650(local_18);
  FUN_004750c0(*param_2,iVar1,local_24,local_20,local_1c);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


