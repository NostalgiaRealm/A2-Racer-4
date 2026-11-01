
/* ==== FUN_0040dca0 @ 0040dca0 ==== 
 * signature: undefined __stdcall FUN_0040dca0(void)
 * body: 0040dca0-0040dce4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040dca0(void)

{
  char cVar1;
  
  if (DAT_005d1aec != 0) {
    cVar1 = *(char *)(DAT_005d1aec + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(DAT_005d1aec + -1));
    }
    else {
      *(char *)(DAT_005d1aec + -1) = cVar1 + -1;
    }
  }
  DAT_005d1aec = 0;
  _DAT_005d1af0 = 0;
  _DAT_005d1af4 = 0;
  return;
}


