
/* ==== TCustomMemo.vmt_0d4 @ 00427318 ==== 
 * signature: undefined TCustomMemo.vmt_0d4(void)
 * body: 00427318-00427370
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomMemo_vmt_0d4(int *param_1,uint *param_2)

{
  HWND pHVar1;
  uint uVar2;
  LRESULT LVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
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


