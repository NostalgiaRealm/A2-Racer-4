
/* ==== FUN_0045d16c @ 0045d16c ==== 
 * signature: undefined FUN_0045d16c(void)
 * body: 0045d16c-0045d19a
 */

void FUN_0045d16c(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00403c40("Assertion failure");
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x54))(*(int **)(param_1 + 0xc),param_2);
  return;
}


