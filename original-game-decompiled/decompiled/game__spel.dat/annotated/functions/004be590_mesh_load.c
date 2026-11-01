
/* ==== mesh_load @ 004be590 ==== 
 * signature: undefined4 __thiscall mesh_load(void * this, char * param_1)
 * body: 004be590-004be5ed;004be5f1-004be6ae;004be6b7-004be6f8;004be6fc-004be73e;004be742-004be7d6;004be7da-004be878;004be87c-004be8be;004be8c2-004be99f;004be9a3-004bea20;004bea24-004beac2;004beac6-004beb0c
 * note: ANALYST: Loads a .d3d mesh. [confidence: confirmed] [evidence: strings 'LOADING MESH', Mesh.cpp]
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004be5ee-004be5f0 004be6af-004be6b6 004be6f9-004be6fb 004be73f-004be741 004be7d7-004be7d9 004be879-004be87b 004be8bf-004be8c1 004be9a0-004be9a2 004bea21-004bea23 004beac3-004beac5
 */

/* ANALYST: Loads a .d3d mesh. [confidence: confirmed] [evidence: strings 'LOADING MESH', Mesh.cpp]
    */

undefined4 __thiscall mesh_load(void *this,char *param_1)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iStack_cc;
  int iStack_c4;
  int iStack_c0;
  int local_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined4 auStack_ac [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 auStack_8c [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char acStack_58 [36];
  char acStack_34 [52];
  
  FUN_004c1ae0((void *)((int)this + 0x98),param_1);
  FUN_004c3fa0((byte *)s______LOADING_MESH______005b2740);
  FUN_004c3fa0((byte *)s_mesh_____s__005b272c);
  pFVar1 = (FILE *)rc_fopen(param_1);
  iVar3 = 0;
  if (pFVar1 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Unable_to_load_object__c_005b26f8);
  }
  FUN_00558b35((char *)&local_bc,1,4,(int *)pFVar1);
  if (local_bc < 0) {
    FUN_00558b35((char *)&iStack_c4,1,4,(int *)pFVar1);
  }
  else {
    iStack_c4 = local_bc;
    local_bc = 0;
  }
  FUN_00558b35((char *)&iStack_c0,1,4,(int *)pFVar1);
  FUN_004bd600(this,iStack_c4,iStack_c0 * 3);
  FUN_004c3fa0((byte *)s_vertices____d_005b26e8);
  FUN_004c3fa0((byte *)s_triangles____d_005b26d8);
  FUN_004c3fa0((byte *)s_load_vertex_data___005b26c4);
  iStack_cc = 0;
  if (0 < iStack_c4) {
    do {
      if (local_bc == -1) {
        FUN_00558b35(acStack_34,1,0x31,(int *)pFVar1);
        iVar7 = *(int *)((int)this + 4);
        pcVar4 = acStack_34;
        pcVar6 = (char *)auStack_8c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar6 = pcVar6 + 4;
        }
        *pcVar6 = *pcVar4;
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____mesh_has_not_been_initi_005b2664);
        }
        if (*(int *)this == 1) {
          if ((iVar3 < 0) || (*(int *)((int)this + 0x7c) <= iStack_cc)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
          }
          *(undefined4 *)(iVar3 + *(int *)((int)this + 0x78)) = auStack_8c[0];
          *(undefined4 *)(iVar3 + 4 + *(int *)((int)this + 0x78)) = auStack_8c[1];
          *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 0x78)) = auStack_8c[2];
          *(undefined4 *)(iVar3 + 0xc + *(int *)((int)this + 0x78)) = auStack_8c[3];
          *(undefined4 *)(iVar3 + 0x10 + *(int *)((int)this + 0x78)) = uStack_7c;
          *(undefined4 *)(iVar3 + 0x14 + *(int *)((int)this + 0x78)) = uStack_78;
          *(undefined4 *)(iVar3 + 0x18 + *(int *)((int)this + 0x78)) = uStack_74;
          *(undefined4 *)(iVar3 + 0x1c + *(int *)((int)this + 0x78)) = uStack_70;
        }
        else if (*(int *)this == 2) {
          if ((iVar3 < 0) || (*(int *)((int)this + 0x84) <= iStack_cc)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
          }
          *(undefined4 *)(*(int *)((int)this + 0x80) + iVar3) = auStack_8c[0];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 4 + iVar3) = auStack_8c[1];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 8 + iVar3) = auStack_8c[2];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x18 + iVar3) = uStack_74;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x1c + iVar3) = uStack_70;
          lVar8 = __ftol();
          lVar9 = __ftol();
          lVar10 = __ftol();
          lVar11 = __ftol();
          *(uint *)(*(int *)((int)this + 0x80) + 0x10 + iVar3) =
               (((int)lVar8 << 8 | (uint)lVar9) << 8 | (uint)lVar10) << 8 | (uint)lVar11;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x14 + iVar3) = 0;
        }
      }
      else {
        if (local_bc != 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____unsupported_version_num_005b2690);
        }
        FUN_00558b35(acStack_58,1,0x21,(int *)pFVar1);
        iVar7 = *(int *)((int)this + 4);
        pcVar4 = acStack_58;
        puVar5 = auStack_ac;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          puVar5 = puVar5 + 1;
        }
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____mesh_has_not_been_initi_005b2664);
        }
        if (*(int *)this == 1) {
          if ((iVar3 < 0) || (*(int *)((int)this + 0x7c) <= iStack_cc)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
          }
          *(undefined4 *)(iVar3 + *(int *)((int)this + 0x78)) = auStack_ac[0];
          *(undefined4 *)(iVar3 + 4 + *(int *)((int)this + 0x78)) = auStack_ac[1];
          *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 0x78)) = auStack_ac[2];
          *(undefined4 *)(iVar3 + 0xc + *(int *)((int)this + 0x78)) = auStack_ac[3];
          *(undefined4 *)(iVar3 + 0x10 + *(int *)((int)this + 0x78)) = uStack_9c;
          *(undefined4 *)(iVar3 + 0x14 + *(int *)((int)this + 0x78)) = uStack_98;
          *(undefined4 *)(iVar3 + 0x18 + *(int *)((int)this + 0x78)) = uStack_94;
          *(undefined4 *)(iVar3 + 0x1c + *(int *)((int)this + 0x78)) = uStack_90;
        }
        else if (*(int *)this == 2) {
          if ((iVar3 < 0) || (*(int *)((int)this + 0x84) <= iStack_cc)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____error__d_out_of_mesh_LV_005afd54);
          }
          *(undefined4 *)(*(int *)((int)this + 0x80) + iVar3) = auStack_ac[0];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 4 + iVar3) = auStack_ac[1];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 8 + iVar3) = auStack_ac[2];
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x18 + iVar3) = uStack_94;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x1c + iVar3) = uStack_90;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x10 + iVar3) = 0xffffff;
          *(undefined4 *)(*(int *)((int)this + 0x80) + 0x14 + iVar3) = 0;
        }
      }
      if ((pFVar1->_flag & 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____error_reading_<_s>_005b2644);
      }
      iStack_cc = iStack_cc + 1;
      iVar3 = iVar3 + 0x20;
    } while (iStack_cc < iStack_c4);
  }
  FUN_004c3fa0(&DAT_005b2640);
  FUN_004c3fa0((byte *)s_loading_triangle_data___005b2624);
  iVar3 = 0;
  if (0 < iStack_c0) {
    iVar7 = 0;
    do {
      FUN_00558b35((char *)&uStack_b8,1,9,(int *)pFVar1);
      *(undefined2 *)(iVar7 + *(int *)((int)this + 0x90)) = uStack_b8;
      *(undefined2 *)(iVar7 + 2 + *(int *)((int)this + 0x90)) = uStack_b6;
      *(undefined2 *)(iVar7 + 4 + *(int *)((int)this + 0x90)) = uStack_b4;
      if ((pFVar1->_flag & 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____error_reading_<_s>_005b2644);
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 6;
    } while (iVar3 < iStack_c0);
  }
  FUN_004c3fa0(&DAT_005b2640);
  FUN_004bf570(this);
  FUN_004c6430(pFVar1);
  if (*(int *)this == 2) {
    FUN_004beb10(this);
  }
  return 0;
}


