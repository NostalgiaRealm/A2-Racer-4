
/* ==== TBasicActionLink.vmt_004 @ 00415dc4 ==== 
 * signature: undefined TBasicActionLink.vmt_004(void)
 * body: 00415dc4-00415dd8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBasicActionLink_vmt_004(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


