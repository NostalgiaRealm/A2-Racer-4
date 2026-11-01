
/* ==== FUN_004f6be0 @ 004f6be0 ==== 
 * signature: undefined __fastcall FUN_004f6be0(int param_1)
 * body: 004f6be0-004f6c5f
 */

void __fastcall FUN_004f6be0(int param_1)

{
  int iVar1;
  void *pvVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float local_c;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x36);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    local_c = 0.0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x38) + uVar4 * 4);
    iVar5 = *(ushort *)(iVar1 + 2) - 1;
    if (-1 < iVar5) {
      do {
        pvVar2 = *(void **)(*(int *)(iVar1 + 4) + iVar5 * 4);
        fVar3 = *(float *)((int)pvVar2 + 0x58);
        FUN_00505cc0(pvVar2);
        iVar5 = iVar5 + -1;
        local_c = (fVar3 - *(float *)((int)pvVar2 + 0x58)) * *(float *)((int)pvVar2 + 0x54) +
                  local_c;
      } while (-1 < iVar5);
      if (0.0 < local_c) {
        *(float *)(iVar1 + 0x28) = local_c + *(float *)(iVar1 + 0x28);
      }
    }
  }
  return;
}


