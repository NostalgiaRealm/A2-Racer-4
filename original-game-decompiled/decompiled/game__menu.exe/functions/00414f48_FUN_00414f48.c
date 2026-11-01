
/* ==== FUN_00414f48 @ 00414f48 ==== 
 * signature: undefined __register FUN_00414f48(uint param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00414f48-00414f9b
 */

void FUN_00414f48(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_104 [64];
  
  while (0 < (int)param_1) {
    if ((int)param_1 < 0x101) {
      FUN_00413720(*(int *)(param_4 + -4),local_104,param_1);
      param_1 = 0;
    }
    else {
      FUN_00413720(*(int *)(param_4 + -4),local_104,0x100);
      param_1 = param_1 - 0x100;
    }
  }
  return;
}


