
/* ==== TControlActionLink.vmt_040 @ 00423948 ==== 
 * signature: undefined TControlActionLink.vmt_040(void)
 * body: 00423948-00423965
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_040(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    TLabel_set_Caption(param_1[6],param_2);
  }
  return;
}


