
/* ==== TMenuItem.set_GroupIndex @ 0043efbc ==== 
 * signature: undefined __register TMenuItem.set_GroupIndex(int param_1, byte param_2)
 * body: 0043efbc-0043effc
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_GroupIndex(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != *(byte *)(param_1 + 0x33)) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      iVar2 = FUN_0043f334(iVar1,param_1);
      FUN_0043d668(iVar1,iVar2,param_2);
    }
    *(byte *)(param_1 + 0x33) = param_2;
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_0043eea8(param_1);
    }
  }
  return;
}


