
/* ==== TWinControl.dyn_000f @ 004329d8 ==== 
 * signature: undefined __register TWinControl.dyn_000f(int * param_1, int param_2)
 * body: 004329d8-00432b29;00432b31-00432b37
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_000f(int *param_1,int param_2)

{
  int iVar1;
  HDC pHVar2;
  HWND pHVar3;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  int y1;
  tagPAINTSTRUCT *ptVar4;
  DWORD rop;
  undefined4 uVar5;
  undefined1 local_70 [8];
  int local_68;
  undefined1 local_60 [12];
  int local_54;
  tagPAINTSTRUCT local_50;
  HGDIOBJ local_10;
  HBITMAP local_c;
  HDC local_8;
  
  if (((char)param_1[0x7a] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    pHVar2 = GetDC((HWND)0x0);
    (**(code **)(*param_1 + 0x40))(param_1,local_60);
    iVar1 = local_54;
    (**(code **)(*param_1 + 0x40))(param_1,local_70);
    local_c = CreateCompatibleBitmap(pHVar2,local_68,iVar1);
    ReleaseDC((HWND)0x0,pHVar2);
    local_8 = CreateCompatibleDC((HDC)0x0);
    local_10 = SelectObject(local_8,local_c);
    uVar5 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff78;
    ptVar4 = &local_50;
    pHVar3 = (HWND)FUN_004349e0(param_1);
    hdc = BeginPaint(pHVar3,ptVar4);
    FUN_0042f720((int)param_1,0x14,local_8,local_8);
    *(HDC *)(param_2 + 4) = local_8;
    TWinControl_dyn_000f(param_1,param_2);
    *(undefined4 *)(param_2 + 4) = 0;
    rop = 0xcc0020;
    y1 = 0;
    iVar1 = 0;
    pHVar2 = local_8;
    (**(code **)(*param_1 + 0x40))(param_1,local_60);
    (**(code **)(*param_1 + 0x40))(param_1,local_70);
    BitBlt(hdc,0,0,local_68,local_54,pHVar2,iVar1,y1,rop);
    ptVar4 = &local_50;
    pHVar3 = (HWND)FUN_004349e0(param_1);
    EndPaint(pHVar3,ptVar4);
    *in_FS_OFFSET = uVar5;
    SelectObject(local_8,local_10);
    DeleteDC(local_8);
    DeleteObject(local_c);
    return;
  }
  if (((*(byte *)((int)param_1 + 0x45) & 1) == 0) &&
     (iVar1 = FUN_004317bc((int)param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
    return;
  }
  FUN_004324fc(param_1,param_2);
  return;
}


