
/* ==== FUN_0044e790 @ 0044e790 ==== 
 * signature: undefined __stdcall FUN_0044e790(void)
 * body: 0044e790-0044e82c
 */

void FUN_0044e790(void)

{
  int iVar1;
  void *this;
  uint uVar2;
  int iVar3;
  void *this_00;
  
  iVar1 = FUN_004475d0();
  if (iVar1 != 0) {
    this = (void *)FUN_0049eb50(&DAT_006fbb5c,DAT_006fba28);
    if (DAT_006fbad0 < 1) {
      uVar2 = FUN_0049e630((int)this);
      if (uVar2 != 0) {
        iVar1 = FUN_0049eb50(&DAT_006fbb5c,DAT_006fba28);
        FUN_0049e570(iVar1);
        return;
      }
    }
    else {
      iVar1 = DAT_006fbad0 * 4;
      iVar3 = DAT_006fbad0 * 5 + 0x3c;
      if (100 < iVar3) {
        iVar3 = 100;
      }
      FUN_0049e340(this,iVar3);
      uVar2 = FUN_0049e630((int)this);
      if (uVar2 == 0) {
        iVar3 = 1;
        this_00 = (void *)FUN_0049eb50(&DAT_006fbb5c,DAT_006fba28);
        FUN_0049e550(this_00,iVar3);
      }
      FUN_0049e3f0(this,iVar1 + -4);
    }
  }
  return;
}


