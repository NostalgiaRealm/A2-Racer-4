
/* ==== TCustomGDIButton.dyn_ffd8 @ 004688b8 ==== 
 * signature: undefined TCustomGDIButton.dyn_ffd8(void)
 * body: 004688b8-00468911
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomGDIButton_dyn_ffd8
               (int *param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  if ((((param_5 < 0) || (param_4 < 0)) || (param_1[0xe] < param_5)) || (param_1[0xf] < param_4)) {
    *(undefined1 *)((int)param_1 + 0x181) = 0;
  }
  (**(code **)(*param_1 + 0x74))();
  TControl_dyn_ffd8((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),
                    CONCAT31((int3)((uint)extraout_ECX >> 8),param_3),param_4,param_5);
  return;
}


