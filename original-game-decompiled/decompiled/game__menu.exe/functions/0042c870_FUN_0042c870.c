
/* ==== FUN_0042c870 @ 0042c870 ==== 
 * signature: undefined __register FUN_0042c870(POINT * param_1)
 * body: 0042c870-0042cb40
 */

void FUN_0042c870(POINT *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  HWND pHVar7;
  HCURSOR pHVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar10;
  uint uVar11;
  int *piVar12;
  byte bVar13;
  LONG LVar14;
  int local_1c;
  bool local_18 [4];
  int local_14;
  int local_10;
  
  bVar13 = 0;
  if (((DAT_004ac77c == '\0') &&
      (uVar5 = DAT_004ac76c - param_1->x, uVar11 = (int)uVar5 >> 0x1f,
      (int)((uVar5 ^ uVar11) - uVar11) < DAT_004ac778)) &&
     (uVar5 = DAT_004ac770 - param_1->y, uVar11 = (int)uVar5 >> 0x1f,
     (int)((uVar5 ^ uVar11) - uVar11) < DAT_004ac778)) {
    return;
  }
  piVar6 = FUN_0042c750(param_1,&local_1c,*(char *)((int)DAT_004ac75c + 0x8b),DAT_004ac75c);
  if ((DAT_004ac77c == '\0') && (DAT_004ac780 != (int *)0x0)) {
    iVar10 = DAT_004ac770;
    pHVar7 = GetDesktopWindow();
    FUN_004361e4(DAT_004ac780,pHVar7,DAT_004ac76c,iVar10);
  }
  cVar1 = DAT_004ac77c;
  local_18[0] = *(char *)((int)DAT_004ac75c + 0x8b) != '\0';
  if (local_18[0]) {
    DAT_004ac77c = '\x02';
  }
  else {
    DAT_004ac77c = '\x01';
  }
  local_18[0] = local_18[0] && cVar1 != '\0';
  if (piVar6 != (int *)DAT_004ac760[1]) {
    FUN_0042c7a0(CONCAT31((int3)((uint)DAT_004ac760 >> 8),1));
    if (DAT_004ac760 == (int *)0x0) {
      return;
    }
    DAT_004ac760[1] = (int)piVar6;
    DAT_004ac760[2] = local_1c;
    piVar12 = DAT_004ac760;
    DAT_004ac760[3] = param_1->x;
    piVar12[4] = param_1->y;
    FUN_0042c7a0(0);
    if (DAT_004ac760 == (int *)0x0) {
      return;
    }
  }
  piVar12 = DAT_004ac760;
  DAT_004ac760[3] = param_1->x;
  piVar12[4] = param_1->y;
  if (DAT_004ac760[1] != 0) {
    FUN_0042e2d8((int *)DAT_004ac760[1],&param_1->x,&local_14);
    piVar12 = DAT_004ac760;
    DAT_004ac760[5] = local_14;
    piVar12[6] = local_10;
  }
  LVar14 = param_1->y;
  bVar2 = FUN_0042c7a0(CONCAT31((int3)((uint)LVar14 >> 8),2));
  sVar4 = (**(code **)(*DAT_004ac760 + 4))(DAT_004ac760,bVar2,param_1->x,LVar14);
  if (DAT_004ac780 != (int *)0x0) {
    if ((piVar6 == (int *)0x0) || ((*(byte *)((int)piVar6 + 0x41) & 0x20) != 0)) {
      FUN_004361a0((int)DAT_004ac780,sVar4);
      if (*(char *)((int)DAT_004ac780 + 0x62) == '\0') {
        LVar14 = param_1->y;
        pHVar7 = GetDesktopWindow();
        FUN_004361e4(DAT_004ac780,pHVar7,param_1->x,LVar14);
      }
      else {
        FUN_004362cc((int)DAT_004ac780,param_1->x,param_1->y);
      }
    }
    else {
      FUN_00436340((int)DAT_004ac780);
      pHVar8 = (HCURSOR)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)sVar4);
      SetCursor(pHVar8);
    }
  }
  pHVar8 = (HCURSOR)FUN_0044b5b0(*(int *)PTR_DAT_004ab9f8,(int)sVar4);
  SetCursor(pHVar8);
  if (DAT_004ac77c == '\x02') {
    if (piVar6 == (int *)0x0) {
      FUN_00403178((int *)DAT_004ac760[0xe],DAT_004ac760,param_1->x);
    }
    else {
      piVar6 = (int *)FUN_0042c7dc();
      DAT_004ac760[0x16] = (int)piVar6;
      if (piVar6 == (int *)0x0) {
        uVar3 = FUN_00403178((int *)DAT_004ac760[1],DAT_004ac760 + 5,extraout_ECX);
        *(undefined1 *)(DAT_004ac760 + 0x15) = uVar3;
      }
      else {
        FUN_0042e2d8(piVar6,&param_1->x,(int *)local_18);
        uVar3 = FUN_00403178(piVar6,local_18,extraout_ECX_00);
        *(undefined1 *)(DAT_004ac760 + 0x15) = uVar3;
      }
    }
    if ((DAT_004ac760 != (int *)0x0) &&
       (uVar9 = FUN_00408298(DAT_004ac760 + 0x11,DAT_004ac760 + 0x17,0x10), (char)uVar9 == '\0')) {
      if ((char)local_1c != '\0') {
        (**(code **)(*DAT_004ac760 + 0x30))();
      }
      (**(code **)(*DAT_004ac760 + 0x2c))();
      piVar6 = DAT_004ac760 + 0x11;
      piVar12 = DAT_004ac760 + 0x17;
      for (iVar10 = 4; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar12 = *piVar6;
        piVar6 = piVar6 + (uint)bVar13 * -2 + 1;
        piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
      }
    }
  }
  return;
}


