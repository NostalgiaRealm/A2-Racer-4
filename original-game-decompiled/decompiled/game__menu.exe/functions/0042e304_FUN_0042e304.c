
/* ==== FUN_0042e304 @ 0042e304 ==== 
 * signature: undefined __register FUN_0042e304(int * param_1, undefined4 param_2)
 * body: 0042e304-0042e331
 */

void FUN_0042e304(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[9]) {
    uVar1 = FUN_00403114(param_1,(int)&PTR_TWinControl_vmt_000_00442cf0);
    if ((char)uVar1 != '\0') {
      FUN_004486c8((int)param_1,param_2);
    }
  }
  return;
}


