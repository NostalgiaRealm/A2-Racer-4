
/* ==== TCustomForm.dyn_0053 @ 0043e7bc ==== 
 * signature: undefined TCustomForm.dyn_0053(void)
 * body: 0043e7bc-0043e8be
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0053(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  int aiStack_1c [2];
  int aiStack_14 [2];
  undefined4 uStack_c;
  int iStack_8;
  
  puVar3 = &stack0xfffffffc;
  iStack_8 = param_2;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    if (*(int *)(*(int *)(param_2 + 8) + 4) == 1) {
      for (piVar1 = FUN_00421a0c(*(HWND *)(*(int *)(param_2 + 8) + 0xc));
          (piVar1 != (int *)0x0 && (piVar1[0x54] == 0)); piVar1 = (int *)piVar1[9]) {
      }
      if (piVar1 == (int *)0x0) {
        return;
      }
      iVar2 = piVar1[0x54];
      FUN_0040e594(0,0,aiStack_1c);
      FUN_0042436c(piVar1,aiStack_1c,aiStack_14);
      uStack_c = FUN_004069e8((undefined2 *)aiStack_14);
    }
    else {
      iVar2 = FUN_0043e77c((int *)param_1[0x8c],param_2,param_3,(int)&stack0xfffffffc);
      if (iVar2 == 0) {
        iVar2 = FUN_0043e77c((int *)param_1[0x1b],extraout_EDX,puVar3,(int)&stack0xfffffffc);
      }
      FUN_0040e594(0,0,aiStack_1c);
      FUN_0042436c(param_1,aiStack_1c,aiStack_14);
      uStack_c = FUN_004069e8((undefined2 *)aiStack_14);
    }
    if ((*(byte *)(param_1 + 0x84) & 8) == 0) {
      FUN_00442664(DAT_004477c4,iVar2);
    }
    else {
      FUN_00442670();
      FUN_00442670();
    }
  }
  else {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


