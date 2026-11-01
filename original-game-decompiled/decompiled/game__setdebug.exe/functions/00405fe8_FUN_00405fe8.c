
/* ==== FUN_00405fe8 @ 00405fe8 ==== 
 * signature: undefined __register FUN_00405fe8(void)
 * body: 00405fe8-00406032
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405fe8(void)

{
  CHAR local_10c [264];
  
  GetModuleFileNameA(DAT_004474d4,local_10c,0x105);
  _DAT_004460b4 = FUN_00404f30(local_10c);
  if (_DAT_004460b4 == (HMODULE)0x0) {
    _DAT_004460b4 = DAT_004460a8;
  }
  FUN_00405218((undefined4 *)&DAT_004460a4);
  return;
}


