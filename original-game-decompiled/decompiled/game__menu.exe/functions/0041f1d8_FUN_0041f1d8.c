
/* ==== FUN_0041f1d8 @ 0041f1d8 ==== 
 * signature: undefined4 __register FUN_0041f1d8(int param_1)
 * body: 0041f1d8-0041f1f9
 */

undefined4 FUN_0041f1d8(int param_1)

{
  undefined4 uVar1;
  
  FUN_0041e0d4(param_1);
  FUN_0041dc04(param_1);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10) = 0;
  return uVar1;
}


