
/* ==== TMenuActionLink.vmt_05c @ 004329c0 ==== 
 * signature: undefined TMenuActionLink.vmt_05c(void)
 * body: 004329c0-004329dd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_05c(int *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    TMenuItem_set_Visible((int *)param_1[6],param_2);
  }
  return;
}


