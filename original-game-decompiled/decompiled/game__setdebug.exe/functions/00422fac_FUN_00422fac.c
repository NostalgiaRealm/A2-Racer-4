
/* ==== FUN_00422fac @ 00422fac ==== 
 * signature: undefined __register FUN_00422fac(char param_1)
 * body: 00422fac-004231d1;00423206-0042320a
 */

void FUN_00422fac(char param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  int *piVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  int local_18;
  int local_14;
  undefined3 uVar7;
  
  puStack_20 = &stack0xfffffffc;
  pcStack_2c = (code *)&stack0xfffffffc;
  piVar8 = (int *)0x0;
  if ((DAT_00447750 == (int *)0x0) || ((char)DAT_00447750[0xc] != '\0')) {
    return;
  }
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar1 = DAT_00447750;
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined1 *)(DAT_00447750 + 0xc) = 1;
  FUN_00421f40(DAT_00447750,DAT_00447758);
  if (DAT_0044776c == '\x02') {
    piVar8 = (int *)FUN_00402ea4(DAT_00447750,(int)&PTR_TBaseDragControlObject_vmt_000_004200a4);
    (**(code **)(*piVar8 + 0x30))();
    *(bool *)(piVar8 + 0x1b) = piVar8[1] == 0;
  }
  if (DAT_00447750[1] == 0) {
LAB_0042307b:
    local_18 = DAT_00447750[3];
    local_14 = DAT_00447750[4];
  }
  else {
    uVar4 = FUN_00402e8c((int *)DAT_00447750[1],(int)&PTR_TControl_vmt_000_00420b14);
    if ((char)uVar4 == '\0') goto LAB_0042307b;
    local_18 = DAT_00447750[5];
    local_14 = DAT_00447750[6];
  }
  cVar2 = FUN_00422f3c();
  if (cVar2 != '\0') {
    if ((DAT_0044776c == '\x02') && ((char)piVar8[0x1b] != '\0')) {
LAB_004230ba:
      if (param_1 != '\0') {
        cVar2 = '\x01';
        goto LAB_004230c6;
      }
    }
    else if (DAT_0044776c != '\0') {
      bVar3 = FUN_00422860(CONCAT31(extraout_var,1));
      if (bVar3) goto LAB_004230ba;
    }
  }
  cVar2 = '\0';
LAB_004230c6:
  if (DAT_0044776c == '\x02') {
    if ((cVar2 != '\0') && ((char)piVar8[0x1b] != '\0')) {
      piVar5 = FUN_00439eb4((int *)piVar8[0xe]);
      if ((piVar5 != (int *)0x0) && (piVar5[0x82] == piVar8[0xe])) {
        TForm_set_ActiveControl(piVar5,(int *)0x0,extraout_ECX);
      }
      FUN_00425780(DAT_0044774c,0xb03a,0,DAT_00447750);
    }
  }
  else if (DAT_00447770 == 0) {
    SetCursor(DAT_00447764);
  }
  else {
    FUN_0042c18c(DAT_00447770);
  }
  DAT_0044774c = 0;
  DAT_00447750 = (int *)0x0;
  if (piVar1[1] != 0) {
    uVar7 = (undefined3)((uint)piVar1 >> 8);
    uVar6 = CONCAT31(uVar7,3);
    if (cVar2 == '\0') {
      uVar6 = CONCAT31(uVar7,4);
      piVar1[3] = 0;
      piVar1[4] = 0;
      local_18 = 0;
      local_14 = 0;
    }
    FUN_00422768((HWND)piVar1[2],uVar6,piVar1,piVar1 + 3,piVar1[1]);
  }
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_004231d9;
  pcStack_30 = (code *)0x4231a4;
  FUN_00402d14(DAT_00447778);
  DAT_00447778 = (int *)0x0;
  *(undefined1 *)(piVar1 + 0xc) = 0;
  pcStack_30 = (code *)local_14;
  uStack_34 = CONCAT31((int3)((uint)local_14 >> 8),cVar2);
  (**(code **)*piVar1)(piVar1,piVar1[1],local_18);
  DAT_00447750 = (int *)0x0;
  return;
}


