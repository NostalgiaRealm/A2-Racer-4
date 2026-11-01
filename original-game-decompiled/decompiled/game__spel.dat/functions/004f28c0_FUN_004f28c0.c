
/* ==== FUN_004f28c0 @ 004f28c0 ==== 
 * signature: undefined __fastcall FUN_004f28c0(uint param_1)
 * body: 004f28c0-004f2908
 */

void __fastcall FUN_004f28c0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0x5c);
  *(uint *)(*(int *)(param_1 + 0xa4) + 0x5c) = CONCAT31((int3)((uint)uVar1 >> 8),0x21);
  FUN_0053a580(*(void **)(*(int *)(*(int *)(param_1 + 0xa4) + 0xc) + 0x10),param_1);
  uVar2 = *(uint *)(*(int *)(param_1 + 0xa4) + 0x5c);
  *(uint *)(*(int *)(param_1 + 0xa4) + 0x5c) = (uVar2 ^ (int)(char)uVar1) & 0xff ^ uVar2;
  return;
}


