
/* ==== TWinControlWrapper.vmt_0a8 @ 0046575c ==== 
 * signature: undefined __register TWinControlWrapper.vmt_0a8(int param_1)
 * body: 0046575c-0046577c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_0a8(int param_1)

{
  if (*(short *)(param_1 + 0x16a) != 0) {
    (**(code **)(param_1 + 0x168))(*(undefined4 *)(param_1 + 0x16c),param_1);
  }
  return;
}


