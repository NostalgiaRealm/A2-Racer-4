
/* ==== TMenuActionLink.vmt_058 @ 0043d080 ==== 
 * signature: undefined TMenuActionLink.vmt_058(void)
 * body: 0043d080-0043d09d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_058(int *param_1,short param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    TMenuItem_set_ShortCut((int *)param_1[6],param_2);
  }
  return;
}


