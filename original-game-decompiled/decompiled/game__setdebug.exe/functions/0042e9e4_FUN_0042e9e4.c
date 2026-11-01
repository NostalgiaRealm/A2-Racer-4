
/* ==== FUN_0042e9e4 @ 0042e9e4 ==== 
 * signature: undefined __register FUN_0042e9e4(int param_1, undefined4 param_2, LRESULT param_3)
 * body: 0042e9e4-0042ea0a
 */

void FUN_0042e9e4(int param_1,undefined4 param_2,LRESULT param_3)

{
  HWND pHVar1;
  LRESULT LStack_8;
  
  LStack_8 = param_3;
  pHVar1 = FUN_00406a34((UINT *)(param_1 + 0x1c),(UINT *)(param_1 + 0x24),(UINT *)(param_1 + 0x14),
                        (LRESULT *)(param_1 + 0x10),&LStack_8);
  *(HWND *)(param_1 + 0x18) = pHVar1;
  *(bool *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c) != 0;
  return;
}


