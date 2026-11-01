
/* ==== FUN_00444ac0 @ 00444ac0 ==== 
 * signature: undefined __cdecl FUN_00444ac0(uint param_1, int param_2, int param_3)
 * body: 00444ac0-00444b3c
 */

void __cdecl FUN_00444ac0(uint param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  uVar2 = param_1 & 0x80000001;
  bVar4 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar4 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x3ee80000;
  puVar1 = (undefined4 *)(param_2 + 0x1c);
  if (bVar4) {
    *puVar1 = 0x3e200000;
    *(undefined4 *)(param_2 + 0x38) = 0x3f0a0008;
    uVar3 = 0x3e200000;
  }
  else {
    *puVar1 = 0x3e000000;
    *(undefined4 *)(param_2 + 0x38) = 0x3f0a0008;
    uVar3 = 0x3e000000;
  }
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x1c) = *puVar1;
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  return;
}


