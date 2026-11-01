
/* ==== TCustomComboBox.vmt_0c4 @ 004279a4 ==== 
 * signature: undefined __register TCustomComboBox.vmt_0c4(int param_1, char param_2)
 * body: 004279a4-004279dc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomComboBox_vmt_0c4(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1fa)) {
    *(char *)(param_1 + 0x1fa) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffdff;
    }
    else {
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x200;
    }
    FUN_00431e04(param_1);
  }
  return;
}


