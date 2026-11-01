
/* ==== TCustomGDIGraphic.vmt_090 @ 00463fec ==== 
 * signature: undefined TCustomGDIGraphic.vmt_090(void)
 * body: 00463fec-00464009
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_090(int *param_1,int param_2)

{
  if (param_2 != param_1[0x4e]) {
    param_1[0x4e] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


