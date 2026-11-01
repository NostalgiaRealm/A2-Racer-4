
/* ==== FUN_0043b500 @ 0043b500 ==== 
 * signature: undefined __stdcall FUN_0043b500(void)
 * body: 0043b500-0043b670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b500(void)

{
  float fVar1;
  float fVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  DVar3 = GetTickCount();
  if (199 < (int)(DVar3 - DAT_006c3ab4)) {
    DAT_006c3ab4 = DVar3;
    uVar4 = FUN_00558625();
    fVar1 = (float)((int)uVar4 % 6 + -3) + 16.0;
    lVar6 = __ftol();
    uVar4 = FUN_00558625();
    iVar5 = (DAT_005b23bc & (uint)lVar6) * 4;
    fVar2 = (float)((int)uVar4 % 0x12 + -9);
    FUN_00446ba0(_DAT_006fba80 +
                 (*(float *)(iVar5 + DAT_0073b578) * fVar2 -
                 *(float *)(iVar5 + DAT_0073b530) * fVar1),_DAT_006fba84 + 5.0,
                 _DAT_006fba88 +
                 *(float *)(iVar5 + DAT_0073b578) * fVar1 + fVar2 * *(float *)(iVar5 + DAT_0073b530)
                 ,0,0,0);
  }
  return;
}


