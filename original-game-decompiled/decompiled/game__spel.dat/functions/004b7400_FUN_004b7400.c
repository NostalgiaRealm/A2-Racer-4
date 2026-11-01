
/* ==== FUN_004b7400 @ 004b7400 ==== 
 * signature: undefined4 __thiscall FUN_004b7400(void * this, char * param_1)
 * body: 004b7400-004b7442;004b7446-004b747c;004b7480-004b74a5;004b74a9-004b74ca;004b74ce-004b74fa;004b7507-004b7530;004b7534-004b7559;004b755d-004b757e;004b7582-004b759b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b7443-004b7445 004b747d-004b747f 004b74a6-004b74a8 004b74cb-004b74cd 004b74fb-004b7506 004b7531-004b7533 004b755a-004b755c 004b757f-004b7581
 */

undefined4 __thiscall FUN_004b7400(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    iVar2 = 0;
    do {
      if ((iVar2 < 0) || (*(int *)((int)this + 0x62) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)(*(int *)((int)this + 0x6e) + iVar3) != '\0') {
        if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar2 < 0) || (*(int *)((int)this + 0x62) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(*(int *)((int)this + 0x6e) + iVar3) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        iVar1 = __strcmpi(param_1,(char *)(*(int *)((int)this + 0x5e) + iVar2));
        if (iVar1 == 0) {
          if (*(int *)((int)this + 0x6a) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
          }
          if ((-1 < iVar3) && (iVar3 < *(int *)((int)this + 0x62))) {
            if (*(char *)(*(int *)((int)this + 0x6e) + iVar3) == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
            }
            return *(undefined4 *)(iVar3 * 0x15 + 0xd + *(int *)((int)this + 0x5e));
          }
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x15;
    } while (iVar3 < *(int *)((int)this + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s_find_texture_index___texture_<_s_005b1344);
}


