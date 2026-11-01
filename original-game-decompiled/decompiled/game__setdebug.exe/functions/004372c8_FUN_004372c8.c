
/* ==== FUN_004372c8 @ 004372c8 ==== 
 * signature: undefined __register FUN_004372c8(undefined4 * param_1, undefined4 * param_2)
 * body: 004372c8-00437320
 */

void FUN_004372c8(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined *local_c;
  undefined *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004371cc(param_2,(int *)&local_8);
  puVar1 = local_8;
  FUN_004371cc(param_1,(int *)&local_c);
  FUN_00407b60(local_c,puVar1);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00437328;
  pcStack_1c = (code *)0x437320;
  FUN_004039dc((int *)&local_c,2);
  return;
}


