
/* ==== TLabel.set_ParentColor @ 00424994 ==== 
 * signature: undefined __register TLabel.set_ParentColor(int param_1, char param_2)
 * body: 00424994-004249b0
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_ParentColor(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x4a)) &&
     (*(char *)(param_1 + 0x4a) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb009,0,0);
  }
  return;
}


