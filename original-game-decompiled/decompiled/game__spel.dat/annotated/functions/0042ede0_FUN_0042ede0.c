
/* ==== FUN_0042ede0 @ 0042ede0 ==== 
 * signature: undefined __fastcall FUN_0042ede0(int * param_1)
 * body: 0042ede0-0042edfd;0042ee01-0042ee29;0042ee2d-0042ee48
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042edfe-0042ee00 0042ee2a-0042ee2c
 */

void __fastcall FUN_0042ede0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (param_1[5] != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Minimum_RPM_table_alread_005979bc);
  }
  pvVar1 = operator_new(*param_1 << 2);
  param_1[5] = (int)pvVar1;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Could_not_allocate_RPM_t_00597a10);
  }
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1[5] + -4 + iVar2 * 4) = 0xffffffff;
    } while (iVar2 < *param_1);
  }
  return;
}


