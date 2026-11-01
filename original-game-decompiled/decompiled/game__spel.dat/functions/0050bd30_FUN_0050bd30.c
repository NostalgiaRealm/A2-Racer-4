
/* ==== FUN_0050bd30 @ 0050bd30 ==== 
 * signature: undefined __fastcall FUN_0050bd30(undefined2 * param_1)
 * body: 0050bd30-0050bd5d
 */

void __fastcall FUN_0050bd30(undefined2 *param_1)

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


