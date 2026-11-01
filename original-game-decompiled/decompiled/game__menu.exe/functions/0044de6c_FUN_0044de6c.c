
/* ==== FUN_0044de6c @ 0044de6c ==== 
 * signature: int __register FUN_0044de6c(void)
 * body: 0044de6c-0044df7e;0044dfb5-0044dfbe
 */

int FUN_0044de6c(void)

{
  char cVar1;
  HCURSOR hIcon;
  BOOL BVar2;
  LPBITMAPINFO ptVar3;
  uint uVar4;
  LPVOID pvVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  undefined4 uStack_48;
  ICONINFO *piconinfo;
  ICONINFO local_2c;
  int local_18;
  LPBITMAPINFO local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (**(code **)PTR_DAT_004ab760)();
  piconinfo = &local_2c;
  hIcon = GetCursor();
  uStack_48 = 0x44de92;
  BVar2 = GetIconInfo(hIcon,piconinfo);
  if (BVar2 != 0) {
    uStack_48 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_48;
    pcStack_4c = (code *)0x44deb6;
    FUN_0041a778(local_2c.hbmMask,&local_c,&local_10);
    pcStack_4c = (code *)0x44dec1;
    ptVar3 = (LPBITMAPINFO)FUN_0040816c(local_c + local_10);
    pcStack_50 = thunk_FUN_004036bc;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    pvVar5 = (LPVOID)((int)&(((tagBITMAPINFO *)(ptVar3->bmiColors + -10))->bmiHeader).biSize +
                     local_c);
    pcStack_4c = (code *)&stack0xfffffffc;
    local_14 = ptVar3;
    cVar1 = FUN_0041a830(local_2c.hbmMask,(HPALETTE)0x0,ptVar3,pvVar5);
    if ((cVar1 != '\0') && ((local_14->bmiHeader).biBitCount == 1)) {
      iVar7 = (ptVar3->bmiHeader).biWidth;
      uVar4 = iVar7 * (uint)(ptVar3->bmiHeader).biBitCount + 0x1f & 0xffffffe0;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 7;
      }
      local_18 = (int)uVar4 >> 3;
      iVar7 = iVar7 * local_18;
      pcVar6 = (char *)((int)pvVar5 + (local_10 - iVar7));
      local_8 = FUN_0044de5c(pcVar6,iVar7,-1);
      if ((local_8 == 0) && ((ptVar3->bmiHeader).biWidth * 2 <= (ptVar3->bmiHeader).biHeight)) {
        local_8 = FUN_0044de5c(pcVar6 + -iVar7,iVar7,'\0');
      }
      local_8 = local_8 / local_18 - local_2c.yHotspot;
    }
    *in_FS_OFFSET = uStack_54;
    pcStack_4c = FUN_0044df86;
    pcStack_50 = (code *)0x44df7e;
    iVar7 = FUN_00402794((int)local_14);
    return iVar7;
  }
  return local_8;
}


