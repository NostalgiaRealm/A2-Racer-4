
/* ==== TMenu.vmt_030 @ 0044099c ==== 
 * signature: undefined TMenu.vmt_030(void)
 * body: 0044099c-004409b2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenu_vmt_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1,param_2,param_3);
  }
  return;
}


