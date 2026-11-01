
/* ==== TWinControl.dyn_b010 @ 00434054 ==== 
 * signature: undefined __register TWinControl.dyn_b010(int param_1, undefined4 param_2)
 * body: 00434054-00434091
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b010(int param_1,undefined4 param_2)

{
  bool bVar1;
  BOOL BVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  
  uVar3 = (undefined2)((uint)param_2 >> 0x10);
  if (((*(byte *)(param_1 + 0x40) & 0x10) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    bVar1 = FUN_00434cdc(param_1);
    uVar3 = extraout_var;
    if (bVar1) {
      BVar2 = IsWindowVisible(*(HWND *)(param_1 + 0x14c));
      uVar3 = extraout_var_00;
      if (BVar2 != 0) {
        FUN_004348e8(param_1);
        uVar3 = extraout_var_01;
      }
    }
  }
  FUN_0043181c(param_1,CONCAT22(uVar3,0xb011));
  return;
}


