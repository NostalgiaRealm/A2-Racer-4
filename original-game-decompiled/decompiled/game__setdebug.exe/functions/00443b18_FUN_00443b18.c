
/* ==== FUN_00443b18 @ 00443b18 ==== 
 * signature: undefined __register FUN_00443b18(int * param_1, int * param_2)
 * body: 00443b18-00443bb4
 */

void FUN_00443b18(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[0x4e] != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    return;
  }
  if (*(char *)((int)param_1 + 0x139) == '\0') {
    uVar3 = FUN_004196a8(param_1[0x4a]);
    uVar4 = FUN_00419690(param_1[0x4a]);
    FUN_0040e5ac(0,0,uVar4,param_2,uVar3);
  }
  else {
    iVar1 = FUN_004196a8(param_1[0x4a]);
    iVar2 = FUN_004196a8(param_1[0x4a]);
    iVar5 = param_1[0xf] - iVar2 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((param_1[0xf] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_00419690(param_1[0x4a]);
    iVar6 = param_1[0xe] - iVar2 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((param_1[0xe] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_00419690(param_1[0x4a]);
    FUN_0040e5c8(iVar6,iVar5,iVar2,param_2,iVar1);
  }
  return;
}


