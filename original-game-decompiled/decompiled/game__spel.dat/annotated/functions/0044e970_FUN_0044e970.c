
/* ==== FUN_0044e970 @ 0044e970 ==== 
 * signature: undefined __cdecl FUN_0044e970(undefined4 param_1, int param_2)
 * body: 0044e970-0044ea5c
 */

void __cdecl FUN_0044e970(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  void *this;
  
  if (DAT_006fb8a0 == 0) {
    if (param_2 == 0) {
      cVar1 = FUN_004290e0();
      if (cVar1 != '\x01') {
        iVar2 = FUN_0049eb50(&DAT_006fbb5c,DAT_005a1ce8);
        FUN_0049e570(iVar2);
        DAT_006fba3c = 0;
        FUN_00403100(&DAT_006fbabc,0);
        return;
      }
    }
    DVar3 = GetTickCount();
    if (99 < (int)(DVar3 - DAT_006fba40)) {
      DAT_006fba40 = DVar3;
      if (DAT_006fba74 < 1) {
        cVar1 = FUN_004290e0();
        if (cVar1 != '\x01') {
          FUN_00403100(&DAT_006fbabc,0);
          return;
        }
      }
      iVar2 = FUN_0049eb50(&DAT_006fbb5c,DAT_005a1ce8);
      uVar4 = FUN_0049e630(iVar2);
      if ((uVar4 == 0) && (DAT_006fba3c == 0)) {
        iVar2 = 0;
        this = (void *)FUN_0049eb50(&DAT_006fbb5c,DAT_005a1ce8);
        FUN_0049e550(this,iVar2);
        DAT_006fba3c = 1;
      }
      cVar1 = FUN_004290e0();
      if (cVar1 == '\0') {
        DAT_006fba74 = DAT_006fba74 + -1;
      }
      FUN_00403100(&DAT_006fbabc,1);
    }
  }
  return;
}


