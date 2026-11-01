
/* ==== FUN_00472190 @ 00472190 ==== 
 * signature: undefined __stdcall FUN_00472190(void)
 * body: 00472190-004721f8;004721fc-0047220a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004721f9-004721fb
 */

void FUN_00472190(void)

{
  undefined4 *puVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b355;
  local_c = ExceptionList;
  if (DAT_00712654 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x8c);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_00712654 = (undefined4 *)0x0;
    }
    else {
      DAT_00712654 = FUN_00471ec0(puVar1);
    }
    local_4 = 0xffffffff;
    if (DAT_00712654 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s___d__Could_not_create_console_005a8d5c);
    }
  }
  ExceptionList = local_c;
  return;
}


