
/* ==== FUN_0055ffdd @ 0055ffdd ==== 
 * signature: int __thiscall FUN_0055ffdd(void * this, int * param_1, byte * param_2, undefined4 * param_3)
 * body: 0055ffdd-00560a01
 */

int __thiscall FUN_0055ffdd(void *this,int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  void *this_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *piVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  WCHAR *pWVar13;
  undefined *puVar14;
  int iVar15;
  bool bVar16;
  int *piVar17;
  char local_1c8;
  char local_1c7 [351];
  byte local_68 [32];
  undefined4 *local_48;
  WCHAR local_42;
  uint local_40;
  byte local_3c;
  undefined1 local_3b;
  byte local_39;
  int local_38;
  WCHAR *local_34;
  WCHAR *local_30;
  undefined8 local_2c;
  int local_24;
  int local_20;
  byte local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int local_10;
  char local_9;
  undefined *local_8;
  
  local_19 = '\0';
  bVar1 = *param_2;
  local_8 = (undefined *)0x0;
  local_38 = 0;
  pbVar9 = param_2;
  piVar7 = (int *)PTR_DAT_005c8384;
  do {
    PTR_DAT_005c8384 = (undefined *)piVar7;
    if (bVar1 == 0) {
LAB_005609e3:
      if (local_18 == (int *)0xffffffff) {
LAB_005609e9:
        if ((local_38 == 0) && (local_19 == '\0')) {
          local_38 = -1;
        }
      }
      return local_38;
    }
    if ((int)DAT_005c8378 < 2) {
      uVar5 = *(byte *)((int)piVar7 + (uint)bVar1 * 2) & 8;
    }
    else {
      piVar7 = (int *)0x8;
      uVar5 = FUN_0055c336(this,(uint)bVar1,8);
    }
    if (uVar5 != 0) {
      local_8 = local_8 + -1;
      piVar7 = param_1;
      uVar5 = FUN_00560a6a((int *)&local_8,param_1);
      FUN_00560a53(uVar5,piVar7);
      uVar5 = FUN_0055ac61(this_00,(uint)pbVar9[1]);
      piVar7 = extraout_ECX;
      pbVar10 = pbVar9;
      while (pbVar9 = pbVar10 + 1, uVar5 != 0) {
        piVar17 = (int *)(uint)pbVar10[2];
        uVar5 = FUN_0055ac61(piVar7,(int)(uint)pbVar10[2]);
        piVar7 = piVar17;
        pbVar10 = pbVar9;
      }
    }
    if (*pbVar9 == 0x25) {
      local_39 = 0;
      local_1c = 0;
      local_1b = '\0';
      local_12 = '\0';
      local_13 = '\0';
      local_1a = '\0';
      puVar14 = (undefined *)0x0;
      local_9 = '\0';
      local_20 = 0;
      local_24 = 0;
      local_10 = 0;
      local_11 = '\x01';
      local_34 = (WCHAR *)0x0;
      do {
        uVar5 = (uint)pbVar9[1];
        param_2 = pbVar9 + 1;
        if ((int)DAT_005c8378 < 2) {
          uVar6 = (byte)PTR_DAT_005c8384[uVar5 * 2] & 4;
          piVar7 = (int *)PTR_DAT_005c8384;
        }
        else {
          piVar17 = (int *)0x4;
          uVar6 = FUN_0055c336(piVar7,uVar5,4);
          piVar7 = piVar17;
        }
        if (uVar6 == 0) {
          if (uVar5 < 0x4f) {
            if (uVar5 != 0x4e) {
              if (uVar5 == 0x2a) {
                local_12 = local_12 + '\x01';
              }
              else if (uVar5 != 0x46) {
                if (uVar5 == 0x49) {
                  if ((pbVar9[2] != 0x36) || (pbVar9[3] != 0x34)) goto LAB_00560138;
                  local_34 = (WCHAR *)((int)local_34 + 1);
                  local_2c = 0;
                  param_2 = pbVar9 + 3;
                }
                else if (uVar5 == 0x4c) {
                  local_11 = local_11 + '\x01';
                }
                else {
LAB_00560138:
                  local_13 = local_13 + '\x01';
                }
              }
            }
          }
          else if (uVar5 == 0x68) {
            local_11 = local_11 + -1;
            local_9 = local_9 + -1;
          }
          else {
            if (uVar5 == 0x6c) {
              local_11 = local_11 + '\x01';
            }
            else if (uVar5 != 0x77) goto LAB_00560138;
            local_9 = local_9 + '\x01';
          }
        }
        else {
          local_24 = local_24 + 1;
          local_10 = (uVar5 - 0x30) + local_10 * 10;
        }
        pbVar9 = param_2;
      } while (local_13 == '\0');
      puVar2 = param_3;
      if (local_12 == '\0') {
        local_30 = (WCHAR *)*param_3;
        puVar2 = param_3 + 1;
        local_48 = param_3;
      }
      param_3 = puVar2;
      local_13 = '\0';
      if (local_9 == '\0') {
        if ((*param_2 == 0x53) || (*param_2 == 0x43)) {
          local_9 = '\x01';
        }
        else {
          local_9 = -1;
        }
      }
      uVar5 = *param_2 | 0x20;
      local_40 = uVar5;
      if (uVar5 != 0x6e) {
        if ((uVar5 == 99) || (uVar5 == 0x7b)) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_00560a39(param_1);
        }
        else {
          piVar7 = param_1;
          local_18 = (int *)FUN_00560a6a((int *)&local_8,param_1);
        }
      }
      if ((local_24 != 0) && (local_10 == 0)) {
LAB_005609c3:
        local_8 = local_8 + -1;
        FUN_00560a53((uint)local_18,param_1);
        goto LAB_005609e3;
      }
      if (uVar5 < 0x70) {
        if (uVar5 == 0x6f) {
LAB_005606f0:
          if (local_18 == (int *)0x2d) {
            local_1b = '\x01';
          }
          else if (local_18 != (int *)0x2b) goto LAB_00560725;
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_00560a39(param_1);
          }
          goto LAB_00560725;
        }
        if (uVar5 != 99) {
          if (uVar5 == 100) goto LAB_005606f0;
          if (uVar5 < 0x65) {
LAB_00560468:
            if ((int *)(uint)*param_2 != local_18) goto LAB_005609c3;
            local_19 = local_19 + -1;
            if (local_12 == '\0') {
              param_3 = local_48;
            }
            goto LAB_00560944;
          }
          if (0x67 < uVar5) {
            if (uVar5 == 0x69) {
              uVar5 = 100;
              goto LAB_00560226;
            }
            if (uVar5 != 0x6e) goto LAB_00560468;
            puVar14 = local_8;
            if (local_12 != '\0') goto LAB_00560944;
            goto LAB_0056091e;
          }
          pcVar11 = &local_1c8;
          if (local_18 == (int *)0x2d) {
            local_1c8 = '-';
            pcVar11 = local_1c7;
LAB_0056025c:
            local_10 = local_10 + -1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_00560a39(param_1);
          }
          else if (local_18 == (int *)0x2b) goto LAB_0056025c;
          if ((local_24 == 0) || (0x15d < local_10)) {
            local_10 = 0x15d;
          }
          while( true ) {
            piVar17 = local_18;
            if ((int)DAT_005c8378 < 2) {
              uVar5 = (byte)PTR_DAT_005c8384[(int)local_18 * 2] & 4;
            }
            else {
              uVar5 = FUN_0055c336(piVar7,(int)local_18,4);
            }
            if ((uVar5 == 0) ||
               (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
            local_20 = local_20 + 1;
            *pcVar11 = (char)piVar17;
            pcVar11 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_00560a39(param_1);
          }
          if ((DAT_005c837c == (char)piVar17) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_00560a39(param_1);
            *pcVar11 = DAT_005c837c;
            while( true ) {
              pcVar11 = pcVar11 + 1;
              local_18 = piVar17;
              if ((int)DAT_005c8378 < 2) {
                uVar5 = (byte)PTR_DAT_005c8384[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_0055c336(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar11 = (char)piVar17;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_00560a39(param_1);
            }
          }
          pcVar12 = pcVar11;
          if ((local_20 != 0) &&
             (((piVar17 == (int *)0x65 || (piVar17 == (int *)0x45)) &&
              (iVar15 = local_10 + -1, bVar16 = local_10 != 0, local_10 = iVar15, bVar16)))) {
            *pcVar11 = 'e';
            pcVar12 = pcVar11 + 1;
            local_8 = local_8 + 1;
            piVar7 = param_1;
            piVar17 = (int *)FUN_00560a39(param_1);
            local_18 = piVar17;
            if (piVar17 == (int *)0x2d) {
              *pcVar12 = '-';
              pcVar12 = pcVar11 + 2;
LAB_00560383:
              bVar16 = local_10 != 0;
              local_10 = local_10 + -1;
              if (bVar16) goto LAB_00560392;
              local_10 = 0;
            }
            else if (piVar17 == (int *)0x2b) goto LAB_00560383;
            while( true ) {
              if ((int)DAT_005c8378 < 2) {
                uVar5 = (byte)PTR_DAT_005c8384[(int)piVar17 * 2] & 4;
              }
              else {
                uVar5 = FUN_0055c336(piVar7,(int)piVar17,4);
              }
              if ((uVar5 == 0) ||
                 (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16)) break;
              local_20 = local_20 + 1;
              *pcVar12 = (char)piVar17;
              pcVar12 = pcVar12 + 1;
LAB_00560392:
              local_8 = local_8 + 1;
              piVar7 = param_1;
              piVar17 = (int *)FUN_00560a39(param_1);
              local_18 = piVar17;
            }
          }
          local_8 = local_8 + -1;
          piVar7 = param_1;
          FUN_00560a53((uint)piVar17,param_1);
          if (local_20 != 0) {
            if (local_12 == '\0') {
              local_38 = local_38 + 1;
              *pcVar12 = '\0';
              (*(code *)PTR_FUN_005c8660)(local_11 + -1,local_30,&local_1c8);
              piVar7 = extraout_ECX_00;
            }
            goto LAB_00560944;
          }
          goto LAB_005609e3;
        }
        if (local_24 == 0) {
          local_10 = local_10 + 1;
          local_24 = 1;
        }
        if ('\0' < local_9) {
          local_1a = '\x01';
        }
        pcVar11 = &DAT_005c87d0;
LAB_00560549:
        local_1c = 0xff;
        pbVar9 = (byte *)pcVar11;
        pbVar10 = param_2;
LAB_0056054d:
        param_2 = pbVar10;
        _memset(local_68,0,0x20);
        if ((local_40 == 0x7b) && (*pbVar9 == 0x5d)) {
          uVar5 = 0x5d;
          local_68[0xb] = 0x20;
          pbVar9 = pbVar9 + 1;
        }
        else {
          uVar5 = (uint)local_39;
        }
        while (pWVar13 = local_30, bVar1 = *pbVar9, bVar1 != 0x5d) {
          if (((bVar1 == 0x2d) && (bVar8 = (byte)uVar5, bVar8 != 0)) &&
             (bVar4 = pbVar9[1], bVar4 != 0x5d)) {
            if (bVar4 <= bVar8) {
              uVar5 = (uint)bVar4;
              bVar4 = bVar8;
            }
            if ((byte)uVar5 <= bVar4) {
              iVar15 = (bVar4 - uVar5) + 1;
              do {
                local_68[uVar5 >> 3] = local_68[uVar5 >> 3] | '\x01' << ((byte)uVar5 & 7);
                uVar5 = uVar5 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            uVar5 = 0;
            pbVar9 = pbVar9 + 2;
          }
          else {
            uVar5 = (uint)bVar1;
            local_68[bVar1 >> 3] = local_68[bVar1 >> 3] | '\x01' << (bVar1 & 7);
            pbVar9 = pbVar9 + 1;
          }
        }
        if (*pbVar9 == 0) goto LAB_005609e3;
        if (local_40 == 0x7b) {
          param_2 = pbVar9;
        }
        local_8 = local_8 + -1;
        local_34 = local_30;
        piVar7 = param_1;
        FUN_00560a53((uint)local_18,param_1);
        while( true ) {
          if ((local_24 != 0) &&
             (iVar15 = local_10 + -1, bVar16 = local_10 == 0, local_10 = iVar15, bVar16))
          goto LAB_005606b2;
          local_8 = local_8 + 1;
          local_18 = (int *)FUN_00560a39(param_1);
          if (local_18 == (int *)0xffffffff) break;
          bVar1 = (byte)local_18;
          piVar7 = (int *)(int)(char)(local_68[(int)local_18 >> 3] ^ local_1c);
          if (((uint)piVar7 & 1 << (bVar1 & 7)) == 0) break;
          if (local_12 == '\0') {
            if (local_1a == '\0') {
              *(byte *)pWVar13 = bVar1;
              pWVar13 = (WCHAR *)((int)pWVar13 + 1);
              local_30 = pWVar13;
            }
            else {
              local_3c = bVar1;
              if ((PTR_DAT_005c8384[((uint)local_18 & 0xff) * 2 + 1] & 0x80) != 0) {
                local_8 = local_8 + 1;
                uVar5 = FUN_00560a39(param_1);
                local_3b = (undefined1)uVar5;
              }
              FUN_00563ddd(&local_42,&local_3c,DAT_005c8378);
              *pWVar13 = local_42;
              pWVar13 = pWVar13 + 1;
              piVar7 = extraout_ECX_01;
              local_30 = pWVar13;
            }
          }
          else {
            local_34 = (WCHAR *)((int)local_34 + 1);
          }
        }
        local_8 = local_8 + -1;
        piVar7 = param_1;
        FUN_00560a53((uint)local_18,param_1);
LAB_005606b2:
        if (local_34 == pWVar13) goto LAB_005609e3;
        if ((local_12 == '\0') && (local_38 = local_38 + 1, local_40 != 99)) {
          if (local_1a == '\0') {
            *(byte *)local_30 = 0;
          }
          else {
            *local_30 = L'\0';
          }
        }
      }
      else {
        if (uVar5 == 0x70) {
          local_11 = '\x01';
          goto LAB_005606f0;
        }
        if (uVar5 == 0x73) {
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pcVar11 = s_____005c87c8;
          goto LAB_00560549;
        }
        if (uVar5 == 0x75) goto LAB_005606f0;
        if (uVar5 != 0x78) {
          if (uVar5 != 0x7b) goto LAB_00560468;
          if ('\0' < local_9) {
            local_1a = '\x01';
          }
          pbVar9 = param_2 + 1;
          pbVar10 = pbVar9;
          if (*pbVar9 == 0x5e) {
            pcVar11 = (char *)(param_2 + 2);
            param_2 = pbVar9;
            goto LAB_00560549;
          }
          goto LAB_0056054d;
        }
LAB_00560226:
        if (local_18 == (int *)0x2d) {
          local_1b = '\x01';
LAB_005604b5:
          local_10 = local_10 + -1;
          if ((local_10 == 0) && (local_24 != 0)) {
            local_13 = '\x01';
          }
          else {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_00560a39(param_1);
          }
        }
        else if (local_18 == (int *)0x2b) goto LAB_005604b5;
        if (local_18 == (int *)0x30) {
          local_8 = local_8 + 1;
          piVar7 = param_1;
          local_18 = (int *)FUN_00560a39(param_1);
          if (((char)local_18 == 'x') || ((char)local_18 == 'X')) {
            local_8 = local_8 + 1;
            piVar7 = param_1;
            local_18 = (int *)FUN_00560a39(param_1);
            uVar5 = 0x78;
          }
          else {
            local_20 = 1;
            if (uVar5 == 0x78) {
              local_8 = local_8 + -1;
              piVar7 = param_1;
              FUN_00560a53((uint)local_18,param_1);
              local_18 = (int *)0x30;
            }
            else {
              uVar5 = 0x6f;
            }
          }
        }
LAB_00560725:
        if (local_34 == (WCHAR *)0x0) {
          if (local_13 == '\0') {
            while ((piVar17 = local_18, uVar5 != 0x78 && (uVar5 != 0x70))) {
              if ((int)DAT_005c8378 < 2) {
                uVar6 = (byte)PTR_DAT_005c8384[(int)local_18 * 2] & 4;
              }
              else {
                piVar3 = (int *)0x4;
                uVar6 = FUN_0055c336(piVar7,(int)local_18,4);
                piVar7 = piVar3;
              }
              if (uVar6 == 0) goto LAB_005608ec;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_005608ec;
                iVar15 = (int)puVar14 << 3;
              }
              else {
                iVar15 = (int)puVar14 * 10;
              }
LAB_005608c4:
              local_20 = local_20 + 1;
              puVar14 = (undefined *)(iVar15 + -0x30 + (int)piVar17);
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_005608fa;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_00560a39(param_1);
            }
            if ((int)DAT_005c8378 < 2) {
              uVar6 = (byte)PTR_DAT_005c8384[(int)local_18 * 2] & 0x80;
            }
            else {
              piVar3 = (int *)0x80;
              uVar6 = FUN_0055c336(piVar7,(int)local_18,0x80);
              piVar7 = piVar3;
            }
            if (uVar6 != 0) {
              iVar15 = (int)puVar14 << 4;
              piVar3 = piVar17;
              piVar17 = (int *)FUN_00560a02(piVar7,(uint)piVar17);
              piVar7 = piVar3;
              local_18 = piVar17;
              goto LAB_005608c4;
            }
LAB_005608ec:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_00560a53((uint)piVar17,param_1);
          }
LAB_005608fa:
          if (local_1b != '\0') {
            puVar14 = (undefined *)-(int)puVar14;
          }
        }
        else {
          if (local_13 == '\0') {
            while (piVar17 = local_18, uVar5 != 0x78) {
              if ((int)DAT_005c8378 < 2) {
                uVar6 = (byte)PTR_DAT_005c8384[(int)local_18 * 2] & 4;
              }
              else {
                uVar6 = FUN_0055c336(piVar7,(int)local_18,4);
              }
              if (uVar6 == 0) goto LAB_0056080e;
              if (uVar5 == 0x6f) {
                if (0x37 < (int)piVar17) goto LAB_0056080e;
                local_2c = __allshl(3,(int)local_2c._4_4_);
                piVar7 = extraout_ECX_02;
              }
              else {
                local_2c = __allmul((uint)local_2c,(int)local_2c._4_4_,10,0);
                piVar7 = extraout_ECX_03;
              }
LAB_005607e0:
              local_20 = local_20 + 1;
              piVar17 = piVar17 + -0xc;
              local_2c = CONCAT44((int)local_2c._4_4_ + ((int)piVar17 >> 0x1f) +
                                  (uint)CARRY4((uint)local_2c,(uint)piVar17),
                                  (undefined *)((uint)local_2c + (int)piVar17));
              if ((local_24 != 0) && (local_10 = local_10 + -1, local_10 == 0)) goto LAB_0056081c;
              local_8 = local_8 + 1;
              piVar7 = param_1;
              local_18 = (int *)FUN_00560a39(param_1);
            }
            if ((int)DAT_005c8378 < 2) {
              uVar6 = (byte)PTR_DAT_005c8384[(int)local_18 * 2] & 0x80;
            }
            else {
              uVar6 = FUN_0055c336(piVar7,(int)local_18,0x80);
            }
            if (uVar6 != 0) {
              local_2c = __allshl(4,(int)local_2c._4_4_);
              piVar7 = piVar17;
              piVar17 = (int *)FUN_00560a02(this_01,(uint)piVar17);
              local_18 = piVar17;
              goto LAB_005607e0;
            }
LAB_0056080e:
            local_8 = local_8 + -1;
            piVar7 = param_1;
            FUN_00560a53((uint)piVar17,param_1);
          }
LAB_0056081c:
          if (local_1b != '\0') {
            piVar7 = (int *)-((int)local_2c._4_4_ + (uint)((uint)local_2c != 0));
            local_2c = CONCAT44(piVar7,-(uint)local_2c);
          }
        }
        if (uVar5 == 0x46) {
          local_20 = 0;
        }
        if (local_20 == 0) goto LAB_005609e3;
        if (local_12 == '\0') {
          local_38 = local_38 + 1;
LAB_0056091e:
          if (local_34 == (WCHAR *)0x0) {
            if (local_11 == '\0') {
              *local_30 = (WCHAR)puVar14;
            }
            else {
              *(undefined **)local_30 = puVar14;
            }
          }
          else {
            *(uint *)local_30 = (uint)local_2c;
            *(int **)(local_30 + 2) = local_2c._4_4_;
            piVar7 = local_2c._4_4_;
          }
        }
      }
LAB_00560944:
      local_19 = local_19 + '\x01';
      param_2 = param_2 + 1;
      this = piVar7;
    }
    else {
      local_8 = local_8 + 1;
      piVar7 = (int *)FUN_00560a39(param_1);
      param_2 = pbVar9 + 1;
      local_18 = piVar7;
      if ((int *)(uint)*pbVar9 != piVar7) goto LAB_005609c3;
      this = PTR_DAT_005c8384;
      if ((PTR_DAT_005c8384[((uint)piVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_8 = local_8 + 1;
        piVar17 = (int *)FUN_00560a39(param_1);
        this = (void *)(uint)*param_2;
        param_2 = pbVar9 + 2;
        if (this != piVar17) {
          local_8 = local_8 + -1;
          FUN_00560a53((uint)piVar17,param_1);
          local_8 = local_8 + -1;
          FUN_00560a53((uint)piVar7,param_1);
          goto LAB_005609e3;
        }
        local_8 = local_8 + -1;
      }
    }
    if ((local_18 == (int *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e))))
    goto LAB_005609e9;
    bVar1 = *param_2;
    pbVar9 = param_2;
    piVar7 = (int *)PTR_DAT_005c8384;
  } while( true );
}


