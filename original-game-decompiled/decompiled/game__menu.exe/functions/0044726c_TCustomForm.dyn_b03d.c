
/* ==== TCustomForm.dyn_b03d @ 0044726c ==== 
 * signature: undefined TCustomForm.dyn_b03d(void)
 * body: 0044726c-004472e8;004472f0-004472f2
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b03d(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *puStack_c;
  int *piStack_8;
  
  puStack_c = &stack0xfffffffc;
  if ((char)param_1[0x8b] == '\0') {
    *(undefined1 *)(param_1 + 0x8b) = 1;
    puStack_10 = &UNK_004472e9;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    piStack_8 = param_1;
    if ((char)param_1[0x14] != '\0') {
      if (param_1[9] == 0) {
        puStack_c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)(DAT_004ac7d4 + 0x28));
      }
      else {
        (**(code **)(*param_1 + 0x68))(param_1,*(undefined1 *)(param_1[9] + 0x4f));
      }
      (**(code **)(*piStack_8 + 100))(piStack_8,1);
    }
    *in_FS_OFFSET = uStack_14;
    *(undefined1 *)(piStack_8 + 0x8b) = 0;
    return;
  }
  return;
}


