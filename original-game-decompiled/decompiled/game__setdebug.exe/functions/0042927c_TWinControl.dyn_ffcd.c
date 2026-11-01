
/* ==== TWinControl.dyn_ffcd @ 0042927c ==== 
 * signature: undefined TWinControl.dyn_ffcd(void)
 * body: 0042927c-004292e4
 * note: Name source: Delphi dynamic method table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffcd(int param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  
  if (((*(int *)(param_1 + 0x148) == 0) && (*(char *)(param_1 + 0x144) != '\0')) &&
     (*(char *)(param_1 + 0x17c) != '\0')) {
    piVar2 = (int *)(**(code **)(_DAT_00446628 + 0x24))(_DAT_00446628,1,param_1);
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + 0x1d;
    }
    FUN_00405308(param_2,piVar2);
  }
  else {
    FUN_00405308(param_2,*(int **)(param_1 + 0x148));
  }
  if ((*(char *)(param_1 + 0x1e8) == '\0') && (*param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x1e8) = uVar1;
  return;
}


