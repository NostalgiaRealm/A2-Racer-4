
/* ==== FUN_004c4da0 @ 004c4da0 ==== 
 * signature: undefined __cdecl FUN_004c4da0(int * param_1, undefined4 param_2)
 * body: 004c4da0-004c4df6;004c4dfa-004c4dfd
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4df7-004c4df9
 */

void __cdecl FUN_004c4da0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  local_64[0] = 100;
  local_14 = param_2;
  FUN_004c4a60(param_1);
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,0,0,0,0x1000400,local_64);
  if (iVar1 != 0) {
    FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____clear_surface_blt_error_005b42b4);
  }
  return;
}


