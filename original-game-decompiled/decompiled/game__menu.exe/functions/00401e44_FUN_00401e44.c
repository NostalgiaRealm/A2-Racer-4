
/* ==== FUN_00401e44 @ 00401e44 ==== 
 * signature: undefined4 __register FUN_00401e44(uint * param_1, int param_2)
 * body: 00401e44-00401edb
 */

undefined4 FUN_00401e44(uint *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_18;
  int local_14;
  
  piVar2 = FUN_00401cf0((uint)param_1);
  iVar1 = piVar2[2];
  if ((iVar1 + piVar2[3]) - (param_2 + (int)param_1) < 0xd) {
    param_2 = (iVar1 + piVar2[3]) - (int)param_1;
  }
  if ((int)param_1 - iVar1 < 0xc) {
    FUN_00401a5c(iVar1,(int)param_1 + (param_2 - piVar2[2]),(int *)&local_18);
  }
  else {
    FUN_00401a5c((int)(param_1 + 1),param_2 + -4,(int *)&local_18);
  }
  if (local_18 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_00401d20(param_1,local_18 - (int)param_1);
    puVar4 = (uint *)(local_18 + local_14);
    if (puVar4 < (uint *)(piVar2[2] + piVar2[3])) {
      FUN_00401d74(puVar4,(int)param_1 + (param_2 - (int)puVar4));
    }
    uVar3 = FUN_00401570(piVar2,&local_18);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar3;
}


