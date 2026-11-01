
/* ==== FUN_004b75a0 @ 004b75a0 ==== 
 * signature: int __thiscall FUN_004b75a0(void * this, char * param_1)
 * body: 004b75a0-004b75eb;004b75ef-004b7631;004b7635-004b7663;004b7667-004b768e;004b7692-004b76c1;004b76ce-004b76d6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b75ec-004b75ee 004b7632-004b7634 004b7664-004b7666 004b768f-004b7691 004b76c2-004b76cd
 */

int __thiscall FUN_004b75a0(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (*(int *)((int)this + 0xa8) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(*(int *)((int)this + 0xb4) + iVar3) != '\0') {
        if (*(int *)((int)this + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar2 < 0) || (*(int *)((int)this + 0xa8) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(*(int *)((int)this + 0xb4) + iVar3) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        iVar1 = __strcmpi(param_1,(char *)(*(int *)((int)this + 0xa4) + iVar2));
        if (iVar1 == 0) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x19;
    } while (iVar3 < *(int *)((int)this + 4));
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s_find_anim_name_index___anim_<_s>_005b1374);
}


