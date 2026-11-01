
/* ==== TCustomGDIGraphic.vmt_094 @ 0046400c ==== 
 * signature: undefined TCustomGDIGraphic.vmt_094(void)
 * body: 0046400c-00464029
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_094(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x135)) {
    *(char *)((int)param_1 + 0x135) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


