
/* ==== TMenuActionLink.vmt_044 @ 0043cfe0 ==== 
 * signature: undefined TMenuActionLink.vmt_044(void)
 * body: 0043cfe0-0043cffd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_044(int *param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x24))();
  if (cVar1 != '\0') {
    TMenuItem_set_Checked(param_1[6],param_2);
  }
  return;
}


