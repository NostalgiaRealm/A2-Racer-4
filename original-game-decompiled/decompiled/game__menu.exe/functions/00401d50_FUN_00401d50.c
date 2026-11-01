
/* ==== FUN_00401d50 @ 00401d50 ==== 
 * signature: undefined __register FUN_00401d50(int param_1)
 * body: 00401d50-00401d71
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401d50(int param_1)

{
  _DAT_004ac424 = _DAT_004ac424 + 1;
  _DAT_004ac428 = _DAT_004ac428 + ((*(uint *)(param_1 + -4) & 0x7ffffffc) - 4);
  FUN_00402344(param_1);
  return;
}


