
/* ==== FUN_004115e8 @ 004115e8 ==== 
 * signature: undefined __register FUN_004115e8(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * body: 004115e8-0041162f
 */

void FUN_004115e8(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  byte *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (byte *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00405808(param_2,(int *)&local_8);
  FUN_004115b0(param_1,local_8,param_3);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00411637;
  pcStack_1c = (code *)0x41162f;
  FUN_00403c5c((int *)&local_8);
  return;
}


