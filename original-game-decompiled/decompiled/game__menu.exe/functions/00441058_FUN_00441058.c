
/* ==== FUN_00441058 @ 00441058 ==== 
 * signature: undefined FUN_00441058(void)
 * body: 00441058-00441081;0044109b-004410a0
 */

void FUN_00441058(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  pcStack_1c = thunk_FUN_00403408;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x10))();
  *in_FS_OFFSET = uStack_20;
  return;
}


