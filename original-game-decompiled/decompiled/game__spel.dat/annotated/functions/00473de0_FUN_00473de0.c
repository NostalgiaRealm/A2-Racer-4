
/* ==== FUN_00473de0 @ 00473de0 ==== 
 * signature: undefined __cdecl FUN_00473de0(undefined4 * param_1, int * param_2, void * param_3)
 * body: 00473de0-00473e9e
 */

void __cdecl FUN_00473de0(undefined4 *param_1,int *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 local_18 [6];
  
  pvVar5 = FUN_00479a80(param_3,local_18,0);
  uVar1 = *(uint *)((int)pvVar5 + 0x10);
  FUN_004cf650(local_18);
  pvVar5 = FUN_00479a80(param_3,local_18,1);
  uVar2 = *(uint *)((int)pvVar5 + 0x10);
  FUN_004cf650(local_18);
  pvVar5 = FUN_00479a80(param_3,local_18,2);
  uVar3 = *(uint *)((int)pvVar5 + 0x10);
  FUN_004cf650(local_18);
  pvVar5 = FUN_00479a80(param_3,local_18,3);
  iVar4 = *(int *)((int)pvVar5 + 0x10);
  FUN_004cf650(local_18);
  FUN_004a8030((void *)(*param_2 * 0xf0 + DAT_00715e50),
               ((iVar4 << 8 | uVar1) << 8 | uVar2) << 8 | uVar3);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


