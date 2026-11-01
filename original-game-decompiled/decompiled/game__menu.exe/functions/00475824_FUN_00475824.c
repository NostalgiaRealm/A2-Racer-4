
/* ==== FUN_00475824 @ 00475824 ==== 
 * signature: undefined __register FUN_00475824(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00475824-00475887
 */

void FUN_00475824(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)TDaviSpeedButton_get_Glyph(*(int *)(param_4 + -4));
  (**(code **)(*piVar1 + 0x40))(piVar1,param_1[10]);
  (**(code **)(*piVar1 + 0x34))(piVar1,param_1[9]);
  piVar1 = (int *)TDaviSpeedButton_get_Glyph(*(int *)(param_4 + -4));
  FUN_0043a8d4(param_1,param_2,piVar1);
  piVar1 = (int *)TDaviSpeedButton_get_Glyph(*(int *)(param_4 + -4));
  FUN_0047467c(*(int *)(*(int *)(param_4 + -4) + 0x134),piVar1);
  return;
}


