
/* ==== FUN_00422930 @ 00422930 ==== 
 * signature: undefined __register FUN_00422930(POINT * param_1)
 * body: 00422930-00422c00
 */

void FUN_00422930(POINT *param_1)

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
  if (((DAT_0044776c == '\0') &&
      (uVar5 = DAT_0044775c - param_1->x, uVar11 = (int)uVar5 >> 0x1f,
      (int)((uVar5 ^ uVar11) - uVar11) < DAT_00447768)) &&
     (uVar5 = DAT_00447760 - param_1->y, uVar11 = (int)uVar5 >> 0x1f,
     (int)((uVar5 ^ uVar11) - uVar11) < DAT_00447768)) {
    return;
  }
  piVar6 = FUN_00422810(param_1,&local_1c,*(char *)((int)DAT_0044774c + 0x8b),DAT_0044774c);
  if ((DAT_0044776c == '\0') && (DAT_00447770 != (int *)0x0)) {
    iVar10 = DAT_00447760;
    pHVar7 = GetDesktopWindow();
    FUN_0042c030(DAT_00447770,pHVar7,DAT_0044775c,iVar10);
  }
  cVar1 = DAT_0044776c;
  local_18[0] = *(char *)((int)DAT_0044774c + 0x8b) != '\0';
  if (local_18[0]) {
    DAT_0044776c = '\x02';
  }
  else {
    DAT_0044776c = '\x01';
  }
  local_18[0] = local_18[0] && cVar1 != '\0';
  if (piVar6 != (int *)DAT_00447750[1]) {
    FUN_00422860(CONCAT31((int3)((uint)DAT_00447750 >> 8),1));
    if (DAT_00447750 == (int *)0x0) {
      return;
    }
    DAT_00447750[1] = (int)piVar6;
    DAT_00447750[2] = local_1c;
    piVar12 = DAT_00447750;
    DAT_00447750[3] = param_1->x;
    piVar12[4] = param_1->y;
    FUN_00422860(0);
    if (DAT_00447750 == (int *)0x0) {
      return;
    }
  }
  piVar12 = DAT_00447750;
  DAT_00447750[3] = param_1->x;
  piVar12[4] = param_1->y;
  if (DAT_00447750[1] != 0) {
    FUN_00424398((int *)DAT_00447750[1],&param_1->x,&local_14);
    piVar12 = DAT_00447750;
    DAT_00447750[5] = local_14;
    piVar12[6] = local_10;
  }
  LVar14 = param_1->y;
  bVar2 = FUN_00422860(CONCAT31((int3)((uint)LVar14 >> 8),2));
  sVar4 = (**(code **)(*DAT_00447750 + 4))(DAT_00447750,bVar2,param_1->x,LVar14);
  if (DAT_00447770 != (int *)0x0) {
    if ((piVar6 == (int *)0x0) || ((*(byte *)((int)piVar6 + 0x41) & 0x20) != 0)) {
      FUN_0042c018((int)DAT_00447770,sVar4);
      if (*(char *)((int)DAT_00447770 + 0x62) == '\0') {
        LVar14 = param_1->y;
        pHVar7 = GetDesktopWindow();
        FUN_0042c030(DAT_00447770,pHVar7,param_1->x,LVar14);
      }
      else {
        FUN_0042c118((int)DAT_00447770,param_1->x,param_1->y);
      }
    }
    else {
      FUN_0042c18c((int)DAT_00447770);
      pHVar8 = (HCURSOR)FUN_00440610(*(int *)PTR_DAT_00446d84,(int)sVar4);
      SetCursor(pHVar8);
    }
  }
  pHVar8 = (HCURSOR)FUN_00440610(*(int *)PTR_DAT_00446d84,(int)sVar4);
  SetCursor(pHVar8);
  if (DAT_0044776c == '\x02') {
    if (piVar6 == (int *)0x0) {
      FUN_00402ef0((int *)DAT_00447750[0xe],DAT_00447750,param_1->x);
    }
    else {
      piVar6 = (int *)FUN_0042289c();
      DAT_00447750[0x16] = (int)piVar6;
      if (piVar6 == (int *)0x0) {
        uVar3 = FUN_00402ef0((int *)DAT_00447750[1],DAT_00447750 + 5,extraout_ECX);
        *(undefined1 *)(DAT_00447750 + 0x15) = uVar3;
      }
      else {
        FUN_00424398(piVar6,&param_1->x,(int *)local_18);
        uVar3 = FUN_00402ef0(piVar6,local_18,extraout_ECX_00);
        *(undefined1 *)(DAT_00447750 + 0x15) = uVar3;
      }
    }
    if ((DAT_00447750 != (int *)0x0) &&
       (uVar9 = FUN_00407a5c(DAT_00447750 + 0x11,DAT_00447750 + 0x17,0x10), (char)uVar9 == '\0')) {
      if ((char)local_1c != '\0') {
        (**(code **)(*DAT_00447750 + 0x30))();
      }
      (**(code **)(*DAT_00447750 + 0x2c))();
      piVar6 = DAT_00447750 + 0x11;
      piVar12 = DAT_00447750 + 0x17;
      for (iVar10 = 4; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar12 = *piVar6;
        piVar6 = piVar6 + (uint)bVar13 * -2 + 1;
        piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
      }
    }
  }
  return;
}


