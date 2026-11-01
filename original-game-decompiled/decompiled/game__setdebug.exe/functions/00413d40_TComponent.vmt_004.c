
/* ==== TComponent.vmt_004 @ 00413d40 ==== 
 * signature: undefined __register TComponent.vmt_004(int param_1, int * param_2)
 * body: 00413d40-00413da8
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponent_vmt_004(int param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[8] != 0) {
    local_8 = *(undefined4 *)(param_2[8] + 0x18);
  }
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00413db4,*(short *)(param_1 + 0x18) != (short)local_8,FUN_00413b14,param_1
             ,FUN_00413aec,param_1);
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00413dc4,local_8._2_2_ != *(short *)(param_1 + 0x1a),FUN_00413b20,param_1,
             FUN_00413b00,param_1);
  return;
}


