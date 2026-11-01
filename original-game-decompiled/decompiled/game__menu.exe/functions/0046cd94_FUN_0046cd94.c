
/* ==== FUN_0046cd94 @ 0046cd94 ==== 
 * signature: undefined FUN_0046cd94(void)
 * body: 0046cd94-0046ce09
 */

void FUN_0046cd94(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (DAT_004ad1b4 != (code *)0x0) {
    (*DAT_004ad1b4)();
  }
  if ((DAT_004ab088 != 0xffffffff) && (DAT_004ab074 != (code *)0x0)) {
    uVar2 = (*DAT_004ab074)();
    DAT_004ad1b8 = FUN_0040d9ec(uVar2);
    if (((*PTR_DAT_004ab6c8 == '\0') && ((DAT_004ab088 & 2) == 0)) && (DAT_004ab088 != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *PTR_DAT_004ab6c8 = uVar1;
    return;
  }
  uVar2 = CoInitialize((LPVOID)0x0);
  DAT_004ad1b8 = FUN_0040d9ec(uVar2);
  return;
}


