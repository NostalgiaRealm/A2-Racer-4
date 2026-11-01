
/* ==== TControl.dyn_001f @ 00425f28 ==== 
 * signature: undefined TControl.dyn_001f(void)
 * body: 00425f28-00425f64
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_001f(int *param_1)

{
  bool bVar1;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_004249f0(param_1);
  if (bVar1) {
    FUN_00424a00(param_1,'\0');
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      FUN_00425780((int)param_1,0x202,0,0xffffffff);
      return;
    }
  }
  else {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffe;
  }
  return;
}


