
/* ==== FUN_004128a0 @ 004128a0 ==== 
 * signature: undefined __stdcall FUN_004128a0(void)
 * body: 004128a0-00412c51
 */

void FUN_004128a0(void)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int *local_38;
  int local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  iVar10 = DAT_006fbaa4;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569aa0;
  local_c = ExceptionList;
  iVar9 = 0;
  if (DAT_006fb964 == 0) {
    DAT_006fbaa4 = 0;
    return;
  }
  ExceptionList = &local_c;
  if ((DAT_006fba98 == 0) && (DAT_006fbaa4 = 0, ExceptionList = &local_c, 0 < DAT_005d2ab0)) {
    piVar6 = &DAT_005cea38;
    ExceptionList = &local_c;
    do {
      if (DAT_006fbab4 < *piVar6) {
LAB_0041296d:
        DAT_006fbaa4 = DAT_006fbaa4 + 1;
      }
      else if (DAT_006fbab4 == *piVar6) {
        iVar4 = DAT_0073b0d0 + *(int *)(piVar6[-0x14] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
        uVar11 = FUN_00412130(DAT_006fba58,*(float *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54),
                              *(float *)(iVar4 + 0x58));
        if ((int)uVar11 == 0) goto LAB_0041296d;
      }
      iVar9 = iVar9 + 1;
      piVar6 = piVar6 + 0xa5;
    } while (iVar9 < DAT_005d2ab0);
  }
  local_34 = 0;
  iVar9 = DAT_005d2ab0;
  if (0 < DAT_005d2ab0) {
    piVar6 = &DAT_005973c8;
    local_38 = &DAT_005cea38;
    do {
      if (piVar6[2] == 0) {
        iVar5 = 0;
        iVar4 = local_38[-0x14];
        *piVar6 = 0;
        if (0 < iVar9) {
          piVar7 = &DAT_005cea38;
          do {
            if (iVar5 != local_34) {
              if (*local_38 < *piVar7) {
LAB_00412a2d:
                *piVar6 = *piVar6 + 1;
              }
              else if (*local_38 == *piVar7) {
                iVar9 = DAT_0073b0d0 + *(int *)(piVar7[-0x14] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
                uVar11 = FUN_00412130(iVar4,*(float *)(iVar9 + 0x50),*(undefined4 *)(iVar9 + 0x54),
                                      *(float *)(iVar9 + 0x58));
                if ((int)uVar11 == 0) goto LAB_00412a2d;
              }
            }
            iVar5 = iVar5 + 1;
            piVar7 = piVar7 + 0xa5;
            iVar9 = DAT_005d2ab0;
          } while (iVar5 < DAT_005d2ab0);
        }
        if (DAT_006fbaa4 <= *piVar6) {
          *piVar6 = *piVar6 + 1;
        }
      }
      local_34 = local_34 + 1;
      local_38 = local_38 + 0xa5;
      piVar6 = piVar6 + 0x16;
    } while (local_34 < iVar9);
  }
  if (iVar10 < DAT_006fbaa4) {
    iVar10 = 0;
    if (0 < iVar9) {
      puVar8 = &DAT_005973c0;
      do {
        if (puVar8[2] == DAT_006fbaa4 + -1) {
          FUN_0049df90(local_2c,(byte *)s__racer_dpassing_00592914);
          iVar9 = puVar8[3];
          puVar13 = local_2c;
          local_4 = 0;
          pvVar2 = (void *)FUN_004891a0();
          FUN_0048a910(pvVar2,(int)puVar13,iVar9);
          local_4 = 0xffffffff;
          if (local_28 != 0) {
            cVar1 = *(char *)(local_28 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_0054b339((LPVOID)(local_28 + -1));
            }
            else {
              *(char *)(local_28 + -1) = cVar1 + -1;
            }
          }
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
        }
        iVar10 = iVar10 + 1;
        puVar8 = puVar8 + 0x16;
      } while (iVar10 < DAT_005d2ab0);
    }
  }
  else if ((DAT_006fbaa4 < iVar10) && (iVar10 = 0, 0 < iVar9)) {
    puVar8 = &DAT_005973c0;
    do {
      if (puVar8[2] == DAT_006fbaa4 + 1) {
        FUN_0049df90(local_1c,(byte *)s__racer_dpassed_00592924);
        iVar9 = puVar8[3];
        puVar13 = local_1c;
        local_4 = 1;
        pvVar2 = (void *)FUN_004891a0();
        FUN_0048a910(pvVar2,(int)puVar13,iVar9);
        local_4 = 0xffffffff;
        if (local_18 != 0) {
          cVar1 = *(char *)(local_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((LPVOID)(local_18 + -1));
          }
          else {
            *(char *)(local_18 + -1) = cVar1 + -1;
          }
        }
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
      }
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 0x16;
    } while (iVar10 < DAT_005d2ab0);
  }
  lVar12 = __ftol();
  iVar9 = DAT_006fba58;
  iVar10 = (int)lVar12 + DAT_006fba5c * 0x14;
  if ((&DAT_005d2cb0)[iVar10] == -1) {
    (&DAT_005d2cb0)[iVar10] = DAT_006fbaa4;
    iVar10 = FUN_00426f60(&DAT_005d3460,iVar9);
    uVar3 = FUN_00425300(iVar10);
    (&DAT_005d2ee0)[(int)lVar12 + DAT_006fba5c * 0x14] = uVar3;
  }
  ExceptionList = local_c;
  return;
}


