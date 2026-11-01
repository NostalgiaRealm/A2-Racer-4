
/* ==== FUN_00496684 @ 00496684 ==== 
 * signature: undefined __register FUN_00496684(int param_1)
 * body: 00496684-004966c5
 */

void FUN_00496684(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x35c) + 0x5c))(*(int **)(param_1 + 0x35c),uVar1 ^ 1);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))();
  (**(code **)(**(int **)(param_1 + 0x36c) + 0x5c))(*(int **)(param_1 + 0x36c),uVar2);
  return;
}


