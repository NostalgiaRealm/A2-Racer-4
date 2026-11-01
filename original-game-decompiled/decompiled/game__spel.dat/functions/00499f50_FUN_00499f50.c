
/* ==== FUN_00499f50 @ 00499f50 ==== 
 * signature: undefined __thiscall FUN_00499f50(void * this, int param_1)
 * body: 00499f50-0049a921
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049a922-0049a923
 */

void __thiscall FUN_00499f50(void *this,int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *in_stack_fffffe88;
  undefined4 *in_stack_fffffe8c;
  uint uVar10;
  undefined1 local_151;
  uint local_150;
  undefined4 *local_14c;
  uint local_148;
  void *local_144;
  undefined1 local_140 [4];
  undefined4 *local_13c;
  undefined1 local_130 [4];
  undefined4 *local_12c;
  undefined4 local_120;
  undefined4 *local_11c;
  undefined1 local_110 [4];
  undefined4 *local_10c;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined4 local_b0 [4];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 local_60 [4];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e7f1;
  local_c = ExceptionList;
  uVar7 = 0;
  local_150 = 0;
  local_148 = 0;
  ExceptionList = &local_c;
  local_144 = this;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        puVar2 = &DAT_0057629c;
      }
      else {
        puVar2 = (undefined1 *)(*(int *)(param_1 + 4) + local_148);
      }
      switch(*puVar2) {
      case 0x42:
      case 0x62:
        local_14c = operator_new(0x40);
        local_4 = 0x18;
        if (local_14c == (void *)0x0) {
          local_14c = (undefined4 *)0x0;
        }
        else {
          local_130[0] = local_151;
          FUN_004028f0(local_130,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = (char *)&DAT_00712840;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5 - 1;
          uVar4 = FUN_00402a00(local_130,uVar5,'\x01');
          if ((char)uVar4 != '\0') {
            puVar3 = &DAT_00712840;
            puVar9 = local_12c;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            FUN_004029e0(local_130,uVar5);
          }
          local_120._0_1_ = local_151;
          local_4 = CONCAT31(local_4._1_3_,0x19);
          local_150 = uVar7 | 0x200;
          FUN_004028f0(&local_120,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = (char *)&DAT_00712844;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5 - 1;
          uVar4 = FUN_00402a00(&local_120,uVar5,'\x01');
          if ((char)uVar4 != '\0') {
            puVar3 = &DAT_00712844;
            puVar9 = local_11c;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            FUN_004029e0(&local_120,uVar5);
          }
          uVar6 = CONCAT11((char)((uVar7 | 0x200) >> 8),(char)uVar7) | 0x400;
          local_4 = 0x1a;
          local_80[0] = local_151;
          local_150 = uVar6;
          FUN_004028f0(local_80,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_005ae4f4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_80,(undefined4 *)&DAT_005ae4f4,~uVar5 - 1);
          uVar7 = CONCAT11((char)(uVar6 >> 8),(char)uVar7) | 0x800;
          in_stack_fffffe8c = &local_120;
          in_stack_fffffe88 = local_80;
          local_4 = 0x1b;
          local_150 = uVar7;
          local_14c = FUN_0049b370(local_14c,*(void **)((int)local_144 + 0x3c),in_stack_fffffe88,
                                   in_stack_fffffe8c,local_130,0,1);
        }
        local_4 = 0x1d;
        if ((uVar7 & 0x800) != 0) {
          uVar7 = uVar7 & 0xfffff7ff;
          local_150 = uVar7;
          FUN_004028f0(local_80,'\x01');
        }
        local_4 = 0x1c;
        if ((uVar7 & 0x400) != 0) {
          uVar7 = uVar7 & 0xfffffbff;
          local_150 = uVar7;
          FUN_004028f0(&local_120,'\x01');
        }
        local_4 = 0xffffffff;
        if ((uVar7 & 0x200) != 0) {
          uVar7 = uVar7 & 0xfffffdff;
          FUN_004028f0(local_130,'\x01');
        }
        local_110[0] = local_151;
        FUN_004028f0(local_110,'\0');
        uVar5 = 0xffffffff;
        pcVar8 = (char *)&DAT_00712848;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        uVar4 = FUN_00402a00(local_110,uVar5,'\x01');
        if ((char)uVar4 != '\0') {
          puVar3 = &DAT_00712848;
          puVar9 = local_10c;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_004029e0(local_110,uVar5);
        }
        local_4 = 0x1f;
        FUN_00498f80(local_14c,local_110);
        puVar2 = local_110;
        goto LAB_0049a856;
      default:
        puVar2 = FUN_004797e0(local_2c,s_Unknown_element_in_>_005ae524,param_1);
        local_4 = 0x20;
        puVar2 = FUN_004796b0(local_1c,puVar2,s_<_while_parsing_in_CRegVarArray:_005ae4fc);
        local_3c[0] = local_151;
        local_4._0_1_ = 0x21;
        FUN_004028f0(local_3c,'\0');
        local_4._0_1_ = 0x22;
        FUN_004093c0(local_3c,puVar2,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,0x21);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_3c,&DAT_005828d8);
      case 0x46:
      case 0x66:
        puVar3 = operator_new(0x40);
        local_4 = 8;
        local_14c = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          local_c0[0] = local_151;
          FUN_004028f0(local_c0,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_00712824;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_c0,(undefined4 *)&DAT_00712824,~uVar5 - 1);
          local_150 = uVar7 | 8;
          local_60[0]._0_1_ = local_151;
          local_4 = CONCAT31(local_4._1_3_,9);
          FUN_004028f0(local_60,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_00712828;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_60,(undefined4 *)&DAT_00712828,~uVar5 - 1);
          local_150 = uVar7 | 0x18;
          local_4 = 10;
          local_a0[0] = local_151;
          FUN_004028f0(local_a0,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_005ae4e4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_a0,(undefined4 *)&DAT_005ae4e4,~uVar5 - 1);
          uVar7 = uVar7 | 0x38;
          in_stack_fffffe8c = local_60;
          in_stack_fffffe88 = local_a0;
          local_4 = 0xb;
          local_150 = uVar7;
          puVar3 = FUN_0049b700(puVar3,*(void **)((int)this + 0x3c),in_stack_fffffe88,
                                in_stack_fffffe8c,local_c0,0,1);
        }
        local_4 = 0xd;
        if ((uVar7 & 0x20) != 0) {
          uVar7 = uVar7 & 0xffffffdf;
          local_150 = uVar7;
          FUN_004028f0(local_a0,'\x01');
        }
        local_4 = 0xc;
        if ((uVar7 & 0x10) != 0) {
          uVar7 = uVar7 & 0xffffffef;
          local_150 = uVar7;
          FUN_004028f0(local_60,'\x01');
        }
        local_4 = 0xffffffff;
        if ((uVar7 & 8) != 0) {
          uVar7 = uVar7 & 0xfffffff7;
          FUN_004028f0(local_c0,'\x01');
        }
        local_f0[0] = local_151;
        FUN_004028f0(local_f0,'\0');
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_0071282c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_f0,(undefined4 *)&DAT_0071282c,~uVar5 - 1);
        local_4 = 0xf;
        FUN_00498f80(puVar3,local_f0);
        local_4 = 0xffffffff;
        FUN_004028f0(local_f0,'\x01');
        break;
      case 0x49:
      case 0x69:
        puVar3 = operator_new(0x40);
        local_4 = 0;
        local_14c = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          local_100[0] = local_151;
          FUN_004028f0(local_100,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_00712818;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_100,(undefined4 *)&DAT_00712818,~uVar5 - 1);
          local_150 = uVar7 | 1;
          local_b0[0]._0_1_ = local_151;
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_004028f0(local_b0,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_0071281c;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_b0,(undefined4 *)&DAT_0071281c,~uVar5 - 1);
          local_150 = uVar7 | 3;
          local_4 = 2;
          local_e0[0] = local_151;
          FUN_004028f0(local_e0,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_005ae4dc;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_e0,(undefined4 *)&DAT_005ae4dc,~uVar5 - 1);
          uVar7 = uVar7 | 7;
          in_stack_fffffe8c = local_b0;
          in_stack_fffffe88 = local_e0;
          local_4 = 3;
          local_150 = uVar7;
          puVar3 = FUN_0049b940(puVar3,*(void **)((int)this + 0x3c),in_stack_fffffe88,
                                in_stack_fffffe8c,local_100,0,1);
        }
        local_4 = 5;
        if ((uVar7 & 4) != 0) {
          uVar7 = uVar7 & 0xfffffffb;
          local_150 = uVar7;
          FUN_004028f0(local_e0,'\x01');
        }
        local_4 = 4;
        if ((uVar7 & 2) != 0) {
          uVar7 = uVar7 & 0xfffffffd;
          local_150 = uVar7;
          FUN_004028f0(local_b0,'\x01');
        }
        local_4 = 0xffffffff;
        if ((uVar7 & 1) != 0) {
          uVar7 = uVar7 & 0xfffffffe;
          FUN_004028f0(local_100,'\x01');
        }
        local_90[0] = local_151;
        FUN_004028f0(local_90,'\0');
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_00712820;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_00402940(local_90,(undefined4 *)&DAT_00712820,~uVar5 - 1);
        local_4 = 7;
        FUN_00498f80(puVar3,local_90);
        local_4 = 0xffffffff;
        FUN_004028f0(local_90,'\x01');
        break;
      case 0x53:
      case 0x73:
        this_00 = operator_new(0x4c);
        local_4 = 0x10;
        if (this_00 == (void *)0x0) {
          local_14c = (undefined4 *)0x0;
        }
        else {
          local_50[0] = local_151;
          local_14c = this_00;
          FUN_004028f0(local_50,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_00712834;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_50,(undefined4 *)&DAT_00712834,~uVar5 - 1);
          local_70[0] = local_151;
          local_4 = CONCAT31(local_4._1_3_,0x11);
          local_150 = uVar7 | 0x40;
          FUN_004028f0(local_70,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_00712838;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00402940(local_70,(undefined4 *)&DAT_00712838,~uVar5 - 1);
          uVar6 = CONCAT31((int3)(uVar7 >> 8),(char)(uVar7 | 0x40)) | 0x80;
          local_4 = 0x12;
          local_d0[0] = local_151;
          local_150 = uVar6;
          FUN_004028f0(local_d0,'\0');
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_005ae4ec;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          puVar2 = &DAT_005ae4ec;
          uVar10 = 0x49a4b7;
          FUN_00402940(local_d0,(undefined4 *)&DAT_005ae4ec,~uVar5 - 1);
          uVar7 = CONCAT11((char)(uVar7 >> 8),(char)uVar6) | 0x100;
          uVar5 = 1;
          local_40 = &stack0xfffffe88;
          local_4 = 0x13;
          local_150 = uVar7;
          FUN_004900f0(&stack0xfffffe88,&DAT_00712830,&local_151);
          local_14c = FUN_0049c1b0(this_00,*(void **)((int)this + 0x3c),local_d0,local_70,local_50,
                                   in_stack_fffffe88,in_stack_fffffe8c,uVar10,puVar2,uVar5);
        }
        local_4 = 0x15;
        if ((uVar7 & 0x100) != 0) {
          uVar7 = uVar7 & 0xfffffeff;
          local_150 = uVar7;
          FUN_004028f0(local_d0,'\x01');
        }
        local_4 = 0x14;
        if ((uVar7 & 0x80) != 0) {
          uVar7 = uVar7 & 0xffffff7f;
          local_150 = uVar7;
          FUN_004028f0(local_70,'\x01');
        }
        local_4 = 0xffffffff;
        if ((uVar7 & 0x40) != 0) {
          uVar7 = uVar7 & 0xffffffbf;
          FUN_004028f0(local_50,'\x01');
        }
        local_140[0] = local_151;
        FUN_004028f0(local_140,'\0');
        uVar5 = 0xffffffff;
        pcVar8 = (char *)&DAT_0071283c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        uVar4 = FUN_00402a00(local_140,uVar5,'\x01');
        if ((char)uVar4 != '\0') {
          puVar3 = &DAT_0071283c;
          puVar9 = local_13c;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_004029e0(local_140,uVar5);
        }
        local_4 = 0x17;
        FUN_00498f80(local_14c,local_140);
        puVar2 = local_140;
LAB_0049a856:
        local_4 = 0xffffffff;
        FUN_004028f0(puVar2,'\x01');
        this = local_144;
      }
      local_148 = local_148 + 1;
    } while (local_148 < *(uint *)(param_1 + 8));
  }
  ExceptionList = local_c;
  return;
}


