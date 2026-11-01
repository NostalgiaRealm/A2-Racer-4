
/* ==== FUN_0040810c @ 0040810c ==== 
 * signature: undefined __register FUN_0040810c(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0040810c-0040815d
 */

void FUN_0040810c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  code *pcStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  pcStack_20 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_20;
  FUN_00405808(param_1,(int *)&local_8);
  uVar1 = FUN_0040b614((int)&DAT_00407c7c,'\x01',local_8,param_3,param_2);
  FUN_004036f4(uVar1);
  *in_FS_OFFSET = param_3;
  pcStack_20 = FUN_00408165;
  FUN_00403c5c((int *)&local_8);
  return;
}


