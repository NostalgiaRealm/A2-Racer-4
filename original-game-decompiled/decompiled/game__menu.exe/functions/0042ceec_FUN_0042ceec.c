
/* ==== FUN_0042ceec @ 0042ceec ==== 
 * signature: undefined __register FUN_0042ceec(char param_1)
 * body: 0042ceec-0042d111;0042d146-0042d14a
 */

void FUN_0042ceec(char param_1)

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
  if ((DAT_004ac760 == (int *)0x0) || ((char)DAT_004ac760[0xc] != '\0')) {
    return;
  }
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar1 = DAT_004ac760;
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined1 *)(DAT_004ac760 + 0xc) = 1;
  FUN_0042be80(DAT_004ac760,DAT_004ac768);
  if (DAT_004ac77c == '\x02') {
    piVar8 = (int *)FUN_0040312c(DAT_004ac760,(int)FUN_00429c24);
    (**(code **)(*piVar8 + 0x30))();
    *(bool *)(piVar8 + 0x1b) = piVar8[1] == 0;
  }
  if (DAT_004ac760[1] == 0) {
LAB_0042cfbb:
    local_18 = DAT_004ac760[3];
    local_14 = DAT_004ac760[4];
  }
  else {
    uVar4 = FUN_00403114((int *)DAT_004ac760[1],(int)&PTR_TControl_vmt_000_0042a694);
    if ((char)uVar4 == '\0') goto LAB_0042cfbb;
    local_18 = DAT_004ac760[5];
    local_14 = DAT_004ac760[6];
  }
  cVar2 = FUN_0042ce7c();
  if (cVar2 != '\0') {
    if ((DAT_004ac77c == '\x02') && ((char)piVar8[0x1b] != '\0')) {
LAB_0042cffa:
      if (param_1 != '\0') {
        cVar2 = '\x01';
        goto LAB_0042d006;
      }
    }
    else if (DAT_004ac77c != '\0') {
      bVar3 = FUN_0042c7a0(CONCAT31(extraout_var,1));
      if (bVar3) goto LAB_0042cffa;
    }
  }
  cVar2 = '\0';
LAB_0042d006:
  if (DAT_004ac77c == '\x02') {
    if ((cVar2 != '\0') && ((char)piVar8[0x1b] != '\0')) {
      piVar5 = FUN_00444864((int *)piVar8[0xe]);
      if ((piVar5 != (int *)0x0) && (piVar5[0x82] == piVar8[0xe])) {
        TForm_set_ActiveControl(piVar5,(int *)0x0,extraout_ECX);
      }
      FUN_0042f720(DAT_004ac75c,0xb03a,0,DAT_004ac760);
    }
  }
  else if (DAT_004ac780 == 0) {
    SetCursor(DAT_004ac774);
  }
  else {
    FUN_00436340(DAT_004ac780);
  }
  DAT_004ac75c = 0;
  DAT_004ac760 = (int *)0x0;
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
    FUN_0042c6a8((HWND)piVar1[2],uVar6,piVar1,piVar1 + 3,piVar1[1]);
  }
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_0042d119;
  pcStack_30 = (code *)0x42d0e4;
  FUN_00402f9c(DAT_004ac788);
  DAT_004ac788 = (int *)0x0;
  *(undefined1 *)(piVar1 + 0xc) = 0;
  pcStack_30 = (code *)local_14;
  uStack_34 = CONCAT31((int3)((uint)local_14 >> 8),cVar2);
  (**(code **)*piVar1)(piVar1,piVar1[1],local_18);
  DAT_004ac760 = (int *)0x0;
  return;
}


