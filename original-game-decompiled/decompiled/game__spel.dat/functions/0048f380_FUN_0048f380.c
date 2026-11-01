
/* ==== FUN_0048f380 @ 0048f380 ==== 
 * signature: undefined __thiscall FUN_0048f380(void * this, int param_1)
 * body: 0048f380-0048f6fe
 */

void __thiscall FUN_0048f380(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056def6;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  local_4 = 0;
  FUN_004c5930(1,0x28,200,(byte *)s_prev_<<__Z_X__>>_next_005ac8e8);
  if (param_1 == 0) {
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
    ExceptionList = local_c;
    return;
  }
  uVar6 = 0xffffffff;
  pcVar11 = (char *)&DAT_005ac904;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    puVar10 = &DAT_005ac904;
    puVar12 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar6) = 0;
    local_14 = uVar6;
  }
  iVar13 = 0;
  iVar4 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
  if (0 < iVar4) {
    param_1 = 0;
    do {
      iVar5 = 0;
      iVar8 = param_1 + *(int *)(*(int *)((int)this + 700) + 4);
      iVar4 = *(int *)(iVar8 + 0x10);
      if (0 < iVar4) {
        piVar9 = (int *)(iVar8 + 0x14);
        do {
          if (*piVar9 == *(int *)((int)this + 0x3b8)) {
            FUN_004093c0(local_1c,(void *)(*(int *)(*(int *)((int)this + 700) + 4) + iVar13 * 0x114)
                         ,0,0xffffffff);
            goto LAB_0048f4d8;
          }
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar5 < iVar4);
      }
      param_1 = param_1 + 0x114;
      iVar13 = iVar13 + 1;
      iVar4 = (*(code *)**(undefined4 **)((int)this + 0x2b8))();
    } while (iVar13 < iVar4);
  }
LAB_0048f4d8:
  FUN_0049dd90(iVar2);
  FUN_004c5930(1,0x14,0x14,(byte *)s_Berichtnr___d____s___005ac90c);
  iVar4 = FUN_0049dd50(iVar2);
  FUN_0049d210(iVar4);
  FUN_004c5930(1,0x14,0x28,(byte *)s_Eigenaar___s_005ac92c);
  FUN_0049dd80(iVar2);
  FUN_004c5930(1,0x14,0x3c,(byte *)s_Tijd_in_beeld___d_s_005ac944);
  FUN_0049dd70(iVar2);
  FUN_004c5930(1,0x14,0x50,(byte *)s_Tijd_in_lijst___d_s_005ac95c);
  FUN_004c5930(1,0x14,100,(byte *)s_Categorie___s_005ac974);
  FUN_0049dd60(iVar2);
  iVar4 = FUN_0049dd50(iVar2);
  FUN_0049d200(iVar4);
  FUN_004c5930(1,0x14,0x78,(byte *)s_Prioriteit___d__d_005ac98c);
  iVar4 = FUN_0049df20(iVar2);
  if (iVar4 == -1) {
    FUN_004c5930(1,0x14,0xa0,(byte *)s_Sample__Geen_005ac9a4);
  }
  else {
    FUN_0049df20(iVar2);
    FUN_004c5930(1,0x14,0xa0,(byte *)s_Sample___d_005ac9bc);
  }
  uVar3 = FUN_0049df30(iVar2);
  switch(uVar3) {
  case 1:
    FUN_004c5930(1,0x14,0x8c,(byte *)s_Event__Copalert_lampje_005ac9d0);
  case 2:
    FUN_004c5930(1,0x14,0x8c,(byte *)s_Event__richtingaanwijzer_naar_Li_005ac9f0);
  case 3:
    FUN_004c5930(1,0x14,0x8c,(byte *)s_Event__richtingaanwijzer_naar_Re_005aca1c);
  case 4:
    FUN_004c5930(1,0x14,0x8c,(byte *)s_Event__richtingaanwijzer_naar_Li_005aca48);
  case 5:
    FUN_004c5930(1,0x14,0x8c,(byte *)s_Event__richtingaanwijzer_ZIGZAG_005aca7c);
  }
  FUN_004c5930(1,0x14,0x8c,(byte *)s_Event__Geen_005acaa4);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((undefined1 *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


