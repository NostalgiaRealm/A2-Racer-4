
/* ==== FUN_0044faec @ 0044faec ==== 
 * signature: undefined __register FUN_0044faec(int * param_1, int * param_2)
 * body: 0044faec-0044fb88
 */

void FUN_0044faec(int *param_1,int *param_2)

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
    uVar3 = FUN_0041b9c4(param_1[0x4a]);
    uVar4 = FUN_0041b9ac(param_1[0x4a]);
    FUN_0040f7e8(0,0,uVar4,param_2,uVar3);
  }
  else {
    iVar1 = FUN_0041b9c4(param_1[0x4a]);
    iVar2 = FUN_0041b9c4(param_1[0x4a]);
    iVar5 = param_1[0xf] - iVar2 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((param_1[0xf] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_0041b9ac(param_1[0x4a]);
    iVar6 = param_1[0xe] - iVar2 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((param_1[0xe] - iVar2 & 1U) != 0);
    }
    iVar2 = FUN_0041b9ac(param_1[0x4a]);
    FUN_0040f804(iVar6,iVar5,iVar2,param_2,iVar1);
  }
  return;
}


