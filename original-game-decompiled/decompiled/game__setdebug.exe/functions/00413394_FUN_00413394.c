
/* ==== FUN_00413394 @ 00413394 ==== 
 * signature: undefined __register FUN_00413394(uint param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00413394-004133e7
 */

void FUN_00413394(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_104 [64];
  
  while (0 < (int)param_1) {
    if ((int)param_1 < 0x101) {
      FUN_00411b6c(*(int *)(param_4 + -4),local_104,param_1);
      param_1 = 0;
    }
    else {
      FUN_00411b6c(*(int *)(param_4 + -4),local_104,0x100);
      param_1 = param_1 - 0x100;
    }
  }
  return;
}


