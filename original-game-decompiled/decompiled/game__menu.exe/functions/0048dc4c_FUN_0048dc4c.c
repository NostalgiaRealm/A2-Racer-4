
/* ==== FUN_0048dc4c @ 0048dc4c ==== 
 * signature: undefined FUN_0048dc4c(void)
 * body: 0048dc4c-0048dca0
 */

void FUN_0048dc4c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x2c);
  if (SCARRY4(*(int *)(uVar1 + 4),*(int *)(param_1 + 0x10))) {
    thunk_FUN_00402808(uVar1);
  }
  FUN_0048dcb4(param_1);
  uVar1 = FUN_0048e6d4(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xcc),4);
  if (SBORROW4(*(int *)(param_1 + 8),*(int *)(uVar1 + 0x30))) {
    thunk_FUN_00402808(uVar1);
  }
  FUN_0048dca4(param_1);
  return;
}


