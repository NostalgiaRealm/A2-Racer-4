
/* ==== FUN_004429f0 @ 004429f0 ==== 
 * signature: undefined __register FUN_004429f0(byte param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 004429f0-00442a49
 */

void FUN_004429f0(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  
  BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_4 + -4) + 0x24));
  if (((BVar1 != 0) == (bool)DAT_00446990) && (param_1 != DAT_00446990)) {
    SetWindowPos(*(HWND *)(*(int *)(param_4 + -4) + 0x24),(HWND)0x0,0,0,0,0,
                 (uint)*(ushort *)(&DAT_00446994 + (uint)param_1 * 2));
    DAT_00446990 = param_1;
  }
  return;
}


