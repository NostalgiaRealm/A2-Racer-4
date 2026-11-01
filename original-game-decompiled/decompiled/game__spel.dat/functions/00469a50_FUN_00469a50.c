
/* ==== FUN_00469a50 @ 00469a50 ==== 
 * signature: undefined __thiscall FUN_00469a50(void * this, byte * param_1)
 * body: 00469a50-00469c25
 */

void __thiscall FUN_00469a50(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int local_cc;
  byte local_c0 [64];
  CHAR local_80 [64];
  CHAR local_40 [64];
  
  iVar2 = FUN_00448c90(&DAT_006fa558,param_1);
  pcVar3 = *(char **)(iVar2 + 4);
  iVar2 = 0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  iVar4 = FUN_004c3cd0(s_General_005a7b38,s_NrAnims_005a7b30);
  FUN_00469960(this,iVar4);
  if (0 < iVar4) {
    local_cc = 0;
    do {
      FUN_005587a3(local_80,&DAT_005a7b48);
      FUN_004c3d10(local_80,s_AnimNames_005a7b50,(LPSTR)local_c0,0x3f);
      iVar7 = -1;
      pbVar10 = local_c0;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
      FUN_004a6980((uint)(iVar7 != -2),(byte *)s__s___d__AnimName_not_found_for_a_005a7b80);
      FUN_00469640((void *)(local_cc + *(int *)this),local_c0);
      iVar7 = FUN_004c3cd0(local_80,s_NrFrames_005a7bac);
      FUN_00469860((void *)(local_cc + *(int *)this),iVar7);
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          FUN_005587a3(local_40,&DAT_005a7bc0);
          FUN_004c3d10(local_80,local_40,(LPSTR)local_c0,0x3f);
          iVar8 = -1;
          pbVar10 = local_c0;
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar1 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar1 != 0);
          FUN_004a6980((uint)(iVar8 != -2),(byte *)s__s___d__Value_not_found_for_anim_005a7bec);
          iVar8 = FUN_004c3d60(local_c0,(uint *)0x0);
          FUN_004a6980((uint)(iVar8 == 2),(byte *)s__s___d__Incorrect_number_of_argu_005a7c20);
          uVar5 = FUN_004c3ec0(0);
          uVar6 = FUN_004c3ec0(1);
          FUN_004697c0((void *)(local_cc + *(int *)this),iVar9,uVar5,uVar6);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      iVar2 = iVar2 + 1;
      local_cc = local_cc + 0x10;
    } while (iVar2 < iVar4);
  }
  return;
}


