
/* ==== FUN_0041b8b0 @ 0041b8b0 ==== 
 * signature: undefined __register FUN_0041b8b0(int param_1)
 * body: 0041b8b0-0041b8bf
 */

void FUN_0041b8b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  }
  return;
}


