
/* ==== FUN_00441a64 @ 00441a64 ==== 
 * signature: undefined __register FUN_00441a64(undefined4 * param_1, undefined4 * param_2)
 * body: 00441a64-00441abc
 */

void FUN_00441a64(undefined4 *param_1,undefined4 *param_2)

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
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00441968(param_2,(int *)&local_8);
  puVar1 = local_8;
  FUN_00441968(param_1,(int *)&local_c);
  FUN_0040839c(local_c,puVar1);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00441ac4;
  pcStack_1c = (code *)0x441abc;
  FUN_00403c80((int *)&local_c,2);
  return;
}


