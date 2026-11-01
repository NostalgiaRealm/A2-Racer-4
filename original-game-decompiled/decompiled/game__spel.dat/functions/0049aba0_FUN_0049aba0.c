
/* ==== FUN_0049aba0 @ 0049aba0 ==== 
 * signature: undefined __thiscall FUN_0049aba0(void * this, void * param_1)
 * body: 0049aba0-0049ae66
 */

void __thiscall FUN_0049aba0(void *this,void *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_38;
  undefined1 local_2c [4];
  int local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  int iVar8;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e835;
  pvStack_c = ExceptionList;
  uVar11 = 0;
  bVar1 = false;
  local_2c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_2c,'\0');
  local_4 = 0;
  iVar3 = FUN_0049bf00(*(int *)((int)this + 0x3c));
  local_38 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = FUN_0049bd10(*(void **)((int)this + 0x3c),local_38);
      if (iVar4 != 0) {
        uVar10 = 0xffffffff;
        pcVar7 = &DAT_005ae540;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        uVar10 = FUN_0049b270(param_1,&DAT_005ae540,uVar11,~uVar10 - 1);
        if (uVar10 != 0xffffffff) {
          uVar11 = uVar10;
        }
        uVar10 = 0xffffffff;
        pcVar7 = &DAT_005ae544;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        iVar4 = FUN_0049b210(param_1,&DAT_005ae544,uVar11,~uVar10 - 1);
        if (iVar4 == -1) {
          bVar1 = true;
          iVar4 = *(int *)((int)param_1 + 8);
        }
        if (local_38 == iVar3 + -1) {
          bVar1 = true;
        }
        uVar10 = iVar4 - uVar11;
        if (0 < (int)uVar10) {
          puVar5 = FUN_00479520(param_1,local_1c,uVar11,uVar10);
          local_4._0_1_ = 1;
          FUN_004093c0(local_2c,puVar5,0,0xffffffff);
          local_4 = (uint)local_4._1_3_ << 8;
          if (local_18 != 0) {
            cVar2 = *(char *)(local_18 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_0054b339((char *)(local_18 + -1));
            }
            else {
              *(char *)(local_18 + -1) = cVar2 + -1;
            }
          }
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          iVar6 = FUN_0049bd10(*(void **)((int)this + 0x3c),local_38);
          cVar2 = FUN_004993a0(iVar6);
          if ((cVar2 != '\0') && (uVar12 = 0, iVar6 = local_28, uVar11 = local_24, 0 < (int)uVar10))
          {
            do {
              if ((uVar11 < uVar12) || (iVar6 == 0)) {
                pcVar7 = "";
              }
              else {
                if ((*(char *)(iVar6 + -1) != '\0') && (*(char *)(iVar6 + -1) != -1)) {
                  FUN_00402a00(local_2c,uVar11,'\0');
                  iVar6 = local_28;
                  uVar11 = local_24;
                }
                if (iVar6 != 0) {
                  *(undefined1 *)(iVar6 + -1) = 0xff;
                  iVar6 = local_28;
                  uVar11 = local_24;
                }
                pcVar7 = (char *)(iVar6 + uVar12);
              }
              if ('`' < *pcVar7) {
                if ((uVar11 < uVar12) || (iVar6 == 0)) {
                  pcVar7 = "";
                }
                else {
                  if ((*(char *)(iVar6 + -1) != '\0') && (*(char *)(iVar6 + -1) != -1)) {
                    FUN_00402a00(local_2c,uVar11,'\0');
                    iVar6 = local_28;
                    uVar11 = local_24;
                  }
                  if (iVar6 != 0) {
                    *(undefined1 *)(iVar6 + -1) = 0xff;
                    iVar6 = local_28;
                    uVar11 = local_24;
                  }
                  pcVar7 = (char *)(iVar6 + uVar12);
                }
                if (*pcVar7 < '{') {
                  if ((uVar11 < uVar12) || (iVar6 == 0)) {
                    pcVar7 = "";
                  }
                  else {
                    if ((*(char *)(iVar6 + -1) != '\0') && (*(char *)(iVar6 + -1) != -1)) {
                      FUN_00402a00(local_2c,uVar11,'\0');
                      iVar6 = local_28;
                    }
                    iVar8 = 0;
                    if (iVar6 != 0) {
                      *(undefined1 *)(iVar6 + -1) = 0xff;
                      iVar8 = local_28;
                    }
                    pcVar7 = (char *)(iVar8 + uVar12);
                  }
                  *pcVar7 = *pcVar7 + -0x20;
                  iVar6 = local_28;
                  uVar11 = local_24;
                }
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar10);
          }
          piVar9 = (int *)FUN_0049bd10(*(void **)((int)this + 0x3c),local_38);
          (**(code **)(*piVar9 + 4))(local_2c);
        }
        if (bVar1) break;
        uVar11 = iVar4 + 1;
      }
      local_38 = local_38 + 1;
    } while (local_38 < iVar3);
  }
  if (local_28 != 0) {
    cVar2 = *(char *)(local_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_0054b339((LPVOID)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


