
/* ==== FUN_004985dc @ 004985dc ==== 
 * signature: undefined FUN_004985dc(void)
 * body: 004985dc-00498624
 */

void FUN_004985dc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  puStack_10 = (undefined1 *)0x4985f0;
  piStack_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_00497108,'\x01',0);
  puStack_14 = &UNK_00498625;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uStack_8 = (**(code **)(*piStack_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_0049862c;
  puStack_14 = (undefined *)0x498624;
  FUN_00402f9c(piStack_c);
  return;
}


