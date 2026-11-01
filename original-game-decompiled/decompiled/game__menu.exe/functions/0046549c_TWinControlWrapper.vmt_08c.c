
/* ==== TWinControlWrapper.vmt_08c @ 0046549c ==== 
 * signature: undefined __register TWinControlWrapper.vmt_08c(int param_1)
 * body: 0046549c-004654bc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_08c(int param_1)

{
  if (*(short *)(param_1 + 0x13a) != 0) {
    (**(code **)(param_1 + 0x138))(*(undefined4 *)(param_1 + 0x13c),param_1);
  }
  return;
}


