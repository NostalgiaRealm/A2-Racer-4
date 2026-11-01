
/* ==== TMenuActionLink.vmt_048 @ 00432920 ==== 
 * signature: undefined TMenuActionLink.vmt_048(void)
 * body: 00432920-0043293d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_048(int *param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    TMenuItem_set_Enabled((int *)param_1[6],param_2);
  }
  return;
}


