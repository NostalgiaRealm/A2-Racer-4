
/* ==== FUN_0051ed80 @ 0051ed80 ==== 
 * signature: undefined __fastcall FUN_0051ed80(undefined2 * param_1)
 * body: 0051ed80-0051edad
 */

void __fastcall FUN_0051ed80(undefined2 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(param_1 + 2);
  if (puVar1 != param_1 + 4) {
    if (puVar1 != (undefined2 *)0x0) {
      FUN_00559d4e(puVar1);
      *(undefined4 *)(param_1 + 2) = 0;
    }
    *param_1 = 0;
  }
  param_1[1] = 0;
  return;
}


