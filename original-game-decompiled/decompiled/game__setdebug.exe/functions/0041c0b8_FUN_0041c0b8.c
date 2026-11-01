
/* ==== FUN_0041c0b8 @ 0041c0b8 ==== 
 * signature: undefined __register FUN_0041c0b8(int param_1, int * param_2, int param_3)
 * body: 0041c0b8-0041c124
 */

void FUN_0041c0b8(int param_1,int *param_2,int param_3)

{
  short local_70 [7];
  undefined4 local_62 [21];
  
  FUN_0041b8a0(param_1);
  if (param_3 == 0) {
    FUN_00402a2c(local_62,0x54,0);
    FUN_0041ba80(param_1,0,0,(int *)0x0,0,local_62);
  }
  else {
    FUN_00410b28(param_2,local_70,0xe);
    if (local_70[0] != 0x4d42) {
      FUN_00417708();
    }
    FUN_0041bba8(param_1,param_2,param_3 + -0xe);
  }
  return;
}


