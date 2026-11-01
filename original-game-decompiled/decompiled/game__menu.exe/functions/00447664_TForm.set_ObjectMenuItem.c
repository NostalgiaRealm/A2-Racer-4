
/* ==== TForm.set_ObjectMenuItem @ 00447664 ==== 
 * signature: undefined __register TForm.set_ObjectMenuItem(int param_1, int * param_2, undefined4 param_3)
 * body: 00447664-00447684
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_ObjectMenuItem(int param_1,int *param_2,undefined4 param_3)

{
  *(int **)(param_1 + 0x248) = param_2;
  if (param_2 != (int *)0x0) {
    FUN_0041564c((int)param_2,param_1,param_3);
    TMenuItem_set_Enabled(param_2,0);
  }
  return;
}


