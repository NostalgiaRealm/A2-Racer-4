
/* ==== FUN_0041ea1c @ 0041ea1c ==== 
 * signature: undefined FUN_0041ea1c(void)
 * body: 0041ea1c-0041ea88
 */

void FUN_0041ea1c(int param_1,int *param_2,int param_3)

{
  short asStack_70 [7];
  undefined4 auStack_62 [21];
  
  FUN_0041e0c4(param_1);
  if (param_3 == 0) {
    FUN_00402c30(auStack_62,0x54,0);
    FUN_0041e3e4(param_1,0,0,(int *)0x0,0,auStack_62);
  }
  else {
    FUN_004126b8(param_2,asStack_70,0xe);
    if (asStack_70[0] != 0x4d42) {
      FUN_004197b0();
    }
    FUN_0041e50c(param_1,param_2,param_3 + -0xe);
  }
  return;
}


