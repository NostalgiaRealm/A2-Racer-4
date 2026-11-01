
/* ==== TGroupBox.get_TabOrder @ 00434b74 ==== 
 * signature: int __register TGroupBox.get_TabOrder(int param_1)
 * body: 00434b74-00434b94
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TGroupBox_get_TabOrder(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_0041030c(*(int *)(*(int *)(param_1 + 0x24) + 0x16c),param_1);
    return iVar1;
  }
  return -1;
}


