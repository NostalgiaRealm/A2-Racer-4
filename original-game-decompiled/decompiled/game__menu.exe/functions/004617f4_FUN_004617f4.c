
/* ==== FUN_004617f4 @ 004617f4 ==== 
 * signature: undefined __register FUN_004617f4(void)
 * body: 004617f4-00461839
 */

void FUN_004617f4(void)

{
  int iVar1;
  HMODULE hLibModule;
  int iVar2;
  
  if (DAT_004ad138 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_004ad138 + 0x14))();
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        hLibModule = (HMODULE)(**(code **)(*DAT_004ad138 + 0x18))(DAT_004ad138,iVar2);
        FreeLibrary(hLibModule);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00402f9c(DAT_004ad138);
  }
  return;
}


