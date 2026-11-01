
/* ==== TControl.dyn_001f @ 0042fec8 ==== 
 * signature: undefined TControl.dyn_001f(void)
 * body: 0042fec8-0042ff04
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_001f(int *param_1)

{
  bool bVar1;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_0042e940(param_1);
  if (bVar1) {
    FUN_0042e950(param_1,'\0');
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      FUN_0042f720((int)param_1,0x202,0,0xffffffff);
      return;
    }
  }
  else {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
  }
  return;
}


