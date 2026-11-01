
/* ==== FUN_0040ebe0 @ 0040ebe0 ==== 
 * signature: undefined1 * __stdcall FUN_0040ebe0(void)
 * body: 0040ebe0-0040ec45;0040ec4e-0040ec5c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040ec46-0040ec4d
 */

undefined1 * FUN_0040ebe0(void)

{
  undefined1 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569911;
  local_c = ExceptionList;
  if (DAT_005d1b0c == (undefined1 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x2c);
    local_4 = 0;
    if (puVar1 == (undefined1 *)0x0) {
      DAT_005d1b0c = (undefined1 *)0x0;
    }
    else {
      DAT_005d1b0c = FUN_0040e9b0(puVar1);
    }
    local_4 = 0xffffffff;
    if (DAT_005d1b0c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Cannot_create_AI_manage_005923c8);
    }
  }
  ExceptionList = local_c;
  return DAT_005d1b0c;
}


