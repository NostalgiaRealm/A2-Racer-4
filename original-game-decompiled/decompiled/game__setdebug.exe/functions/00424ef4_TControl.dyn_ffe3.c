
/* ==== TControl.dyn_ffe3 @ 00424ef4 ==== 
 * signature: undefined TControl.dyn_ffe3(void)
 * body: 00424ef4-00424f2d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffe3(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                      undefined1 param_5,undefined4 param_6)

{
  *param_4 = 0;
  if (*(short *)(param_1 + 0xda) != 0) {
    *param_4 = 1;
    (**(code **)(param_1 + 0xd8))
              (*(undefined4 *)(param_1 + 0xdc),param_1,param_2,param_4,param_5,param_6,param_3);
  }
  return;
}


