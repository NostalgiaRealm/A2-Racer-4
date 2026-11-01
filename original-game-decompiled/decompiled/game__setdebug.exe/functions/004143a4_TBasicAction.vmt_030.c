
/* ==== TBasicAction.vmt_030 @ 004143a4 ==== 
 * signature: undefined TBasicAction.vmt_030(void)
 * body: 004143a4-004143b7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBasicAction_vmt_030(int param_1)

{
  if (*(short *)(param_1 + 0x2a) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
  }
  return;
}


