
/* ==== TStringList.vmt_070 @ 004105d0 ==== 
 * signature: undefined TStringList.vmt_070(void)
 * body: 004105d0-004105e9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_070(int param_1)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(short *)(param_1 + 0x22) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24),param_1);
  }
  return;
}


