
/* ==== TWinControl.dyn_0014 @ 00428ba8 ==== 
 * signature: undefined TWinControl.dyn_0014(void)
 * body: 00428ba8-00428bf3
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0014(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT RStack_18;
  
  if (((char)param_1[0x7a] == '\0') || (*(int *)(param_2 + 4) == *(int *)(param_2 + 8))) {
    hbr = (HBRUSH)FUN_00416d90(param_1[0x4c]);
    (**(code **)(*param_1 + 0x40))(param_1,&RStack_18);
    FillRect(*(HDC *)(param_2 + 4),&RStack_18,hbr);
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}


