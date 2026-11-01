
/* ==== TGraphic.vmt_03c @ 00418ccc ==== 
 * signature: undefined TGraphic.vmt_03c(void)
 * body: 00418ccc-00418cdb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGraphic_vmt_03c(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x19)) {
    *(char *)((int)param_1 + 0x19) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


