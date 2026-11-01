
/* ==== TForm.set_ObjectMenuItem @ 0043ccb4 ==== 
 * signature: undefined __register TForm.set_ObjectMenuItem(int param_1, int * param_2, undefined4 param_3)
 * body: 0043ccb4-0043ccd4
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_ObjectMenuItem(int param_1,int *param_2,undefined4 param_3)

{
  *(int **)(param_1 + 0x248) = param_2;
  if (param_2 != (int *)0x0) {
    FUN_00413a98((int)param_2,param_1,param_3);
    TMenuItem_set_Enabled(param_2,0);
  }
  return;
}


