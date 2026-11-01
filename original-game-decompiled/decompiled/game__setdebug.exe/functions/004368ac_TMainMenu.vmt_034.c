
/* ==== TMainMenu.vmt_034 @ 004368ac ==== 
 * signature: undefined TMainMenu.vmt_034(void)
 * body: 004368ac-004368bb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int TMainMenu_vmt_034(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    return *(int *)(param_1 + 0x48);
  }
  iVar1 = TMenu_vmt_034(param_1);
  return iVar1;
}


