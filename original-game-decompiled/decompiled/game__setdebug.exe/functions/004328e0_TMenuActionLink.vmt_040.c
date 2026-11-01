
/* ==== TMenuActionLink.vmt_040 @ 004328e0 ==== 
 * signature: undefined TMenuActionLink.vmt_040(void)
 * body: 004328e0-004328fd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuActionLink_vmt_040(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    TMenuItem_set_Caption((int *)param_1[6],param_2);
  }
  return;
}


