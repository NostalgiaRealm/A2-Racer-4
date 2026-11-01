
/* ==== FUN_004f47b0 @ 004f47b0 ==== 
 * signature: undefined __fastcall FUN_004f47b0(int param_1)
 * body: 004f47b0-004f4809
 */

void __fastcall FUN_004f47b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(iVar1 + 0x120);
  uVar3 = *(undefined4 *)(iVar1 + 0x124);
  uVar4 = *(undefined4 *)(iVar1 + 0x124);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(iVar1 + 0x120);
  *(undefined4 *)(param_1 + 0x1dc) = uVar4;
  *(undefined4 *)(param_1 + 0x1e0) = uVar2;
  *(undefined4 *)(param_1 + 0x1e4) = uVar3;
  return;
}


