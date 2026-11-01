
/* ==== FUN_004243c4 @ 004243c4 ==== 
 * signature: undefined __register FUN_004243c4(int * param_1, undefined4 param_2)
 * body: 004243c4-004243f1
 */

void FUN_004243c4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[9]) {
    uVar1 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_vmt_000_00438554);
    if ((char)uVar1 != '\0') {
      FUN_0043dd18((int)param_1,param_2);
    }
  }
  return;
}


