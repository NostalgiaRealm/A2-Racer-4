
/* ==== FUN_004f6a40 @ 004f6a40 ==== 
 * signature: undefined __fastcall FUN_004f6a40(int param_1)
 * body: 004f6a40-004f6a8d
 */

void __fastcall FUN_004f6a40(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int local_10;
  undefined4 local_c;
  void *local_8;
  undefined4 local_4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x4e);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar2 * 4);
    local_10 = *(int *)(param_1 + 0xc);
    local_c = uVar1;
    FUN_004f6220(*(void **)(local_10 + 0xc),(int)&local_10);
    local_8 = *(void **)(param_1 + 0xc);
    local_4 = uVar1;
    FUN_004f85a0(local_8,&local_8);
  }
  return;
}


