
/* ==== FUN_0051ae80 @ 0051ae80 ==== 
 * signature: undefined __thiscall FUN_0051ae80(void * this, byte * param_1)
 * body: 0051ae80-0051ca1e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051ae80(void *this,byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *pbVar6;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *extraout_ECX_05;
  byte *extraout_ECX_06;
  byte *extraout_ECX_07;
  byte *extraout_ECX_08;
  byte *extraout_ECX_09;
  byte *extraout_ECX_10;
  void *extraout_ECX_11;
  byte *extraout_ECX_12;
  byte *extraout_ECX_13;
  byte *extraout_ECX_14;
  void *extraout_ECX_15;
  byte *extraout_ECX_16;
  byte *extraout_ECX_17;
  byte *extraout_ECX_18;
  byte *extraout_ECX_19;
  byte *extraout_ECX_20;
  byte *extraout_ECX_21;
  void *extraout_ECX_22;
  void *extraout_ECX_23;
  byte *extraout_ECX_24;
  byte *extraout_ECX_25;
  void *this_00;
  byte *extraout_ECX_26;
  byte *extraout_ECX_27;
  byte *extraout_ECX_28;
  byte *extraout_ECX_29;
  byte *extraout_ECX_30;
  byte *extraout_ECX_31;
  byte *extraout_ECX_32;
  void *this_01;
  byte *extraout_ECX_33;
  byte *extraout_ECX_34;
  byte *extraout_ECX_35;
  byte *extraout_ECX_36;
  byte *extraout_ECX_37;
  byte *extraout_ECX_38;
  byte *extraout_ECX_39;
  byte *extraout_ECX_40;
  byte *extraout_ECX_41;
  byte *extraout_ECX_42;
  byte *extraout_ECX_43;
  byte *extraout_ECX_44;
  byte *extraout_ECX_45;
  byte *extraout_ECX_46;
  byte *extraout_ECX_47;
  byte *extraout_ECX_48;
  byte *extraout_ECX_49;
  byte *extraout_ECX_50;
  byte *extraout_ECX_51;
  byte *extraout_ECX_52;
  byte *extraout_ECX_53;
  byte *extraout_ECX_54;
  byte *extraout_ECX_55;
  byte *extraout_ECX_56;
  byte *extraout_ECX_57;
  byte *extraout_ECX_58;
  byte *extraout_ECX_59;
  byte *extraout_ECX_60;
  byte *extraout_ECX_61;
  byte *extraout_ECX_62;
  byte *extraout_ECX_63;
  byte *extraout_ECX_64;
  byte *extraout_ECX_65;
  byte *extraout_ECX_66;
  byte *extraout_ECX_67;
  byte *extraout_ECX_68;
  byte *extraout_ECX_69;
  byte *extraout_ECX_70;
  byte *extraout_ECX_71;
  byte *extraout_ECX_72;
  byte *extraout_ECX_73;
  byte *extraout_ECX_74;
  byte *extraout_ECX_75;
  byte *extraout_ECX_76;
  undefined4 extraout_ECX_77;
  void *this_02;
  void *extraout_ECX_78;
  void *extraout_ECX_79;
  byte *extraout_ECX_80;
  void *pvVar7;
  undefined4 extraout_ECX_81;
  void *extraout_ECX_82;
  void *extraout_ECX_83;
  void *extraout_ECX_84;
  void *this_03;
  void *this_04;
  void *extraout_ECX_85;
  void *extraout_ECX_86;
  byte *extraout_ECX_87;
  void *extraout_ECX_88;
  void *pvVar8;
  byte *extraout_ECX_89;
  byte *extraout_ECX_90;
  byte *extraout_ECX_91;
  byte *extraout_ECX_92;
  byte *extraout_ECX_93;
  byte *extraout_ECX_94;
  byte *extraout_ECX_95;
  byte *extraout_ECX_96;
  byte *extraout_ECX_97;
  byte *extraout_ECX_98;
  byte *extraout_ECX_99;
  byte *extraout_ECX_x00100;
  byte *extraout_ECX_x00101;
  void *this_05;
  byte *extraout_ECX_x00102;
  byte *extraout_ECX_x00103;
  byte *extraout_ECX_x00104;
  byte *extraout_ECX_x00105;
  byte *extraout_ECX_x00106;
  byte *extraout_ECX_x00107;
  byte *extraout_ECX_x00108;
  byte *extraout_ECX_x00109;
  byte *extraout_ECX_x00110;
  byte *extraout_ECX_x00111;
  byte *extraout_ECX_x00112;
  byte *extraout_ECX_x00113;
  byte *extraout_ECX_x00114;
  byte *extraout_ECX_x00115;
  void *extraout_ECX_x00116;
  void *extraout_ECX_x00117;
  byte *pbVar9;
  bool bVar10;
  float10 fVar11;
  char *pcVar12;
  byte *local_21c;
  byte *local_218;
  byte *local_214;
  double local_210;
  void *local_208;
  int local_204;
  byte *local_200;
  byte local_1fc [504];
  
  local_21c = param_1;
  local_204 = 0;
  if (param_1 != &DAT_0074c058) {
    DAT_0074c058 = 0;
    _strncat(&DAT_0074c058,(char *)param_1,0x100);
    this = extraout_ECX;
  }
  bVar2 = *local_21c;
  while ((bVar2 != 0 &&
         (uVar3 = FUN_0055ac61((void *)(int)(char)bVar2,(int)(char)bVar2), this = extraout_ECX_00,
         uVar3 == 0))) {
    local_21c = local_21c + 1;
    bVar2 = *local_21c;
  }
  bVar2 = *local_21c;
  if (bVar2 != 0) {
LAB_0051aefb:
    do {
      uVar3 = FUN_0055ac61(this,(int)(char)bVar2);
      if (uVar3 != 0) {
        local_21c = local_21c + 1;
        bVar2 = *local_21c;
        this = extraout_ECX_01;
        if (bVar2 != 0) goto LAB_0051aefb;
      }
      if (*local_21c == 0x2d) {
        local_21c = local_21c + 1;
      }
      if (*local_21c == 0) break;
      pbVar6 = local_21c + 1;
      local_200 = local_21c;
      switch(*local_21c) {
      case 0x41:
        local_21c = pbVar6;
        uVar3 = FUN_0055ac39(pbVar6,(int)(char)*pbVar6);
        pvVar8 = extraout_ECX_11;
        if (uVar3 == 0) {
          bVar2 = *local_21c;
          pvVar8 = (void *)CONCAT31((int3)((uint)extraout_ECX_11 >> 8),bVar2);
          if ((bVar2 != 0x2e) && (bVar2 != 0x2d)) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__no_maximum_cosine_005bd9a4);
            pbVar6 = extraout_ECX_12;
            break;
          }
        }
        if (*local_21c == 0x2d) {
          fVar11 = (float10)FUN_0051e030(pvVar8,local_21c,(uint *)&local_21c);
          _DAT_0074be30 = (double)-fVar11;
          FUN_0051df40(s_Angle_premerge__005bd994,0,0x74be30);
          DAT_0074bed8 = 1;
          DAT_0074be98 = 1;
          pbVar6 = extraout_ECX_13;
        }
        else {
          fVar11 = (float10)FUN_0051e030(&local_21c,local_21c,(uint *)&local_21c);
          _DAT_0074be38 = (double)fVar11;
          FUN_0051df40(s_Angle_postmerge_005bd984,0,0x74be38);
          DAT_0074bed4 = 1;
          DAT_0074be98 = 1;
          pbVar6 = extraout_ECX_14;
        }
        break;
      default:
        local_21c = pbVar6;
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__unknown_flag__c___005bc908);
        pbVar6 = extraout_ECX_x00115;
        break;
      case 0x43:
        local_21c = pbVar6;
        uVar3 = FUN_0055ac39(pbVar6,(int)(char)*pbVar6);
        pvVar8 = extraout_ECX_15;
        if (uVar3 == 0) {
          bVar2 = *local_21c;
          pvVar8 = (void *)CONCAT31((int3)((uint)extraout_ECX_15 >> 8),bVar2);
          if ((bVar2 != 0x2e) && (bVar2 != 0x2d)) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__no_centrum_radius_005bd940);
            pbVar6 = extraout_ECX_16;
            break;
          }
        }
        if (*local_21c == 0x2d) {
          fVar11 = (float10)FUN_0051e030(&local_21c,local_21c,(uint *)&local_21c);
          _DAT_0074bea0 = (double)-fVar11;
          FUN_0051df40(s_Centrum_premerge__005bd92c,0,0x74bea0);
          DAT_0074bed8 = 1;
          DAT_0074be98 = 1;
          pbVar6 = extraout_ECX_17;
        }
        else {
          fVar11 = (float10)FUN_0051e030(pvVar8,local_21c,(uint *)&local_21c);
          _DAT_0074bea8 = (double)fVar11;
          FUN_0051df40(s_Centrum_postmerge_005bd918,0,0x74bea8);
          DAT_0074bed4 = 1;
          DAT_0074be98 = 1;
          pbVar6 = extraout_ECX_18;
        }
        break;
      case 0x45:
        bVar2 = *pbVar6;
        if (bVar2 == 0x2d) {
          local_21c = pbVar6;
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__negative_maximum_r_005bd8cc);
          pbVar6 = extraout_ECX_19;
        }
        else {
          local_21c = pbVar6;
          uVar3 = FUN_0055ac39((void *)(int)(char)bVar2,(int)(char)bVar2);
          if (uVar3 == 0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__no_maximum_roundo_005bd884);
            pbVar6 = extraout_ECX_20;
          }
          else {
            fVar11 = (float10)FUN_0051e030(local_21c,local_21c,(uint *)&local_21c);
            _DAT_0074c490 = (double)fVar11;
            FUN_0051df40(s_Distance_roundoff_005bd870,0,0x74c490);
            DAT_0074bfd4 = 1;
            pbVar6 = extraout_ECX_21;
          }
        }
        break;
      case 0x46:
        bVar2 = *pbVar6;
        local_21c = pbVar6;
        while ((bVar2 != 0 &&
               (uVar3 = FUN_0055ac61((void *)(int)(char)bVar2,(int)(char)bVar2),
               pbVar6 = extraout_ECX_35, uVar3 == 0))) {
          pbVar9 = local_21c + 1;
          switch(*local_21c) {
          case 0x41:
            local_21c = pbVar9;
            FUN_0051df40(s_FArea_total_005bd640,0,0);
            DAT_0074c034 = 1;
            pbVar6 = extraout_ECX_37;
            break;
          default:
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__unknown__F__outpu_005bd510);
            local_21c = local_21c + 1;
            bVar2 = *local_21c;
            pbVar6 = extraout_ECX_59;
            while ((bVar2 != 0 &&
                   (uVar3 = FUN_0055ac61(pbVar6,(int)(char)bVar2), pbVar6 = extraout_ECX_60,
                   uVar3 == 0))) {
              local_21c = local_21c + 1;
              bVar2 = *local_21c;
            }
            break;
          case 0x43:
            local_21c = pbVar9;
            FUN_0051df40(s_FCentrums_005bd628,0,0);
            FUN_0051a810(4);
            pbVar6 = extraout_ECX_39;
            break;
          case 0x44:
            local_21c = pbVar9;
            FUN_0051df40(s_FD_cdd_out_005bd610,0,0);
            DAT_0074be28 = 1;
            pbVar6 = extraout_ECX_41;
            break;
          case 0x46:
            local_21c = pbVar9;
            FUN_0051df40(s_FFacets_xridge_005bd600,0,0);
            FUN_0051a810(6);
            pbVar6 = extraout_ECX_42;
            break;
          case 0x49:
            local_21c = pbVar9;
            FUN_0051df40(&DAT_005bd5f0,0,0);
            FUN_0051a810(8);
            pbVar6 = extraout_ECX_44;
            break;
          case 0x4e:
            local_21c = pbVar9;
            FUN_0051df40(s_FNeighbors_vertex_005bd5c8,0,0);
            FUN_0051a810(0x1a);
            pbVar6 = extraout_ECX_47;
            break;
          case 0x4f:
            if (DAT_0074befc == 0) {
              DAT_0074befc = 1;
              local_21c = pbVar9;
            }
            else {
              local_21c = pbVar9;
              FUN_0051df40(s_FOptions_005bd5b4,0,0);
              FUN_0051a810(0x11);
              pbVar6 = extraout_ECX_49;
            }
            break;
          case 0x50:
            local_21c = pbVar9;
            FUN_0051df40(s_FPoint_nearest_005bd590,0,0);
            FUN_0051a810(0x13);
            pbVar6 = extraout_ECX_51;
            break;
          case 0x51:
            local_21c = pbVar9;
            FUN_0051df40(s_FQhull_005bd588,0,0);
            FUN_0051a810(0x15);
            pbVar6 = extraout_ECX_52;
            break;
          case 0x53:
            local_21c = pbVar9;
            FUN_0051df40(s_FSize_005bd574,0,0);
            FUN_0051a810(0x16);
            DAT_0074c034 = 1;
            pbVar6 = extraout_ECX_54;
            break;
          case 0x56:
            local_21c = pbVar9;
            FUN_0051df40(s_FVertex_average_005bd558,0,0);
            FUN_0051a810(2);
            pbVar6 = extraout_ECX_57;
            break;
          case 0x61:
            local_21c = pbVar9;
            FUN_0051df40(s_Farea_005bd64c,0,0);
            FUN_0051a810(1);
            DAT_0074c034 = 1;
            pbVar6 = extraout_ECX_36;
            break;
          case 99:
            local_21c = pbVar9;
            FUN_0051df40(s_Fcoplanars_005bd634,0,0);
            FUN_0051a810(3);
            pbVar6 = extraout_ECX_38;
            break;
          case 100:
            local_21c = pbVar9;
            FUN_0051df40(s_Fd_cdd_in_005bd61c,0,0);
            _DAT_0074be24 = 1;
            pbVar6 = extraout_ECX_40;
            break;
          case 0x69:
            local_21c = pbVar9;
            FUN_0051df40(s_Finner_005bd5f8,0,0);
            FUN_0051a810(9);
            pbVar6 = extraout_ECX_43;
            break;
          case 0x6d:
            local_21c = pbVar9;
            FUN_0051df40(s_Fmerges_005bd5e8,0,0);
            FUN_0051a810(0xf);
            pbVar6 = extraout_ECX_45;
            break;
          case 0x6e:
            local_21c = pbVar9;
            FUN_0051df40(s_Fneighbors_005bd5dc,0,0);
            FUN_0051a810(10);
            pbVar6 = extraout_ECX_46;
            break;
          case 0x6f:
            local_21c = pbVar9;
            FUN_0051df40(s_Fouter_005bd5c0,0,0);
            FUN_0051a810(0xc);
            pbVar6 = extraout_ECX_48;
            break;
          case 0x70:
            local_21c = pbVar9;
            FUN_0051df40(s_Fpoint_intersect_005bd5a0,0,0);
            FUN_0051a810(0x12);
            pbVar6 = extraout_ECX_50;
            break;
          case 0x73:
            local_21c = pbVar9;
            FUN_0051df40(s_Fsummary_005bd57c,0,0);
            FUN_0051a810(0x17);
            pbVar6 = extraout_ECX_53;
            break;
          case 0x74:
            local_21c = pbVar9;
            FUN_0051df40(s_Ftriangles_005bd568,0,0);
            FUN_0051a810(0x18);
            pbVar6 = extraout_ECX_55;
            break;
          case 0x76:
            local_21c = pbVar9;
            FUN_0051a810(0x19);
            pbVar6 = extraout_ECX_56;
            break;
          case 0x78:
            local_21c = pbVar9;
            FUN_0051df40(s_Fxtremes_005bd54c,0,0);
            FUN_0051a810(0x1b);
            pbVar6 = extraout_ECX_58;
          }
          bVar2 = *local_21c;
        }
        break;
      case 0x47:
        local_204 = 1;
        local_21c = pbVar6;
        FUN_0051a810(7);
        bVar2 = *local_21c;
        pbVar6 = local_21c;
        while ((bVar2 != 0 &&
               (uVar3 = FUN_0055ac61(pbVar6,(int)(char)bVar2), pbVar6 = extraout_ECX_61, uVar3 == 0)
               )) {
          bVar2 = *local_21c;
          pbVar6 = local_21c + 1;
          switch(bVar2) {
          case 0x44:
            local_21c = pbVar6;
            uVar3 = FUN_0055ac39((void *)((char)bVar2 + -0x44),(int)(char)*pbVar6);
            if (uVar3 == 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__missing_dimen_005bd468);
              pbVar6 = extraout_ECX_72;
            }
            else {
              if (-1 < DAT_0074be48) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__can_only_drop_one_005bd420);
              }
              DAT_0074be48 = FUN_0051e060(local_21c,local_21c,(uint *)&local_21c);
              FUN_0051df40(s_GDrop_dim_005bd414,0x74be48,0);
              pbVar6 = extraout_ECX_73;
            }
            break;
          default:
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__unknown__G__print_005bd3d8);
            local_21c = local_21c + 1;
            bVar2 = *local_21c;
            pbVar6 = extraout_ECX_74;
            while ((bVar2 != 0 &&
                   (uVar3 = FUN_0055ac61((void *)(int)(char)bVar2,(int)(char)bVar2),
                   pbVar6 = extraout_ECX_75, uVar3 == 0))) {
              local_21c = local_21c + 1;
              bVar2 = *local_21c;
            }
            break;
          case 0x61:
            local_21c = pbVar6;
            FUN_0051df40(s_Gall_points_005bd504,0,0);
            DAT_0074bee8 = 1;
            pbVar6 = extraout_ECX_62;
            break;
          case 99:
            local_21c = pbVar6;
            FUN_0051df40(s_Gcentrums_005bd4f8,0,0);
            DAT_0074bedc = 1;
            pbVar6 = extraout_ECX_63;
            break;
          case 0x68:
            local_21c = pbVar6;
            FUN_0051df40(s_Gintersections_005bd4e8,0,0);
            DAT_0074be44 = 1;
            pbVar6 = extraout_ECX_64;
            break;
          case 0x69:
            local_21c = pbVar6;
            FUN_0051df40(s_Ginner_005bd4e0,0,0);
            DAT_0074bef0 = 1;
            pbVar6 = extraout_ECX_65;
            break;
          case 0x6e:
            local_21c = pbVar6;
            FUN_0051df40(s_Gno_planes_005bd4d4,0,0);
            DAT_0074bef8 = 1;
            pbVar6 = extraout_ECX_66;
            break;
          case 0x6f:
            local_21c = pbVar6;
            FUN_0051df40(s_Gouter_005bd4cc,0,0);
            DAT_0074bf00 = 1;
            pbVar6 = extraout_ECX_67;
            break;
          case 0x70:
            local_21c = pbVar6;
            FUN_0051df40(s_Gpoints_005bd4c4,0,0);
            DAT_0074bee0 = 1;
            pbVar6 = extraout_ECX_68;
            break;
          case 0x72:
            local_21c = pbVar6;
            FUN_0051df40(s_Gridges_005bd4bc,0,0);
            DAT_0074bf78 = 1;
            pbVar6 = extraout_ECX_69;
            break;
          case 0x74:
            local_21c = pbVar6;
            FUN_0051df40(s_Gtransparent_005bd4ac,0,0);
            DAT_0074bf88 = 1;
            pbVar6 = extraout_ECX_70;
            break;
          case 0x76:
            local_21c = pbVar6;
            FUN_0051df40(s_Gvertices_005bd4a0,0,0);
            DAT_0074bf7c = 1;
            pbVar6 = extraout_ECX_71;
          }
          bVar2 = *local_21c;
        }
        break;
      case 0x48:
        DAT_0074be64 = 1;
        local_21c = pbVar6;
        FUN_0051e030(pbVar6,pbVar6,(uint *)&local_218);
        if (local_21c < local_218) {
          do {
            bVar2 = *local_218;
            pvVar8 = (void *)CONCAT31((int3)((uint)local_21c >> 8),bVar2);
            if ((bVar2 != 0) &&
               (uVar3 = FUN_0055ac61(pvVar8,(int)(char)bVar2), pvVar8 = extraout_ECX_22, uVar3 == 0)
               ) {
              if (*local_218 == 0x2c) {
                local_218 = local_218 + 1;
              }
              else {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__origin_for_Halfsp_005bd824);
                pvVar8 = extraout_ECX_23;
              }
            }
            local_21c = local_218;
            FUN_0051e030(pvVar8,local_218,(uint *)&local_218);
          } while (local_21c < local_218);
        }
        if (pbVar6 < local_218) {
          DAT_0074c02c = FUN_0055ab88((int)(local_218 + (1 - (int)pbVar6)),1);
          if (DAT_0074c02c == (int *)0x0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__insufficient_memory_005bd7f4);
            FUN_0051e8e0(4,(int *)0x0);
          }
          _strncpy((char *)DAT_0074c02c,(char *)pbVar6,(int)local_218 - (int)pbVar6);
          FUN_0051df40(s_Halfspace_about_005bd7e4,0,0);
          FUN_0051df40(DAT_0074c02c,0,0);
          pbVar6 = extraout_ECX_24;
        }
        else {
          FUN_0051df40(s_Halfspace_005bd7d8,0,0);
          pbVar6 = extraout_ECX_25;
        }
        break;
      case 0x50:
        bVar2 = *pbVar6;
        while ((local_21c = pbVar6, bVar2 != 0 &&
               (uVar3 = FUN_0055ac61(pbVar6,(int)(char)bVar2), pbVar6 = extraout_ECX_76, uVar3 == 0)
               )) {
          pvVar8 = (void *)((char)*local_21c + -0x41);
          pbVar6 = local_21c + 1;
          switch(*local_21c) {
          case 0x41:
            local_21c = pbVar6;
            uVar3 = FUN_0055ac39((void *)(int)(char)*pbVar6,(int)(char)*pbVar6);
            if (uVar3 == 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__missing_facet_005bd318);
            }
            else {
              DAT_0074be6c = FUN_0051e060(local_21c,local_21c,(uint *)&local_21c);
              FUN_0051df40(s_PArea_keep_005bd30c,0x74be6c,0);
              DAT_0074c034 = 1;
            }
            break;
          default:
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__unknown__P__print_005bd23c);
            local_21c = local_21c + 1;
            bVar2 = *local_21c;
            pvVar8 = extraout_ECX_78;
            while ((bVar2 != 0 && (uVar3 = FUN_0055ac61(pvVar8,(int)(char)bVar2), uVar3 == 0))) {
              local_21c = local_21c + 1;
              bVar2 = *local_21c;
              pvVar8 = extraout_ECX_79;
            }
            break;
          case 0x44:
          case 100:
            bVar2 = *local_21c;
            local_21c = pbVar6;
            local_214 = (byte *)FUN_0051e060(&local_21c,pbVar6,(uint *)&local_21c);
            local_210 = 0.0;
            bVar1 = *local_21c;
            if (bVar1 == 0x3a) {
              local_21c = local_21c + 1;
              fVar11 = (float10)FUN_0051e030((void *)CONCAT31((int3)((uint)extraout_ECX_77 >> 8),
                                                              bVar1),local_21c,(uint *)&local_21c);
              local_210 = (double)fVar11;
            }
            if (bVar2 == 100) {
              FUN_0051df40(s_Pdrop_facets_dim_less_005bd3c0,(int)&local_214,(int)&local_210);
            }
            else {
              FUN_0051df40(s_PDrop_facets_dim_more_005bd3a8,(int)&local_214,(int)&local_210);
            }
            break;
          case 0x46:
            local_21c = pbVar6;
            uVar3 = FUN_0055ac39(pvVar8,(int)(char)*pbVar6);
            if (uVar3 == 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__missing_facet_005bd2d4);
            }
            else {
              fVar11 = (float10)FUN_0051e030(&local_21c,local_21c,(uint *)&local_21c);
              _DAT_0074be80 = (double)fVar11;
              FUN_0051df40(s_PFacet_area_keep_005bd2c0,0,0x74be80);
              DAT_0074c034 = 1;
            }
            break;
          case 0x47:
            local_21c = pbVar6;
            FUN_0051df40(s_PGood_facet_neighbors_005bd380,0,0);
            DAT_0074bef4 = 1;
            break;
          case 0x4d:
            local_21c = pbVar6;
            uVar3 = FUN_0055ac39(pvVar8,(int)(char)*pbVar6);
            if (uVar3 == 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__missing_merge_005bd284);
            }
            else {
              DAT_0074be78 = FUN_0051e060(this_02,local_21c,(uint *)&local_21c);
              FUN_0051df40(s_PMerge_keep_005bd278,0x74be78,0);
            }
            break;
          case 0x67:
            local_21c = pbVar6;
            FUN_0051df40(s_Pgood_facets_005bd398,0,0);
            DAT_0074beec = 1;
            break;
          case 0x6f:
            local_21c = pbVar6;
            FUN_0051df40(s_Poutput_forced_005bd370,0,0);
            DAT_0074be4c = 1;
            break;
          case 0x70:
            local_21c = pbVar6;
            FUN_0051df40(s_Pprecision_ignore_005bd35c,0,0);
            DAT_0074bf04 = 0;
          }
          bVar2 = *local_21c;
          pbVar6 = local_21c;
        }
        break;
      case 0x51:
        bVar2 = *pbVar6;
        pvVar8 = (void *)0xffffffff;
        while ((local_21c = pbVar6, bVar2 != 0 &&
               (uVar3 = FUN_0055ac61(pbVar6,(int)(char)bVar2), pbVar6 = extraout_ECX_80, uVar3 == 0)
               )) {
          pvVar7 = (void *)((char)*local_21c + -0x30);
          pbVar6 = local_21c + 1;
          switch(*local_21c) {
          case 0x30:
            local_21c = pbVar6;
            FUN_0051df40(s_Q0_no_premerge_005bd0e4,0,0);
            DAT_0074bec4 = 1;
            break;
          case 0x31:
            local_21c = pbVar6;
            FUN_0051df40(s_Q1_no_angle_sort_005bd0d0,0,0);
            DAT_0074be04 = 0;
            goto LAB_0051c08e;
          case 0x32:
            local_21c = pbVar6;
            FUN_0051df40(s_Q2_no_merge_independent_005bd0b8,0,0);
            DAT_0074be94 = 0;
            goto LAB_0051c08e;
          case 0x33:
            local_21c = pbVar6;
            FUN_0051df40(s_Q3_no_merge_vertices_005bd0a0,0,0);
            DAT_0074beb0 = 0;
LAB_0051c08e:
            uVar3 = FUN_0055ac39(local_21c,(int)(char)*local_21c);
            if (uVar3 != 0) {
              local_21c = local_21c + 1;
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__can_not_follow__1_005bd050);
            }
            break;
          case 0x34:
            local_21c = pbVar6;
            FUN_0051df40(s_Q4_avoid_old_into_new_005bd038,0,0);
            DAT_0074be1c = 1;
            break;
          case 0x35:
            local_21c = pbVar6;
            FUN_0051df40(s_Q5_no_check_outer_005bd024,0,0);
            DAT_0074bfd8 = 1;
            break;
          case 0x36:
            local_21c = pbVar6;
            FUN_0051df40(s_Q6_no_concave_merge_005bd010,0,0);
            DAT_0074bfdc = 1;
            break;
          case 0x37:
            local_21c = pbVar6;
            FUN_0051df40(s_Q7_no_breadth_first_005bcffc,0,0);
            DAT_0074c014 = 1;
            break;
          case 0x38:
            local_21c = pbVar6;
            FUN_0051df40(s_Q8_no_near_inside_005bcfe8,0,0);
            DAT_0074bec0 = 1;
            break;
          case 0x39:
            local_21c = pbVar6;
            FUN_0051df40(s_Q9_pick_furthest_005bcfd4,0,0);
            DAT_0074bed0 = 1;
            break;
          default:
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__unknown__Q__qhull_005bcdbc);
            local_21c = local_21c + 1;
            bVar2 = *local_21c;
            pvVar7 = extraout_ECX_85;
            while ((bVar2 != 0 && (uVar3 = FUN_0055ac61(pvVar7,(int)(char)bVar2), uVar3 == 0))) {
              local_21c = local_21c + 1;
              bVar2 = *local_21c;
              pvVar7 = extraout_ECX_86;
            }
            break;
          case 0x42:
          case 0x62:
            bVar2 = *local_21c;
            if (bVar2 == 0x62) {
              if (*pbVar6 == 0x42) {
                local_21c = local_21c + 2;
                local_210 = 0.5;
                DAT_0074bfcc = 1;
                FUN_0051df40(s_QbBound_unit_box_005bd228,0,(int)&local_210);
              }
              else {
                if (*pbVar6 != 0x62) goto LAB_0051bd33;
                local_21c = local_21c + 2;
                DAT_0074bfd0 = 1;
                FUN_0051df40(s_Qbbound_last_005bd218,0,0);
              }
            }
            else {
LAB_0051bd33:
              local_21c = pbVar6;
              local_208 = (void *)FUN_0051e060(&local_21c,pbVar6,(uint *)&local_21c);
              local_210 = 0.0;
              bVar1 = *local_21c;
              if (bVar1 == 0x3a) {
                local_21c = local_21c + 1;
                fVar11 = (float10)FUN_0051e030((void *)CONCAT31((int3)((uint)extraout_ECX_81 >> 8),
                                                                bVar1),local_21c,(uint *)&local_21c)
                ;
                local_210 = (double)fVar11;
                if (fVar11 == (float10)0.0) {
                  bVar1 = *local_21c;
                  pvVar7 = extraout_ECX_82;
                  local_218 = local_21c;
                  while ((bVar1 != 0 &&
                         (uVar3 = FUN_0055ac61(pvVar7,(int)(char)*local_218), uVar3 == 0))) {
                    bVar1 = *local_218;
                    local_218 = local_218 + 1;
                    uVar3 = FUN_00559576((void *)(int)(char)bVar1,(uint)(int)(char)bVar1);
                    pvVar7 = extraout_ECX_83;
                    if ((uVar3 == 0x42) &&
                       (pvVar4 = (void *)FUN_0051e060(&local_218,local_218,(uint *)&local_218),
                       pvVar7 = local_208, local_208 == pvVar4)) {
                      bVar1 = *local_218;
                      pvVar7 = (void *)CONCAT31((int3)((uint)local_208 >> 8),bVar1);
                      local_218 = local_218 + 1;
                      if ((bVar1 == 0x3a) &&
                         (fVar11 = (float10)FUN_0051e030(pvVar7,local_218,(uint *)&local_218),
                         pvVar7 = extraout_ECX_84, fVar11 == (float10)0.0)) {
                        DAT_0074bf90 = DAT_0074bf90 + 1;
                        if (1 < DAT_0074be68) {
                          FUN_00558953(DAT_0074c5ec,
                                       (byte *)s_qh_initflags__project_dimension___005bd1f4);
                        }
                        FUN_0051df40(s_Qb_project_dim_005bd1e4,(int)&local_208,0);
                        pvVar8 = local_208;
                        goto LAB_0051c3f6;
                      }
                    }
                    bVar1 = *local_218;
                  }
                }
              }
              if ((pvVar8 == local_208) && (local_210 == 0.0)) {
                pvVar8 = (void *)0xffffffff;
              }
              else {
                DAT_0074bfcc = 1;
                if (bVar2 == 0x62) {
                  if (local_210 == 0.0) {
                    local_210 = -0.5;
                  }
                  FUN_0051df40(s_Qbound_dim_low_005bd1d4,(int)&local_208,(int)&local_210);
                }
                else {
                  if (local_210 == 0.0) {
                    local_210 = 0.5;
                  }
                  FUN_0051df40(s_QBound_dim_high_005bd1c4,(int)&local_208,(int)&local_210);
                }
              }
            }
            break;
          case 0x47:
            local_21c = pbVar6;
            local_214 = (byte *)FUN_0051e060(&local_218,pbVar6,(uint *)&local_218);
            if (DAT_0074be50 == (byte *)0x0) {
              if (local_21c == local_218) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_good_poin_005bcf48);
                local_21c = local_218;
              }
              else {
                if (((int)local_214 < 0) || (*local_21c == 0x2d)) {
                  DAT_0074be50 = local_214 + -1;
                  pcVar12 = s_QGood_if_dont_see_point_005bcf1c;
                }
                else {
                  DAT_0074be50 = local_214 + 1;
                  pcVar12 = s_QGood_if_see_point_005bcf34;
                }
                FUN_0051df40(pcVar12,(int)&local_214,0);
                local_21c = local_218;
              }
            }
            else {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__good_point_alread_005bcf8c);
              local_21c = local_218;
            }
            break;
          case 0x4a:
            local_21c = pbVar6;
            uVar3 = FUN_0055ac39((void *)(int)(char)*pbVar6,(int)(char)*pbVar6);
            if ((uVar3 == 0) && (*local_21c != 0x2d)) {
              _DAT_0074c668 = 0.0;
            }
            else {
              fVar11 = (float10)FUN_0051e030(this_03,local_21c,(uint *)&local_21c);
              _DAT_0074c668 = (double)fVar11;
              FUN_0051df40(s_QJoggle_005bcf14,0,0x74c668);
            }
            break;
          case 0x52:
            local_21c = pbVar6;
            uVar3 = FUN_0055ac39(pvVar7,(int)(char)*pbVar6);
            if ((uVar3 == 0) && (*local_21c != 0x2d)) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_random_se_005bced4);
            }
            else {
              DAT_0074bfc8 = (byte *)FUN_0051e060(this_04,local_21c,(uint *)&local_21c);
              local_214 = DAT_0074bfc8;
              if ((int)DAT_0074bfc8 < 1) {
                if ((int)DAT_0074bfc8 < -1) {
                  FUN_0051df40(s_QRandom_seed_005bceb8,(int)&local_214,0);
                }
              }
              else {
                FUN_0051df40(s_QRotate_id_005bcec8,(int)&local_214,0);
              }
            }
            break;
          case 0x56:
            local_21c = pbVar6;
            local_214 = (byte *)FUN_0051e060(pvVar7,pbVar6,(uint *)&local_218);
            if (DAT_0074be5c == (byte *)0x0) {
              if (local_21c == local_218) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__no_good_point_id_g_005bce2c);
                local_21c = local_218;
              }
              else if ((int)local_214 < 0) {
                DAT_0074be5c = local_214 + -1;
                FUN_0051df40(s_QV_good_facets_not_point_005bce10,(int)&local_214,0);
                local_21c = local_218;
              }
              else {
                FUN_0051df40(s_QV_good_facets_point_005bcdf8,(int)&local_214,0);
                DAT_0074be5c = local_214 + 1;
                local_21c = local_218;
              }
            }
            else {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__good_vertex_alrea_005bce70);
              local_21c = local_218;
            }
            break;
          case 99:
            local_21c = pbVar6;
            FUN_0051df40(s_Qcoplanar_keep_005bd1b4,0,0);
            DAT_0074be70 = 1;
            break;
          case 0x66:
            local_21c = pbVar6;
            FUN_0051df40(s_Qfurthest_outside_005bd1a0,0,0);
            DAT_0074be20 = 1;
            break;
          case 0x67:
            local_21c = pbVar6;
            FUN_0051df40(s_Qgood_facets_only_005bd18c,0,0);
            DAT_0074bec8 = 1;
            break;
          case 0x69:
            local_21c = pbVar6;
            FUN_0051df40(s_Qinterior_keep_005bd17c,0,0);
            DAT_0074be74 = 1;
            break;
          case 0x6d:
            local_21c = pbVar6;
            FUN_0051df40(s_Qmax_outside_only_005bd168,0,0);
            DAT_0074becc = 1;
            break;
          case 0x72:
            local_21c = pbVar6;
            FUN_0051df40(s_Qrandom_outside_005bd158,0,0);
            DAT_0074bfb8 = 1;
            break;
          case 0x73:
            local_21c = pbVar6;
            FUN_0051df40(s_Qsearch_initial_simplex_005bd140,0,0);
            DAT_0074be00 = 1;
            break;
          case 0x75:
            local_21c = pbVar6;
            FUN_0051df40(s_QupperDelaunay_005bd130,0,0);
            DAT_0074c00c = 1;
            break;
          case 0x76:
            local_21c = pbVar6;
            FUN_0051df40(s_Qvertex_neighbors_convex_005bd114,0,0);
            DAT_0074bfec = 1;
            break;
          case 0x78:
            local_21c = pbVar6;
            FUN_0051df40(s_Qxact_merge_005bd108,0,0);
            DAT_0074be90 = 1;
            DAT_0074be98 = 1;
            break;
          case 0x7a:
            local_21c = pbVar6;
            FUN_0051df40(s_Qz_infinity_point_005bd0f4,0,0);
            DAT_0074be18 = 1;
          }
LAB_0051c3f6:
          bVar2 = *local_21c;
          pbVar6 = local_21c;
        }
        break;
      case 0x52:
        local_21c = pbVar6;
        uVar3 = FUN_0055ac39(pbVar6,(int)(char)*pbVar6);
        if (uVar3 == 0) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_random_pe_005bd790);
          pbVar6 = extraout_ECX_26;
        }
        else {
          fVar11 = (float10)FUN_0051e030(this_00,local_21c,(uint *)&local_21c);
          _DAT_0074bfa0 = (double)fVar11;
          FUN_0051df40(s_Random_perturb_005bd780,0,0x74bfa0);
          DAT_0074bf98 = 1;
          pbVar6 = extraout_ECX_27;
        }
        break;
      case 0x54:
        bVar2 = *pbVar6;
        local_21c = pbVar6;
        while ((bVar2 != 0 &&
               (uVar3 = FUN_0055ac61(pbVar6,(int)(char)bVar2), pbVar6 = extraout_ECX_87, uVar3 == 0)
               )) {
          uVar3 = FUN_0055ac39((void *)(int)(char)*local_21c,(int)(char)*local_21c);
          pvVar8 = extraout_ECX_88;
          if (uVar3 == 0) {
            bVar2 = *local_21c;
            pvVar8 = (void *)CONCAT31((int3)((uint)extraout_ECX_88 >> 8),bVar2);
            if (bVar2 == 0x2d) goto LAB_0051c93c;
            pvVar8 = (void *)((char)bVar2 + -0x43);
            pbVar6 = local_21c + 1;
            switch(bVar2) {
            case 0x43:
              local_21c = pbVar6;
              uVar3 = FUN_0055ac39((void *)(int)(char)*pbVar6,(int)(char)*pbVar6);
              if (uVar3 == 0) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_point_id_f_005bccf4);
                pbVar6 = extraout_ECX_94;
              }
              else {
                local_214 = (byte *)FUN_0051e060(local_21c,local_21c,(uint *)&local_21c);
                FUN_0051df40(s_TCone_stop_005bcce8,(int)&local_214,0);
                DAT_0074bfe4 = local_214 + 1;
                pbVar6 = extraout_ECX_95;
              }
              break;
            default:
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__unknown__T__trace_005bc930);
              local_21c = local_21c + 1;
              bVar2 = *local_21c;
              pbVar6 = extraout_ECX_x00112;
              while ((bVar2 != 0 &&
                     (uVar3 = FUN_0055ac61((void *)(int)(char)bVar2,(int)(char)bVar2),
                     pbVar6 = extraout_ECX_x00113, uVar3 == 0))) {
                local_21c = local_21c + 1;
                bVar2 = *local_21c;
              }
              break;
            case 0x46:
              local_21c = pbVar6;
              uVar3 = FUN_0055ac39((void *)(int)(char)*pbVar6,(int)(char)*pbVar6);
              if (uVar3 == 0) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_frequency_005bcc9c);
                pbVar6 = extraout_ECX_96;
              }
              else {
                DAT_0074bfbc = FUN_0051e060(local_21c,local_21c,(uint *)&local_21c);
                FUN_0051df40(s_TFacet_log_005bcc90,0x74bfbc,0);
                DAT_0074bfc0 = DAT_0074bfbc / 2;
                pbVar6 = extraout_ECX_97;
              }
              break;
            case 0x4d:
              local_21c = pbVar6;
              uVar3 = FUN_0055ac39((void *)(int)(char)*pbVar6,(int)(char)*pbVar6);
              if (uVar3 == 0) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_merge_id_f_005bca90);
                pbVar6 = extraout_ECX_x00104;
              }
              else {
                DAT_0074c008 = FUN_0051e060(local_21c,local_21c,(uint *)&local_21c);
                FUN_0051df40(s_Trace_merge_005bca84,0x74c008,0);
                pbVar6 = extraout_ECX_x00105;
              }
              break;
            case 0x4f:
              if (*pbVar6 == 0x20) {
                bVar2 = local_21c[2];
                if ((bVar2 != 0x22) &&
                   (local_21c = pbVar6,
                   uVar3 = FUN_0055ac61((void *)CONCAT31((int3)((uint)pvVar8 >> 8),bVar2),
                                        (int)(char)bVar2), pbVar6 = local_21c, uVar3 == 0)) {
                  pbVar9 = local_21c + 1;
                  pbVar6 = local_1fc;
                  bVar10 = *pbVar9 == 0x27;
                  if (bVar10) {
                    pbVar9 = local_21c + 2;
                  }
                  bVar2 = *pbVar9;
                  local_21c = pbVar9;
                  while (bVar2 != 0) {
                    pbVar9 = local_21c;
                    if (0x1f1 < (int)pbVar6 - (int)local_1fc) {
                      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__filename_for__TO__t_005bcc64)
                      ;
                      FUN_0051e8e0(1,(int *)0x0);
                      pbVar9 = local_214;
                    }
                    if (bVar10) {
                      if (*pbVar9 == 0x27) {
                        local_21c = pbVar9 + 1;
                        bVar10 = false;
                        break;
                      }
                    }
                    else {
                      uVar3 = FUN_0055ac61((void *)(int)(char)*pbVar9,(int)(char)*pbVar9);
                      pbVar9 = local_21c;
                      if (uVar3 != 0) break;
                    }
                    *pbVar6 = *pbVar9;
                    pbVar6 = pbVar6 + 1;
                    local_21c = pbVar9 + 1;
                    bVar2 = *local_21c;
                  }
                  *pbVar6 = 0;
                  if (bVar10) {
                    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__missing_end_quote_f_005bcc1c);
                    pbVar6 = extraout_ECX_98;
                  }
                  else {
                    iVar5 = FUN_0055ac05((LPCSTR)local_1fc,&DAT_005ae608,(FILE *)0x0);
                    if (iVar5 == 0) {
                      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__could_not_open_file_005bcbf4)
                      ;
                      FUN_0051e8e0(1,(int *)0x0);
                      pbVar6 = extraout_ECX_99;
                    }
                    else {
                      FUN_0051df40(s_TOutput_file_005bcbe4,0,0);
                      FUN_0051df40(local_1fc,0,0);
                      pbVar6 = extraout_ECX_x00100;
                    }
                  }
                  break;
                }
              }
              local_21c = pbVar6 + 1;
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__option__TO__misty_005bcb24);
              pbVar6 = extraout_ECX_x00101;
              break;
            case 0x50:
              local_21c = pbVar6;
              uVar3 = FUN_0055ac39(pvVar8,(int)(char)*pbVar6);
              if (uVar3 == 0) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_point_id_f_005bcae0);
                pbVar6 = extraout_ECX_x00102;
              }
              else {
                DAT_0074bff8 = FUN_0051e060(this_05,local_21c,(uint *)&local_21c);
                FUN_0051df40(s_Trace_point_005bcad4,0x74bff8,0);
                pbVar6 = extraout_ECX_x00103;
              }
              break;
            case 0x52:
              local_21c = pbVar6;
              uVar3 = FUN_0055ac39(pvVar8,(int)(char)*pbVar6);
              if (uVar3 == 0) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_rerun_cou_005bca3c);
                pbVar6 = extraout_ECX_x00106;
              }
              else {
                DAT_0074bfc4 = FUN_0051e060(&local_21c,local_21c,(uint *)&local_21c);
                FUN_0051df40(s_TRerun_005bca34,0x74bfc4,0);
                pbVar6 = extraout_ECX_x00107;
              }
              break;
            case 0x56:
              local_21c = pbVar6;
              local_214 = (byte *)FUN_0051e060(&local_218,pbVar6,(uint *)&local_218);
              if (local_21c == local_218) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_furthest_p_005bc9e8);
                local_21c = local_218;
                pbVar6 = extraout_ECX_x00108;
              }
              else {
                if ((int)local_214 < 0) {
                  DAT_0074bfe8 = local_214 + -1;
                  pcVar12 = s_TV_stop_before_point_005bc9d0;
                }
                else {
                  DAT_0074bfe8 = local_214 + 1;
                  pcVar12 = s_TV_stop_after_point_005bc9bc;
                }
                FUN_0051df40(pcVar12,(int)&local_214,0);
                local_21c = local_218;
                pbVar6 = extraout_ECX_x00109;
              }
              break;
            case 0x57:
              local_21c = pbVar6;
              uVar3 = FUN_0055ac39((void *)(int)(char)*pbVar6,(int)(char)*pbVar6);
              if (uVar3 == 0) {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_max_width_005bc978);
                pbVar6 = extraout_ECX_x00110;
              }
              else {
                fVar11 = (float10)FUN_0051e030(local_21c,local_21c,(uint *)&local_21c);
                _DAT_0074c000 = (double)fVar11;
                FUN_0051df40(s_TWide_trace_005bc96c,0,0x74c000);
                pbVar6 = extraout_ECX_x00111;
              }
              break;
            case 99:
              local_21c = pbVar6;
              FUN_0051df40(s_Tcheck_frequently_005bcda8,0,0);
              DAT_0074be2c = 1;
              pbVar6 = extraout_ECX_89;
              break;
            case 0x73:
              local_21c = pbVar6;
              FUN_0051df40(s_Tstatistics_005bcd9c,0,0);
              DAT_0074bf80 = 1;
              pbVar6 = extraout_ECX_90;
              break;
            case 0x76:
              local_21c = pbVar6;
              FUN_0051df40(s_Tverify_005bcd94,0,0);
              DAT_0074c010 = 1;
              pbVar6 = extraout_ECX_91;
              break;
            case 0x7a:
              if (DAT_0074c5e8 == (int *)0x0) {
                local_21c = pbVar6;
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__output_file_undef_005bcd4c);
                pbVar6 = extraout_ECX_92;
              }
              else {
                local_21c = pbVar6;
                FUN_0051df40(s_Tz_stdout_005bcd40,0,0);
                DAT_0074c5ec = DAT_0074c5e8;
                DAT_0074c784 = DAT_0074c5e8;
                pbVar6 = extraout_ECX_93;
              }
            }
          }
          else {
LAB_0051c93c:
            DAT_0074be68 = FUN_0051e060(pvVar8,local_21c,(uint *)&local_21c);
            pbVar6 = extraout_ECX_x00114;
          }
          bVar2 = *local_21c;
        }
        break;
      case 0x55:
        local_21c = pbVar6;
        uVar3 = FUN_0055ac39(pbVar6,(int)(char)*pbVar6);
        if ((uVar3 == 0) && (*local_21c != 0x2d)) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_coplanar_d_005bd6f0);
          pbVar6 = extraout_ECX_30;
        }
        else {
          fVar11 = (float10)FUN_0051e030(&local_21c,local_21c,(uint *)&local_21c);
          _DAT_0074be88 = (double)fVar11;
          FUN_0051df40(s_U_coplanar_005bd6e4,0,0x74be88);
          pbVar6 = extraout_ECX_31;
        }
        break;
      case 0x56:
        local_21c = pbVar6;
        uVar3 = FUN_0055ac39((void *)(int)(char)*pbVar6,(int)(char)*pbVar6);
        if ((uVar3 == 0) && (*local_21c != 0x2d)) {
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_visible_d_005bd73c);
          pbVar6 = extraout_ECX_28;
        }
        else {
          fVar11 = (float10)FUN_0051e030(&local_21c,local_21c,(uint *)&local_21c);
          _DAT_0074beb8 = (double)fVar11;
          FUN_0051df40(s_Visible_005bd734,0,0x74beb8);
          pbVar6 = extraout_ECX_29;
        }
        break;
      case 0x57:
        if (*pbVar6 == 0x2d) {
          local_21c = pbVar6;
          FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__negative_outside_w_005bd6a0);
          pbVar6 = extraout_ECX_32;
        }
        else {
          local_21c = pbVar6;
          uVar3 = FUN_0055ac39(pbVar6,(int)(char)*pbVar6);
          if (uVar3 == 0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_outside_w_005bd660);
            pbVar6 = extraout_ECX_33;
          }
          else {
            fVar11 = (float10)FUN_0051e030(this_01,local_21c,(uint *)&local_21c);
            _DAT_0074be10 = (double)fVar11;
            FUN_0051df40(s_W_outside_005bd654,0,0x74be10);
            DAT_0074be08 = 1;
            pbVar6 = extraout_ECX_34;
          }
        }
        break;
      case 100:
        local_21c = pbVar6;
        FUN_0051df40(s_delaunay_005bda38,0,0);
        DAT_0074be40 = 1;
        pbVar6 = extraout_ECX_02;
        break;
      case 0x66:
        local_21c = pbVar6;
        FUN_0051df40(s_facets_005bda30,0,0);
        FUN_0051a810(5);
        pbVar6 = extraout_ECX_03;
        break;
      case 0x69:
        local_21c = pbVar6;
        FUN_0051df40(s_incidence_005bda24,0,0);
        FUN_0051a810(0xd);
        pbVar6 = extraout_ECX_04;
        break;
      case 0x6d:
        local_21c = pbVar6;
        FUN_0051df40(s_mathematica_005bda18,0,0);
        FUN_0051a810(0xe);
        pbVar6 = extraout_ECX_05;
        break;
      case 0x6e:
        local_21c = pbVar6;
        FUN_0051df40(s_normals_005bda10,0,0);
        FUN_0051a810(0xb);
        pbVar6 = extraout_ECX_06;
        break;
      case 0x6f:
        local_21c = pbVar6;
        FUN_0051df40(s_offFile_005bda08,0,0);
        FUN_0051a810(0x10);
        pbVar6 = extraout_ECX_07;
        break;
      case 0x70:
        local_21c = pbVar6;
        FUN_0051df40(s_points_005bda00,0,0);
        FUN_0051a810(0x14);
        pbVar6 = extraout_ECX_08;
        break;
      case 0x73:
        local_21c = pbVar6;
        FUN_0051df40(s_summary_005bd9f8,0,0);
        DAT_0074bf84 = 1;
        pbVar6 = extraout_ECX_09;
        break;
      case 0x76:
        local_21c = pbVar6;
        FUN_0051df40(s_voronoi_005bd9f0,0,0);
        DAT_0074c018 = 1;
        DAT_0074be40 = 1;
        pbVar6 = extraout_ECX_10;
      }
      if (((local_21c + -1 == local_200) && (*local_21c != 0)) &&
         (uVar3 = FUN_0055ac61(pbVar6,(int)(char)*local_21c), uVar3 == 0)) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__missing_space_aft_005bc8b8);
        bVar2 = *local_21c;
        pvVar8 = extraout_ECX_x00116;
        while ((bVar2 != 0 && (uVar3 = FUN_0055ac61(pvVar8,(int)(char)bVar2), uVar3 == 0))) {
          local_21c = local_21c + 1;
          bVar2 = *local_21c;
          pvVar8 = extraout_ECX_x00117;
        }
      }
      bVar2 = *local_21c;
      this = local_21c;
    } while (bVar2 != 0);
    if (((local_204 != 0) && (DAT_0074be4c == 0)) && (DAT_0074bf0c != 0)) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__additional_output_005bc86c);
    }
  }
  return;
}


