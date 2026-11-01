
/* ==== TControl.dyn_ffd8 @ 00425dfc ==== 
 * signature: undefined TControl.dyn_ffd8(void)
 * body: 00425dfc-00425e31
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  if (*(short *)(param_1 + 0xca) != 0) {
    (**(code **)(param_1 + 200))
              (*(undefined4 *)(param_1 + 0xcc),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}


