
/* ==== FUN_0053a2c0 @ 0053a2c0 ==== 
 * signature: undefined __fastcall FUN_0053a2c0(undefined4 * param_1)
 * body: 0053a2c0-0053a2ef
 */

void __fastcall FUN_0053a2c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != param_1 + 3) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00559d4e(puVar1);
      param_1[2] = 0;
    }
    *param_1 = 0;
  }
  param_1[1] = 0;
  return;
}


