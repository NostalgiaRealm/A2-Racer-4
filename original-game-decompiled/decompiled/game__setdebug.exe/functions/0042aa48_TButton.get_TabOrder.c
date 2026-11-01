
/* ==== TButton.get_TabOrder @ 0042aa48 ==== 
 * signature: int __register TButton.get_TabOrder(int param_1)
 * body: 0042aa48-0042aa68
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TButton_get_TabOrder(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_0040f080(*(int *)(*(int *)(param_1 + 0x24) + 0x16c),param_1);
    return iVar1;
  }
  return -1;
}


