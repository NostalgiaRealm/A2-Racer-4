
/* ==== FUN_0053bd50 @ 0053bd50 ==== 
 * signature: undefined __fastcall FUN_0053bd50(int * param_1)
 * body: 0053bd50-0053bda6
 */

void __fastcall FUN_0053bd50(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x14) >> 8 & 3;
  iVar4 = iVar1 + 0x18 + uVar2 * 0x1c;
  if (*(short *)(iVar1 + 0x32 + uVar2 * 0x1c) != 5) {
    iVar4 = iVar1 + 0x18 + ((*(uint *)(iVar1 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c;
  }
  puVar3 = FUN_0053cae0(*(uint *)(iVar4 + 0x14),(double *)(param_1 + 2));
  *(uint **)(iVar4 + 0x14) = puVar3;
  *(undefined2 *)(iVar4 + 0x1a) = 2;
  return;
}


