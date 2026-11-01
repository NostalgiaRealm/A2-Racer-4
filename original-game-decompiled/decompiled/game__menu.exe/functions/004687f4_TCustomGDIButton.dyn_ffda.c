
/* ==== TCustomGDIButton.dyn_ffda @ 004687f4 ==== 
 * signature: undefined TCustomGDIButton.dyn_ffda(void)
 * body: 004687f4-00468830
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomGDIButton_dyn_ffda
               (int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 extraout_ECX;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  (**(code **)(*param_1 + 0x74))();
  TControl_dyn_ffda((int)param_1,param_2,CONCAT31((int3)((uint)extraout_ECX >> 8),param_3),param_4,
                    param_5);
  return;
}


