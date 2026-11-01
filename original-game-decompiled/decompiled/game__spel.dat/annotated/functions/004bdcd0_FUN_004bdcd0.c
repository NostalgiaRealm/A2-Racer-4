
/* ==== FUN_004bdcd0 @ 004bdcd0 ==== 
 * signature: undefined __thiscall FUN_004bdcd0(void * this, int param_1)
 * body: 004bdcd0-004bdd2b;004bdd2f-004bdd56;004bdd5a-004bdd7f;004bdd83-004bddd2;004bddd6-004bddfd;004bde01-004bde25;004bde29-004bdeb4;004bdeb8-004bdedf;004bdee3-004bdf08;004bdf0c-004bdf58;004bdf5c-004bdf83;004bdf87-004bdfab;004bdfaf-004bdfec
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bdd2c-004bdd2e 004bdd57-004bdd59 004bdd80-004bdd82 004bddd3-004bddd5 004bddfe-004bde00 004bde26-004bde28 004bdeb5-004bdeb7 004bdee0-004bdee2 004bdf09-004bdf0b 004bdf59-004bdf5b 004bdf84-004bdf86 004bdfac-004bdfae
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bdcd0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int local_4;
  
  if (*(int *)this == 2) {
    iVar5 = 0;
    local_4 = 0;
    if (0 < *(int *)((int)this + 0x84)) {
      while( true ) {
        if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
        }
        if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b1c0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        *(float *)(iVar5 + 0x18 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar5 + 0x18 + *(int *)((int)this + 0x80))) * _DAT_0073b200 +
             *(float *)(param_1 * 0x48 + 0x34 + DAT_0073b1b0);
        if (DAT_0073b1bc == 0) break;
        if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b1c0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        iVar1 = iVar5 + 0x1c;
        iVar2 = iVar5 + 0x1c;
        iVar5 = iVar5 + 0x20;
        *(float *)(iVar2 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar1 + *(int *)((int)this + 0x80))) * _DAT_0073b204 +
             *(float *)(param_1 * 0x48 + 0x38 + DAT_0073b1b0);
        local_4 = local_4 + 1;
        if (*(int *)((int)this + 0x84) <= local_4) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
  }
  else {
    iVar5 = 0;
    local_4 = 0;
    if (0 < *(int *)((int)this + 0x7c)) {
      do {
        if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
        }
        if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b1c0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        *(float *)(*(int *)((int)this + 0x78) + 0x18 + iVar5) =
             ABS(*(float *)(*(int *)((int)this + 0x78) + 0x18 + iVar5)) * _DAT_0073b200 +
             *(float *)(param_1 * 0x48 + 0x34 + DAT_0073b1b0);
        if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
        }
        if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b1c0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        pfVar3 = (float *)(*(int *)((int)this + 0x78) + 0x1c + iVar5);
        pfVar4 = (float *)(*(int *)((int)this + 0x78) + 0x1c + iVar5);
        iVar5 = iVar5 + 0x20;
        *pfVar4 = ABS(*pfVar3) * _DAT_0073b204 + *(float *)(param_1 * 0x48 + 0x38 + DAT_0073b1b0);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)((int)this + 0x7c));
    }
  }
  return;
}


