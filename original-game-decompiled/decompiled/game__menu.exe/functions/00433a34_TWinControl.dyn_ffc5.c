
/* ==== TWinControl.dyn_ffc5 @ 00433a34 ==== 
 * signature: undefined1 __register TWinControl.dyn_ffc5(int param_1, undefined1 param_2, undefined4 * param_3)
 * body: 00433a34-00433a7c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined1 TWinControl_dyn_ffc5(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  local_10[0] = 0;
  if (*(short *)(param_1 + 0x1d2) != 0) {
    (**(code **)(param_1 + 0x1d0))
              (*(undefined4 *)(param_1 + 0x1d4),param_1,param_2,local_10,&local_18);
  }
  return local_10[0];
}


