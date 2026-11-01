
/* ==== TMenuItem.set_Enabled @ 0043ef44 ==== 
 * signature: undefined __register TMenuItem.set_Enabled(int * param_1, byte param_2)
 * body: 0043ef44-0043efba
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Enabled(int *param_1,byte param_2)

{
  int iVar1;
  uint uIDEnableItem;
  HMENU hMenu;
  UINT uEnable;
  
  if (param_2 == *(byte *)((int)param_1 + 0x2d)) {
    return;
  }
  *(byte *)((int)param_1 + 0x2d) = param_2;
  if (((*(int *)PTR_DAT_004aba10 != 2) || (iVar1 = FUN_0043f018((int)param_1), iVar1 == 0)) &&
     ((param_1[0x16] == 0 || (*(int *)(param_1[0x16] + 0x60) == 0)))) {
    if ((param_1[0x16] != 0) && ((*(byte *)(param_1 + 8) & 2) == 0)) {
      uEnable = *(UINT *)(&DAT_004aa8a8 + (uint)param_2 * 4);
      uIDEnableItem = (uint)*(ushort *)(param_1 + 0x11);
      hMenu = (HMENU)FUN_0043d6c8(param_1[0x16]);
      EnableMenuItem(hMenu,uIDEnableItem,uEnable);
    }
    (**(code **)(*param_1 + 0x38))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0x38))(param_1,1);
  return;
}


