
/* ==== FUN_004c6d80 @ 004c6d80 ==== 
 * signature: undefined4 __stdcall FUN_004c6d80(void)
 * body: 004c6d80-004c6dc2
 */

undefined4 FUN_004c6d80(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00740950 != 0) {
    iVar1 = 0;
    if (0 < DAT_00740928) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + 0x30 + DAT_00740934) != 0) {
          FUN_004c6c70(iVar1);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x44;
      } while (iVar1 < DAT_00740928);
    }
    return 0;
  }
  return 0;
}


