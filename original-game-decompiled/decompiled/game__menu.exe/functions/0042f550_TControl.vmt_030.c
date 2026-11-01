
/* ==== TControl.vmt_030 @ 0042f550 ==== 
 * signature: uint __register TControl.vmt_030(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0042f550-0042f57d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

uint TControl_vmt_030(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_8;
  undefined3 uStack_7;
  
  _local_8 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0xaa) != 0) {
    param_1 = (**(code **)(param_1 + 0xa8))
                        (*(undefined4 *)(param_1 + 0xac),param_1,param_2,&local_8,param_3);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),local_8);
}


