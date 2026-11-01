
/* ==== FUN_00401c8c @ 00401c8c ==== 
 * signature: undefined __register FUN_00401c8c(int param_1)
 * body: 00401c8c-00401cad
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401c8c(int param_1)

{
  _DAT_0044741c = _DAT_0044741c + 1;
  _DAT_00447420 = _DAT_00447420 + ((*(uint *)(param_1 + -4) & 0x7ffffffc) - 4);
  FUN_00402280(param_1);
  return;
}


