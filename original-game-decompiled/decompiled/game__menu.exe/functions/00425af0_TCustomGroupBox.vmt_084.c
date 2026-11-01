
/* ==== TCustomGroupBox.vmt_084 @ 00425af0 ==== 
 * signature: undefined TCustomGroupBox.vmt_084(void)
 * body: 00425af0-00425b3f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGroupBox_vmt_084(int param_1,LPRECT param_2)

{
  LONG LVar1;
  
  TWinControl_vmt_084();
  TCanvas_set_Font(*(int *)(param_1 + 0x1f0));
  LVar1 = FUN_00419354(*(int **)(param_1 + 0x1f0),&DAT_00425b48);
  param_2->top = param_2->top + LVar1;
  InflateRect(param_2,-1,-1);
  if (*(char *)(param_1 + 0x138) != '\0') {
    InflateRect(param_2,-1,-1);
  }
  return;
}


