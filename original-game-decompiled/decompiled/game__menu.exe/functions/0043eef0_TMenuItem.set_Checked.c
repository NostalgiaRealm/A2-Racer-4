
/* ==== TMenuItem.set_Checked @ 0043eef0 ==== 
 * signature: undefined __register TMenuItem.set_Checked(int param_1, byte param_2)
 * body: 0043eef0-0043ef41
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Checked(int param_1,byte param_2)

{
  uint uIDCheckItem;
  HMENU hMenu;
  UINT uCheck;
  
  if (param_2 != *(byte *)(param_1 + 0x2c)) {
    *(byte *)(param_1 + 0x2c) = param_2;
    if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 0x20) & 2) == 0)) {
      uCheck = *(UINT *)(&DAT_004aa8a0 + (uint)param_2 * 4);
      uIDCheckItem = (uint)*(ushort *)(param_1 + 0x44);
      hMenu = (HMENU)FUN_0043d6c8(*(int *)(param_1 + 0x58));
      CheckMenuItem(hMenu,uIDCheckItem,uCheck);
    }
    if ((param_2 != 0) && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_0043eea8(param_1);
    }
  }
  return;
}


