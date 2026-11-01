
/* ==== FUN_00425240 @ 00425240 ==== 
 * signature: undefined __thiscall FUN_00425240(void * this, float param_1, float param_2)
 * body: 00425240-004252b5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004252b6-004252bc
 */

void __thiscall FUN_00425240(void *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  if ((0.0 <= param_1) && (param_1 <= param_2)) {
    *(float *)((int)this + 8) = param_2;
    *(float *)((int)this + 4) = param_1;
    iVar1 = FUN_00426ba0(0x5d3460);
    iVar2 = FUN_00426b90((undefined4 *)&DAT_005d3460);
    *(float *)((int)this + 0x10) =
         (float)(iVar1 - iVar2) / (*(float *)((int)this + 8) - *(float *)((int)this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Impulse_values_invalid__00595c34);
}


