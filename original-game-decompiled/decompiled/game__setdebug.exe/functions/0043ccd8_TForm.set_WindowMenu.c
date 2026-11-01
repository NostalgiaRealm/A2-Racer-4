
/* ==== TForm.set_WindowMenu @ 0043ccd8 ==== 
 * signature: undefined __register TForm.set_WindowMenu(int * param_1, int param_2, undefined4 param_3)
 * body: 0043ccd8-0043ccfe
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_WindowMenu(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[0x90]) {
    param_1[0x90] = param_2;
    if (param_2 != 0) {
      FUN_00413a98(param_2,(int)param_1,param_3);
    }
    FUN_0043cc38(param_1);
  }
  return;
}


