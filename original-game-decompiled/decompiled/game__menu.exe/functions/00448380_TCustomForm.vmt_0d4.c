
/* ==== TCustomForm.vmt_0d4 @ 00448380 ==== 
 * signature: undefined TCustomForm.vmt_0d4(void)
 * body: 00448380-004485ef;00448603-0044860a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TCustomForm_vmt_0d4(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  HWND pHVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  DAT_004aa938 = DAT_004aa938 + 1;
  if (param_1[0x8e] == 0) {
    if (param_1 == param_2) {
      param_1[0x82] = 0;
    }
    else {
      param_1[0x82] = (int)param_2;
    }
  }
  *(int **)(DAT_004ac7d8 + 0x58) = param_2;
  *(int **)(DAT_004ac7d8 + 0x5c) = param_1;
  puStack_18 = (undefined1 *)0x4483d7;
  FUN_00410448(*(int **)(DAT_004ac7d8 + 0x44),(int)param_1);
  puStack_18 = (undefined1 *)0x4483e8;
  FUN_0041032c(*(int **)(DAT_004ac7d8 + 0x44),0,(int)param_1);
  puStack_18 = (undefined1 *)0x4483f5;
  uVar3 = FUN_00403114(param_1,(int)&PTR_TWinControl_vmt_000_00442fd4);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(DAT_004ac7d8 + 0x60) = 0;
  }
  else {
    *(int **)(DAT_004ac7d8 + 0x60) = param_1;
    puStack_18 = (undefined1 *)0x448410;
    FUN_00410448(*(int **)(DAT_004ac7d8 + 0x40),(int)param_1);
    puStack_18 = (undefined1 *)0x448421;
    FUN_0041032c(*(int **)(DAT_004ac7d8 + 0x40),0,(int)param_1);
  }
  if ((*(byte *)(param_2 + 0x11) & 0x20) != 0) {
    return (int *)0x0;
  }
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) | 0x20;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(DAT_004ac7d8 + 0x6c);
  puStack_18 = &stack0xfffffffc;
  if (param_1 != piVar1) {
    puStack_18 = &stack0xfffffffc;
    if (piVar1 != (int *)0x0) {
      puStack_18 = &stack0xfffffffc;
      pHVar4 = (HWND)FUN_004349e0(piVar1);
      *(undefined4 *)(DAT_004ac7d8 + 0x6c) = 0;
      bVar2 = FUN_00444468(pHVar4,0xb001);
      if (!bVar2) {
        FUN_00403794();
        return (int *)0x0;
      }
    }
    *(int **)(DAT_004ac7d8 + 0x6c) = param_1;
    pHVar4 = (HWND)FUN_004349e0(param_1);
    bVar2 = FUN_00444468(pHVar4,CONCAT22(extraout_var,0xb000));
    if (!bVar2) {
      FUN_00403794();
      return (int *)0x0;
    }
  }
  if (param_1[0x83] == 0) {
    param_1[0x83] = (int)param_1;
  }
  if ((int *)param_1[0x83] != param_2) {
    while ((param_1[0x83] != 0 && (bVar2 = thunk_FUN_0043156d(param_1[0x83],(int)param_2), !bVar2)))
    {
      pHVar4 = (HWND)FUN_004349e0((int *)param_1[0x83]);
      param_1[0x83] = *(int *)(param_1[0x83] + 0x24);
      bVar2 = FUN_00444468(pHVar4,CONCAT22(extraout_var_00,0xb01b));
      if (!bVar2) {
        FUN_00403794();
        return (int *)0x0;
      }
    }
    while (piVar1 = param_2, (int *)param_1[0x83] != param_2) {
      do {
        piVar5 = piVar1;
        piVar1 = (int *)piVar5[9];
      } while ((int *)piVar5[9] != (int *)param_1[0x83]);
      param_1[0x83] = (int)piVar5;
      pHVar4 = (HWND)FUN_004349e0(piVar5);
      bVar2 = FUN_00444468(pHVar4,CONCAT22(extraout_var_01,0xb01a));
      if (!bVar2) {
        FUN_00403794();
        return (int *)0x0;
      }
    }
    for (piVar1 = (int *)param_2[9]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[9]) {
      uVar3 = FUN_00403114(piVar1,(int)&PTR_TWinControl_vmt_000_00441f6c);
      if ((char)uVar3 != '\0') {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
    }
    FUN_0042f720((int)param_1,0xb007,0,param_2);
    piVar1 = (int *)param_1[0x99];
    if ((piVar1 != (int *)0x0) && (piVar1 != param_2)) {
      FUN_0042f720((int)piVar1,0xb02a,0,0);
    }
  }
  *in_FS_OFFSET = uStack_20;
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) & 0xffdf;
  return param_2;
}


