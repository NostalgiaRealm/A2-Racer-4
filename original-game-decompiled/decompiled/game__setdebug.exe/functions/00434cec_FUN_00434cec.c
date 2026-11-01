
/* ==== FUN_00434cec @ 00434cec ==== 
 * signature: undefined __register FUN_00434cec(int * param_1, undefined4 param_2, undefined4 param_3, char param_4)
 * body: 00434cec-00434d42
 */

void FUN_00434cec(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_4 != '\0') && ((param_1[10] != 0 || (param_1[0x18] != 0)))) {
    FUN_00432f04(param_1);
  }
  if ((int *)param_1[0x16] == (int *)0x0) {
    piVar1 = (int *)param_1[1];
    uVar2 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_vmt_000_00431b18);
    if ((char)uVar2 != '\0') {
      FUN_00436880(piVar1);
    }
  }
  else {
    FUN_00434cec((int *)param_1[0x16],param_1,param_3,'\0');
  }
  return;
}


