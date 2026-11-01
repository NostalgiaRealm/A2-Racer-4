
/* ==== FUN_004bc8c0 @ 004bc8c0 ==== 
 * signature: int __cdecl FUN_004bc8c0(undefined4 param_1, char * param_2)
 * body: 004bc8c0-004bc8f2;004bc8f6-004bc91a;004bc91e-004bc940;004bc944-004bc97c;004bc980-004bc9aa;004bc9ae-004bc9d2;004bc9d6-004bc9f7;004bc9fb-004bca12
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bc8f3-004bc8f5 004bc91b-004bc91d 004bc941-004bc943 004bc97d-004bc97f 004bc9ab-004bc9ad 004bc9d3-004bc9d5 004bc9f8-004bc9fa
 */

int __cdecl FUN_004bc8c0(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004bc820();
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b5cc <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar2 = iVar1 * 0xac;
  if (*(int *)(iVar2 + 4 + DAT_0073b5c8) == 0) {
    *(undefined4 *)(iVar2 + DAT_0073b5c8) = param_1;
    if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((-1 < iVar1) && (iVar1 < DAT_0073b5cc)) {
      if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      FUN_004be590((void *)(iVar2 + DAT_0073b5c8),param_2);
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____illegal_change_of_mesh_t_005b2480);
}


