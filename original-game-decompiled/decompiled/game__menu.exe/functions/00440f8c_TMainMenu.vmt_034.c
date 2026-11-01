
/* ==== TMainMenu.vmt_034 @ 00440f8c ==== 
 * signature: undefined TMainMenu.vmt_034(void)
 * body: 00440f8c-00440f9b
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


