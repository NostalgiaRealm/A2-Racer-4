
/* ==== TComboBox.get_ItemHeight @ 004279e4 ==== 
 * signature: undefined TComboBox.get_ItemHeight(void)
 * body: 004279e4-00427a07
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TComboBox_get_ItemHeight(int param_1)

{
  undefined4 uVar1;
  
  if ((byte)(*(char *)(param_1 + 0x1fa) - 3U) < 2) {
    return *(undefined4 *)(param_1 + 0x1fc);
  }
  uVar1 = FUN_0042f720(param_1,0x154,0,0);
  return uVar1;
}


