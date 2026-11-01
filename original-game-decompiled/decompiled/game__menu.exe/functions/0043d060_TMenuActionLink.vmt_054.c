
/* ==== TMenuActionLink.vmt_054 @ 0043d060 ==== 
 * signature: undefined TMenuActionLink.vmt_054(void)
 * body: 0043d060-0043d07d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_054(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    TMenuItem_set_ImageIndex((int *)param_1[6],param_2);
  }
  return;
}


