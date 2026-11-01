
/* ==== FUN_00431f54 @ 00431f54 ==== 
 * signature: undefined __register FUN_00431f54(int * param_1)
 * body: 00431f54-00431f91
 */

void FUN_00431f54(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = param_1;
  while (piVar1 = (int *)piVar3[9], piVar1 != (int *)0x0) {
    piVar3 = piVar1;
    if ((char)piVar1[0x5a] == '\0') {
      return;
    }
  }
  uVar2 = FUN_00403114(piVar3,(int)&PTR_TWinControl_vmt_000_00442cf0);
  if (((char)uVar2 == '\0') && (piVar3[0x59] == 0)) {
    return;
  }
  FUN_00431e58(param_1);
  return;
}


