
/* ==== FUN_004f6950 @ 004f6950 ==== 
 * signature: undefined4 __fastcall FUN_004f6950(byte * param_1)
 * body: 004f6950-004f6a30
 */

undefined4 __fastcall FUN_004f6950(byte *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  double local_18;
  double local_10;
  int local_8;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x4e);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x50) + uVar3 * 4);
    *(uint *)(iVar4 + 0x80) = *(uint *)(iVar4 + 0x80) & 0xffffff01 | 1;
  }
  FUN_004f4810((int)param_1);
  local_8 = *(int *)(param_1 + 0xc);
  local_18 = *(double *)(local_8 + 0x128) - *(double *)(local_8 + 0x120);
  if (local_18 <= 1.000000013351432e-10) {
    local_10 = 9999999866.485682;
  }
  else {
    local_10 = 1.0 / local_18;
  }
  FUN_004f4560(param_1,(int)&local_18);
  uVar2 = FUN_0053f8c0(param_1);
  iVar4 = *(ushort *)(param_1 + 0x4e) - 1;
  if (-1 < iVar4) {
    do {
      local_28 = *(int *)(param_1 + 0xc);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar4 * 4);
      local_24 = uVar1;
      FUN_004f6280(*(void **)(local_28 + 0xc),(int)&local_28);
      local_20 = *(void **)(param_1 + 0xc);
      local_1c = uVar1;
      FUN_004f85d0(local_20,&local_20);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return uVar2;
  }
  return uVar2;
}


