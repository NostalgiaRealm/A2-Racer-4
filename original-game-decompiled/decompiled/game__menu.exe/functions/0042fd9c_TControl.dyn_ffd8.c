
/* ==== TControl.dyn_ffd8 @ 0042fd9c ==== 
 * signature: undefined __register TControl.dyn_ffd8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0042fd9c-0042fdd1
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


