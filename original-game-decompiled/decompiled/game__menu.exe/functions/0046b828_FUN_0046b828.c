
/* ==== FUN_0046b828 @ 0046b828 ==== 
 * signature: undefined __register FUN_0046b828(int * param_1)
 * body: 0046b828-0046b8ab
 */

void FUN_0046b828(int *param_1)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  HRGN pHVar5;
  BOOL BVar6;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (((char)param_1[0xb7] != '\0') &&
       (cVar1 = (**(code **)(**(int **)(param_1[0xb4] + 0xc) + 0x1c))(), cVar1 == '\0')) {
      uVar4 = extraout_ECX;
      if ((HGDIOBJ)param_1[0xb5] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1[0xb5]);
        uVar4 = extraout_ECX_00;
      }
      iVar2 = FUN_0046b674(*(int **)(param_1[0xb4] + 0xc),param_1[0xb8],uVar4);
      param_1[0xb5] = iVar2;
      BVar6 = -1;
      pHVar5 = (HRGN)param_1[0xb5];
      pHVar3 = (HWND)FUN_004349e0(param_1);
      SetWindowRgn(pHVar3,pHVar5,BVar6);
      return;
    }
    BVar6 = -1;
    pHVar5 = (HRGN)param_1[0xb6];
    pHVar3 = (HWND)FUN_004349e0(param_1);
    SetWindowRgn(pHVar3,pHVar5,BVar6);
  }
  return;
}


