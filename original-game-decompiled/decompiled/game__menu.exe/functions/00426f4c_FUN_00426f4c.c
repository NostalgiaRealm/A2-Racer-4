
/* ==== FUN_00426f4c @ 00426f4c ==== 
 * signature: undefined FUN_00426f4c(void)
 * body: 00426f4c-00426fe1
 */

void FUN_00426f4c(uint param_1,WPARAM param_2)

{
  char *pcVar1;
  HWND pHVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  int unaff_EBX;
  UINT UVar5;
  WPARAM wParam;
  LPARAM LVar6;
  
  pcVar1 = (char *)(param_1 | 10);
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + (char)param_2;
  LVar6 = 0;
  UVar5 = 0xbb;
  WVar3 = param_2;
  pHVar2 = (HWND)FUN_004349e0(*(int **)(pcVar1 + 0xc));
  WVar3 = SendMessageA(pHVar2,UVar5,WVar3,LVar6);
  if (-1 < (int)WVar3) {
    LVar6 = 0;
    param_2 = param_2 + 1;
    UVar5 = 0xbb;
    pHVar2 = (HWND)FUN_004349e0(*(int **)(pcVar1 + 0xc));
    LVar4 = SendMessageA(pHVar2,UVar5,param_2,LVar6);
    if (LVar4 < 0) {
      LVar6 = 0;
      UVar5 = 0xc1;
      wParam = WVar3;
      pHVar2 = (HWND)FUN_004349e0(*(int **)(pcVar1 + 0xc));
      LVar4 = SendMessageA(pHVar2,UVar5,wParam,LVar6);
      LVar4 = LVar4 + WVar3;
    }
    UVar5 = 0xb1;
    pHVar2 = (HWND)FUN_004349e0(*(int **)(pcVar1 + 0xc));
    SendMessageA(pHVar2,UVar5,WVar3,LVar4);
    WVar3 = 0;
    UVar5 = 0xc2;
    LVar6 = DAT_004aa674;
    pHVar2 = (HWND)FUN_004349e0(*(int **)(pcVar1 + 0xc));
    SendMessageA(pHVar2,UVar5,WVar3,LVar6);
  }
  return;
}


