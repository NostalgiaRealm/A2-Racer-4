
/* ==== TDaviSpeedButton.dyn_b014 @ 0047609c ==== 
 * signature: undefined TDaviSpeedButton.dyn_b014(void)
 * body: 0047609c-004761b2
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_b014(int *param_1)

{
  char cVar1;
  HWND hWnd;
  uint uVar2;
  int *piVar3;
  int nIndex;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int aiStack_20 [2];
  int aiStack_18 [2];
  int iStack_10;
  undefined4 uStack_c;
  
  TControl_dyn_b014(param_1);
  (**(code **)(*param_1 + 0x8c))();
  if ((*(char *)((int)param_1 + 0x133) != '\0') && (*(char *)((int)param_1 + 0x145) != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if ((cVar1 != '\0') && (*(char *)((int)param_1 + 0x132) == '\0')) {
      *(undefined1 *)((int)param_1 + 0x145) = 0;
      (**(code **)(*param_1 + 0x74))();
      for (piVar3 = (int *)param_1[9]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[9]) {
        nIndex = -0x14;
        hWnd = (HWND)FUN_004349e0(piVar3);
        uVar2 = GetWindowLongA(hWnd,nIndex);
        if ((uVar2 & 0x20) != 0x20) break;
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*param_1 + 0x40))(param_1,aiStack_20);
        FUN_0042e2ac(param_1,aiStack_20,&iStack_30);
        FUN_0042e2ac(param_1,aiStack_18,&iStack_28);
        FUN_0042e2d8(piVar3,&iStack_30,&iStack_10);
        iStack_30 = iStack_10;
        uStack_2c = uStack_c;
        FUN_0042e2d8(piVar3,&iStack_28,&iStack_10);
        iStack_28 = iStack_10;
        uStack_24 = uStack_c;
        FUN_0040f7e8(iStack_30,uStack_2c,iStack_10,aiStack_20,uStack_c);
        FUN_00465c38(piVar3,aiStack_20,1);
      }
    }
  }
  return;
}


