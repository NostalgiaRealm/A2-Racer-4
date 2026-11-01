
/* ==== TWinControl.dyn_0014 @ 00432c9c ==== 
 * signature: undefined __register TWinControl.dyn_0014(int * param_1, int param_2)
 * body: 00432c9c-00432ce7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0014(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT local_18;
  
  if (((char)param_1[0x7a] == '\0') || (*(int *)(param_2 + 4) == *(int *)(param_2 + 8))) {
    hbr = (HBRUSH)FUN_00418a18(param_1[0x4c]);
    (**(code **)(*param_1 + 0x40))(param_1,&local_18);
    FillRect(*(HDC *)(param_2 + 4),&local_18,hbr);
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}


