
/* ==== TLabel.set_PopupMenu @ 0042479c ==== 
 * signature: undefined __register TLabel.set_PopupMenu(int * param_1, int * param_2)
 * body: 0042479c-004247bd
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_PopupMenu(int *param_1,int *param_2)

{
  undefined4 extraout_ECX;
  
  param_1[0x1b] = (int)param_2;
  if (param_2 != (int *)0x0) {
    FUN_00436764(param_2,param_1);
    FUN_00413a98((int)param_2,(int)param_1,extraout_ECX);
  }
  return;
}


