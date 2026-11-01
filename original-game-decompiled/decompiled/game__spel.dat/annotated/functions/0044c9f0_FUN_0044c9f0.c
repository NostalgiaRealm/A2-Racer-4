
/* ==== FUN_0044c9f0 @ 0044c9f0 ==== 
 * signature: undefined __stdcall FUN_0044c9f0(void)
 * body: 0044c9f0-0044ca79
 */

void FUN_0044c9f0(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = FUN_004c5e40(0x1b);
  while (iVar2 != 0) {
    iVar2 = FUN_004c5e40(0x1b);
  }
  while( true ) {
    iVar2 = FUN_004c5e40(0x4a);
    if ((iVar2 != 0) || (iVar2 = FUN_004c5e40(0x59), iVar2 != 0)) {
      bVar1 = true;
      FUN_0044cda0(4);
    }
    iVar2 = FUN_004c5e40(0x1b);
    if ((iVar2 != 0) || (iVar2 = FUN_004c5e40(0x4e), iVar2 != 0)) break;
    if (bVar1) {
      return;
    }
  }
  iVar2 = FUN_004c5e40(0x1b);
  while (iVar2 != 0) {
    iVar2 = FUN_004c5e40(0x1b);
  }
  return;
}


