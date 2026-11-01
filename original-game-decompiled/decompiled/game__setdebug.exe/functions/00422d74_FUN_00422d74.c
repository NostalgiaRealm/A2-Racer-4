
/* ==== FUN_00422d74 @ 00422d74 ==== 
 * signature: undefined __register FUN_00422d74(int * param_1, char param_2, undefined4 param_3)
 * body: 00422d74-00422f1d;00422f34-00422f3a
 */

void FUN_00422d74(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  LPRECT lpRect;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined1 *puStack_34;
  int local_24 [2];
  int local_1c;
  int local_18;
  tagPOINT local_14;
  int *local_c;
  char local_5;
  
  bVar5 = 0;
  puStack_34 = &stack0xfffffffc;
  pcStack_38 = thunk_FUN_00403180;
  uStack_3c = *in_FS_OFFSET;
  DAT_0044774c = param_1;
  *in_FS_OFFSET = &uStack_3c;
  local_c = (int *)0x0;
  DAT_00447754 = 0;
  local_5 = param_2;
  if (*(char *)((int)param_1 + 0x8b) == '\0') {
    puStack_34 = &stack0xfffffffc;
    FUN_00402ef0(param_1,&local_c,param_3);
    if (DAT_0044774c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = (int *)TBaseDragControlObject_vmt_024
                                 ((int *)&PTR_TBaseDragControlObject_vmt_000_0042001c,'\x01',
                                  (int)param_1);
      DAT_00447754 = 1;
    }
  }
  else {
    FUN_00402ef0(param_1,&local_c,param_3);
    if (DAT_0044774c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = TDragDockObject_vmt_024
                          ((int *)&PTR_TBaseDragControlObject_vmt_000_004200a4,'\x01',(int)param_1);
      DAT_00447754 = 1;
    }
    piVar3 = (int *)local_c[0xe];
    uVar1 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_vmt_000_00420fa8);
    if ((char)uVar1 == '\0') {
      piVar3 = (int *)local_c[0xe];
      if ((piVar3[9] == 0) &&
         (uVar1 = FUN_00402e8c(piVar3,(int)&PTR_TWinControl_vmt_000_00420fa8), (char)uVar1 == '\0'))
      {
        GetCursorPos(&local_14);
        local_c[0x11] = local_14.x;
        local_c[0x12] = local_14.y;
      }
      else {
        FUN_0040e594(0,0,local_24);
        FUN_0042436c(piVar3,local_24,&local_1c);
        local_c[0x11] = local_1c;
        local_c[0x12] = local_18;
      }
      FUN_0040e594(local_c[0x11] + *(int *)(local_c[0xe] + 0x38),
                   local_c[0x12] + *(int *)(local_c[0xe] + 0x3c),&local_1c);
      local_c[0x13] = local_1c;
      local_c[0x14] = local_18;
    }
    else {
      lpRect = (LPRECT)(local_c + 0x11);
      hWnd = (HWND)FUN_0042a8b4(piVar3);
      GetWindowRect(hWnd,lpRect);
    }
    piVar3 = local_c + 0x11;
    piVar4 = local_c + 0x17;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  FUN_00422c04(local_c,local_5,param_3);
  *in_FS_OFFSET = uStack_3c;
  return;
}


