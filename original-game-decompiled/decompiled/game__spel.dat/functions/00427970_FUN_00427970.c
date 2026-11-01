
/* ==== FUN_00427970 @ 00427970 ==== 
 * signature: undefined __stdcall FUN_00427970(void)
 * body: 00427970-004279f3
 */

void FUN_00427970(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00413a10();
  if (DAT_006fb960 != 0) {
    iVar4 = 0;
    iVar1 = DAT_005962b4 + DAT_005962b8;
    iVar3 = DAT_005962b8;
    iVar5 = DAT_005962b4;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_00558625();
        uVar2 = uVar2 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        switch(uVar2) {
        case 0:
        case 1:
          if (0 < iVar3) {
            iVar4 = iVar4 + 1;
            FUN_004275e0(uVar2,iVar3);
            iVar3 = iVar3 + -1;
          }
          break;
        case 2:
        case 3:
          if (0 < iVar5) {
            iVar4 = iVar4 + 1;
            FUN_004275e0(uVar2,iVar5);
            iVar5 = iVar5 + -1;
          }
        }
      } while (iVar4 < iVar1);
    }
    return;
  }
  FUN_004c3fa0((byte *)s_Traffic_is_disabled___not_initia_005962bc);
  return;
}


