
/* ==== FUN_0043a57c @ 0043a57c ==== 
 * signature: undefined __register FUN_0043a57c(int * param_1, HIMAGELIST param_2)
 * body: 0043a57c-0043a5a6
 */

void FUN_0043a57c(int *param_1,HIMAGELIST param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_0043a61c(param_1);
  if (param_2 != (HIMAGELIST)0x0) {
    FUN_0043a4bc((int)param_1,param_2);
    param_1[0xc] = (int)param_2;
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


