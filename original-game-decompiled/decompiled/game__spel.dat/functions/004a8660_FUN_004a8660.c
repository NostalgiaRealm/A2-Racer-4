
/* ==== FUN_004a8660 @ 004a8660 ==== 
 * signature: undefined __thiscall FUN_004a8660(void * this, int param_1, int param_2)
 * body: 004a8660-004a8766;004a876a-004a87b2;004a87b6-004a888c;004a8890-004a88a6;004a88aa-004a88c8;004a88cc-004a8959;004a895d-004a89e4;004a89e8-004a8a76;004a8a7a-004a8a93;004a8a97-004a8abb;004a8abf-004a8b47;004a8b4b-004a8b8a;004a8b8e-004a8c4c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a8767-004a8769 004a87b3-004a87b5 004a888d-004a888f 004a88a7-004a88a9 004a88c9-004a88cb 004a895a-004a895c 004a89e5-004a89e7 004a8a77-004a8a79 004a8a94-004a8a96 004a8abc-004a8abe 004a8b48-004a8b4a 004a8b8b-004a8b8d
 */

void __thiscall FUN_004a8660(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float afStack_40 [6];
  undefined4 uStack_28;
  undefined4 uStack_24;
  float afStack_20 [6];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_2 != -1) {
    if ((*(int *)((int)this + 0xec) != -1) && (*(int *)((int)this + 0xe8) != -1)) {
      FUN_004c3fa0((byte *)s_Checking_object_type____005aff04);
      iVar1 = *(int *)(DAT_0073b0d0 + *(int *)((int)this + 0x24) * 0xa9);
      if (iVar1 == 1) {
        FUN_004c3fa0((byte *)s_Standard__005afef0);
        iVar6 = *(int *)(DAT_0073b0d0 + *(int *)((int)this + 0x24) * 0xa9 + 0x99);
      }
      else {
        iVar6 = param_2;
        if (iVar1 == 2) {
          FUN_004c3fa0((byte *)s_Anim__005afefc);
          iVar1 = *(int *)((int)this + 0x24);
          iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar1 + 4 + iVar1 * 0xa8) * 9 +
                                             4 + DAT_0073b168) +
                                   *(int *)(DAT_0073b0d0 + iVar1 + iVar1 * 0xa8 + 8) * 4) * 0x10 +
                          DAT_0073b120);
        }
      }
      FUN_004c3fa0((byte *)s_Hmmm_005afee8);
      if (*(int *)((int)this + 0xe8) != iVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d___Mesh_used_by_object_has_c_005afebc);
      }
      FUN_004c3fa0((byte *)s_Hmmm_1_005afeb4);
      iVar1 = *(int *)(DAT_00719c28 + *(int *)((int)this + 0xe8) * 4);
      if ((((param_2 < 0) || (*(int *)(iVar1 + 4) <= param_2)) || (param_1 < 0)) || (7 < param_1)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d___Invalid_parameter__m_lev_005afe44);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4) + param_1 * 0xc;
      FUN_004c3fa0((byte *)s_Hmmm_2_005afe3c);
      FUN_004c3fa0((byte *)s_Euh__hallo__005afe2c);
      FUN_004c3fa0((byte *)s_l_changes_>get_change_count_______005afe04);
      param_2 = 0;
      FUN_004c3fa0((byte *)s_Euh__hallo__005afe2c);
      if (0 < *(int *)(iVar1 + 4)) {
        param_1 = 0;
        do {
          FUN_004c3fa0((byte *)s_Hmmm__d_A_005afdf8);
          piVar3 = (int *)(param_1 + *(int *)(iVar1 + 8));
          if (*(int *)(DAT_0073b5c8 + 0x7c + *(int *)((int)this + 0xe8) * 0xac) != 0) {
            FUN_004c3fa0((byte *)s_Hmmm__d_B_005afdec);
            iVar4 = *piVar3;
            iVar6 = DAT_0073b5c8 + *(int *)((int)this + 0xe8) * 0xac;
            if (*(int *)(DAT_0073b5c8 + *(int *)((int)this + 0xe8) * 0xac) != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_005afd94);
            }
            if (*(int *)(iVar6 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
            }
            if ((iVar4 < 0) || (*(int *)(iVar6 + 0x7c) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____index__d_is_out_of_VERT_005996e4);
            }
            iVar5 = *piVar3;
            pfVar7 = (float *)(*(int *)(iVar6 + 0x78) + iVar4 * 0x20);
            pfVar8 = afStack_20;
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pfVar8 = *pfVar7;
              pfVar7 = pfVar7 + 1;
              pfVar8 = pfVar8 + 1;
            }
            afStack_20[0] = afStack_20[0] + (float)piVar3[1];
            afStack_20[1] = afStack_20[1] + (float)piVar3[2];
            afStack_20[2] = afStack_20[2] + (float)piVar3[3];
            iVar6 = DAT_0073b5c8 + *(int *)((int)this + 0xec) * 0xac;
            iVar4 = *(int *)(DAT_0073b5c8 + *(int *)((int)this + 0xec) * 0xac);
            if (iVar4 == 1) {
              if ((iVar5 < 0) || (*(int *)(iVar6 + 0x7c) <= iVar5)) {
                    /* WARNING: Subroutine does not return */
                FUN_004c4150((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
              }
              pfVar7 = afStack_20;
              pfVar8 = (float *)(*(int *)(iVar6 + 0x78) + iVar5 * 0x20);
              for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pfVar8 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                pfVar8 = pfVar8 + 1;
              }
            }
            else if (iVar4 == 2) {
              if ((iVar5 < 0) || (*(int *)(iVar6 + 0x84) <= iVar5)) {
                    /* WARNING: Subroutine does not return */
                FUN_004c4150((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
              }
              iVar5 = iVar5 * 0x20;
              *(float *)(*(int *)(iVar6 + 0x80) + iVar5) = afStack_20[0];
              *(float *)(*(int *)(iVar6 + 0x80) + 4 + iVar5) = afStack_20[1];
              *(float *)(*(int *)(iVar6 + 0x80) + 8 + iVar5) = afStack_20[2];
              *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x18 + iVar5) = uStack_8;
              *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x1c + iVar5) = uStack_4;
              *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x10 + iVar5) = 0xffffff;
              *(undefined4 *)(*(int *)(iVar6 + 0x80) + 0x14 + iVar5) = 0;
            }
          }
          if (*(int *)(DAT_0073b5c8 + 0x84 + *(int *)((int)this + 0xe8) * 0xac) != 0) {
            FUN_004c3fa0((byte *)s_Hmmm__d_C_005afd48);
            iVar4 = *piVar3;
            iVar6 = DAT_0073b5c8 + *(int *)((int)this + 0xe8) * 0xac;
            if (*(int *)(DAT_0073b5c8 + *(int *)((int)this + 0xe8) * 0xac) != 2) {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
            }
            if (*(int *)(iVar6 + 4) != 2) {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
            }
            if ((iVar4 < 0) || (*(int *)(iVar6 + 0x84) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
            }
            pfVar7 = (float *)(*(int *)(iVar6 + 0x80) + iVar4 * 0x20);
            pfVar8 = afStack_40;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pfVar8 = *pfVar7;
              pfVar7 = pfVar7 + 1;
              pfVar8 = pfVar8 + 1;
            }
            afStack_40[0] = afStack_40[0] + (float)piVar3[1];
            afStack_40[1] = afStack_40[1] + (float)piVar3[2];
            afStack_40[2] = afStack_40[2] + (float)piVar3[3];
            iVar4 = *piVar3;
            iVar6 = DAT_0073b5c8 + *(int *)((int)this + 0xec) * 0xac;
            iVar5 = *(int *)(DAT_0073b5c8 + *(int *)((int)this + 0xec) * 0xac);
            if (iVar5 == 1) {
              if ((iVar4 < 0) || (*(int *)(iVar6 + 0x7c) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_004c4150((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
              }
              iVar4 = iVar4 * 0x20;
              *(float *)(*(int *)(iVar6 + 0x78) + iVar4) = afStack_40[0];
              *(float *)(*(int *)(iVar6 + 0x78) + 4 + iVar4) = afStack_40[1];
              *(float *)(*(int *)(iVar6 + 0x78) + 8 + iVar4) = afStack_40[2];
              *(float *)(*(int *)(iVar6 + 0x78) + 0xc + iVar4) = afStack_40[0];
              *(float *)(*(int *)(iVar6 + 0x78) + 0x10 + iVar4) = afStack_40[1];
              *(float *)(*(int *)(iVar6 + 0x78) + 0x14 + iVar4) = afStack_40[2];
              *(undefined4 *)(*(int *)(iVar6 + 0x78) + 0x18 + iVar4) = uStack_28;
              *(undefined4 *)(*(int *)(iVar6 + 0x78) + 0x1c + iVar4) = uStack_24;
            }
            else if (iVar5 == 2) {
              if ((iVar4 < 0) || (*(int *)(iVar6 + 0x84) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_004c4150((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
              }
              pfVar7 = afStack_40;
              pfVar8 = (float *)(*(int *)(iVar6 + 0x80) + iVar4 * 0x20);
              for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pfVar8 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                pfVar8 = pfVar8 + 1;
              }
            }
          }
          param_2 = param_2 + 1;
          param_1 = param_1 + 0x10;
          FUN_004c3fa0((byte *)s_Euh__hallo__005afe2c);
        } while (param_2 < *(int *)(iVar1 + 4));
      }
      FUN_004c3fa0((byte *)s_Hmmm__d_005afd3c);
      return;
    }
    FUN_004c3fa0((byte *)s__s__d___Cannot_apply_damage_to_u_005afd04);
  }
  return;
}


