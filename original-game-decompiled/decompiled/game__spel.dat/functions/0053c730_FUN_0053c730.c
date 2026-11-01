
/* ==== FUN_0053c730 @ 0053c730 ==== 
 * signature: undefined __cdecl FUN_0053c730(int * param_1)
 * body: 0053c730-0053c850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0053c730(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 0x28);
  local_1c = iVar3;
  if (*(int *)(iVar3 + 0x40) == 0) {
    puVar6 = FUN_004fe470(*(void **)(*(int *)(iVar3 + 0x18) + 0xa4),iVar3);
    *(undefined4 **)(iVar3 + 0x40) = puVar6;
  }
  *(int *)(*(int *)(iVar3 + 0x40) + 4) = *(int *)(*(int *)(iVar3 + 0x40) + 4) + 1;
  if ((*(int *)(iVar3 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar3 + 0x40) < *(int *)(*(int *)(iVar3 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar3 + 0x40));
  }
  local_20 = *(int *)(iVar3 + 0x40);
  iVar3 = *param_1;
  iVar8 = iVar3 + 0x34;
  puVar4 = *(uint **)(iVar3 + 0x48);
  iVar5 = *(int *)(iVar3 + 0x44);
  puVar7 = (uint *)((uint)puVar4 & 0xfffffff0) +
           ((*(uint *)((uint)puVar4 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_18 = iVar2 + 0x18;
  local_10 = puVar7;
  local_c = FUN_00506590(iVar5);
  local_14 = *puVar7 + (int)puVar7;
  sVar1 = *(short *)(iVar3 + 0x4e);
  local_8 = iVar5;
  local_4 = iVar8;
  if (sVar1 == 0) {
    FUN_005479c0(param_1,&local_20,puVar4,&local_14);
  }
  else if (sVar1 == 1) {
    FUN_005481d0(param_1,&local_20,puVar4,&local_14);
  }
  else if (sVar1 == 2) {
    FUN_005466c0(param_1,&local_20,puVar4,&local_14);
  }
  else {
    _DAT_00000000 = 0;
  }
  *(int *)(local_c + 4) = *(int *)(local_c + 4) + -1;
  *(int *)(local_20 + 4) = *(int *)(local_20 + 4) + -1;
  return;
}


