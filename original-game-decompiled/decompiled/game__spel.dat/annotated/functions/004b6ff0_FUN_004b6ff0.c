
/* ==== FUN_004b6ff0 @ 004b6ff0 ==== 
 * signature: int __thiscall FUN_004b6ff0(void * this, int param_1, uint * param_2, uint * param_3, int * param_4)
 * body: 004b6ff0-004b7063;004b7067-004b70c0;004b70c7-004b70fb;004b70ff-004b7124;004b7128-004b7149;004b714d-004b717a;004b717e-004b71a5;004b71a9-004b71ce;004b71d2-004b721f;004b7223-004b7248;004b724c-004b726d;004b7271-004b729e;004b72a2-004b72c9;004b72cd-004b72f1;004b72f5-004b73f4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b7064-004b7066 004b70c1-004b70c6 004b70fc-004b70fe 004b7125-004b7127 004b714a-004b714c 004b717b-004b717d 004b71a6-004b71a8 004b71cf-004b71d1 004b7220-004b7222 004b7249-004b724b 004b726e-004b7270 004b729f-004b72a1 004b72ca-004b72cc 004b72f2-004b72f4
 */

int __thiscall FUN_004b6ff0(void *this,int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_004c3fa0((byte *)s_adding_frame__anim__d__mesh__s__t_005b1318);
  FUN_004b82c0(this);
  iVar1 = FUN_004b7970(this,param_2);
  iVar2 = FUN_004b7d30(this,param_3,param_4);
  iVar4 = DAT_0073b128;
  if (DAT_0073b12c == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar4 < DAT_0073b124; iVar4 = iVar4 + 1) {
    if (*(char *)(DAT_0073b130 + iVar4) == '\0') goto LAB_004b73e6;
  }
  iVar4 = 0;
  if (0 < DAT_0073b128) {
    do {
      if (*(char *)(DAT_0073b130 + iVar4) == '\0') {
LAB_004b73e6:
        *(undefined1 *)(DAT_0073b130 + iVar4) = 1;
        DAT_0073b128 = iVar4;
        FUN_004c3fa0((byte *)s___framelist__frame__d_005b12fc);
        if (*(int *)((int)this + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar1 < 0) || (*(int *)((int)this + 0x1c) <= iVar1)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(*(int *)((int)this + 0x28) + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        if (DAT_0073b12c == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar4 < 0) || (DAT_0073b124 <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b130 + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        *(undefined4 *)(iVar4 * 0x10 + DAT_0073b120) =
             *(undefined4 *)(iVar1 * 0x15 + 0xd + *(int *)((int)this + 0x18));
        if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar2 < 0) || (*(int *)((int)this + 0x62) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(*(int *)((int)this + 0x6e) + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        if (DAT_0073b12c == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((-1 < iVar4) && (iVar4 < DAT_0073b124)) {
          if (*(char *)(DAT_0073b130 + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
          }
          *(undefined4 *)(iVar4 * 0x10 + 4 + DAT_0073b120) =
               *(undefined4 *)(iVar2 * 0x15 + 0xd + *(int *)((int)this + 0x5e));
          iVar3 = FUN_004b82f0(&DAT_0073b120,iVar4);
          *(int *)(iVar3 + 8) = iVar1;
          iVar1 = FUN_004b82f0(&DAT_0073b120,iVar4);
          *(int *)(iVar1 + 0xc) = iVar2;
          FUN_004b82f0(&DAT_0073b120,iVar4);
          FUN_004c3fa0((byte *)s___framelist__mesh__d_005b12dc);
          FUN_004b82f0(&DAT_0073b120,iVar4);
          FUN_004c3fa0((byte *)s___framelist__texture__d_005b12bc);
          FUN_004b82f0(&DAT_0073b120,iVar4);
          FUN_004c3fa0((byte *)s___framelist__ld_mesh__d_005b129c);
          FUN_004b82f0(&DAT_0073b120,iVar4);
          FUN_004c3fa0((byte *)s___framelist__ld_texture__d_005b127c);
          iVar1 = FUN_004b8150(param_1);
          FUN_004c3fa0((byte *)s___indexlist__index__d_005b1260);
          iVar2 = FUN_004b8380(&DAT_0073b168,param_1);
          *(int *)(*(int *)(iVar2 + 4) + iVar1 * 4) = iVar4;
          iVar1 = FUN_004b8380(&DAT_0073b168,param_1);
          *(undefined1 *)(iVar1 + 8) = 1;
          return iVar4;
        }
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_0073b128);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


