
/* ==== TCustomForm.dyn_b012 @ 004499fc ==== 
 * signature: undefined TCustomForm.dyn_b012(void)
 * body: 004499fc-00449a49
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b012(int *param_1)

{
  (**(code **)(*param_1 + -0x10))();
  if (((*(char *)((int)param_1 + 0x217) == '\x01') && (*(int *)(DAT_004ac7d4 + 0x38) != 0)) &&
     (*(int *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c) != 0)) {
    SendMessageA(*(HWND *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c),0x234,0,0);
  }
  return;
}


