
/* ==== TTabSheet.get_PageIndex @ 004855e0 ==== 
 * signature: int __register TTabSheet.get_PageIndex(int param_1)
 * body: 004855e0-004855fa
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TTabSheet_get_PageIndex(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 500) != 0) {
    iVar1 = FUN_0041030c(*(int *)(*(int *)(param_1 + 500) + 0x240),param_1);
    return iVar1;
  }
  return -1;
}


