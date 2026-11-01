
/* ==== FUN_0044ceb0 @ 0044ceb0 ==== 
 * signature: undefined __stdcall FUN_0044ceb0(void)
 * body: 0044ceb0-0044cf54
 */

void FUN_0044ceb0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  iVar1 = DAT_006fba58;
  iVar4 = 0;
  piVar3 = &DAT_006fbb10;
  do {
    if (*piVar3 != -1) {
      FUN_004a8660((void *)(iVar1 * 0xf0 + DAT_00715e50),iVar4,*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x6fbb30);
  if ((DAT_006fb964 != 0) && (local_4 = 0, 0 < DAT_005d2ab0)) {
    piVar3 = &DAT_005973f8;
    do {
      iVar1 = piVar3[-0xb];
      iVar4 = 0;
      piVar2 = piVar3;
      do {
        if (*piVar2 != -1) {
          FUN_004a8660((void *)(iVar1 * 0xf0 + DAT_00715e50),iVar4,*piVar2);
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < 8);
      local_4 = local_4 + 1;
      piVar3 = piVar3 + 0x16;
    } while (local_4 < DAT_005d2ab0);
  }
  return;
}


