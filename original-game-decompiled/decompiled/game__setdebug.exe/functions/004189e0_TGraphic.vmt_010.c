
/* ==== TGraphic.vmt_010 @ 004189e0 ==== 
 * signature: undefined TGraphic.vmt_010(void)
 * body: 004189e0-004189f7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGraphic_vmt_010(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  return;
}


