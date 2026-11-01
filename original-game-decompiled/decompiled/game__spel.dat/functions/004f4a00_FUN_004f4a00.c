
/* ==== FUN_004f4a00 @ 004f4a00 ==== 
 * signature: undefined __fastcall FUN_004f4a00(int param_1)
 * body: 004f4a00-004f4a54
 */

void __fastcall FUN_004f4a00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x22c);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(param_1 + 0x94) = *puVar4;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x22c) + 0x10);
  puVar5 = (undefined4 *)(param_1 + 0x108);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x22c) = 0;
  return;
}


