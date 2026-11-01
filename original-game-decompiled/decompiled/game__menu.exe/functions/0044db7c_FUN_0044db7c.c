
/* ==== FUN_0044db7c @ 0044db7c ==== 
 * signature: undefined __register FUN_0044db7c(byte param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0044db7c-0044dbd5
 */

void FUN_0044db7c(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  
  BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_4 + -4) + 0x24));
  if (((BVar1 != 0) == (bool)DAT_004aaa64) && (param_1 != DAT_004aaa64)) {
    SetWindowPos(*(HWND *)(*(int *)(param_4 + -4) + 0x24),(HWND)0x0,0,0,0,0,
                 (uint)*(ushort *)(&DAT_004aaa68 + (uint)param_1 * 2));
    DAT_004aaa64 = param_1;
  }
  return;
}


