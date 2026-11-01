
/* ==== FUN_00512130 @ 00512130 ==== 
 * signature: undefined __fastcall FUN_00512130(int param_1)
 * body: 00512130-005121f0
 */

void __fastcall FUN_00512130(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_18 [6];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00573e98;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4 +
                  (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + 2) * 8);
  ExceptionList = &local_c;
  FUN_0051ed50(local_18);
  local_4 = 0;
  FUN_005120e0(local_18,iVar1);
  uVar2 = FUN_0051f350((int)local_18);
  if (*(ushort *)(param_1 + 0x20) <= *(ushort *)(param_1 + 0x22)) {
    FUN_004f6060((ushort *)(param_1 + 0x20));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x22) * 4) = uVar2;
  *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  if (*(ushort *)(param_1 + 0x28) <= *(ushort *)(param_1 + 0x2a)) {
    FUN_004f6060((ushort *)(param_1 + 0x28));
  }
  local_4 = 0xffffffff;
  *(int *)(*(int *)(param_1 + 0x2c) + (uint)*(ushort *)(param_1 + 0x2a) * 4) = iVar1;
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 1;
  FUN_0051ed80(local_18);
  ExceptionList = local_c;
  return;
}


