
/* ==== TCustomForm.vmt_004 @ 0043bc84 ==== 
 * signature: undefined TCustomForm.vmt_004(void)
 * body: 0043bc84-0043bce9
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
             FUN_0043bd88,param_1,0,0);
  (**(code **)(*param_2 + 4))
            (param_2,"TextHeight",
             CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1,
             FUN_0043bd6c,param_1,FUN_0043bd54,param_1);
  (**(code **)(*param_2 + 4))(param_2,"IgnoreFontProperty",0,0,0,FUN_0043bd34,param_1);
  return;
}


