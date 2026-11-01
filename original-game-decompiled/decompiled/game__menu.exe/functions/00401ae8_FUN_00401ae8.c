
/* ==== FUN_00401ae8 @ 00401ae8 ==== 
 * signature: undefined __register FUN_00401ae8(void)
 * body: 00401ae8-00401b9d
 */

void FUN_00401ae8(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  if (DAT_004ac049 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  FUN_004014ac(0x4ac458);
  FUN_004014ac(0x4ac468);
  FUN_004014ac(0x4ac494);
  DAT_004ac490 = LocalAlloc(0,0xff8);
  if (DAT_004ac490 != (HLOCAL)0x0) {
    iVar1 = 3;
    do {
      *(undefined4 *)((int)DAT_004ac490 + iVar1 * 4 + -0xc) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x401);
    DAT_004ac47c = &DAT_004ac478;
    DAT_004ac478 = &DAT_004ac478;
    DAT_004ac484 = &DAT_004ac478;
    DAT_004ac430 = 1;
  }
  *in_FS_OFFSET = uStack_10;
  if (DAT_004ac049 != '\0') {
    uStack_10 = 0x401b9d;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac438);
  }
  return;
}


