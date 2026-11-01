
/* ==== FUN_00436018 @ 00436018 ==== 
 * signature: undefined __register FUN_00436018(int * param_1)
 * body: 00436018-004360d2
 */

void FUN_00436018(int *param_1)

{
  HMENU hmenu;
  BOOL BVar1;
  undefined4 uVar2;
  uint uVar3;
  tagMENUITEMINFOA tStack_88;
  CHAR aCStack_58 [80];
  
  if ((PTR_DAT_00446da0[9] != '\0') && (param_1[0xb] != 0)) {
    hmenu = (HMENU)(**(code **)(*param_1 + 0x34))();
    tStack_88.cbSize = 0x2c;
    tStack_88.fMask = 0x10;
    tStack_88.dwTypeData = aCStack_58;
    tStack_88.cch = 0x50;
    BVar1 = GetMenuItemInfoA(hmenu,0,-1,&tStack_88);
    if (BVar1 != 0) {
      uVar2 = FUN_0043639c((int)param_1);
      if ((bool)(char)uVar2 != ((tStack_88.fType & 0x6000) != 0)) {
        uVar3 = FUN_0043639c((int)param_1);
        tStack_88.fType = (uVar3 & 0x7f) * 0x6000 | tStack_88.fType & 0xffff9fff;
        tStack_88.fMask = 0x10;
        BVar1 = SetMenuItemInfoA(hmenu,0,-1,&tStack_88);
        if (BVar1 != 0) {
          DrawMenuBar((HWND)param_1[0xb]);
        }
      }
    }
  }
  return;
}


