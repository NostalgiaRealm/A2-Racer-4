
/* ==== TCustomGDIGraphic.vmt_098 @ 0046402c ==== 
 * signature: undefined TCustomGDIGraphic.vmt_098(void)
 * body: 0046402c-00464049
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_098(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4f]) {
    *(char *)(param_1 + 0x4f) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


