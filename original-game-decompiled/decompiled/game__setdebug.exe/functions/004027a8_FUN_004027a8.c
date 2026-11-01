
/* ==== FUN_004027a8 @ 004027a8 ==== 
 * signature: undefined __register FUN_004027a8(undefined4 param_1)
 * body: 004027a8-004027b4
 */

void FUN_004027a8(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_00405fa4();
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  return;
}


