
/* ==== FUN_00422c04 @ 00422c04 ==== 
 * signature: undefined __register FUN_00422c04(int * param_1, char param_2, undefined4 param_3)
 * body: 00422c04-00422d73
 */

void FUN_00422c04(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  HWND pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  
  DAT_00447750 = param_1;
  param_1[1] = 0;
  GetCursorPos((LPPOINT)&DAT_0044775c);
  piVar1 = DAT_00447750;
  DAT_00447750[3] = DAT_0044775c;
  piVar1[4] = DAT_00447760;
  DAT_00447764 = GetCursor();
  DAT_00447758 = FUN_00421ef8();
  DAT_00447768 = param_3;
  uVar2 = FUN_00402e8c(param_1,(int)&PTR_TBaseDragControlObject_vmt_000_004200a4);
  if ((char)uVar2 == '\0') {
    if (param_2 == '\0') {
      DAT_0044776c = '\0';
    }
    else {
      DAT_0044776c = '\x01';
    }
  }
  else {
    iVar4 = param_1[0x11];
    if (param_1[0x13] == iVar4 || param_1[0x13] - iVar4 < 0) {
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      *(double *)(param_1 + 8) =
           (double)(param_1[3] - iVar4) / (double)(param_1[0x13] - param_1[0x11]);
    }
    if (param_1[0x14] - param_1[0x12] < 1) {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(double *)(param_1 + 10) =
           (double)(param_1[4] - param_1[0x12]) / (double)(param_1[0x14] - param_1[0x12]);
    }
    if (param_2 == '\0') {
      DAT_0044776c = '\0';
    }
    else {
      DAT_0044776c = '\x02';
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  DAT_00447770 = (int *)(**(code **)(*DAT_00447750 + 8))();
  uVar2 = extraout_ECX;
  if (DAT_00447770 != (int *)0x0) {
    iVar4 = DAT_00447760;
    pHVar3 = GetDesktopWindow();
    FUN_0042c030(DAT_00447770,pHVar3,DAT_0044775c,iVar4);
    uVar2 = extraout_ECX_00;
  }
  DAT_00447778 = FUN_00402ce4((int *)&PTR_TList_vmt_000_00421d4c,'\x01',uVar2);
  if (DAT_0044776c != '\0') {
    FUN_00422930((POINT *)&DAT_0044775c);
  }
  return;
}


