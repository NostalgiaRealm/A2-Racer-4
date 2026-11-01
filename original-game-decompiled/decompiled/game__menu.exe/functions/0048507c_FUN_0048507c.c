
/* ==== FUN_0048507c @ 0048507c ==== 
 * signature: undefined __register FUN_0048507c(int * param_1)
 * body: 0048507c-00485166
 */

void FUN_0048507c(int *param_1)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  WPARAM WVar3;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 uStack_58;
  code *pcStack_54;
  code *pcStack_50;
  byte *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  WPARAM local_30;
  undefined1 local_2c;
  undefined4 *local_28;
  undefined4 local_24 [5];
  undefined4 local_10;
  int local_8;
  
  pcStack_50 = (code *)&stack0xfffffffc;
  local_28 = (undefined4 *)0x0;
  local_3c = 0;
  local_40 = (byte *)0x0;
  pcStack_54 = thunk_FUN_004036bc;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  local_24[0] = 2;
  iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
  if (-1 < iVar1 + -1) {
    WVar3 = 0;
    local_8 = iVar1;
    do {
      local_10 = (**(code **)(*param_1 + 0xbc))(param_1,WVar3);
      puVar4 = local_24;
      Msg = 0x1306;
      wParam = WVar3;
      hWnd = (HWND)FUN_004349e0(param_1);
      LVar2 = SendMessageA(hWnd,Msg,wParam,(LPARAM)puVar4);
      if (LVar2 == 0) {
        ppuVar5 = &local_28;
        (**(code **)(*(int *)param_1[0x84] + 0xc))((int *)param_1[0x84],WVar3,&local_3c);
        local_38 = local_3c;
        local_34 = 0xb;
        local_2c = 0;
        puVar4 = &local_38;
        local_30 = WVar3;
        FUN_00405808((undefined4 *)PTR_PTR_004ab944,(int *)&local_40);
        FUN_00409254(local_40,puVar4,1,(int *)ppuVar5);
        FUN_00484278(local_28);
      }
      WVar3 = WVar3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  FUN_00485014(param_1);
  *in_FS_OFFSET = uStack_58;
  pcStack_50 = FUN_0048516e;
  pcStack_54 = (code *)0x48515e;
  FUN_00403c80((int *)&local_40,2);
  pcStack_54 = (code *)0x485166;
  FUN_00403c5c((int *)&local_28);
  return;
}


