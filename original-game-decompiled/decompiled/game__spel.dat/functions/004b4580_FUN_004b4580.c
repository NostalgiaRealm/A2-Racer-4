
/* ==== FUN_004b4580 @ 004b4580 ==== 
 * signature: undefined __cdecl FUN_004b4580(int param_1)
 * body: 004b4580-004b45ac;004b45b0-004b45dc;004b45e0-004b4605;004b4609-004b4656;004b465a-004b4681;004b4685-004b46aa;004b46ae-004b46e8;004b46ec-004b4710;004b4714-004b4736;004b473a-004b4774;004b4778-004b479c;004b47a0-004b47c2;004b47c6-004b4804;004b4808-004b4834;004b4844-004b484e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b45ad-004b45af 004b45dd-004b45df 004b4606-004b4608 004b4657-004b4659 004b4682-004b4684 004b46ab-004b46ad 004b46e9-004b46eb 004b4711-004b4713 004b4737-004b4739 004b4775-004b4777 004b479d-004b479f 004b47c3-004b47c5 004b4805-004b4807 004b4835-004b4843
 */

void __cdecl FUN_004b4580(int param_1)

{
  int iVar1;
  
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar1 = param_1 * 0xa9;
  *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 0xffffffff;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 0xa1 + DAT_0073b0d0) = 1;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 0x99 + DAT_0073b0d0) = 0xffffffff;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_1 < 0) || (DAT_0073b0d4 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 0x95 + DAT_0073b0d0) = 0xffffffff;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__free__s__d__of_005b0f00);
  }
  if ((-1 < param_1) && (param_1 < DAT_0073b0d4)) {
    *(undefined1 *)(DAT_0073b0e0 + param_1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__free_illegal_i_005b0ebc);
}


