
/* ==== FUN_00493500 @ 00493500 ==== 
 * signature: undefined __thiscall FUN_00493500(void * this, undefined4 * param_1, int param_2)
 * body: 00493500-0049352a;0049352e-00493580;00493584-004935a4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049352b-0049352d 00493581-00493583
 */

void __thiscall FUN_00493500(void *this,undefined4 *param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  
  if ((param_2 < 0) || (*(int *)((int)this + 0x48) <= param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Illegal_index_in_OrigPos_005ad278);
  }
  pfVar1 = (float *)(*(int *)((int)this + 0x44) + param_2 * 0xc);
  if ((*pfVar1 == DAT_007127d0) && ((pfVar1[1] == DAT_007127d4 && (pfVar1[2] == DAT_007127d8)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Trying_to_get_a_position_005ad2e4);
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x44) + param_2 * 0xc);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return;
}


