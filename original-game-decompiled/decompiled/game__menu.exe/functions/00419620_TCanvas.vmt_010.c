
/* ==== TCanvas.vmt_010 @ 00419620 ==== 
 * signature: undefined TCanvas.vmt_010(void)
 * body: 00419620-00419633
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCanvas_vmt_010(int param_1)

{
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_1);
  }
  return;
}


