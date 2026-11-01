
/* ==== FUN_0042cb44 @ 0042cb44 ==== 
 * signature: undefined __register FUN_0042cb44(int * param_1, char param_2, undefined4 param_3)
 * body: 0042cb44-0042ccb3
 */

void FUN_0042cb44(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  HWND pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  
  DAT_004ac760 = param_1;
  param_1[1] = 0;
  GetCursorPos((LPPOINT)&DAT_004ac76c);
  piVar1 = DAT_004ac760;
  DAT_004ac760[3] = DAT_004ac76c;
  piVar1[4] = DAT_004ac770;
  DAT_004ac774 = GetCursor();
  DAT_004ac768 = FUN_0042be38();
  DAT_004ac778 = param_3;
  uVar2 = FUN_00403114(param_1,(int)FUN_00429c24);
  if ((char)uVar2 == '\0') {
    if (param_2 == '\0') {
      DAT_004ac77c = '\0';
    }
    else {
      DAT_004ac77c = '\x01';
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
      DAT_004ac77c = '\0';
    }
    else {
      DAT_004ac77c = '\x02';
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  DAT_004ac780 = (int *)(**(code **)(*DAT_004ac760 + 8))();
  uVar2 = extraout_ECX;
  if (DAT_004ac780 != (int *)0x0) {
    iVar4 = DAT_004ac770;
    pHVar3 = GetDesktopWindow();
    FUN_004361e4(DAT_004ac780,pHVar3,DAT_004ac76c,iVar4);
    uVar2 = extraout_ECX_00;
  }
  DAT_004ac788 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0042bc8c,'\x01',uVar2);
  if (DAT_004ac77c != '\0') {
    FUN_0042c870((POINT *)&DAT_004ac76c);
  }
  return;
}


