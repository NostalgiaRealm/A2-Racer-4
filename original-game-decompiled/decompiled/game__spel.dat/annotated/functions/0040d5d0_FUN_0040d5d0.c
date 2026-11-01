
/* ==== FUN_0040d5d0 @ 0040d5d0 ==== 
 * signature: undefined4 __cdecl FUN_0040d5d0(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 0040d5d0-0040d5ed;0040d5f1-0040d612;0040d616-0040d63b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040d5ee-0040d5f0 0040d613-0040d615
 */

undefined4 __cdecl
FUN_0040d5d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Pointer_to_state_transi_0059199c);
  }
  if ((-1 < param_2) && (param_2 < 0x40)) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + param_1);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    return CONCAT31((int3)((uint)puVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____Reached_maximum_number_o_005919f4);
}


