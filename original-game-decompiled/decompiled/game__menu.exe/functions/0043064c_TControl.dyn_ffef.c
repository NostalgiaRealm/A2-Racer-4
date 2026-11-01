
/* ==== TControl.dyn_ffef @ 0043064c ==== 
 * signature: undefined TControl.dyn_ffef(void)
 * body: 0043064c-00430667
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffef(int *param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],param_1[0xf],param_1[0xe]);
  }
  return;
}


