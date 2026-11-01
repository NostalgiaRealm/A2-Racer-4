
/* ==== FUN_0041392c @ 0041392c ==== 
 * signature: undefined __register FUN_0041392c(int param_1, undefined4 * param_2, uint param_3)
 * body: 0041392c-00413985
 */

void FUN_0041392c(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 extraout_ECX;
  uint local_c;
  
  local_c = param_3;
  local_c = FUN_00403c38((int)param_2);
  if ((int)local_c < 0x100) {
    FUN_00413988(param_1,6,extraout_ECX);
    FUN_00413830(param_1,&local_c,1);
  }
  else {
    FUN_00413988(param_1,0xc,extraout_ECX);
    FUN_00413830(param_1,&local_c,4);
  }
  FUN_00413830(param_1,param_2,local_c);
  return;
}


