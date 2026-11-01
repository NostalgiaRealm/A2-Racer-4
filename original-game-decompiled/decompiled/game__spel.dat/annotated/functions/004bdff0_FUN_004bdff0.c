
/* ==== FUN_004bdff0 @ 004bdff0 ==== 
 * signature: undefined __thiscall FUN_004bdff0(void * this, int param_1)
 * body: 004bdff0-004be04a;004be04e-004be075;004be079-004be09e;004be0a2-004be0e7;004be0eb-004be112;004be116-004be13a;004be13e-004be1f0;004be1f4-004be21b;004be21f-004be243;004be247-004be288;004be28c-004be2b3;004be2b7-004be2dc;004be2e0-004be33d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004be04b-004be04d 004be076-004be078 004be09f-004be0a1 004be0e8-004be0ea 004be113-004be115 004be13b-004be13d 004be1f1-004be1f3 004be21c-004be21e 004be244-004be246 004be289-004be28b 004be2b4-004be2b6 004be2dd-004be2df
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bdff0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int local_4;
  
  if (*(int *)this == 2) {
    iVar4 = 0;
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
        pfVar3 = (float *)(iVar4 + 0x18 + *(int *)((int)this + 0x80));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x34 + param_1 * 0x48);
        if (DAT_0073b1bc == 0) break;
        if ((param_1 < 0) || (DAT_0073b1b4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b1c0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        pfVar3 = (float *)(iVar4 + 0x1c + *(int *)((int)this + 0x80));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x38 + param_1 * 0x48);
        *(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x80))) / _DAT_0073b200;
        iVar1 = iVar4 + 0x1c;
        iVar2 = iVar4 + 0x1c;
        iVar4 = iVar4 + 0x20;
        *(float *)(iVar2 + *(int *)((int)this + 0x80)) =
             ABS(*(float *)(iVar1 + *(int *)((int)this + 0x80))) / _DAT_0073b204;
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
    iVar4 = 0;
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
        pfVar3 = (float *)(iVar4 + 0x18 + *(int *)((int)this + 0x78));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x34 + param_1 * 0x48);
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
        pfVar3 = (float *)(iVar4 + 0x1c + *(int *)((int)this + 0x78));
        *pfVar3 = *pfVar3 - *(float *)(DAT_0073b1b0 + 0x38 + param_1 * 0x48);
        *(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x78)) =
             ABS(*(float *)(iVar4 + 0x18 + *(int *)((int)this + 0x78))) / _DAT_0073b200;
        iVar1 = iVar4 + 0x1c;
        iVar2 = iVar4 + 0x1c;
        iVar4 = iVar4 + 0x20;
        *(float *)(iVar2 + *(int *)((int)this + 0x78)) =
             ABS(*(float *)(iVar1 + *(int *)((int)this + 0x78))) / _DAT_0073b204;
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)((int)this + 0x7c));
    }
  }
  return;
}


