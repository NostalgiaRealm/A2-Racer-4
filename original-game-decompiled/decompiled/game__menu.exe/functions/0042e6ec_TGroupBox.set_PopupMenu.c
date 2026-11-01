
/* ==== TGroupBox.set_PopupMenu @ 0042e6ec ==== 
 * signature: undefined __register TGroupBox.set_PopupMenu(int * param_1, int * param_2)
 * body: 0042e6ec-0042e70d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_PopupMenu(int *param_1,int *param_2)

{
  undefined4 extraout_ECX;
  
  param_1[0x1b] = (int)param_2;
  if (param_2 != (int *)0x0) {
    FUN_00440e44(param_2,param_1);
    FUN_0041564c((int)param_2,(int)param_1,extraout_ECX);
  }
  return;
}


