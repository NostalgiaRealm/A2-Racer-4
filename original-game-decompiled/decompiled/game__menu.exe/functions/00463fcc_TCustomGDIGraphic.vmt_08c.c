
/* ==== TCustomGDIGraphic.vmt_08c @ 00463fcc ==== 
 * signature: undefined __register TCustomGDIGraphic.vmt_08c(int * param_1, char param_2)
 * body: 00463fcc-00463fe9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_08c(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4d]) {
    *(char *)(param_1 + 0x4d) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


