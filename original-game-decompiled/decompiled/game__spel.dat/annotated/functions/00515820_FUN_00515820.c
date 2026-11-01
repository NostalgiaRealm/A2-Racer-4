
/* ==== FUN_00515820 @ 00515820 ==== 
 * signature: undefined __stdcall FUN_00515820(void)
 * body: 00515820-0051587f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515820(void)

{
  uint uVar1;
  
  for (uVar1 = DAT_0074c60c; (uVar1 != 0 && (*(int *)(uVar1 + 0x30) != 0));
      uVar1 = *(uint *)(uVar1 + 0x30)) {
    if ((*(uint *)(uVar1 + 0x50) & 0x1000000) == 0) {
      FUN_00528970(uVar1);
    }
  }
  if ((_DAT_0074c668 < 8.988465674311579e+307) && (-_DAT_0074cbc8 < _DAT_0074c688)) {
    _DAT_0074c688 = -_DAT_0074cbc8;
    return;
  }
  return;
}


