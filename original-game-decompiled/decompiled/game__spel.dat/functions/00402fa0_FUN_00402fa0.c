
/* ==== FUN_00402fa0 @ 00402fa0 ==== 
 * signature: undefined __fastcall FUN_00402fa0(int param_1)
 * body: 00402fa0-00402ff6
 */

void __fastcall FUN_00402fa0(int param_1)

{
  longlong lVar1;
  
  FUN_004a6800(0x7128b0);
  lVar1 = __ftol();
  *(int *)(param_1 + 0x2c) = (int)lVar1;
  if ((float)(int)lVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_004c5930(0,0,0x28,&DAT_0058e9ec);
  return;
}


