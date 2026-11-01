
/* ==== FUN_00408448 @ 00408448 ==== 
 * signature: undefined __register FUN_00408448(int param_1, int * param_2)
 * body: 00408448-00408478
 */

void FUN_00408448(int param_1,int *param_2)

{
  uint uVar1;
  
  for (uVar1 = FUN_00403edc(param_1); (0 < (int)uVar1 && (*(byte *)(param_1 + -1 + uVar1) < 0x21));
      uVar1 = uVar1 - 1) {
  }
  FUN_004040e4(param_1,1,uVar1,param_2);
  return;
}


