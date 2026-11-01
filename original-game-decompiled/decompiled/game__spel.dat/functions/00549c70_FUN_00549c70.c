
/* ==== FUN_00549c70 @ 00549c70 ==== 
 * signature: undefined __fastcall FUN_00549c70(int param_1)
 * body: 00549c70-00549d26
 */

void __fastcall FUN_00549c70(int param_1)

{
  int iVar1;
  uint uVar2;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x26);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + uVar2 * 4);
    local_14 = *(float *)(iVar1 + 0xa8) + *(float *)(iVar1 + 0x88);
    local_10 = *(float *)(iVar1 + 0xac) + *(float *)(iVar1 + 0x8c);
    local_18 = *(float *)(iVar1 + 0xa4) + *(float *)(iVar1 + 0x84);
    local_24 = *(float *)(iVar1 + 0x98) + *(float *)(iVar1 + 0x78);
    local_20 = *(float *)(iVar1 + 0x9c) + *(float *)(iVar1 + 0x7c);
    local_28 = *(float *)(iVar1 + 0x94) + *(float *)(iVar1 + 0x74);
    FUN_004f3b90(iVar1,&local_18,&local_28);
  }
  return;
}


