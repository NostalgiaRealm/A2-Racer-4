
/* ==== FUN_0040fb30 @ 0040fb30 ==== 
 * signature: undefined __register FUN_0040fb30(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * body: 0040fb30-0040fb77
 */

void FUN_0040fb30(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  byte *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (byte *)0x0;
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00405298(param_2,(int *)&local_8);
  FUN_0040faf8(param_1,local_8,param_3);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0040fb7f;
  pcStack_1c = (code *)0x40fb77;
  FUN_004039b8((int *)&local_8);
  return;
}


