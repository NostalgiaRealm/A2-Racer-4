
/* ==== FUN_00412c60 @ 00412c60 ==== 
 * signature: undefined4 __stdcall FUN_00412c60(void)
 * body: 00412c60-00412cac
 */

undefined4 FUN_00412c60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (DAT_005973c8 != DAT_006fbaa4 + 1) {
    puVar3 = &DAT_005973c8;
    do {
      if (DAT_005d2ab0 <= iVar2) break;
      piVar1 = puVar3 + 0x16;
      puVar3 = puVar3 + 0x16;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != DAT_006fbaa4 + 1);
  }
  if (iVar2 != DAT_005d2ab0) {
    return (&DAT_005ce9e8)[iVar2 * 0xa5];
  }
  return 0xffffffff;
}


