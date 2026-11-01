
/* ==== TCustomComboBox.dyn_0014 @ 00427c60 ==== 
 * signature: undefined TCustomComboBox.dyn_0014(void)
 * body: 00427c60-00427cb1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomComboBox_dyn_0014(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT RStack_18;
  
  if (*(char *)((int)param_1 + 0x1fa) == '\x01') {
    hbr = (HBRUSH)FUN_00418a18(*(int *)(param_1[9] + 0x130));
    (**(code **)(*param_1 + 0x40))(param_1,&RStack_18);
    FillRect(*(HDC *)(param_2 + 4),&RStack_18,hbr);
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


