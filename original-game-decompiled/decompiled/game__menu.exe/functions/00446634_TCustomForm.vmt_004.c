
/* ==== TCustomForm.vmt_004 @ 00446634 ==== 
 * signature: undefined TCustomForm.vmt_004(void)
 * body: 00446634-00446699
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_004(int param_1,int *param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  TControl_vmt_004(param_1,param_2);
  (**(code **)(*param_2 + 4))
            (param_2,"PixelsPerInch",
             CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1,
             FUN_00446738,param_1,0,0);
  (**(code **)(*param_2 + 4))
            (param_2,"TextHeight",
             CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1,
             FUN_0044671c,param_1,FUN_00446704,param_1);
  (**(code **)(*param_2 + 4))(param_2,"IgnoreFontProperty",0,0,0,FUN_004466e4,param_1);
  return;
}


