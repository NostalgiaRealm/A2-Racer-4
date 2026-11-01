
/* ==== TCustomForm.dyn_0053 @ 0044916c ==== 
 * signature: undefined TCustomForm.dyn_0053(void)
 * body: 0044916c-0044926e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0053(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  ULONG_PTR UVar2;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  int aiStack_1c [2];
  int aiStack_14 [2];
  ULONG_PTR UStack_c;
  int iStack_8;
  
  puVar3 = &stack0xfffffffc;
  iStack_8 = param_2;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (*(int *)(*(int *)(param_2 + 8) + 4) == 1) {
      for (piVar1 = FUN_0042b94c(*(HWND *)(*(int *)(param_2 + 8) + 0xc));
          (piVar1 != (int *)0x0 && (piVar1[0x54] == 0)); piVar1 = (int *)piVar1[9]) {
      }
      if (piVar1 == (int *)0x0) {
        return;
      }
      UVar2 = piVar1[0x54];
      FUN_0040f7d0(0,0,aiStack_1c);
      FUN_0042e2ac(piVar1,aiStack_1c,aiStack_14);
      UStack_c = FUN_004070fc((undefined2 *)aiStack_14);
    }
    else {
      UVar2 = FUN_0044912c((int *)param_1[0x8c],param_2,param_3,(int)&stack0xfffffffc);
      if (UVar2 == 0) {
        UVar2 = FUN_0044912c((int *)param_1[0x1b],extraout_EDX,puVar3,(int)&stack0xfffffffc);
      }
      FUN_0040f7d0(0,0,aiStack_1c);
      FUN_0042e2ac(param_1,aiStack_1c,aiStack_14);
      UStack_c = FUN_004070fc((undefined2 *)aiStack_14);
    }
    if ((*(byte *)(param_1 + 0x84) & 8) == 0) {
      FUN_0044d7f0(DAT_004ac7d4,UVar2);
    }
    else {
      FUN_0044d7fc(DAT_004ac7d4,0xd,UStack_c);
      FUN_0044d7fc(DAT_004ac7d4,8,UVar2);
    }
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


