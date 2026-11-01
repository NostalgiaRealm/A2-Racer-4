
/* ==== FUN_004986d0 @ 004986d0 ==== 
 * signature: undefined FUN_004986d0(void)
 * body: 004986d0-0049872d
 */

void FUN_004986d0(void)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  puStack_10 = (undefined1 *)0x4986db;
  uVar1 = FUN_0045f46c();
  puStack_10 = (undefined1 *)0x4986eb;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowNoMoneyDlg",2);
  puStack_10 = (undefined1 *)0x4986f9;
  piStack_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_00496f28,'\x01',0);
  puStack_14 = &UNK_0049872e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uStack_8 = (**(code **)(*piStack_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00498735;
  puStack_14 = (undefined *)0x49872d;
  FUN_00402f9c(piStack_c);
  return;
}


