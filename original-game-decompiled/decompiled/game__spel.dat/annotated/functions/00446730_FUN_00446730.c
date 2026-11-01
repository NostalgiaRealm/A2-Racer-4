
/* ==== FUN_00446730 @ 00446730 ==== 
 * signature: undefined __cdecl FUN_00446730(int param_1)
 * body: 00446730-004467c0
 */

void __cdecl FUN_00446730(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_004463c0(param_1);
  iVar3 = FUN_004463f0(0);
  uVar1 = *(uint *)(&DAT_006f50e0 + iVar2 * 300 + iVar3 * 0x20);
  uVar5 = DAT_006fa2f0 >> 0x18;
  iVar2 = FUN_004463c0(param_1);
  uVar5 = uVar5 / *(uint *)(&DAT_006f51a8 + iVar2 * 300);
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  uVar4 = uVar1 >> 0x18;
  if (uVar4 != 0) {
    uVar4 = uVar4 - uVar5;
  }
  iVar2 = FUN_004463c0(param_1);
  iVar3 = FUN_004463f0(0);
  *(uint *)(&DAT_006f50e0 + iVar2 * 300 + iVar3 * 0x20) = uVar1 & 0xffffff | uVar4 << 0x18;
  return;
}


