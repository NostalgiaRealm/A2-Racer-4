
/* ==== FUN_004154e0 @ 004154e0 ==== 
 * signature: undefined __register FUN_004154e0(int param_1, undefined4 * param_2, uint param_3)
 * body: 004154e0-00415539
 */

void FUN_004154e0(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 extraout_ECX;
  uint local_c;
  
  local_c = param_3;
  local_c = FUN_00403edc((int)param_2);
  if ((int)local_c < 0x100) {
    FUN_0041553c(param_1,6,extraout_ECX);
    FUN_004153e4(param_1,&local_c,1);
  }
  else {
    FUN_0041553c(param_1,0xc,extraout_ECX);
    FUN_004153e4(param_1,&local_c,4);
  }
  FUN_004153e4(param_1,param_2,local_c);
  return;
}


