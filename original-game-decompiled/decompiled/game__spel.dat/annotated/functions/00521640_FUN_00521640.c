
/* ==== FUN_00521640 @ 00521640 ==== 
 * signature: undefined4 * __cdecl FUN_00521640(int param_1, int param_2, undefined4 param_3)
 * body: 00521640-00521739
 */

undefined4 * __cdecl FUN_00521640(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  puVar3 = operator_new(0xc0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_005215e0(puVar3);
  }
  puVar4 = operator_new(0xc0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_005215e0(puVar4);
  }
  piVar6 = puVar3 + 8;
  piVar7 = puVar3 + 0x12;
  puVar1 = puVar3 + 0x1c;
  *piVar6 = param_1;
  puVar3[10] = piVar7;
  puVar3[0xb] = puVar1;
  puVar3[9] = puVar3;
  puVar3[0x14] = puVar1;
  puVar3[0x15] = piVar6;
  *piVar7 = param_2;
  puVar3[0x13] = puVar3;
  puVar3[0x1f] = piVar7;
  piVar7 = puVar4 + 8;
  puVar3[0x1e] = piVar6;
  *puVar1 = param_3;
  puVar3[0x1d] = puVar3;
  piVar2 = puVar4 + 0x1c;
  puVar1 = puVar4 + 0x12;
  *piVar7 = param_2;
  puVar4[10] = piVar2;
  puVar4[0xb] = puVar1;
  puVar4[9] = puVar4;
  puVar4[0x14] = piVar7;
  puVar4[0x15] = piVar2;
  *puVar1 = param_3;
  puVar4[0x13] = puVar4;
  puVar4[0x1e] = puVar1;
  puVar4[0x1f] = piVar7;
  *piVar2 = param_1;
  puVar4[0x1d] = puVar4;
  puVar3[4] = puVar4;
  puVar4[4] = puVar3;
  FUN_00521560((int)puVar3);
  FUN_00521560((int)puVar4);
  FUN_0051fe50((int)puVar3);
  FUN_0051fe50((int)puVar4);
  iVar5 = 3;
  do {
    iVar5 = iVar5 + -1;
    piVar6[7] = *(int *)(*piVar6 + 0x24);
    piVar6 = (int *)piVar6[2];
  } while (iVar5 != 0);
  iVar5 = 3;
  do {
    iVar5 = iVar5 + -1;
    piVar7[7] = *(int *)(*piVar7 + 0x24);
    piVar7 = (int *)piVar7[2];
  } while (iVar5 != 0);
  return puVar3;
}


