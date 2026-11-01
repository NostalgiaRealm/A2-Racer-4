
/* ==== FUN_00403aa0 @ 00403aa0 ==== 
 * signature: undefined __register FUN_00403aa0(int * param_1, undefined4 * param_2, uint param_3)
 * body: 00403aa0-00403acd
 */

void FUN_00403aa0(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00403a7c(param_3);
  if (param_2 != (undefined4 *)0x0) {
    FUN_004027d0(param_2,puVar1,param_3);
  }
  FUN_004039b8(param_1);
  *param_1 = (int)puVar1;
  return;
}


