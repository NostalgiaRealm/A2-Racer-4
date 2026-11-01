
/* ==== FUN_004189e3 @ 004189e3 ==== 
 * signature: int __cdecl FUN_004189e3(int param_1, int param_2, int param_3, int param_4, float * param_5, float * param_6)
 * body: 004189e3-00418a32;00418a36-00418aa6
 */

/* WARNING: Switch with 1 destination removed at 0x00418b00 : 6 cases all go to same destination */

int __cdecl
FUN_004189e3(int param_1,int param_2,int param_3,int param_4,float *param_5,float *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float afStack_f4 [2];
  float fStack_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_cc;
  char local_c8 [4];
  int local_c4;
  char acStack_c0 [4];
  int iStack_bc;
  int iStack_b4;
  int iStack_a4;
  
  iVar4 = 0;
  if (0x19 < param_3) {
    return -2;
  }
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s_Illegal_waypoint__d__Function_Sc_00593700);
  }
  if (0 < param_3) {
    pcVar1 = local_c8 + 1;
    iVar3 = param_3;
    do {
      pcVar1[-1] = '\0';
      *pcVar1 = '\0';
      pcVar1[1] = '\0';
      pcVar1[3] = -1;
      pcVar1[4] = -1;
      pcVar1[5] = -1;
      pcVar1[6] = -1;
      pcVar1 = pcVar1 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_e0 = param_1 * 0x294;
  local_e4 = *(int *)(DAT_00715254 +
                     *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50) * 4);
  if (param_3 < 1) {
LAB_00418c9b:
    if (((-1 < iStack_b4) && (-1 < iStack_a4)) && (-1 < iStack_bc)) {
      FUN_00422ab0(iStack_b4,afStack_f4);
      *param_5 = afStack_f4[0];
      param_5[2] = fStack_ec;
      FUN_00422ab0(iStack_a4,afStack_f4);
      *param_6 = afStack_f4[0];
      param_6[2] = fStack_ec;
      return iStack_bc;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_waypoint_in_Scan_0059379c);
  }
LAB_00418ab8:
  *(int *)(acStack_c0 + iVar4 * 8 + -4) = param_4;
  if (-1 < param_1) {
    if (param_1 < 0x13) {
      uStack_dc = *(undefined4 *)
                   (*(int *)((int)&DAT_005ce9e8 + local_e0) * 0xf0 + 0x34 + DAT_00715e50);
    }
    if (param_1 < 6) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      uStack_fc = 1;
      uStack_f8 = 2;
      uStack_100 = 0;
    }
  }
  if (local_c8[iVar4 * 8] != '\0') {
LAB_00418be0:
    pcVar1 = local_c8 + iVar4 * 8 + 2;
    do {
      if (pcVar1[-1] == '\0') {
        iVar3 = FUN_004226f0(param_2,param_4,uStack_f8);
        pcVar1[-1] = '\x01';
        if ((-1 < iVar3) && (iVar2 = FUN_00422ae0(iVar3,&DAT_005d2b48), iVar2 == 0))
        goto LAB_00418c64;
      }
      if (*pcVar1 == '\0') {
        iVar3 = FUN_004226f0(param_2,param_4,uStack_100);
        *pcVar1 = '\x01';
        if ((-1 < iVar3) && (iVar2 = FUN_00422ae0(iVar3,&DAT_005d2b48), iVar2 == 0))
        goto LAB_00418c64;
      }
      if (iVar4 == 0) {
        iVar4 = FUN_004226f0(param_2,local_c4,uStack_fc);
        if (((iVar4 < 0) && (iVar4 = FUN_004226f0(param_2,local_c4,uStack_f8), iVar4 < 0)) &&
           (iVar4 = FUN_004226f0(param_2,local_c4,uStack_100), iVar4 < 0)) {
          if (local_c4 < 1) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s_Invalid_waypoint___d_File___s_Li_00593750);
          }
        }
        else {
          FUN_00422ab0(iVar4,&fStack_d8);
          iVar3 = FUN_004226f0(param_2,iVar4,uStack_fc);
          bVar5 = iVar3 == 0;
          bVar6 = false;
          if (iVar3 < 0) {
            iVar3 = FUN_004226f0(param_2,iVar4,uStack_f8);
            bVar5 = iVar3 == 0;
            bVar6 = false;
            if (iVar3 < 0) {
              iVar3 = FUN_004226f0(param_2,iVar4,uStack_100);
              bVar6 = iVar3 < 0;
              bVar5 = iVar3 == 0;
            }
          }
          local_c4 = iVar4;
          if (!bVar5 && !bVar6) {
            FUN_00422ab0(iVar3,afStack_f4);
            param_5[2] = fStack_ec;
            *param_5 = afStack_f4[0];
            FUN_00422b50(local_e4,&uStack_cc,&iStack_e8);
            if (iStack_e8 == 1) {
              fVar7 = ((float10)*param_5 - (float10)fStack_d8) * (float10)0.46511626;
              fVar8 = ((float10)param_5[1] - (float10)fStack_d4) * (float10)0.46511626;
              fVar9 = (float10)fcos((float10)1024.0);
              fVar10 = (float10)fsin((float10)1024.0);
              fVar11 = (fVar7 * fVar9 - fVar8 * fVar10) + (float10)*param_5;
              *param_5 = (float)fVar11;
              param_5[2] = (float)(fVar8 * fVar9 + fVar7 * fVar10 + (float10)param_5[2]);
              *param_6 = (float)fVar11;
              param_6[2] = param_5[2];
            }
            return iVar3;
          }
        }
        FUN_00422ab0(local_c4,afStack_f4);
        *param_5 = afStack_f4[0];
        param_5[2] = fStack_ec;
        return -1;
      }
      param_4 = *(int *)(pcVar1 + -6);
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar1 + -8;
    } while( true );
  }
  iVar3 = FUN_004226f0(param_2,param_4,uStack_fc);
  local_c8[iVar4 * 8] = '\x01';
  if ((iVar3 < 0) || (iVar2 = FUN_00422ae0(iVar3,&DAT_005d2b48), iVar2 != 0)) goto LAB_00418be0;
  iVar4 = iVar4 + 1;
  local_c8[iVar4 * 8] = '\0';
  local_c8[iVar4 * 8 + 2] = '\0';
  local_c8[iVar4 * 8 + 1] = '\0';
  goto LAB_00418c8e;
LAB_00418c64:
  iVar4 = iVar4 + 1;
  local_c8[iVar4 * 8] = '\0';
  local_c8[iVar4 * 8 + 2] = '\0';
  local_c8[iVar4 * 8 + 1] = '\0';
  *(int *)(acStack_c0 + iVar4 * 8 + -4) = iVar3;
LAB_00418c8e:
  param_4 = iVar3;
  if (param_3 <= iVar4) goto LAB_00418c9b;
  goto LAB_00418ab8;
}


