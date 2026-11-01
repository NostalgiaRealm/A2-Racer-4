
/* ==== FUN_00413b80 @ 00413b80 ==== 
 * signature: undefined __register FUN_00413b80(int * param_1, int * param_2, undefined4 param_3)
 * body: 00413b80-00413bd4
 */

void FUN_00413b80(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00402ef0(param_2,param_1,param_3);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0,param_2[2]);
  FUN_00413b2c((int)param_1,(int)param_2,extraout_ECX);
  FUN_0041409c((int)param_2,'\x01');
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    FUN_0041404c((int)param_2,CONCAT31((int3)((uint)extraout_EDX >> 8),1),'\x01');
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  return;
}


