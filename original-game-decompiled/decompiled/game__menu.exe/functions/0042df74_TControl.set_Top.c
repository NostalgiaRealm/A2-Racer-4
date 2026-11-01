
/* ==== TControl.set_Top @ 0042df74 ==== 
 * signature: undefined __register TControl.set_Top(int * param_1, undefined4 param_2)
 * body: 0042df74-0042df95
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControl_set_Top(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_2,param_1[0xf],param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 2;
  return;
}


