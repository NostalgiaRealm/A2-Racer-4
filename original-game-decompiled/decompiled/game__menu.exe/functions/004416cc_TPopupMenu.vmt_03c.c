
/* ==== TPopupMenu.vmt_03c @ 004416cc ==== 
 * signature: undefined TPopupMenu.vmt_03c(void)
 * body: 004416cc-004416dd
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


