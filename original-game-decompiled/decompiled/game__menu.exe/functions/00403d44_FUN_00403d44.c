
/* ==== FUN_00403d44 @ 00403d44 ==== 
 * signature: undefined __register FUN_00403d44(int * param_1, undefined4 * param_2, uint param_3)
 * body: 00403d44-00403d71
 */

void FUN_00403d44(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00403d20(param_3);
  if (param_2 != (undefined4 *)0x0) {
    FUN_004028d8(param_2,puVar1,param_3);
  }
  FUN_00403c5c(param_1);
  *param_1 = (int)puVar1;
  return;
}


