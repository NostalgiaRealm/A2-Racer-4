
/* ==== FUN_0053c590 @ 0053c590 ==== 
 * signature: undefined __cdecl FUN_0053c590(int * param_1)
 * body: 0053c590-0053c710
 */

void __cdecl FUN_0053c590(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = *param_1;
  uVar7 = (*(uint *)(iVar2 + 0x14) ^ 0x100) >> 8 & 3;
  iVar1 = iVar2 + 0x18 + (*(uint *)(iVar2 + 0x14) >> 8 & 3) * 0x1c;
  puVar3 = *(uint **)(iVar1 + 0x14);
  iVar4 = *(int *)(iVar2 + 0x28 + uVar7 * 0x1c);
  iVar2 = iVar2 + 0x18 + uVar7 * 0x1c;
  iVar5 = *(int *)(iVar1 + 0x10);
  puVar6 = *(uint **)(iVar2 + 0x14);
  puVar8 = (uint *)((uint)puVar3 & 0xfffffff0) +
           ((*(uint *)((uint)puVar3 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_24 = puVar8;
  local_20 = FUN_00506590(iVar5);
  local_28 = *puVar8 + (int)puVar8;
  puVar8 = (uint *)((uint)puVar6 & 0xfffffff0) +
           ((*(uint *)((uint)puVar6 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_1c = iVar5;
  local_10 = puVar8;
  local_c = FUN_00506590(iVar4);
  local_14 = *puVar8 + (int)puVar8;
  local_18 = iVar1;
  local_8 = iVar4;
  local_4 = iVar2;
  switch((int)*(short *)(iVar2 + 0x1a) + *(short *)(iVar1 + 0x1a) * 4) {
  case 0:
    FUN_00547cc0(param_1,puVar3,puVar6,&local_28,&local_14);
    break;
  case 1:
    FUN_00548710(param_1,puVar3,puVar6,&local_28,&local_14);
    break;
  case 2:
    FUN_005465d0(param_1,puVar3,puVar6,&local_28,&local_14);
    break;
  default:
    FUN_0053c040(param_1,puVar3,puVar6,&local_28,&local_14);
    break;
  case 5:
    FUN_00546db0(param_1,puVar3,puVar6,&local_28,&local_14);
  }
  *(int *)(local_20 + 4) = *(int *)(local_20 + 4) + -1;
  *(int *)(local_c + 4) = *(int *)(local_c + 4) + -1;
  return;
}


