
/* ==== TfrmKeySettings.FormKeyDown @ 00491e64 ==== 
 * signature: undefined TfrmKeySettings.FormKeyDown(void)
 * body: 00491e64-00491ee6
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmKeySettings_FormKeyDown(int param_1,undefined4 param_2,ushort *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  int iStack_c;
  int iStack_8;
  
  puStack_14 = &stack0xfffffffc;
  iStack_c = 0;
  puStack_18 = &UNK_00491ee7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iStack_8 = param_1;
  if (*(char *)(param_1 + 0x328) == '\x01') {
    FUN_00491d98(param_1,(uint)*param_3,&iStack_c);
    if (iStack_c == 0) {
      FUN_0040be6c();
      FUN_00491c7c(iStack_8,0);
    }
    else {
      FUN_00491e0c(*(undefined4 *)(iStack_8 + 0x32c),*param_3);
      FUN_00491c7c(iStack_8,0,&stack0xfffffffc);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_00491eee;
  puStack_18 = (undefined *)0x491ee6;
  FUN_00403c5c(&iStack_c);
  return;
}


