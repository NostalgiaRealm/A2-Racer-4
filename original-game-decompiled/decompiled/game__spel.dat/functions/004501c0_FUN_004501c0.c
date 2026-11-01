
/* ==== FUN_004501c0 @ 004501c0 ==== 
 * signature: int __stdcall FUN_004501c0(void)
 * body: 004501c0-0045021a;00450224-00450258
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045021b-00450223
 */

int FUN_004501c0(void)

{
  int iVar1;
  int local_1c [7];
  
  local_1c[4] = 0;
  local_1c[0] = 55000;
  local_1c[5] = 0;
  local_1c[1] = 35000;
  local_1c[2] = 15000;
  local_1c[3] = 0;
  local_1c[6] = 0;
  if ((-1 < DAT_006fbaa4) && (DAT_006fbaa4 < DAT_005d2ab0 + 1)) {
    iVar1 = local_1c[DAT_006fbaa4];
    if (DAT_006fb898 == DAT_006fa588 + -1) {
      iVar1 = iVar1 << 2;
    }
    if ((DAT_006fbaa4 == DAT_005d2ab0) && (DAT_006fb8d4 == 0)) {
      iVar1 = 5000;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Illegal_index_player_pos_005a25b4);
}


