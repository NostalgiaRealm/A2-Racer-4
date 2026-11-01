
/* ==== TPopupList.vmt_010 @ 00436908 ==== 
 * signature: undefined TPopupList.vmt_010(void)
 * body: 00436908-00436c4d;00436c72-00436d68;00436db2-00436e34
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPopupList_vmt_010(undefined4 *param_1,UINT *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  UINT UVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  uint *puStack_34;
  int *piStack_30;
  UINT UStack_2c;
  UINT UStack_28;
  UINT UStack_24;
  HDC pHStack_20;
  int iStack_1c;
  int *piStack_18;
  char cStack_11;
  int *piStack_10;
  HMENU pHStack_c;
  undefined4 *puStack_8;
  
  pcStack_44 = (code *)&stack0xfffffffc;
  puStack_34 = (uint *)0x0;
  pcStack_48 = thunk_FUN_00403434;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  UVar6 = *param_2;
  puStack_8 = param_1;
  if ((int)UVar6 < 0x112) {
    if (UVar6 == 0x111) {
      iVar5 = param_1[2];
      pcStack_44 = (code *)&stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        pcStack_44 = (code *)&stack0xfffffffc;
        do {
          iVar4 = FUN_0040f024(puStack_8,iVar7);
          bVar1 = FUN_00435d4c(iVar4);
          if (bVar1) goto LAB_00436e1f;
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (UVar6 == 0x2b) {
      UStack_28 = param_2[2];
      iVar5 = param_1[2];
      pcStack_44 = (code *)&stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        pcStack_44 = (code *)&stack0xfffffffc;
        do {
          iVar4 = FUN_0040f024(puStack_8,iVar7);
          piStack_10 = (int *)FUN_00435cac(iVar4);
          if (piStack_10 != (int *)0x0) {
            piStack_18 = FUN_00416eac((int *)&PTR_TPersistent_vmt_000_00420138,'\x01',extraout_ECX);
            *in_FS_OFFSET = &stack0xffffffa8;
            iStack_1c = SaveDC(*(HDC *)(UStack_28 + 0x18));
            uVar2 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffff9c;
            FUN_004174b0(piStack_18,*(int *)(UStack_28 + 0x18));
            TCanvas_set_Font((int)piStack_18);
            FUN_004370d8(piStack_10,(int)piStack_18,(undefined4 *)(UStack_28 + 0x1c),
                         CONCAT22((short)(UStack_28 >> 0x10),*(undefined2 *)(UStack_28 + 0x10)));
            *in_FS_OFFSET = uVar2;
            FUN_004174b0(piStack_18,0);
            RestoreDC(*(HDC *)(UStack_28 + 0x18),iStack_1c);
            return;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
          piStack_10 = (int *)0x0;
        } while (iVar5 != 0);
        piStack_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x2c) {
      UStack_2c = param_2[2];
      iVar5 = param_1[2];
      pcStack_44 = (code *)&stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        pcStack_44 = (code *)&stack0xfffffffc;
        do {
          iVar4 = FUN_0040f024(puStack_8,iVar7);
          piStack_10 = (int *)FUN_00435cac(iVar4);
          if (piStack_10 != (int *)0x0) {
            pHStack_20 = GetWindowDC((HWND)puStack_8[4]);
            *in_FS_OFFSET = &stack0xffffffa8;
            piStack_18 = FUN_00416eac((int *)&PTR_TPersistent_vmt_000_00420138,'\x01',
                                      extraout_ECX_00);
            *in_FS_OFFSET = &stack0xffffff9c;
            iStack_1c = SaveDC(pHStack_20);
            *in_FS_OFFSET = &stack0xffffff90;
            FUN_004174b0(piStack_18,(int)pHStack_20);
            TCanvas_set_Font((int)piStack_18);
            piVar3 = (int *)(UStack_2c + 0x10);
            FUN_0043458c(piStack_10,piStack_18,(int *)(UStack_2c + 0xc),piVar3);
            *in_FS_OFFSET = piVar3;
            FUN_004174b0(piStack_18,0);
            RestoreDC(pHStack_20,iStack_1c);
            return;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
          piStack_10 = (int *)0x0;
        } while (iVar5 != 0);
        piStack_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x53) {
      UStack_24 = param_2[2];
      iVar5 = param_1[2];
      pcStack_44 = (code *)&stack0xfffffffc;
      if (-1 < iVar5 + -1) {
        iVar7 = 0;
        pcStack_44 = (code *)&stack0xfffffffc;
        do {
          piVar3 = (int *)FUN_0040f024(puStack_8,iVar7);
          iVar4 = (**(code **)(*piVar3 + 0x34))();
          if (iVar4 == *(int *)(UStack_24 + 0xc)) {
            iVar4 = FUN_0040f024(puStack_8,iVar7);
            piStack_10 = *(int **)(iVar4 + 0x28);
          }
          else {
            iVar4 = FUN_0040f024(puStack_8,iVar7);
            piStack_10 = (int *)FUN_00435cac(iVar4);
          }
          if (piStack_10 != (int *)0x0) {
            piVar3 = (int *)FUN_0040f024(puStack_8,iVar7);
            iVar5 = FUN_00435cdc(piVar3,*(int *)(UStack_24 + 8),'\x01');
            if (iVar5 == 0) {
              piVar3 = (int *)FUN_0040f024(puStack_8,iVar7);
              iVar5 = FUN_00435cdc(piVar3,*(int *)(UStack_24 + 0xc),'\0');
            }
            iVar7 = *(int *)(*(int *)PTR_DAT_00446d84 + 0x60);
            if (iVar7 != 0) {
              if (iVar5 == 0) {
                iVar5 = *(int *)(iVar7 + 0x150);
              }
              if ((*(byte *)(iVar7 + 0x210) & 8) == 0) {
                FUN_00442664(*(undefined4 *)PTR_DAT_00446c80,iVar5);
              }
              else {
                FUN_00442670();
              }
            }
            goto LAB_00436e1f;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else if (UVar6 == 0x117) {
    iVar5 = param_1[2];
    pcStack_44 = (code *)&stack0xfffffffc;
    if (-1 < iVar5 + -1) {
      iVar7 = 0;
      pcStack_44 = (code *)&stack0xfffffffc;
      do {
        piVar3 = (int *)FUN_0040f024(puStack_8,iVar7);
        uVar2 = FUN_00435d68(piVar3);
        if ((char)uVar2 != '\0') goto LAB_00436e1f;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (UVar6 == 0x11f) {
    cStack_11 = (*(byte *)((int)param_2 + 6) & 0x10) != 0;
    iVar5 = param_1[2];
    pcStack_44 = (code *)&stack0xfffffffc;
    if (-1 < iVar5 + -1) {
      iVar7 = 0;
      pcStack_44 = (code *)&stack0xfffffffc;
      piVar3 = piStack_10;
      do {
        piStack_10 = piVar3;
        if (cStack_11 == '\x01') {
          if ((HMENU)param_2[2] == (HMENU)0x0) {
            pHStack_c = (HMENU)0xffffffff;
          }
          else {
            pHStack_c = GetSubMenu((HMENU)param_2[2],(uint)(ushort)param_2[1]);
          }
        }
        else {
          pHStack_c = (HMENU)(uint)(ushort)param_2[1];
        }
        iVar4 = FUN_0040f024(puStack_8,iVar7);
        piStack_10 = (int *)FUN_00435cac(iVar4);
        if (piStack_10 != (int *)0x0) {
          FUN_00421c50(*(undefined4 **)((int)piStack_10 + 0x4c),(int *)&puStack_34);
          FUN_0044295c(*(int **)PTR_DAT_00446c80,puStack_34);
          goto LAB_00436e1f;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
        piVar3 = (int *)0;
      } while (iVar5 != 0);
    }
    FUN_0044295c(*(int **)PTR_DAT_00446c80,(uint *)0x0);
  }
  else {
    pcStack_44 = (code *)&stack0xfffffffc;
    if ((UVar6 == 0x120) &&
       (iVar5 = param_1[2], pcStack_44 = (code *)&stack0xfffffffc, -1 < iVar5 + -1)) {
      iVar7 = 0;
      pcStack_44 = (code *)&stack0xfffffffc;
      do {
        piStack_30 = (int *)FUN_0040f024(puStack_8,iVar7);
        UVar6 = (**(code **)(*piStack_30 + 0x34))();
        if ((UVar6 == param_2[2]) || (iVar4 = FUN_00435cac((int)piStack_30), iVar4 != 0)) {
          FUN_004364f8(piStack_30,(int)param_2);
          goto LAB_00436e1f;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  UVar6 = DefWindowProcA((HWND)puStack_8[4],*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar6;
LAB_00436e1f:
  *in_FS_OFFSET = uStack_4c;
  pcStack_44 = FUN_00436e3c;
  pcStack_48 = (code *)0x436e34;
  FUN_004039b8((int *)&puStack_34);
  return;
}


