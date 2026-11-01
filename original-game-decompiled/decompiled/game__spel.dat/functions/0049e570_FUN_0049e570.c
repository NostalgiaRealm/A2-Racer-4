
/* ==== FUN_0049e570 @ 0049e570 ==== 
 * signature: undefined __fastcall FUN_0049e570(int param_1)
 * body: 0049e570-0049e590
 */

void __fastcall FUN_0049e570(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0049e630(param_1);
  if (uVar1 != 0) {
    FUN_004c6c70(*(int *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  return;
}


