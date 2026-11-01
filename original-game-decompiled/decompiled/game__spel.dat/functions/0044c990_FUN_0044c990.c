
/* ==== FUN_0044c990 @ 0044c990 ==== 
 * signature: undefined __stdcall FUN_0044c990(void)
 * body: 0044c990-0044c9ed
 */

void FUN_0044c990(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  iVar2 = FUN_004c5e40(0x50);
  while (iVar2 != 0) {
    iVar2 = FUN_004c5e40(0x50);
  }
  do {
    uVar3 = 0;
    do {
      iVar2 = FUN_004c5e40(uVar3);
      if (iVar2 != 0) {
        bVar1 = true;
        iVar2 = FUN_004c5e40(uVar3);
        while (iVar2 != 0) {
          iVar2 = FUN_004c5e40(uVar3);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x100);
  } while (!bVar1);
  return;
}


