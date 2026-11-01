
/* ==== TMenuItem.dyn_fff0 @ 00434ee0 ==== 
 * signature: undefined TMenuItem.dyn_fff0(void)
 * body: 00434ee0-00434fc5
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMenuItem_dyn_fff0(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)TMenuItem_get_Action((int)param_1);
  uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TCustomAction_vmt_000_0042f24c);
  if ((char)uVar2 != '\0') {
    if ((param_3 == '\0') || (param_1[9] == 0)) {
      TMenuItem_set_Caption(param_1,*(uint **)(param_2 + 0x54));
    }
    if ((param_3 == '\0') || ((char)param_1[0xb] == '\0')) {
      TMenuItem_set_Checked((int)param_1,*(byte *)(param_2 + 0x58));
    }
    if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x2d) == '\x01')) {
      TMenuItem_set_Enabled(param_1,*(byte *)(param_2 + 0x59));
    }
    if ((param_3 == '\0') || (param_1[0x12] == 0)) {
      param_1[0x12] = *(int *)(param_2 + 0x5c);
    }
    if ((param_3 == '\0') || (param_1[0x13] == 0)) {
      FUN_00403a0c(param_1 + 0x13,*(undefined4 **)(param_2 + 0x60));
    }
    if ((param_3 == '\0') || (param_1[0xd] == -1)) {
      TMenuItem_set_ImageIndex(param_1,*(int *)(param_2 + 100));
    }
    if ((param_3 == '\0') || ((short)param_1[0x15] == 0)) {
      TMenuItem_set_ShortCut(param_1,*(short *)(param_2 + 0x68));
    }
    if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x32) == '\x01')) {
      TMenuItem_set_Visible(param_1,*(char *)(param_2 + 0x6a));
    }
    if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x82) == 0)) {
      param_1[0x20] = *(int *)(param_2 + 0x30);
      param_1[0x21] = *(int *)(param_2 + 0x34);
    }
  }
  return;
}


