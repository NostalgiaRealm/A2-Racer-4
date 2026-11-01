
/* ==== FUN_004368bc @ 004368bc ==== 
 * signature: undefined __register FUN_004368bc(int * param_1)
 * body: 004368bc-004368e5;004368ff-00436904
 */

void FUN_004368bc(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  pcStack_1c = thunk_FUN_00403180;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x10))();
  *in_FS_OFFSET = uStack_20;
  return;
}


