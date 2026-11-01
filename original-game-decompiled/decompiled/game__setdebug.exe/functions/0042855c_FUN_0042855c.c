
/* ==== FUN_0042855c @ 0042855c ==== 
 * signature: undefined __register FUN_0042855c(int * param_1, int param_2)
 * body: 0042855c-0042867b
 */

void FUN_0042855c(int *param_1,int param_2)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  tagPAINTSTRUCT *ptVar6;
  tagPAINTSTRUCT local_54;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  hdc = *(HDC *)(param_2 + 4);
  local_c = param_2;
  local_8 = param_1;
  if (hdc == (HDC)0x0) {
    ptVar6 = &local_54;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    hdc = BeginPaint(pHVar1,ptVar6);
  }
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff94;
  if (local_8[0x4d] == 0) {
    (**(code **)(*local_8 + 0xa8))(local_8,hdc);
  }
  else {
    local_14 = SaveDC(hdc);
    local_10 = 2;
    iVar4 = *(int *)(local_8[0x4d] + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_0040f024((undefined4 *)local_8[0x4d],iVar3);
        if (((*(char *)(iVar2 + 0x47) != '\0') ||
            (((*(byte *)(iVar2 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar2 + 0x41) & 4) == 0)))) &&
           ((*(byte *)(iVar2 + 0x40) & 0x40) != 0)) {
          local_10 = ExcludeClipRect(hdc,*(int *)(iVar2 + 0x30),*(int *)(iVar2 + 0x34),
                                     *(int *)(iVar2 + 0x30) + *(int *)(iVar2 + 0x38),
                                     *(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x3c));
          if (local_10 == 1) break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_10 != 1) {
      (**(code **)(*local_8 + 0xa8))(local_8,hdc);
    }
    RestoreDC(hdc,local_14);
  }
  FUN_004286b4((int)local_8,hdc,0);
  *in_FS_OFFSET = uVar5;
  if (*(int *)(local_c + 4) == 0) {
    ptVar6 = &local_54;
    pHVar1 = (HWND)FUN_0042a8b4(local_8);
    EndPaint(pHVar1,ptVar6);
  }
  return;
}


