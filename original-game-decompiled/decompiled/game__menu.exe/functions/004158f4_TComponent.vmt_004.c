
/* ==== TComponent.vmt_004 @ 004158f4 ==== 
 * signature: undefined __register TComponent.vmt_004(int param_1, int * param_2)
 * body: 004158f4-0041595c
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
            (param_2,&DAT_00415968,*(short *)(param_1 + 0x18) != (short)local_8,FUN_004156c8,param_1
             ,FUN_004156a0,param_1);
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_00415978,local_8._2_2_ != *(short *)(param_1 + 0x1a),FUN_004156d4,param_1,
             FUN_004156b4,param_1);
  return;
}


