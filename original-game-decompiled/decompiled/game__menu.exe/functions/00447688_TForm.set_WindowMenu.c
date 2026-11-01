
/* ==== TForm.set_WindowMenu @ 00447688 ==== 
 * signature: undefined __register TForm.set_WindowMenu(int * param_1, int param_2, undefined4 param_3)
 * body: 00447688-004476ae
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_WindowMenu(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[0x90]) {
    param_1[0x90] = param_2;
    if (param_2 != 0) {
      FUN_0041564c(param_2,(int)param_1,param_3);
    }
    FUN_004475e8(param_1);
  }
  return;
}


