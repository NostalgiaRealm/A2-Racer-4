
/* ==== TLabel.set_ParentFont @ 00424908 ==== 
 * signature: undefined __register TLabel.set_ParentFont(int param_1, char param_2)
 * body: 00424908-00424924
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_ParentFont(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x49)) &&
     (*(char *)(param_1 + 0x49) = param_2, *(int *)(param_1 + 0x24) != 0)) {
    FUN_00425780(param_1,0xb008,0,0);
  }
  return;
}


