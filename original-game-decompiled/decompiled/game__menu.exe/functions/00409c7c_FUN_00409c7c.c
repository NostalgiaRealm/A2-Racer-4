
/* ==== FUN_00409c7c @ 00409c7c ==== 
 * signature: undefined __register FUN_00409c7c(byte * param_1, undefined4 param_2, undefined1 * param_3, undefined1 * param_4)
 * body: 00409c7c-00409d43;00409dbd-0040a3bc
 */

void FUN_00409c7c(byte *param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *puVar5;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar10;
  undefined4 uStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  undefined4 *local_2c;
  undefined4 *local_28;
  byte local_23;
  char local_22;
  undefined1 local_21;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  undefined1 local_17;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  int local_10;
  byte local_9;
  byte *local_8;
  
  pcStack_38 = (code *)&stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  pcStack_3c = thunk_FUN_004036bc;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_8 = param_1;
  if ((param_1 != (byte *)0x0) && (*(int *)(param_4 + -0x108) < 2)) {
    *(int *)(param_4 + -0x108) = *(int *)(param_4 + -0x108) + 1;
    local_17 = 0;
    local_21 = 0;
    local_22 = '\0';
    bVar7 = 0x20;
    while (bVar1 = *local_8, pbVar8 = local_8, bVar1 != 0) {
      pbVar8 = local_8 + 1;
      local_9 = bVar1;
      if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
        bVar2 = bVar1;
        if ((byte)(bVar1 + 0x9f) < 0x1a) {
          bVar2 = bVar1 - 0x20;
        }
        bVar6 = bVar7;
        if ((((byte)(bVar2 + 0xbf) < 0x1a) && (bVar6 = bVar2, bVar2 == 0x4d)) && (bVar7 == 0x48)) {
          bVar2 = 0x4e;
          bVar6 = bVar2;
        }
        bVar7 = bVar6;
        local_8 = pbVar8;
        switch(bVar2) {
        case 0x22:
        case 0x27:
          while( true ) {
            bVar2 = *local_8;
            if (((bVar2 == 0) || (bVar2 == bVar1)) ||
               ((((byte)(&DAT_004aa118)[(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) != 0 &&
                (local_8 = local_8 + 1, *local_8 == 0)))) break;
            local_8 = local_8 + 1;
          }
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)pbVar8,(int)local_8 - (int)pbVar8,param_3,(int)param_4);
          param_3 = puVar5;
          if (*local_8 != 0) {
            local_8 = local_8 + 1;
          }
          break;
        default:
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)&local_9,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x2f:
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)&DAT_004ac4fd,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x3a:
          puVar5 = param_4;
          FUN_004098b4((undefined4 *)&DAT_004ac508,1,param_3,(int)param_4);
          param_3 = puVar5;
          break;
        case 0x41:
          FUN_004099c8();
          pbVar8 = local_8;
          pbVar9 = local_8 + -1;
          iVar4 = FUN_00408c50((char *)pbVar9,"AM/PM",5);
          if (iVar4 == 0) {
            if (0xb < local_1a) {
              pbVar9 = pbVar8 + 2;
            }
            param_3 = param_4;
            FUN_004098b4((undefined4 *)pbVar9,2,extraout_ECX_04,(int)param_4);
            local_8 = local_8 + 4;
            local_22 = '\x01';
          }
          else {
            iVar4 = FUN_00408c50((char *)pbVar9,"A/P",3);
            if (iVar4 == 0) {
              if (0xb < local_1a) {
                pbVar9 = pbVar8 + 1;
              }
              param_3 = param_4;
              FUN_004098b4((undefined4 *)pbVar9,1,extraout_ECX_05,(int)param_4);
              local_8 = local_8 + 2;
              local_22 = '\x01';
            }
            else {
              iVar4 = FUN_00408c50((char *)pbVar9,"AMPM",4);
              if (iVar4 == 0) {
                if (local_1a < 0xc) {
                  param_3 = param_4;
                  FUN_004098f8(DAT_004ac50c,extraout_EDX_06,extraout_ECX_06,(int)param_4);
                }
                else {
                  param_3 = param_4;
                  FUN_004098f8(DAT_004ac510,extraout_EDX_06,extraout_ECX_06,(int)param_4);
                }
                local_8 = local_8 + 3;
                local_22 = '\x01';
              }
              else {
                iVar4 = FUN_00408c50((char *)pbVar9,"AAAA",4);
                if (iVar4 == 0) {
                  puVar5 = &stack0xfffffffc;
                  FUN_00409990();
                  param_3 = param_4;
                  iVar4 = FUN_004097fc(param_4,extraout_EDX_07,puVar5,*(undefined4 *)(param_4 + 8),
                                       *(undefined4 *)(param_4 + 0xc));
                  FUN_004098f8(*(undefined4 **)(&DAT_004ac594 + iVar4 * 4),extraout_EDX_08,
                               extraout_ECX_07,(int)param_3);
                  local_8 = local_8 + 3;
                }
                else {
                  iVar4 = FUN_00408c50((char *)pbVar9,"AAA",3);
                  if (iVar4 == 0) {
                    puVar5 = &stack0xfffffffc;
                    FUN_00409990();
                    param_3 = param_4;
                    iVar4 = FUN_004097fc(param_4,extraout_EDX_09,puVar5,*(undefined4 *)(param_4 + 8)
                                         ,*(undefined4 *)(param_4 + 0xc));
                    FUN_004098f8(*(undefined4 **)(&DAT_004ac578 + iVar4 * 4),extraout_EDX_10,
                                 extraout_ECX_09,(int)param_3);
                    local_8 = local_8 + 2;
                  }
                  else {
                    param_3 = param_4;
                    FUN_004098b4((undefined4 *)&local_9,1,extraout_ECX_08,(int)param_4);
                  }
                }
              }
            }
          }
          break;
        case 0x43:
          puVar5 = &stack0xfffffffc;
          FUN_00409964();
          FUN_00409c7c(DAT_004ac500,extraout_EDX_11,puVar5,param_4);
          param_3 = &stack0xfffffffc;
          FUN_004099c8();
          if (((local_1a != 0) || (local_1c != 0)) || (local_1e != 0)) {
            puVar5 = param_4;
            FUN_004098b4((undefined4 *)&DAT_0040a3ec,1,param_3,(int)param_4);
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac518,extraout_EDX_12,puVar5,param_4);
          }
          break;
        case 0x44:
          puVar5 = &stack0xfffffffc;
          FUN_00409964();
          if (local_10 - 1U < 2) {
            puVar5 = &stack0xfffffffc;
            FUN_00409990();
            param_3 = param_4;
            FUN_00409918((uint)local_16,local_10,puVar5,(int)param_4);
          }
          else if (local_10 == 3) {
            param_3 = param_4;
            iVar4 = FUN_004097fc(param_4,extraout_EDX_02,puVar5,*(undefined4 *)(param_4 + 8),
                                 *(undefined4 *)(param_4 + 0xc));
            FUN_004098f8(*(undefined4 **)(&DAT_004ac578 + iVar4 * 4),extraout_EDX_03,extraout_ECX,
                         (int)param_3);
          }
          else if (local_10 == 4) {
            param_3 = param_4;
            iVar4 = FUN_004097fc(param_4,extraout_EDX_02,puVar5,*(undefined4 *)(param_4 + 8),
                                 *(undefined4 *)(param_4 + 0xc));
            FUN_004098f8(*(undefined4 **)(&DAT_004ac594 + iVar4 * 4),extraout_EDX_04,extraout_ECX_00
                         ,(int)param_3);
          }
          else if (local_10 == 5) {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac500,extraout_EDX_02,puVar5,param_4);
          }
          else {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac504,extraout_EDX_02,puVar5,param_4);
          }
          break;
        case 0x45:
          FUN_00409964();
          puVar10 = &stack0xfffffffc;
          FUN_00409990();
          puVar5 = &stack0xfffffffc;
          param_3 = param_4;
          FUN_00409b74(local_10,(int *)&local_2c,puVar10,(int)&stack0xfffffffc);
          FUN_004098f8(local_2c,extraout_EDX_00,puVar5,(int)param_3);
          break;
        case 0x47:
          FUN_00409964();
          puVar10 = &stack0xfffffffc;
          FUN_00409990();
          puVar5 = &stack0xfffffffc;
          param_3 = param_4;
          FUN_00409a08(local_10,(int *)&local_28,puVar10,(int)&stack0xfffffffc);
          FUN_004098f8(local_28,extraout_EDX,puVar5,(int)param_3);
          break;
        case 0x48:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          local_23 = 0;
          pbVar8 = local_8;
          while (bVar1 = *pbVar8, bVar1 != 0) {
            if (((byte)(&DAT_004aa118)[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
              bVar1 = *pbVar8;
              if (bVar1 < 0x49) {
                if (bVar1 == 0x48) break;
                if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
                  local_23 = local_23 ^ 1;
                }
                else if (bVar1 == 0x41) goto LAB_00409fcf;
              }
              else if (bVar1 == 0x61) {
LAB_00409fcf:
                if (local_23 == 0) {
                  iVar4 = FUN_00408c50((char *)pbVar8,"AM/PM",5);
                  puVar5 = extraout_ECX_01;
                  if (((iVar4 == 0) ||
                      (iVar4 = FUN_00408c50((char *)pbVar8,"A/P",3), puVar5 = extraout_ECX_02,
                      iVar4 == 0)) ||
                     (iVar4 = FUN_00408c50((char *)pbVar8,"AMPM",4), puVar5 = extraout_ECX_03,
                     iVar4 == 0)) {
                    local_22 = '\x01';
                  }
                  break;
                }
              }
              else if (bVar1 == 0x68) break;
              pbVar8 = pbVar8 + 1;
            }
            else {
              if (pbVar8[1] == 0) break;
              pbVar8 = pbVar8 + 2;
            }
          }
          uVar3 = local_1a;
          if (local_22 != '\0') {
            if (local_1a == 0) {
              uVar3 = 0xc;
            }
            else if (0xc < local_1a) {
              uVar3 = local_1a - 0xc;
            }
          }
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00409918((uint)uVar3,local_10,puVar5,(int)param_4);
          break;
        case 0x4d:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_00409990();
          if (local_10 - 1U < 2) {
            param_3 = param_4;
            FUN_00409918((uint)local_14,local_10,puVar5,(int)param_4);
          }
          else if (local_10 - 1U == 2) {
            param_3 = param_4;
            FUN_004098f8((undefined4 *)(&DAT_004ac518)[local_14],extraout_EDX_01,puVar5,(int)param_4
                        );
          }
          else {
            param_3 = param_4;
            FUN_004098f8(*(undefined4 **)(&DAT_004ac548 + (uint)local_14 * 4),extraout_EDX_01,puVar5
                         ,(int)param_4);
          }
          break;
        case 0x4e:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00409918((uint)local_1c,local_10,puVar5,(int)param_4);
          break;
        case 0x53:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          if (2 < local_10) {
            local_10 = 2;
          }
          param_3 = param_4;
          FUN_00409918((uint)local_1e,local_10,puVar5,(int)param_4);
          break;
        case 0x54:
          puVar5 = &stack0xfffffffc;
          FUN_00409964();
          if (local_10 == 1) {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac514,extraout_EDX_05,puVar5,param_4);
          }
          else {
            param_3 = param_4;
            FUN_00409c7c(DAT_004ac518,extraout_EDX_05,puVar5,param_4);
          }
          break;
        case 0x59:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_00409990();
          if (local_10 < 3) {
            param_3 = param_4;
            FUN_00409918((uint)local_12 % 100,2,100,(int)param_4);
          }
          else {
            param_3 = param_4;
            FUN_00409918((uint)local_12,4,puVar5,(int)param_4);
          }
          break;
        case 0x5a:
          FUN_00409964();
          puVar5 = &stack0xfffffffc;
          FUN_004099c8();
          if (3 < local_10) {
            local_10 = 3;
          }
          param_3 = param_4;
          FUN_00409918((uint)local_20,local_10,puVar5,(int)param_4);
        }
      }
      else {
        if (*pbVar8 == 0) break;
        local_8 = local_8 + 2;
        bVar7 = 0x20;
      }
    }
    local_8 = pbVar8;
    *(int *)(param_4 + -0x108) = *(int *)(param_4 + -0x108) + -1;
  }
  *in_FS_OFFSET = uStack_40;
  pcStack_38 = FUN_0040a3c4;
  pcStack_3c = (code *)0x40a3bc;
  FUN_00403c80((int *)&local_2c,2);
  return;
}


