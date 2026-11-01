
/* ==== TControl.set_Left @ 0042df54 ==== 
 * signature: undefined __register TControl.set_Left(int * param_1, undefined4 param_2)
 * body: 0042df54-0042df73
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControl_set_Left(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_2,param_1[0xd],param_1[0xf],param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  return;
}


