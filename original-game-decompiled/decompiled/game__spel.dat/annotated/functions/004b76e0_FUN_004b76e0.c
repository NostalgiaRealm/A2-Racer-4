
/* ==== FUN_004b76e0 @ 004b76e0 ==== 
 * signature: undefined4 __thiscall FUN_004b76e0(void * this, char * param_1)
 * body: 004b76e0-004b772b;004b772f-004b7771;004b7775-004b77a3;004b77a7-004b77ce;004b77d2-004b7808
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b772c-004b772e 004b7772-004b7774 004b77a4-004b77a6 004b77cf-004b77d1
 */

uint __thiscall FUN_004b76e0(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = *(uint *)((int)this + 4);
  if (0 < (int)uVar2) {
    iVar3 = 0;
    do {
      if ((iVar3 < 0) || (*(int *)((int)this + 0xa8) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(*(int *)((int)this + 0xb4) + iVar4) != '\0') {
        if (*(int *)((int)this + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar3 < 0) || (*(int *)((int)this + 0xa8) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(*(int *)((int)this + 0xb4) + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        iVar1 = __strcmpi(param_1,(char *)(*(int *)((int)this + 0xa4) + iVar3));
        if (iVar1 == 0) {
          return 1;
        }
      }
      uVar2 = *(uint *)((int)this + 4);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x19;
    } while (iVar4 < (int)uVar2);
  }
  return uVar2 & 0xffffff00;
}


