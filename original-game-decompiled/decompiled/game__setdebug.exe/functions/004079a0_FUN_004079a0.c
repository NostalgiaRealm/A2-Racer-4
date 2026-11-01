
/* ==== FUN_004079a0 @ 004079a0 ==== 
 * signature: undefined __register FUN_004079a0(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004079a0-004079f1
 */

void FUN_004079a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  code *pcStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  pcStack_1c = thunk_FUN_00403434;
  pcStack_20 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_20;
  FUN_00405298(param_1,(int *)&local_8);
  uVar1 = FUN_0040a974((int)&DAT_00407528,'\x01',local_8,param_3,param_2);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = param_3;
  pcStack_20 = FUN_004079f9;
  FUN_004039b8((int *)&local_8);
  return;
}


