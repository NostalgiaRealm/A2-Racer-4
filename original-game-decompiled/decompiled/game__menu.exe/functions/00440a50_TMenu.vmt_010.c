
/* ==== TMenu.vmt_010 @ 00440a50 ==== 
 * signature: undefined TMenu.vmt_010(void)
 * body: 00440a50-00440a7a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenu_vmt_010(int param_1,int param_2,char param_3)

{
  TComponent_vmt_010(param_1,param_2,param_3);
  if ((param_2 == *(int *)(param_1 + 0x3c)) && (param_3 == '\x01')) {
    TMainMenu_set_Images(param_1,0);
  }
  return;
}


