
/* ==== TPen.set_Width @ 00416b84 ==== 
 * signature: undefined TPen.set_Width(void)
 * body: 00416b84-00416bac
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPen_set_Width(int *param_1,int param_2)

{
  byte abStack_18 [8];
  int iStack_10;
  
  if (-1 < param_2) {
    FUN_00416a08((int)param_1,(undefined4 *)abStack_18);
    iStack_10 = param_2;
    FUN_00416a20(param_1,abStack_18);
  }
  return;
}


