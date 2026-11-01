
/* ==== FUN_0046d454 @ 0046d454 ==== 
 * signature: undefined __register FUN_0046d454(int param_1, int * param_2)
 * body: 0046d454-0046d490
 */

void FUN_0046d454(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = FUN_0046d7cc((int *)&PTR_TFontAdapter_vmt_000_0046d1fc,'\x01',param_1);
    if (piVar1 != (int *)0x0) {
      piVar1 = piVar1 + 9;
    }
    FUN_00405878((int *)(param_1 + 0x20),piVar1);
  }
  FUN_00405894(param_2,*(undefined4 **)(param_1 + 0x20));
  return;
}


