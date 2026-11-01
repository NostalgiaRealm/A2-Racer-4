
/* ==== FUN_00401a24 @ 00401a24 ==== 
 * signature: undefined __register FUN_00401a24(void)
 * body: 00401a24-00401ad9
 */

void FUN_00401a24(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  if (DAT_00447041 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  FUN_004013e8(0x447450);
  FUN_004013e8(0x447460);
  FUN_004013e8(0x44748c);
  DAT_00447488 = LocalAlloc(0,0xff8);
  if (DAT_00447488 != (HLOCAL)0x0) {
    iVar1 = 3;
    do {
      *(undefined4 *)((int)DAT_00447488 + iVar1 * 4 + -0xc) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x401);
    DAT_00447474 = &DAT_00447470;
    DAT_00447470 = &DAT_00447470;
    DAT_0044747c = &DAT_00447470;
    DAT_00447428 = 1;
  }
  *in_FS_OFFSET = uStack_10;
  if (DAT_00447041 != '\0') {
    uStack_10 = 0x401ad9;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00447430);
  }
  return;
}


