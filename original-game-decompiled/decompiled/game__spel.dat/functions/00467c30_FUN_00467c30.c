
/* ==== FUN_00467c30 @ 00467c30 ==== 
 * signature: undefined __fastcall FUN_00467c30(void * param_1)
 * body: 00467c30-00467f5d
 */

void __fastcall FUN_00467c30(void *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *this;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  CHAR local_4a0 [8];
  int local_498;
  CHAR local_494 [4];
  byte local_490 [8];
  byte local_488 [8];
  byte local_480 [32];
  byte local_460 [32];
  byte local_440 [64];
  byte local_400 [256];
  byte local_300 [256];
  byte local_200 [256];
  byte local_100 [256];
  
  this = FUN_00497960();
  iVar3 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005a7458);
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004c3b60(pcVar4);
  FUN_005587a3(local_4a0,&DAT_005a7468);
  FUN_004c3d10(&DAT_005a746c,local_4a0,(LPSTR)local_200,0xff);
  FUN_004c3d60(local_200,(uint *)0x0);
  FUN_004c3f10(1,(char *)local_480,0x1f);
  iVar3 = -1;
  pbVar9 = local_480;
  do {
    pbVar11 = pbVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pbVar11 = pbVar9 + 1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar11;
  } while (bVar1 != 0);
  *(undefined4 *)(pbVar11 + -1) = DAT_005a7474;
  pbVar11[3] = DAT_005a7478;
  FUN_004489a0(&DAT_006fa558,local_480,(byte *)s_Object_Animations_005a747c);
  iVar3 = FUN_00448c90(&DAT_006fa558,(byte *)s_Object_Animations_005a7490);
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004c3b60(pcVar4);
  local_498 = FUN_004c3cd0(s_OBJECTS_005a74ac,s_COUNT_005a74a4);
  iVar3 = 0;
  if (0 < local_498) {
    do {
      FUN_005587a3(local_494,&DAT_005a74b4);
      FUN_004c3d10(s_OBJECTS_005a74b8,local_494,(LPSTR)local_200,0xff);
      FUN_004c3d60(local_200,(uint *)0x0);
      FUN_004c3f10(0,(char *)local_400,0xff);
      FUN_0055942f(local_400,local_488,local_100,local_460,local_490);
      uVar6 = 0xffffffff;
      pbVar9 = local_460;
      do {
        pbVar11 = pbVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar11 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar11;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      pbVar9 = pbVar11 + -uVar6;
      pbVar11 = local_400;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar11 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + 1;
      }
      uVar6 = 0xffffffff;
      pbVar9 = local_490;
      do {
        pbVar11 = pbVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar11 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar11;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      iVar8 = -1;
      pbVar9 = local_400;
      do {
        pbVar10 = pbVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar10;
      } while (bVar1 != 0);
      pbVar9 = pbVar11 + -uVar6;
      pbVar11 = pbVar10 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar11 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + 1;
      }
      uVar5 = FUN_004c3ec0(3);
      iVar8 = -1;
      pbVar9 = local_400;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar1 != 0);
      if (iVar8 != -2) {
        bVar2 = FUN_004683f0((LPCSTR)local_400);
        if (!bVar2) {
          iVar8 = FUN_00448c90(&DAT_006fa558,(byte *)s_Object_Animations_005a74c0);
          pcVar4 = *(char **)(iVar8 + 4);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          FUN_004677b0(param_1,(char *)local_400,pcVar4);
        }
        FUN_004c3f10(1,(char *)local_300,0xff);
        FUN_00467960(local_300);
        bVar2 = FUN_004683f0((LPCSTR)local_300);
        if (bVar2) {
          iVar8 = FUN_00453400(uVar5);
          if (iVar8 == 0) {
            pbVar9 = local_300;
          }
          else {
            pbVar9 = PTR_s_CACHED_PIPELINE_1_005addd8;
            if ((iVar8 != 1) && (pbVar9 = PTR_s_CACHED_PIPELINE_2_005adddc, iVar8 != 2))
            goto LAB_00467efb;
          }
          FUN_00498340(this,(char *)pbVar9);
        }
        else {
          iVar8 = FUN_00448c90(&DAT_006fa558,(byte *)s_Object_Animations_005a74d4);
          pcVar4 = *(char **)(iVar8 + 4);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          FUN_00467610(param_1,(char *)local_300,pcVar4);
        }
      }
LAB_00467efb:
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_498);
  }
  iVar3 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_005a74e8);
  pcVar4 = *(char **)(iVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004c3b60(pcVar4);
  FUN_004c3d10(s_3D_Anims_005a74f8,local_4a0,(LPSTR)local_440,0x3f);
  FUN_00467a00(param_1,local_440,(byte *)s_Etappe_Animations_005a7504);
  return;
}


