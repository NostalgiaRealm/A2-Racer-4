
/* ==== FUN_0044f416 @ 0044f416 ==== 
 * signature: undefined __stdcall FUN_0044f416(void)
 * body: 0044f416-0044f424
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f416(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  longlong lVar4;
  byte *unaff_retaddr;
  int in_stack_00000048;
  
  FUN_004c3fa0(unaff_retaddr);
  FUN_004c3fa0((byte *)s_Applying_regional_damage_to_obje_005a2308);
  iVar1 = DAT_00715e50;
  if (in_stack_00000048 == DAT_006fba58) {
    FUN_004a8640(unaff_EBX + DAT_00715e50);
    lVar4 = __ftol();
    FUN_004a8660((void *)(DAT_00715e50 + unaff_EBX),2,(int)lVar4);
    DAT_006fbb18 = (int)lVar4;
    return;
  }
  if (DAT_006fb964 != 0) {
    iVar2 = 0;
    if (0 < DAT_005d2ab0) {
      piVar3 = &DAT_005973cc;
      do {
        if (*piVar3 == in_stack_00000048) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x16;
      } while (iVar2 < DAT_005d2ab0);
    }
    if (iVar2 != DAT_005d2ab0) {
      iVar2 = iVar2 * 0x16 + 2;
      (&DAT_005973d8)[iVar2] = (&DAT_005973d8)[iVar2];
      FUN_004a8640(unaff_EBX + iVar1);
      lVar4 = __ftol();
      FUN_004a8660((void *)(unaff_EBX + DAT_00715e50),2,(int)lVar4);
      (&DAT_005973f8)[iVar2] = (int)lVar4;
    }
  }
  return;
}


