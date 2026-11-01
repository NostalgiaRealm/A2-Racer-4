
/* ==== FUN_00427fb4 @ 00427fb4 ==== 
 * signature: undefined __register FUN_00427fb4(int * param_1)
 * body: 00427fb4-00427ff1
 */

void FUN_00427fb4(int *param_1)

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
  uVar2 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_vmt_000_00438554);
  if (((char)uVar2 == '\0') && (piVar3[0x59] == 0)) {
    return;
  }
  FUN_00427eb8(param_1);
  return;
}


