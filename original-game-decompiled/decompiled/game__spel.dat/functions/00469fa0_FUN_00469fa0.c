
/* ==== FUN_00469fa0 @ 00469fa0 ==== 
 * signature: int __stdcall FUN_00469fa0(void)
 * body: 00469fa0-00469fdb;00469fe4-00469fe4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00469fdc-00469fe3
 */

int FUN_00469fa0(void)

{
  void *pvVar1;
  
  if (DAT_00712648 == 0) {
    pvVar1 = operator_new(0x28);
    if (pvVar1 == (void *)0x0) {
      DAT_00712648 = 0;
    }
    else {
      DAT_00712648 = FUN_00469f70((int)pvVar1);
    }
    if (DAT_00712648 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s___d__Could_not_allocate_Input_005a7e44);
    }
  }
  return DAT_00712648;
}


