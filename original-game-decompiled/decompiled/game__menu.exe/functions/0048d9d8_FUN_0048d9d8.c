
/* ==== FUN_0048d9d8 @ 0048d9d8 ==== 
 * signature: undefined FUN_0048d9d8(void)
 * body: 0048d9d8-0048da15
 */

void FUN_0048d9d8(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_0048dcd0(param_1,param_2);
  uVar1 = FUN_0048e6d4(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_2);
  if (SBORROW4(*(int *)(param_1 + 8),*(int *)(uVar1 + 0x30))) {
    thunk_FUN_00402808(uVar1);
  }
  FUN_0048dca4(param_1);
  return;
}


