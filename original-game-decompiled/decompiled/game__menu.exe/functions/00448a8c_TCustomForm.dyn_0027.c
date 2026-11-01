
/* ==== TCustomForm.dyn_0027 @ 00448a8c ==== 
 * signature: undefined TCustomForm.dyn_0027(void)
 * body: 00448a8c-00448aea
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0027(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT RStack_18;
  
  if (*(char *)((int)param_1 + 0x217) == '\x01') {
    if ((*(char *)((int)param_1 + 0x217) == '\x01') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
      hbr = (HBRUSH)FUN_00418a18(*(int *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x130));
      (**(code **)(*param_1 + 0x40))(param_1,&RStack_18);
      FillRect(*(HDC *)(param_2 + 4),&RStack_18,hbr);
    }
    else {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
    }
  }
  return;
}


