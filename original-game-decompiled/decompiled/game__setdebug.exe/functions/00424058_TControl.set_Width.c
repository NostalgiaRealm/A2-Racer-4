
/* ==== TControl.set_Width @ 00424058 ==== 
 * signature: undefined __register TControl.set_Width(int * param_1, undefined4 param_2)
 * body: 00424058-00424077
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControl_set_Width(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xf],param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
  return;
}


