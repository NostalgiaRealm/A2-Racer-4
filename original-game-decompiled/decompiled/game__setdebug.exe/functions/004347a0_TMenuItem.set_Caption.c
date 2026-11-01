
/* ==== TMenuItem.set_Caption @ 004347a0 ==== 
 * signature: undefined __register TMenuItem.set_Caption(int * param_1, uint * param_2)
 * body: 004347a0-004347c7
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Caption(int *param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00403d48((uint *)param_1[9],param_2);
  if (!(bool)in_ZF) {
    FUN_00403a0c(param_1 + 9,param_2);
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


