
/* ==== FUN_004536e0 @ 004536e0 ==== 
 * signature: undefined __cdecl FUN_004536e0(int param_1, byte * param_2, undefined4 param_3, float param_4, float param_5, float param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, int param_10, undefined4 param_11, int param_12)
 * body: 004536e0-004537da;004537de-00453856;0045385a-0045396d;00453971-00453a27;00453a2b-00453ab7;00453abb-00453b3b;00453b3f-00453ba7;00453bab-00454095;00454099-004540d5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004537db-004537dd 00453857-00453859 0045396e-00453970 00453a28-00453a2a 00453ab8-00453aba 00453b3c-00453b3e 00453ba8-00453baa 00454096-00454098
 */

/* WARNING: Removing unreachable block (ram,0x00453d2a) */
/* WARNING: Removing unreachable block (ram,0x00453e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004536e0(int param_1,byte *param_2,undefined4 param_3,float param_4,float param_5,float param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
            undefined4 param_11,int param_12)

{
  char cVar1;
  float fVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  char *pcVar17;
  undefined1 uStack_89;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  undefined4 *puStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  byte local_4c [32];
  char local_2c [32];
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a670;
  pvStack_c = ExceptionList;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  ExceptionList = &pvStack_c;
  puVar4 = FUN_00497960();
  uVar5 = FUN_004b76e0(&DAT_00712130,(char *)param_2);
  cVar1 = (char)uVar5;
  if (cVar1 == '\0') {
    FUN_004536b0(param_2,param_1);
  }
  if (param_12 == 0) {
    if (cVar1 != '\0') goto LAB_0045385a;
    bVar3 = FUN_00469440(param_2,(char *)local_4c,local_2c);
    if (!bVar3) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s___s___d_Could_not_find_anim__s_i_005a32e4);
    }
    piVar7 = (int *)FUN_00498870(puVar4,local_4c);
    FUN_004b2740((char *)param_2,local_4c,local_2c,&iStack_84,&iStack_88,0,1,piVar7);
LAB_00453832:
    if ((iStack_84 < 0) || (iStack_88 < 0)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s___s___d__Anim__s_not_found_in_et_005a333c);
    }
  }
  else {
    switch(param_1) {
    case 0xb:
    case 0xe:
      FUN_004c3fa0((byte *)s__s__d____Cached_object_CACHE_PIP_005a2e3c);
      uVar5 = FUN_004b2e30(&DAT_0073b020,0);
      if ((char)uVar5 == '\0') {
        FUN_004c3fa0((byte *)s__s__d____First_time__filling_the_005a2e90);
        bVar3 = FUN_00469440(param_2,(char *)local_4c,local_2c);
        if (!bVar3) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s___s___d_Could_not_find_anim__s_i_005a2ef0);
        }
        piVar7 = (int *)FUN_00498870(puVar4,PTR_s_CACHED_PIPELINE_1_005addd8);
        FUN_004b2740((char *)param_2,local_4c,local_2c,&iStack_84,&iStack_88,param_12,1,piVar7);
        FUN_004b2db0(&DAT_0073b020,0,iStack_88);
        pcVar17 = s_Texture_cache_CACHE_PIPELINE_1_f_005a2f24;
      }
      else {
        FUN_004c3fa0((byte *)s__s__d____Cache_CACHE_PIPELINE_1_a_005a2f70);
        bVar3 = FUN_00469440(param_2,(char *)local_4c,local_2c);
        if (!bVar3) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s___s___d_Could_not_find_anim__s_i_005a2fe0);
        }
        piVar7 = (int *)FUN_00498870(puVar4,PTR_s_CACHED_PIPELINE_1_005addd8);
        FUN_004b2740((char *)param_2,local_4c,local_2c,&iStack_84,&iStack_88,param_12,0,piVar7);
        FUN_004b2e00(&DAT_0073b020,0,iStack_88);
        pcVar17 = s_Added_texture_to_cache_CACHE_PIP_005a3014;
      }
      break;
    default:
      if (cVar1 == '\0') {
        bVar3 = FUN_00469440(param_2,(char *)local_4c,local_2c);
        if (!bVar3) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s___s___d_Could_not_find_anim__s_i_005a328c);
        }
        piVar7 = (int *)FUN_00498870(puVar4,local_4c);
        FUN_004b2740((char *)param_2,local_4c,local_2c,&iStack_84,&iStack_88,param_12,1,piVar7);
        goto LAB_00453832;
      }
      goto LAB_0045385a;
    case 0x10:
    case 0x11:
      FUN_004c3fa0((byte *)s__s__d____Cached_object_CACHE_PIP_005a3064);
      uVar5 = FUN_004b2e30(&DAT_0073b020,1);
      if ((char)uVar5 == '\0') {
        FUN_004c3fa0((byte *)s__s__d____First_time__filling_the_005a30b8);
        bVar3 = FUN_00469440(param_2,(char *)local_4c,local_2c);
        if (!bVar3) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s___s___d_Could_not_find_anim__s_i_005a3118);
        }
        piVar7 = (int *)FUN_00498870(puVar4,PTR_s_CACHED_PIPELINE_2_005adddc);
        FUN_004b2740((char *)param_2,local_4c,local_2c,&iStack_84,&iStack_88,param_12,1,piVar7);
        FUN_004b2db0(&DAT_0073b020,1,iStack_88);
        pcVar17 = s_Texture_cache_CACHE_PIPELINE_2_f_005a314c;
      }
      else {
        FUN_004c3fa0((byte *)s__s__d____Cache_CACHE_PIPELINE_2_a_005a3198);
        bVar3 = FUN_00469440(param_2,(char *)local_4c,local_2c);
        if (!bVar3) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s___s___d_Could_not_find_anim__s_i_005a3208);
        }
        piVar7 = (int *)FUN_00498870(puVar4,PTR_s_CACHED_PIPELINE_2_005adddc);
        FUN_004b2740((char *)param_2,local_4c,local_2c,&iStack_84,&iStack_88,param_12,0,piVar7);
        FUN_004b2e00(&DAT_0073b020,1,iStack_88);
        pcVar17 = s_Added_texture_to_cache_CACHE_PIP_005a323c;
      }
    }
    FUN_004c3fa0((byte *)pcVar17);
    if (cVar1 == '\0') goto LAB_00453832;
  }
LAB_0045385a:
  fVar2 = _DAT_005b23b8 * 0.0027777778;
  uVar5 = FUN_004a6c00(param_1);
  FUN_004c3fa0((byte *)s_Creating_object_005a336c);
  if (cVar1 == '\0') {
    FUN_004c3fa0((byte *)s_based_on_mesh_texture_005a3394);
    iVar6 = FUN_004a78a0(param_7,param_8,param_9,fVar2 * param_4,-(fVar2 * param_5),fVar2 * param_6,
                         iStack_84,iStack_88,uVar5,0,param_10);
  }
  else {
    FUN_004c3fa0((byte *)s_based_on_3D_anim_005a3380);
    iVar6 = FUN_004b75a0(&DAT_00712130,(char *)param_2);
    iVar6 = FUN_004a7790(param_7,param_8,param_9,fVar2 * param_4,-(fVar2 * param_5),fVar2 * param_6,
                         iVar6,0,uVar5,0,param_10);
  }
  *(undefined4 *)(iVar6 * 0xf0 + 0x34 + DAT_00715e50) = param_11;
  iStack_80 = iVar6;
  FUN_004c3fa0((byte *)s_Object_created_succesfully_005a33ac);
  auStack_6c[0] = uStack_89;
  puStack_68 = (undefined4 *)0x0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_4 = 0;
  switch(param_1) {
  default:
    goto switchD_00453cab_caseD_0;
  case 1:
    FUN_00454170(iVar6,param_10);
    break;
  case 2:
    FUN_004548d0(iVar6);
    break;
  case 3:
    FUN_00455aa0(iVar6);
    break;
  case 5:
  case 0xe:
  case 0xf:
  case 0x11:
    FUN_004541c0(iVar6);
    break;
  case 6:
    FUN_004554b0(iVar6);
    break;
  case 7:
    FUN_00451ed0(iVar6);
    break;
  case 8:
    FUN_00455800(iVar6);
    break;
  case 9:
    uVar5 = 0x453d0e;
    puVar8 = FUN_0049df90(auStack_5c,(byte *)s_COP_c_005a33c8);
    uVar15 = *(uint *)(puVar8 + 8);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (auStack_6c == puVar8) {
      if (uStack_64 < uVar15) {
        FUN_0054b29c();
      }
      FUN_00402c30(auStack_6c);
      iVar9 = uStack_64 - uVar15;
      iVar6 = -1;
      if (iVar9 != -1) {
        iVar6 = iVar9;
      }
      if (iVar6 != 0) {
        uVar5 = 0x453d6c;
        FUN_005580e0((undefined4 *)((int)puStack_68 + uVar15),
                     (undefined4 *)(iVar6 + (int)((int)puStack_68 + uVar15)),iVar9 - iVar6);
        uVar15 = uStack_64 - iVar6;
        uVar10 = FUN_00402a00(auStack_6c,uVar15,'\0');
        if ((char)uVar10 != '\0') {
          FUN_004029e0(auStack_6c,uVar15);
        }
      }
      FUN_00402c30(auStack_6c);
    }
    else {
      if (uVar15 != 0) {
        puVar11 = *(undefined1 **)(puVar8 + 4);
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &DAT_0057629c;
        }
        if ((byte)puVar11[-1] < 0xfe) {
          FUN_004028f0(auStack_6c,'\x01');
          puStack_68 = *(undefined4 **)(puVar8 + 4);
          if (puStack_68 == (undefined4 *)0x0) {
            puStack_68 = (undefined4 *)&DAT_0057629c;
          }
          uStack_64 = *(uint *)(puVar8 + 8);
          uStack_60 = *(undefined4 *)(puVar8 + 0xc);
          *(char *)((int)puStack_68 + -1) = *(char *)((int)puStack_68 + -1) + '\x01';
          goto LAB_00453e24;
        }
      }
      uVar10 = FUN_00402a00(auStack_6c,uVar15,'\x01');
      if ((char)uVar10 != '\0') {
        puVar4 = *(undefined4 **)(puVar8 + 4);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)&DAT_0057629c;
        }
        puVar13 = puStack_68;
        for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar13 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar14 = uVar15 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        FUN_004029e0(auStack_6c,uVar15);
      }
    }
LAB_00453e24:
    uStack_4 = uStack_4 & 0xffffff00;
    if (iStack_58 != 0) {
      cVar1 = *(char *)(iStack_58 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_58 + -1));
      }
      else {
        *(char *)(iStack_58 + -1) = cVar1 + -1;
      }
    }
    uVar15 = uStack_64;
    puStack_7c = &stack0xffffff54;
    iStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uVar5 = CONCAT31((int3)((uint)uVar5 >> 8),auStack_6c[0]);
    puVar4 = (undefined4 *)0x0;
    iVar6 = 0;
    if (&stack0xffffff54 == auStack_6c) {
      puStack_7c = &stack0xffffff54;
      if (uStack_64 != 0) {
        puStack_7c = &stack0xffffff54;
        FUN_0054b29c();
      }
      FUN_00402c30(&stack0xffffff54);
      iVar12 = iVar6 - uVar15;
      iVar9 = -1;
      if (iVar12 != -1) {
        iVar9 = iVar12;
      }
      if (iVar9 != 0) {
        FUN_005580e0((undefined4 *)(uVar15 + (int)puVar4),
                     (undefined4 *)(iVar9 + (int)(uVar15 + (int)puVar4)),iVar12 - iVar9);
        uVar10 = FUN_00402a00(&stack0xffffff54,iVar6 - iVar9,'\0');
        if ((char)uVar10 != '\0') {
          FUN_004029e0(&stack0xffffff54,iVar6 - iVar9);
        }
      }
      FUN_00402c30(&stack0xffffff54);
      FUN_00423a50(iStack_80,uVar5,(int)puVar4);
    }
    else {
      if (uStack_64 != 0) {
        puVar13 = puStack_68;
        if (puStack_68 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)&DAT_0057629c;
        }
        if (*(byte *)((int)puVar13 + -1) < 0xfe) {
          puStack_7c = &stack0xffffff54;
          FUN_004028f0(&stack0xffffff54,'\x01');
          puVar4 = puStack_68;
          if (puStack_68 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)&DAT_0057629c;
          }
          *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
          FUN_00423a50(iStack_80,uVar5,(int)puVar4);
          break;
        }
      }
      uVar10 = FUN_00402a00(&stack0xffffff54,uStack_64,'\x01');
      if ((char)uVar10 != '\0') {
        puVar13 = puStack_68;
        if (puStack_68 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)&DAT_0057629c;
        }
        puVar16 = puVar4;
        for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar16 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar16 = puVar16 + 1;
        }
        for (uVar14 = uVar15 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar16 = (undefined4 *)((int)puVar16 + 1);
        }
        *(undefined1 *)(uVar15 + (int)puVar4) = 0;
      }
      FUN_00423a50(iStack_80,uVar5,(int)puVar4);
    }
    break;
  case 10:
    FUN_004542a0(iVar6,local_78,local_74,local_70);
    break;
  case 0xc:
    FUN_00454440(iVar6);
    break;
  case 0xd:
    FUN_004c3fa0((byte *)s_Loading_start_anim____s__005a33d0);
    FUN_00454480(iVar6);
    break;
  case 0x12:
    FUN_00452ef0(iVar6);
    break;
  case 0x13:
    FUN_004551a0(iVar6);
    break;
  case 0x14:
    FUN_00453200(iVar6);
    break;
  case 0x15:
    FUN_00454320(iVar6,local_78,local_74,local_70);
    break;
  case 0x16:
    FUN_004546b0(iVar6);
    break;
  case 0x19:
    FUN_00451250(iVar6,(char *)param_2);
    break;
  case 0x1c:
    FUN_0041e450(iVar6);
    break;
  case 0x1d:
    FUN_00454b80(iVar6,(char *)param_2);
    break;
  case -1:
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d_The_object_has_an_illegal_005a3410);
  }
  if (puStack_68 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_68 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((undefined1 *)((int)puStack_68 + -1));
    }
    else {
      *(char *)((int)puStack_68 + -1) = cVar1 + -1;
    }
  }
switchD_00453cab_caseD_0:
  ExceptionList = pvStack_c;
  return;
}


