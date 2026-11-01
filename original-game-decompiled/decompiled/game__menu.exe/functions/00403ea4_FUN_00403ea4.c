
/* ==== FUN_00403ea4 @ 00403ea4 ==== 
 * signature: undefined __register FUN_00403ea4(int * param_1, LPCWSTR param_2)
 * body: 00403ea4-00403eb3
 */

void FUN_00403ea4(int *param_1,LPCWSTR param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (LPCWSTR)0x0) {
    uVar1 = *(uint *)(param_2 + -2) >> 1;
  }
  FUN_00403d74(param_1,param_2,uVar1);
  return;
}


