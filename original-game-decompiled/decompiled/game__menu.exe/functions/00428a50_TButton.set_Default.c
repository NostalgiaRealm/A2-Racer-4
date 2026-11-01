
/* ==== TButton.set_Default @ 00428a50 ==== 
 * signature: undefined __register TButton.set_Default(int * param_1, undefined1 param_2)
 * body: 00428a50-00428a83
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TButton_set_Default(int *param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x7e) = param_2;
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    piVar2 = FUN_00444864(param_1);
    if (piVar2 != (int *)0x0) {
      FUN_0042f720((int)piVar2,0xb007,0,piVar2[0x82]);
    }
  }
  return;
}


