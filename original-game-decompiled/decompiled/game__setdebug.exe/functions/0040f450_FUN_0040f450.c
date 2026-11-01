
/* ==== FUN_0040f450 @ 0040f450 ==== 
 * signature: undefined __register FUN_0040f450(int param_1, int param_2)
 * body: 0040f450-0040f4f1
 */

void FUN_0040f450(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_14;
  
  if (param_2 != *(int *)(param_1 + 4)) {
    if (param_2 < 0) {
      FUN_0040f42c();
    }
    iVar1 = param_2 + 0x1f;
    if (iVar1 < 0) {
      iVar1 = param_2 + 0x3e;
    }
    uVar3 = (iVar1 >> 5) << 2;
    iVar1 = *(int *)(param_1 + 4) + 0x1f;
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 4) + 0x3e;
    }
    uVar2 = (iVar1 >> 5) << 2;
    if (uVar2 != uVar3) {
      local_14 = (undefined4 *)0x0;
      if (uVar3 != 0) {
        local_14 = (undefined4 *)FUN_004026b8(uVar3);
        FUN_00402a2c(local_14,uVar3,0);
      }
      if (uVar2 != 0) {
        if (local_14 != (undefined4 *)0x0) {
          uVar3 = FUN_0040f444(uVar2,uVar3);
          FUN_004027d0(*(undefined4 **)(param_1 + 8),local_14,uVar3);
        }
        FUN_004026d0(*(int *)(param_1 + 8));
      }
      *(undefined4 **)(param_1 + 8) = local_14;
    }
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}


