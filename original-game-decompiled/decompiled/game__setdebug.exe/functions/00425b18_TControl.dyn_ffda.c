
/* ==== TControl.dyn_ffda @ 00425b18 ==== 
 * signature: undefined TControl.dyn_ffda(void)
 * body: 00425b18-00425b4d
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffda(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  if (*(short *)(param_1 + 0xba) != 0) {
    (**(code **)(param_1 + 0xb8))
              (*(undefined4 *)(param_1 + 0xbc),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}


