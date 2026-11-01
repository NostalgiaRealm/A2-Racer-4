
/* ==== FUN_0042ccb4 @ 0042ccb4 ==== 
 * signature: undefined __register FUN_0042ccb4(int * param_1, char param_2, undefined4 param_3)
 * body: 0042ccb4-0042ce5d;0042ce74-0042ce7a
 */

void FUN_0042ccb4(int *param_1,char param_2,undefined4 param_3)

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
  pcStack_38 = thunk_FUN_00403408;
  uStack_3c = *in_FS_OFFSET;
  DAT_004ac75c = param_1;
  *in_FS_OFFSET = &uStack_3c;
  local_c = (int *)0x0;
  DAT_004ac764 = 0;
  local_5 = param_2;
  if (*(char *)((int)param_1 + 0x8b) == '\0') {
    puStack_34 = &stack0xfffffffc;
    FUN_00403178(param_1,&local_c,param_3);
    if (DAT_004ac75c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = (int *)TBaseDragControlObject_vmt_024
                                 ((int *)&PTR_TBaseDragControlObject_vmt_000_00429b9c,'\x01',
                                  (int)param_1);
      DAT_004ac764 = 1;
    }
  }
  else {
    FUN_00403178(param_1,&local_c,param_3);
    if (DAT_004ac75c == (int *)0x0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == (int *)0x0) {
      local_c = TDragDockObject_vmt_024((int *)FUN_00429c24,'\x01',(int)param_1);
      DAT_004ac764 = 1;
    }
    piVar3 = (int *)local_c[0xe];
    uVar1 = FUN_00403114(piVar3,(int)&PTR_TWinControl_vmt_000_0042ac0c);
    if ((char)uVar1 == '\0') {
      piVar3 = (int *)local_c[0xe];
      if ((piVar3[9] == 0) &&
         (uVar1 = FUN_00403114(piVar3,(int)&PTR_TWinControl_vmt_000_0042ac0c), (char)uVar1 == '\0'))
      {
        GetCursorPos(&local_14);
        local_c[0x11] = local_14.x;
        local_c[0x12] = local_14.y;
      }
      else {
        FUN_0040f7d0(0,0,local_24);
        FUN_0042e2ac(piVar3,local_24,&local_1c);
        local_c[0x11] = local_1c;
        local_c[0x12] = local_18;
      }
      FUN_0040f7d0(local_c[0x11] + *(int *)(local_c[0xe] + 0x38),
                   local_c[0x12] + *(int *)(local_c[0xe] + 0x3c),&local_1c);
      local_c[0x13] = local_1c;
      local_c[0x14] = local_18;
    }
    else {
      lpRect = (LPRECT)(local_c + 0x11);
      hWnd = (HWND)FUN_004349e0(piVar3);
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
  FUN_0042cb44(local_c,local_5,param_3);
  *in_FS_OFFSET = uStack_3c;
  return;
}


