
/* ==== FUN_004065a0 @ 004065a0 ==== 
 * signature: undefined __register FUN_004065a0(void)
 * body: 004065a0-004065ea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004065a0(void)

{
  CHAR local_10c [264];
  
  GetModuleFileNameA(DAT_004ac4dc,local_10c,0x105);
  _DAT_004aa0c4 = FUN_004054a0(local_10c);
  if (_DAT_004aa0c4 == (HMODULE)0x0) {
    _DAT_004aa0c4 = DAT_004aa0b8;
  }
  FUN_00405788((undefined4 *)&DAT_004aa0b4);
  return;
}


