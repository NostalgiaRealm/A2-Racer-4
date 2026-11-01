
/* ==== TControl.set_Height @ 00424078 ==== 
 * signature: undefined __register TControl.set_Height(int * param_1, undefined4 param_2)
 * body: 00424078-00424097
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControl_set_Height(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_2,param_1[0xe]);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
  return;
}


