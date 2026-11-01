
/* ==== FUN_00405798 @ 00405798 ==== 
 * signature: undefined __register FUN_00405798(undefined4 * param_1, undefined4 param_2, undefined1 * param_3)
 * body: 00405798-004057fb
 */

void FUN_00405798(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_0040572c(param_1[1],0,param_3);
  *in_FS_OFFSET = uStack_14;
  puVar1 = DAT_004aa01c;
  if (local_8 == DAT_004aa01c) {
    DAT_004aa01c = (undefined4 *)*local_8;
  }
  else {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((undefined4 *)*puVar1 == local_8) {
        *puVar1 = *local_8;
        return;
      }
    }
  }
  return;
}


