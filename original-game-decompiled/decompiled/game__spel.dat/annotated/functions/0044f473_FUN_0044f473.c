
/* ==== FUN_0044f473 @ 0044f473 ==== 
 * signature: undefined __stdcall FUN_0044f473(void)
 * body: 0044f473-0044f54f
 */

void FUN_0044f473(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar4;
  undefined4 uStack00000004;
  undefined4 uStack00000050;
  
  iVar1 = DAT_00715e50;
  if (unaff_ESI == DAT_006fba58) {
    (&DAT_006fbaf0)[unaff_EDI] = (&DAT_006fbaf0)[unaff_EDI];
    uStack00000050 = FUN_004a8640(unaff_EBX + iVar1);
    lVar4 = __ftol();
    uStack00000004 = 0x44f4bf;
    FUN_004a8660((void *)(DAT_00715e50 + unaff_EBX),unaff_EDI,(int)lVar4);
    (&DAT_006fbb10)[unaff_EDI] = (int)lVar4;
    return;
  }
  if (DAT_006fb964 != 0) {
    iVar2 = 0;
    if (0 < DAT_005d2ab0) {
      piVar3 = &DAT_005973cc;
      do {
        if (*piVar3 == unaff_ESI) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x16;
      } while (iVar2 < DAT_005d2ab0);
    }
    if (iVar2 != DAT_005d2ab0) {
      iVar2 = unaff_EDI + iVar2 * 0x16;
      (&DAT_005973d8)[iVar2] = (&DAT_005973d8)[iVar2];
      uStack00000050 = FUN_004a8640(unaff_EBX + iVar1);
      lVar4 = __ftol();
      uStack00000004 = 0x44f542;
      FUN_004a8660((void *)(unaff_EBX + DAT_00715e50),unaff_EDI,(int)lVar4);
      (&DAT_005973f8)[iVar2] = (int)lVar4;
    }
  }
  return;
}


