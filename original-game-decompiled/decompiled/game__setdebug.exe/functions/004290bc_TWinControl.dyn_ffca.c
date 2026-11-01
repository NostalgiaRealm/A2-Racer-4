
/* ==== TWinControl.dyn_ffca @ 004290bc ==== 
 * signature: undefined __register TWinControl.dyn_ffca(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5, undefined4 param_6)
 * body: 004290bc-004290ed
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffca
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5,undefined4 param_6)

{
  if (*(short *)(param_1 + 0x192) != 0) {
    (**(code **)(param_1 + 400))
              (*(undefined4 *)(param_1 + 0x194),param_1,param_2,param_4,param_5,param_6,param_3);
  }
  return;
}


