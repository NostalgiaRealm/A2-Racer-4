
/* ==== FUN_00427314 @ 00427314 ==== 
 * signature: undefined FUN_00427314(void)
 * body: 00427314-00427317
 */

void FUN_00427314(int *param_1,uint *param_2)

{
  HWND pHVar1;
  uint uVar2;
  LRESULT LVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0xb0;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  uVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  *param_2 = uVar2 >> 0x10;
  LVar6 = 0;
  uVar2 = *param_2;
  UVar4 = 0xc9;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  uVar2 = SendMessageA(pHVar1,UVar4,uVar2,LVar6);
  param_2[1] = uVar2;
  LVar6 = 0;
  WVar5 = 0xffffffff;
  UVar4 = 0xbb;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  LVar3 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  *param_2 = *param_2 - LVar3;
  return;
}


