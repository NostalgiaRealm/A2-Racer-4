
/* ==== TCustomForm.vmt_0d4 @ 0043d9d0 ==== 
 * signature: undefined TCustomForm.vmt_0d4(void)
 * body: 0043d9d0-0043dc3f;0043dc53-0043dc5a
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
  
  DAT_00446864 = DAT_00446864 + 1;
  if (param_1[0x8e] == 0) {
    if (param_1 == param_2) {
      param_1[0x82] = 0;
    }
    else {
      param_1[0x82] = (int)param_2;
    }
  }
  *(int **)(DAT_004477c8 + 0x58) = param_2;
  *(int **)(DAT_004477c8 + 0x5c) = param_1;
  puStack_18 = (undefined1 *)0x43da27;
  FUN_0040f164(*(int **)(DAT_004477c8 + 0x44),(int)param_1);
  puStack_18 = (undefined1 *)0x43da38;
  FUN_0040f0a0(*(int **)(DAT_004477c8 + 0x44),0,(int)param_1);
  puStack_18 = (undefined1 *)0x43da45;
  uVar3 = FUN_00402e8c(param_1,(int)&PTR_TWinControl_vmt_000_00438838);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(DAT_004477c8 + 0x60) = 0;
  }
  else {
    *(int **)(DAT_004477c8 + 0x60) = param_1;
    puStack_18 = (undefined1 *)0x43da60;
    FUN_0040f164(*(int **)(DAT_004477c8 + 0x40),(int)param_1);
    puStack_18 = (undefined1 *)0x43da71;
    FUN_0040f0a0(*(int **)(DAT_004477c8 + 0x40),0,(int)param_1);
  }
  if ((*(byte *)(param_2 + 0x11) & 0x20) != 0) {
    return (int *)0x0;
  }
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) | 0x20;
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(DAT_004477c8 + 0x6c);
  puStack_18 = &stack0xfffffffc;
  if (param_1 != piVar1) {
    puStack_18 = &stack0xfffffffc;
    if (piVar1 != (int *)0x0) {
      puStack_18 = &stack0xfffffffc;
      pHVar4 = (HWND)FUN_0042a8b4(piVar1);
      *(undefined4 *)(DAT_004477c8 + 0x6c) = 0;
      bVar2 = FUN_00439ab8(pHVar4,0xb001);
      if (!bVar2) {
        FUN_0040350c();
        return (int *)0x0;
      }
    }
    *(int **)(DAT_004477c8 + 0x6c) = param_1;
    pHVar4 = (HWND)FUN_0042a8b4(param_1);
    bVar2 = FUN_00439ab8(pHVar4,CONCAT22(extraout_var,0xb000));
    if (!bVar2) {
      FUN_0040350c();
      return (int *)0x0;
    }
  }
  if (param_1[0x83] == 0) {
    param_1[0x83] = (int)param_1;
  }
  if ((int *)param_1[0x83] != param_2) {
    while ((param_1[0x83] != 0 && (bVar2 = thunk_FUN_004275cd(param_1[0x83],(int)param_2), !bVar2)))
    {
      pHVar4 = (HWND)FUN_0042a8b4((int *)param_1[0x83]);
      param_1[0x83] = *(int *)(param_1[0x83] + 0x24);
      bVar2 = FUN_00439ab8(pHVar4,CONCAT22(extraout_var_00,0xb01b));
      if (!bVar2) {
        FUN_0040350c();
        return (int *)0x0;
      }
    }
    while (piVar1 = param_2, (int *)param_1[0x83] != param_2) {
      do {
        piVar5 = piVar1;
        piVar1 = (int *)piVar5[9];
      } while ((int *)piVar5[9] != (int *)param_1[0x83]);
      param_1[0x83] = (int)piVar5;
      pHVar4 = (HWND)FUN_0042a8b4(piVar5);
      bVar2 = FUN_00439ab8(pHVar4,CONCAT22(extraout_var_01,0xb01a));
      if (!bVar2) {
        FUN_0040350c();
        return (int *)0x0;
      }
    }
    for (piVar1 = (int *)param_2[9]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[9]) {
      uVar3 = FUN_00402e8c(piVar1,(int)&PTR_TWinControl_vmt_000_004377d0);
      if ((char)uVar3 != '\0') {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
    }
    FUN_00425780((int)param_1,0xb007,0,param_2);
    piVar1 = (int *)param_1[0x99];
    if ((piVar1 != (int *)0x0) && (piVar1 != param_2)) {
      FUN_00425780((int)piVar1,0xb02a,0,0);
    }
  }
  *in_FS_OFFSET = uStack_20;
  *(ushort *)(param_2 + 0x11) = *(ushort *)(param_2 + 0x11) & 0xffdf;
  return param_2;
}


