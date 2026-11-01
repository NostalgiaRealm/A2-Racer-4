
/* ==== FUN_004c4a20 @ 004c4a20 ==== 
 * signature: undefined __cdecl FUN_004c4a20(int * param_1, undefined4 param_2)
 * body: 004c4a20-004c4a5b;004c4a5f-004c4a5f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4a5c-004c4a5e
 */

void __cdecl FUN_004c4a20(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_004c4a60(param_1);
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
  if (iVar1 != 0) {
    FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____could_not_unlock_surfac_005b425c);
  }
  return;
}


