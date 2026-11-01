
/* ==== TCustomGDIButton.dyn_5403 @ 004684dc ==== 
 * signature: undefined TCustomGDIButton.dyn_5403(void)
 * body: 004684dc-0046852b
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomGDIButton_dyn_5403(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  
  if ((char)*(undefined4 *)(param_2 + 4) != *(char *)((int)param_1 + 0x17a)) {
    (**(code **)(*param_1 + 200))();
  }
  if ((byte)*(undefined4 *)(param_2 + 4) != *(byte *)((int)param_1 + 0x17a)) {
    piVar2 = (int *)FUN_00467d48(param_1[0x5d],(uint)*(byte *)((int)param_1 + 0x17a));
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0x74))();
  return;
}


