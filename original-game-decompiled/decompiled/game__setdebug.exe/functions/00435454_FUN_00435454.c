
/* ==== FUN_00435454 @ 00435454 ==== 
 * signature: undefined __register FUN_00435454(int param_1, char param_2)
 * body: 00435454-00435886;0043588e-004358c5
 */

void FUN_00435454(int param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  PCNZCH pCVar13;
  int iVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  undefined1 uVar15;
  int local_44;
  byte *local_40;
  undefined4 *local_3c;
  byte *local_38;
  undefined1 *puVar16;
  int local_30;
  code *local_2c;
  undefined1 *local_28;
  int *local_24;
  undefined4 uStack_20;
  code *local_1c;
  int local_8;
  
  local_1c = (code *)&stack0xfffffffc;
  iVar14 = 8;
  do {
    local_8 = 0;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  local_24 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  uStack_20 = thunk_FUN_00403434;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      local_28 = (undefined1 *)0x435491;
      cVar2 = FUN_00435a70(param_1);
      pcVar1 = local_1c;
      if (cVar2 != '\0') goto LAB_00435499;
    }
    *in_FS_OFFSET = (int)local_24;
    local_1c = FUN_004358cd;
    uStack_20 = (code *)0x4358a8;
    FUN_004039dc(&local_44,4);
    uStack_20 = (code *)0x4358b5;
    FUN_004039dc(&local_30,3);
    uStack_20 = (code *)0x4358bd;
    FUN_004039b8((int *)&local_1c);
    uStack_20 = (code *)0x4358c5;
    FUN_004039b8(&local_8);
    return;
  }
LAB_00435499:
  local_1c = pcVar1;
  local_28 = (undefined1 *)0x4354a7;
  FUN_00403a50(&local_8,(int)PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_00446770);
  local_28 = (undefined1 *)0x4354b3;
  piVar4 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_vmt_000_0040dcac,'\x01',extraout_ECX);
  local_28 = (undefined1 *)0x4354c2;
  piVar5 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_vmt_000_0040dcac,'\x01',extraout_ECX_00);
  local_28 = (undefined1 *)0x4354d1;
  local_24 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_vmt_000_0040dcac,'\x01',extraout_ECX_01);
  local_28 = (undefined1 *)0x4354e0;
  piVar6 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_vmt_000_0040dcac,'\x01',extraout_ECX_02);
  local_2c = thunk_FUN_00403434;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  local_28 = &stack0xfffffffc;
  iVar14 = FUN_00434938(param_1);
  if (-1 < iVar14 + -1) {
    iVar14 = 0;
    do {
      puVar16 = (undefined1 *)0x435515;
      iVar7 = FUN_00434948(param_1,iVar14);
      uVar15 = *(char *)(iVar7 + 0x32) == '\0';
      if (!(bool)uVar15) {
        iVar7 = FUN_00434948(param_1,iVar14);
        puVar16 = (undefined1 *)0x435535;
        FUN_00403d48(*(uint **)(iVar7 + 0x24),(uint *)&DAT_004358e0);
        if (!(bool)uVar15) {
          puVar16 = (undefined1 *)0x435544;
          iVar7 = FUN_00434948(param_1,iVar14);
          if (*(int *)(iVar7 + 0x24) != 0) {
            iVar7 = FUN_00434948(param_1,iVar14);
            FUN_00437264(*(int *)(iVar7 + 0x24),(int *)&local_38);
            FUN_00407a20(local_38,(int *)&local_28);
            if (local_28 == (undefined *)0x0) {
              puVar16 = (undefined1 *)FUN_00434948(param_1,iVar14);
              local_38 = (byte *)0x435586;
              iVar7 = FUN_00434948(param_1,iVar14);
              local_38 = (byte *)0x435593;
              FUN_0040ff30(local_24,0,*(undefined4 *)(iVar7 + 0x24),puVar16);
            }
            else {
              puVar16 = (undefined1 *)0x4355a3;
              pCVar13 = FUN_0040b3e8(local_28,PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_00446770);
              if (pCVar13 != (PCNZCH)0x0) {
                local_38 = (byte *)0x4355b0;
                puVar16 = &stack0xfffffffc;
                bVar3 = FUN_00435240(local_28,extraout_EDX,extraout_ECX_03,(int)&stack0xfffffffc);
                if (!bVar3) {
                  iVar7 = FUN_00434948(param_1,iVar14);
                  piVar8 = (int *)(iVar7 + 0x24);
                  local_38 = (byte *)0x4355cb;
                  iVar7 = FUN_00434948(param_1,iVar14);
                  local_38 = (byte *)0x4355d6;
                  FUN_004371cc(*(undefined4 **)(iVar7 + 0x24),(int *)&local_3c);
                  FUN_00403a0c(piVar8,local_3c);
                  puVar16 = (undefined1 *)FUN_00434948(param_1,iVar14);
                  local_38 = (byte *)0x4355f2;
                  iVar7 = FUN_00434948(param_1,iVar14);
                  local_38 = (byte *)0x4355ff;
                  FUN_0040ff30(local_24,0,*(undefined4 *)(iVar7 + 0x24),puVar16);
                }
              }
            }
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (puVar16 != (undefined1 *)0x1);
  }
  FUN_00403a50(&local_30,local_8);
  iVar14 = (**(code **)(*local_24 + 0x14))();
  if (-1 < iVar14 + -1) {
    do {
      FUN_00403a50(&local_8,local_30);
      (**(code **)(*piVar5 + 8))(piVar5,local_24);
      (**(code **)(*piVar4 + 0x40))();
      iVar14 = (**(code **)(*piVar5 + 0x14))();
      iVar14 = iVar14 + -1;
      if (-1 < iVar14) {
        do {
          (**(code **)(*piVar5 + 0xc))(piVar5,iVar14,&local_2c);
          for (iVar7 = 1; iVar10 = FUN_00403c38((int)local_2c), iVar7 <= iVar10; iVar7 = iVar7 + 1)
          {
            if (((byte)PTR_DAT_00446d90[(int)(uint)(byte)local_2c[iVar7 + -1] >> 3] >>
                 ((byte)local_2c[iVar7 + -1] & 7) & 1) == 0) {
              local_38 = (byte *)0x43569f;
              FUN_00403e40((int)local_2c,iVar7,1,(int *)&local_40);
              FUN_00407a20(local_40,(int *)&local_28);
              local_38 = (byte *)0x4356b3;
              bVar3 = FUN_00435240(local_28,extraout_EDX_00,extraout_ECX_04,(int)&stack0xfffffffc);
              if (bVar3) {
                if (PTR_DAT_00446da0[8] == '\0') {
                  FUN_00403ec8((undefined4 *)FUN_004358ec,(int *)&local_2c,iVar7);
                }
                else {
                  FUN_004352f4((int *)&local_2c,local_28,iVar7);
                }
                uVar9 = (**(code **)(*piVar5 + 0x18))(piVar5,iVar14);
                (**(code **)(*piVar4 + 0x38))(piVar4,local_2c,uVar9);
                (**(code **)(*piVar5 + 0x44))(piVar5,iVar14);
                break;
              }
            }
            else {
              iVar7 = iVar7 + 1;
            }
          }
          iVar14 = iVar14 + -1;
        } while (iVar14 != -1);
      }
      iVar14 = (**(code **)(*piVar4 + 0x14))();
      if (0 < iVar14) {
        local_38 = (byte *)0x435732;
        FUN_00435270();
      }
      iVar14 = (**(code **)(*piVar5 + 0x14))();
      if (iVar14 < 1) break;
      iVar7 = 0x435747;
      iVar14 = (**(code **)(*piVar5 + 0x14))();
      if (-1 < iVar14 + -1) {
        iVar10 = 0;
        do {
          iVar7 = (**(code **)(*piVar5 + 0x18))(piVar5,iVar10);
          iVar11 = FUN_0040fefc(local_24,iVar7);
          iVar12 = (**(code **)(*local_24 + 0x14))();
          iVar7 = 0x43577c;
          (**(code **)(*local_24 + 0x60))(local_24,iVar11,iVar12 + -1);
          iVar10 = iVar10 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    } while (iVar7 != 1);
  }
  local_38 = (byte *)0x435795;
  FUN_00435270();
  iVar14 = (**(code **)(*piVar6 + 0x14))();
  uStack_20 = (code *)CONCAT13(0 < iVar14,(undefined3)uStack_20);
  iVar14 = (**(code **)(*piVar6 + 0x14))();
  if (-1 < iVar14 + -1) {
    iVar14 = 0;
    do {
      (**(code **)(*piVar6 + 0xc))(piVar6,iVar14,&local_2c);
      if ((((PTR_DAT_00446da0[8] != '\0') &&
           (pCVar13 = FUN_0040b3e8(FUN_004358ec,local_2c), pCVar13 == (PCNZCH)0x0)) &&
          (local_1c != (code *)0x0)) &&
         (pCVar13 = FUN_0040b3e8(FUN_004358ec,local_2c), pCVar13 == (PCNZCH)0x0)) {
        piVar8 = &local_44;
        local_38 = (byte *)0x435807;
        iVar7 = FUN_00403c38((int)local_1c);
        local_38 = (byte *)0x435816;
        FUN_00403e40((int)local_1c,iVar7,1,piVar8);
        FUN_004352f4((int *)&local_2c,local_44,0);
        iVar7 = FUN_00403c38((int)local_1c);
        FUN_00403e80((int *)&local_1c,iVar7,1);
      }
      iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,iVar14);
      iVar10 = 0x43584f;
      FUN_00403a0c((int *)(iVar7 + 0x24),(undefined4 *)local_2c);
      iVar14 = iVar14 + 1;
    } while (iVar10 != 1);
  }
  *in_FS_OFFSET = local_30;
  local_28 = (undefined1 *)0x43588e;
  local_2c = (code *)0x43586e;
  FUN_00402d14(piVar6);
  local_2c = (code *)0x435876;
  FUN_00402d14(local_24);
  local_2c = (code *)0x43587e;
  FUN_00402d14(piVar5);
  local_2c = (code *)0x435886;
  FUN_00402d14(piVar4);
  return;
}


