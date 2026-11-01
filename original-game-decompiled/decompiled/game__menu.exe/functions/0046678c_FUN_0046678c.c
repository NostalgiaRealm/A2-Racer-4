
/* ==== FUN_0046678c @ 0046678c ==== 
 * signature: undefined __register FUN_0046678c(int param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * body: 0046678c-004667c6
 */

void FUN_0046678c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_4,(int)&PTR_TPersistent_vmt_000_00466ed8);
  if ((char)uVar1 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  *(int **)(param_1 + 0x128) = param_4;
  return;
}


