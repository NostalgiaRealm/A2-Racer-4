
/* ==== FUN_0046c384 @ 0046c384 ==== 
 * signature: undefined __register FUN_0046c384(undefined4 * param_1, undefined4 param_2, int * param_3)
 * body: 0046c384-0046c415
 */

void FUN_0046c384(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int *local_c;
  int *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*param_3 != 0) {
    FUN_00405860((int *)&local_8);
    uVar2 = (**(code **)*param_1)();
    bVar1 = FUN_0040d9ec(uVar2);
    if (bVar1) {
      FUN_00405860((int *)&local_c);
      uVar2 = (**(code **)(*local_8 + 0x10))();
      bVar1 = FUN_0040d9ec(uVar2);
      if (bVar1) {
        uVar2 = (**(code **)(*local_c + 0x18))();
        bVar1 = FUN_0040d9ec(uVar2);
        if (bVar1) {
          *param_3 = 0;
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0046c41d;
  pcStack_20 = (code *)0x46c40d;
  FUN_00405860((int *)&local_c);
  pcStack_20 = (code *)0x46c415;
  FUN_00405860((int *)&local_8);
  return;
}


