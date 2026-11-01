
/* ==== TDaviSliderNeedle.dyn_ffd9 @ 0046a894 ==== 
 * signature: undefined TDaviSliderNeedle.dyn_ffd9(void)
 * body: 0046a894-0046a9e6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSliderNeedle_dyn_ffd9(int *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  
  uVar4 = TControl_dyn_ffd9(param_1,param_2,param_3,param_4);
  if ((param_2 & 8) != 0) {
    iVar7 = param_3 + param_1[0xc];
    if (SCARRY4(param_3,param_1[0xc])) {
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    iVar2 = param_1[0xd];
    if (SCARRY4(param_4,param_1[0xd])) {
      thunk_FUN_00402808(uVar4);
    }
    if (iVar7 != param_1[0x91]) {
      iVar5 = TForm_get_ClientWidth((int *)param_1[0x90]);
      uVar4 = iVar5 - param_1[0xe];
      if (SBORROW4(iVar5,param_1[0xe])) {
        uVar4 = thunk_FUN_00402808(uVar4);
      }
      lVar3 = (longlong)*(int *)(param_1[0x90] + 0x218) * 2;
      iVar5 = (int)lVar3;
      if (iVar5 != lVar3) {
        uVar4 = thunk_FUN_00402808(uVar4);
        iVar5 = extraout_EDX;
      }
      uVar6 = uVar4 - iVar5;
      uVar9 = uVar6 == 0;
      if (SBORROW4(uVar4,iVar5)) {
        uVar6 = thunk_FUN_00402808(uVar6);
      }
      if (!(bool)uVar9) {
        iVar5 = iVar7 - param_1[0x91];
        if (SBORROW4(iVar7,param_1[0x91])) {
          uVar6 = thunk_FUN_00402808(uVar6);
        }
        iVar8 = iVar5 + param_1[0xc];
        if (SCARRY4(iVar5,param_1[0xc])) {
          thunk_FUN_00402808(uVar6);
        }
        iVar5 = ((int *)param_1[0x90])[0x86];
        if (iVar8 < iVar5) {
          iVar8 = iVar5;
        }
        iVar5 = TForm_get_ClientWidth((int *)param_1[0x90]);
        uVar4 = iVar5 - param_1[0xe];
        if (SBORROW4(iVar5,param_1[0xe])) {
          uVar4 = thunk_FUN_00402808(uVar4);
        }
        uVar6 = uVar4 - *(int *)(param_1[0x90] + 0x218);
        if (SBORROW4(uVar4,*(int *)(param_1[0x90] + 0x218))) {
          uVar6 = thunk_FUN_00402808(uVar6);
        }
        if ((int)uVar6 < iVar8) {
          uVar4 = TForm_get_ClientWidth((int *)param_1[0x90]);
          iVar5 = uVar4 - param_1[0xe];
          if (SBORROW4(uVar4,param_1[0xe])) {
            thunk_FUN_00402808(uVar4);
          }
          piVar1 = (int *)(param_1[0x90] + 0x218);
          iVar8 = iVar5 - *piVar1;
          if (SBORROW4(iVar5,*piVar1)) {
            thunk_FUN_00402808(param_1[0x90]);
          }
        }
        if (iVar8 != param_1[0xc]) {
          param_1[0x91] = iVar7;
          param_1[0x92] = param_4 + iVar2;
          TControl_set_Left(param_1,iVar8);
          uVar4 = FUN_0046ab50((int *)param_1[0x90],param_1[0xc]);
          piVar1 = (int *)param_1[0x90];
          piVar1[0x81] = uVar4;
          (**(code **)(*piVar1 + 0xb8))();
        }
      }
    }
  }
  return;
}


