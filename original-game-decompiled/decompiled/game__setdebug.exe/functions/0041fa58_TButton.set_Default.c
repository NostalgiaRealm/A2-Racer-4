
/* ==== TButton.set_Default @ 0041fa58 ==== 
 * signature: undefined __register TButton.set_Default(int * param_1, undefined1 param_2)
 * body: 0041fa58-0041fa8b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TButton_set_Default(int *param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x7e) = param_2;
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    piVar2 = FUN_00439eb4(param_1);
    if (piVar2 != (int *)0x0) {
      FUN_00425780((int)piVar2,0xb007,0,piVar2[0x82]);
    }
  }
  return;
}


