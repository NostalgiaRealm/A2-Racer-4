
/* ==== TPageControl.dyn_ffc3 @ 00485c24 ==== 
 * signature: undefined TPageControl.dyn_ffc3(void)
 * body: 00485c24-00485c53
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_ffc3(int *param_1)

{
  if ((param_1[0x93] != 0) && ((*(byte *)(param_1 + 8) & 8) == 0)) {
    FUN_00485f48(param_1,'\x01');
    FUN_00402f9c((int *)param_1[0x93]);
    param_1[0x93] = 0;
  }
  return;
}


