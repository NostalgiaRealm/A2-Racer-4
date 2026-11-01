
/* ==== TControl.vmt_078 @ 0042ec60 ==== 
 * signature: undefined TControl.vmt_078(void)
 * body: 0042ec60-0042ed38;0042ed40-0042ed57
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_078(int *param_1)

{
  bool bVar1;
  HWND pHVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  
  if (((*(char *)((int)param_1 + 0x47) != '\0') ||
      (((*(byte *)(param_1 + 8) & 0x10) != 0 && ((*(byte *)((int)param_1 + 0x41) & 4) == 0)))) &&
     (param_1[9] != 0)) {
    bVar1 = FUN_00434cdc(param_1[9]);
    if (bVar1) {
      if ((*(byte *)(param_1 + 0x10) & 0x40) != 0) {
        pHVar2 = (HWND)FUN_004349e0((int *)param_1[9]);
        hdc = GetDC(pHVar2);
        uVar3 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffe4;
        IntersectClipRect(hdc,param_1[0xc],param_1[0xd],param_1[0xc] + param_1[0xe],
                          param_1[0xd] + param_1[0xf]);
        FUN_00432654(param_1[9],hdc,(int)param_1);
        *in_FS_OFFSET = uVar3;
        pHVar2 = (HWND)FUN_004349e0((int *)param_1[9]);
        ReleaseDC(pHVar2,hdc);
        return;
      }
      (**(code **)(*param_1 + 0x74))();
      (**(code **)(*param_1 + 0x80))();
    }
  }
  return;
}


