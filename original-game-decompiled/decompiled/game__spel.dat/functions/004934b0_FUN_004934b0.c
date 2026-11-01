
/* ==== FUN_004934b0 @ 004934b0 ==== 
 * signature: undefined __thiscall FUN_004934b0(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 004934b0-004934d9;004934dd-004934fe
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004934da-004934dc
 */

void __thiscall
FUN_004934b0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x48))) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 0x44) + param_1 * 0xc);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Illegal_index_in_OrigPos_005ad20c);
}


