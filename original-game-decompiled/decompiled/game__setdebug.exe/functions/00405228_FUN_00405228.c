
/* ==== FUN_00405228 @ 00405228 ==== 
 * signature: undefined __register FUN_00405228(undefined4 * param_1, undefined4 param_2, undefined1 * param_3)
 * body: 00405228-0040528b
 */

void FUN_00405228(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  pcStack_10 = thunk_FUN_00403434;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_004051bc(param_1[1],0,param_3);
  *in_FS_OFFSET = uStack_14;
  puVar1 = DAT_00446014;
  if (local_8 == DAT_00446014) {
    DAT_00446014 = (undefined4 *)*local_8;
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


