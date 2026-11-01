
/* ==== FUN_0042f824 @ 0042f824 ==== 
 * signature: undefined4 __register FUN_0042f824(int param_1, int param_2)
 * body: 0042f824-0042f880
 */

undefined4 FUN_0042f824(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  int iVar7;
  
  bVar1 = FUN_00439dbc(*(uint *)(param_2 + 8));
  sVar2 = FUN_004321a0(*(short *)(param_2 + 4),bVar1);
  iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  if (-1 < iVar7 + -1) {
    iVar6 = 0;
    do {
      iVar3 = FUN_0040f024(*(undefined4 **)(param_1 + 0x24),iVar6);
      if (sVar2 == *(short *)(iVar3 + 0x68)) {
        piVar4 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x24),iVar6);
        uVar5 = FUN_00402ef0(piVar4,extraout_EDX,extraout_ECX);
        return uVar5;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 0;
}


