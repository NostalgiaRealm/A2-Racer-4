
/* ==== FUN_0044c140 @ 0044c140 ==== 
 * signature: undefined __register FUN_0044c140(int param_1)
 * body: 0044c140-0044c2d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c140(int param_1)

{
  ATOM AVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  LPCSTR pCVar7;
  undefined4 uVar8;
  LPARAM lParam;
  LONG dwNewLong;
  undefined4 *in_FS_OFFSET;
  LPVOID pvVar9;
  HINSTANCE pHVar10;
  HMENU pHVar11;
  HWND pHVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  undefined4 *local_30;
  tagWNDCLASSA local_2c;
  
  pcStack_38 = (code *)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  pcStack_3c = thunk_FUN_004036bc;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  if ((*(char *)(param_1 + 0x94) == '\0') && (*PTR_DAT_004ab91c == '\0')) {
    puVar2 = FUN_00444580();
    *(undefined1 **)(param_1 + 0x34) = puVar2;
    BVar3 = GetClassInfoA(DAT_004ac4dc,PTR_s_TApplication_004aaa60,&local_2c);
    if (BVar3 == 0) {
      _DAT_004aaa4c = DAT_004ac4dc;
      AVar1 = RegisterClassA((WNDCLASSA *)&DAT_004aaa3c);
      if (AVar1 == 0) {
        FUN_00405808((undefined4 *)PTR_PTR_004ab68c,(int *)&local_30);
        piVar4 = FUN_0040b5d8((int *)&DAT_0040e9b0,'\x01',local_30);
        FUN_004036f4(piVar4);
      }
    }
    iVar15 = 0;
    (**(code **)PTR_DAT_004ab760)();
    uVar5 = (**(code **)PTR_DAT_004ab760)();
    iVar6 = (int)uVar5 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
    }
    iVar14 = 0;
    iVar13 = 0;
    pHVar12 = (HWND)0x0;
    pHVar11 = (HMENU)0x0;
    pvVar9 = (LPVOID)0x0;
    pHVar10 = DAT_004ac4dc;
    pCVar7 = FUN_004040a0(*(undefined **)(param_1 + 0x7c));
    uVar8 = FUN_00407114(PTR_s_TApplication_004aaa60,pCVar7,0x84ca0000,pvVar9,pHVar10,pHVar11,
                         pHVar12,iVar13,iVar14,iVar6,iVar15);
    *(undefined4 *)(param_1 + 0x24) = uVar8;
    FUN_00403c5c((int *)(param_1 + 0x7c));
    *(undefined1 *)(param_1 + 0x94) = 1;
    SetWindowLongA(*(HWND *)(param_1 + 0x24),-4,*(LONG *)(param_1 + 0x34));
    if (*PTR_DAT_004ab7d4 != '\0') {
      lParam = FUN_0044cc78(param_1);
      SendMessageA(*(HWND *)(param_1 + 0x24),0x80,1,lParam);
      dwNewLong = FUN_0044cc78(param_1);
      SetClassLongA(*(HWND *)(param_1 + 0x24),-0xe,dwNewLong);
    }
    pHVar11 = GetSystemMenu(*(HWND *)(param_1 + 0x24),0);
    DeleteMenu(pHVar11,0xf030,0);
    DeleteMenu(pHVar11,0xf000,0);
    if (*PTR_DAT_004ab7d4 != '\0') {
      DeleteMenu(pHVar11,0xf010,0);
    }
  }
  *in_FS_OFFSET = uStack_40;
  pcStack_38 = FUN_0044c2d8;
  pcStack_3c = (code *)0x44c2d0;
  FUN_00403c5c((int *)&local_30);
  return;
}


