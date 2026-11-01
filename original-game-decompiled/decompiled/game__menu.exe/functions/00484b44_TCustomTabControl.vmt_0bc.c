
/* ==== TCustomTabControl.vmt_0bc @ 00484b44 ==== 
 * signature: undefined4 __register TCustomTabControl.vmt_0bc(int param_1, undefined4 param_2)
 * body: 00484b44-00484b6b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomTabControl_vmt_0bc(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = param_2;
  if (*(short *)(param_1 + 0x23a) != 0) {
    (**(code **)(param_1 + 0x238))(*(undefined4 *)(param_1 + 0x23c),param_1,param_2,&local_8);
  }
  return local_8;
}


