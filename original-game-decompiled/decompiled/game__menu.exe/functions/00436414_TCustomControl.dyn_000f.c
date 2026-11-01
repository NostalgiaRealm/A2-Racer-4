
/* ==== TCustomControl.dyn_000f @ 00436414 ==== 
 * signature: undefined TCustomControl.dyn_000f(void)
 * body: 00436414-00436431
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomControl_dyn_000f(int *param_1,int param_2)

{
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x100;
  TWinControl_dyn_000f(param_1,param_2);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfeff;
  return;
}


