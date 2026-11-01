
/* ==== TWinControl.dyn_b00c @ 00433f38 ==== 
 * signature: undefined __register TWinControl.dyn_b00c(int * param_1)
 * body: 00433f38-00433f7f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b00c(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar1 == '\0') && (param_1[9] != 0)) {
    FUN_0043157c(param_1,'\0');
  }
  bVar2 = FUN_00434cdc((int)param_1);
  if ((bVar2) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    EnableWindow((HWND)param_1[0x53],-(uint)(cVar1 != '\0'));
  }
  return;
}


