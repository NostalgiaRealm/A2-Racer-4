
/* ==== TMenuActionLink.vmt_058 @ 004329a0 ==== 
 * signature: undefined TMenuActionLink.vmt_058(void)
 * body: 004329a0-004329bd
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


