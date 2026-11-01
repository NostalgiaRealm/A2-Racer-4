
/* ==== FUN_0041b920 @ 0041b920 ==== 
 * signature: undefined __register FUN_0041b920(int param_1)
 * body: 0041b920-0041b9d7
 */

void FUN_0041b920(int param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  HDC pHVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 8)) {
    FUN_0041a47c(*(int *)(iVar1 + 0x14));
  }
  pHVar2 = FUN_00417f18(*(HGDIOBJ *)(iVar1 + 0x14),(undefined4 *)0x0,
                        1 << ((byte)*(undefined2 *)(iVar1 + 0x3e) & 0x1f));
  *(HPALETTE *)(iVar1 + 0x10) = pHVar2;
  if (pHVar2 != (HPALETTE)0x0) {
    return;
  }
  pHVar3 = GetDC((HWND)0x0);
  pHVar3 = (HDC)FUN_00417828((int)pHVar3);
  if (*(char *)(iVar1 + 0x71) == '\0') {
    iVar4 = GetDeviceCaps(pHVar3,0xc);
    iVar5 = GetDeviceCaps(pHVar3,0xe);
    if ((int)((uint)*(ushort *)(iVar1 + 0x2a) * (uint)*(ushort *)(iVar1 + 0x28)) <= iVar4 * iVar5) {
      cVar6 = '\0';
      goto LAB_0041b9b1;
    }
  }
  cVar6 = '\x01';
LAB_0041b9b1:
  *(char *)(iVar1 + 0x71) = cVar6;
  if (cVar6 != '\0') {
    pHVar2 = CreateHalftonePalette(pHVar3);
    *(HPALETTE *)(iVar1 + 0x10) = pHVar2;
  }
  ReleaseDC((HWND)0x0,pHVar3);
  if (*(int *)(iVar1 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


