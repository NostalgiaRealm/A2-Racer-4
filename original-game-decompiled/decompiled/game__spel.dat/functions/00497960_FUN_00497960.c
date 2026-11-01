
/* ==== FUN_00497960 @ 00497960 ==== 
 * signature: undefined4 * __stdcall FUN_00497960(void)
 * body: 00497960-004979c5;004979ce-004979dc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004979c6-004979cd
 */

undefined4 * FUN_00497960(void)

{
  undefined4 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e495;
  local_c = ExceptionList;
  if (DAT_007127f0 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x28);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_007127f0 = (undefined4 *)0x0;
    }
    else {
      DAT_007127f0 = FUN_00497800(puVar1);
    }
    local_4 = 0xffffffff;
    if (DAT_007127f0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Could_not_get_instance_o_005ade78);
    }
  }
  ExceptionList = local_c;
  return DAT_007127f0;
}


