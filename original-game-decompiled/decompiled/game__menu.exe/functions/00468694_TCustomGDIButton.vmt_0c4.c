
/* ==== TCustomGDIButton.vmt_0c4 @ 00468694 ==== 
 * signature: undefined __register TCustomGDIButton.vmt_0c4(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00468694-004686c8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIButton_vmt_0c4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_0046451c();
    *(undefined ***)(param_4 + 4) = &PTR_TWinControl_vmt_000_00465e10;
    *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_1 + 0x174);
  }
  return;
}


