
/* ==== FUN_00401d80 @ 00401d80 ==== 
 * signature: undefined4 __register FUN_00401d80(uint * param_1, int param_2)
 * body: 00401d80-00401e17
 */

undefined4 FUN_00401d80(uint *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_18;
  int local_14;
  
  piVar2 = FUN_00401c2c((uint)param_1);
  iVar1 = piVar2[2];
  if ((iVar1 + piVar2[3]) - (param_2 + (int)param_1) < 0xd) {
    param_2 = (iVar1 + piVar2[3]) - (int)param_1;
  }
  if ((int)param_1 - iVar1 < 0xc) {
    FUN_00401998(iVar1,(int)param_1 + (param_2 - piVar2[2]),(int *)&local_18);
  }
  else {
    FUN_00401998((int)(param_1 + 1),param_2 + -4,(int *)&local_18);
  }
  if (local_18 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00401c5c(param_1,local_18 - (int)param_1);
    puVar4 = (uint *)(local_18 + local_14);
    if (puVar4 < (uint *)(piVar2[2] + piVar2[3])) {
      FUN_00401cb0(puVar4,(int)param_1 + (param_2 - (int)puVar4));
    }
    uVar3 = FUN_004014ac(piVar2,&local_18);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar3;
}


