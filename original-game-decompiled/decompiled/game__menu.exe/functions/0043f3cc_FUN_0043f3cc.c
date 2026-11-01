
/* ==== FUN_0043f3cc @ 0043f3cc ==== 
 * signature: undefined __register FUN_0043f3cc(int * param_1, undefined4 param_2, undefined4 param_3, char param_4)
 * body: 0043f3cc-0043f422
 */

void FUN_0043f3cc(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_4 != '\0') && ((param_1[10] != 0 || (param_1[0x18] != 0)))) {
    FUN_0043d5e4(param_1);
  }
  if ((int *)param_1[0x16] == (int *)0x0) {
    piVar1 = (int *)param_1[1];
    uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_0043c1f8);
    if ((char)uVar2 != '\0') {
      FUN_00440f60(piVar1);
    }
  }
  else {
    FUN_0043f3cc((int *)param_1[0x16],param_1,param_3,'\0');
  }
  return;
}


