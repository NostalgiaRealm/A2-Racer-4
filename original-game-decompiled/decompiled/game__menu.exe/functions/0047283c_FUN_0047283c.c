
/* ==== FUN_0047283c @ 0047283c ==== 
 * signature: undefined __register FUN_0047283c(void)
 * body: 0047283c-004728a2
 */

void FUN_0047283c(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  _union_2683 local_18;
  undefined4 *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0046fd38(*(int **)(in_stack_00000004 + -4),(VARIANTARG *)&local_18.n2);
  FUN_00404e50((int *)&local_8,(short *)&local_18);
  FUN_00405894((int *)(*(int *)(in_stack_00000004 + -4) + 0x328),local_8);
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_004728aa;
  pcStack_20 = (code *)0x47289a;
  FUN_00405038((VARIANTARG *)&local_18.n2);
  pcStack_20 = (code *)0x4728a2;
  FUN_00405860((int *)&local_8);
  return;
}


