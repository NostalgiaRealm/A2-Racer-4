
/* ==== FUN_004c48f0 @ 004c48f0 ==== 
 * signature: undefined4 __cdecl FUN_004c48f0(int * param_1)
 * body: 004c48f0-004c4948;004c4961-004c4972
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4949-004c4960
 */

undefined4 __cdecl FUN_004c48f0(int *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  undefined4 local_6c [4];
  undefined4 uStack_5c;
  undefined4 *puStack_c;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  FUN_004c4a60(param_1);
  iVar1 = (**(code **)(*param_1 + 100))(param_1,0,local_6c,1,0);
  if (iVar1 != 0) {
    FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____could_not_lock_surface___005b41ec);
  }
  *puStack_c = unaff_ESI;
  return uStack_5c;
}


