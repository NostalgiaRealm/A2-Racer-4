
/* ==== TWinControl.dyn_ffbc @ 00434920 ==== 
 * signature: undefined TWinControl.dyn_ffbc(void)
 * body: 00434920-0043495c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined1 TWinControl_dyn_ffbc(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  
  uVar1 = 0;
  piVar3 = FUN_00444864(param_1);
  if (piVar3 != (int *)0x0) {
    for (; piVar3 != param_1; param_1 = (int *)param_1[9]) {
      if (*(char *)((int)param_1 + 0x47) == '\0') {
        return 0;
      }
      cVar2 = (**(code **)(*param_1 + 0x4c))();
      if (cVar2 == '\0') {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


