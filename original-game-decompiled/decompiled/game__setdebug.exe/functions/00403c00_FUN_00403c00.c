
/* ==== FUN_00403c00 @ 00403c00 ==== 
 * signature: undefined __register FUN_00403c00(int * param_1, LPCWSTR param_2)
 * body: 00403c00-00403c0f
 */

void FUN_00403c00(int *param_1,LPCWSTR param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (LPCWSTR)0x0) {
    uVar1 = *(uint *)(param_2 + -2) >> 1;
  }
  FUN_00403ad0(param_1,param_2,uVar1);
  return;
}


