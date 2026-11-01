
/* ==== TOleControl.dyn_b02b @ 00470d2c ==== 
 * signature: undefined __register TOleControl.dyn_b02b(int * param_1, int param_2)
 * body: 00470d2c-00470d85
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_b02b(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar1 = FUN_00444864(param_1);
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TWinControl_vmt_000_00442fd4);
  piVar3 = (int *)0x0;
  if ((char)uVar2 != '\0') {
    piVar3 = piVar1;
  }
  if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x217) == '\x01')) {
    (**(code **)(*(int *)param_1[0x86] + 0x1c))();
    if (*(int *)(param_2 + 4) == 0) {
      FUN_004715cc();
    }
  }
  return;
}


