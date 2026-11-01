
/* ==== FUN_004c0d30 @ 004c0d30 ==== 
 * signature: undefined __cdecl FUN_004c0d30(int param_1)
 * body: 004c0d30-004c0d49;004c0d4d-004c0d82;004c0d86-004c0da8;004c0dac-004c0dca;004c0dce-004c0dff;004c0e03-004c0e03
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0d4a-004c0d4c 004c0d83-004c0d85 004c0da9-004c0dab 004c0dcb-004c0dcd 004c0e00-004c0e02
 */

void __cdecl FUN_004c0d30(int param_1)

{
  int iVar1;
  
  if (DAT_0073b788 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____viewport_array_not_init_005b2b88);
  }
  DAT_0073b78c = param_1;
  if (DAT_0073b784[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_1 < 0) || (DAT_0073b784[1] <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b784[4] + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar1 = (**(code **)(*DAT_0073b4b4 + 0x34))
                    (DAT_0073b4b4,*(undefined4 *)(*(int *)(*DAT_0073b784 + param_1 * 4) + 0x2c));
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d___D3DError_Setting_viewpor_005b2bd0);
  }
  return;
}


