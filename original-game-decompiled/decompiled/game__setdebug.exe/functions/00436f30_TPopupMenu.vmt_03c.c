
/* ==== TPopupMenu.vmt_03c @ 00436f30 ==== 
 * signature: undefined TPopupMenu.vmt_03c(void)
 * body: 00436f30-00436f41
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPopupMenu_vmt_03c(int param_1)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100));
  }
  return;
}


