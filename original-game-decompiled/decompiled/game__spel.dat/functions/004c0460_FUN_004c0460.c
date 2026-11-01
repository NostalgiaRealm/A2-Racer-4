
/* ==== FUN_004c0460 @ 004c0460 ==== 
 * signature: undefined __stdcall FUN_004c0460(void)
 * body: 004c0460-004c048f;004c0493-004c0493
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0490-004c0492
 */

void FUN_004c0460(void)

{
  int iVar1;
  
  iVar1 = (**(code **)*DAT_00740894)(DAT_00740894,&DAT_00578d50,&DAT_0073b778);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____D3DError____s_005b2868);
  }
  return;
}


