
/* ==== FUN_0046c2d8 @ 0046c2d8 ==== 
 * signature: undefined __register FUN_0046c2d8(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * body: 0046c2d8-0046c363
 */

void FUN_0046c2d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_4 = 0;
  local_8 = param_3;
  FUN_00405860((int *)&local_c);
  uVar2 = (**(code **)*param_1)();
  bVar1 = FUN_0040d9ec(uVar2);
  if (bVar1) {
    FUN_00405860((int *)&local_10);
    uVar2 = (**(code **)(*local_c + 0x10))();
    bVar1 = FUN_0040d9ec(uVar2);
    if (bVar1) {
      (**(code **)(*local_10 + 0x14))();
    }
  }
  *in_FS_OFFSET = param_1;
  FUN_00405860((int *)&local_10);
  FUN_00405860((int *)&local_c);
  return;
}


