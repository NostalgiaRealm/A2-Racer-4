
/* ==== FUN_004bf570 @ 004bf570 ==== 
 * signature: undefined __fastcall FUN_004bf570(int * param_1)
 * body: 004bf570-004bf58b;004bf58f-004bf5c0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bf58c-004bf58e
 */

void __fastcall FUN_004bf570(int *param_1)

{
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_unknown_mesh_type_005b250c);
  }
  if (*param_1 == 1) {
    FUN_004bf5e0(param_1 + 3,(float *)param_1[0x1e],param_1[0x1f]);
  }
  else if (*param_1 == 2) {
    FUN_004bf5e0(param_1 + 3,(float *)param_1[0x20],param_1[0x21]);
    return;
  }
  return;
}


