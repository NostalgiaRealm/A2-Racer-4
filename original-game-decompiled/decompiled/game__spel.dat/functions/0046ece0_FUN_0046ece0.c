
/* ==== FUN_0046ece0 @ 0046ece0 ==== 
 * signature: undefined __thiscall FUN_0046ece0(void * this, undefined4 param_1)
 * body: 0046ece0-0046ed87
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0046ed88-0046ed9d
 */

void __thiscall FUN_0046ece0(void *this,undefined4 param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056afcf;
  local_10 = ExceptionList;
  local_8 = 1;
  switch(param_1) {
  case 1:
    ExceptionList = &local_10;
    FUN_0046d360(this);
    ExceptionList = local_10;
    return;
  case 2:
    ExceptionList = &local_10;
    FUN_0046d8a0((int)this);
    ExceptionList = local_10;
    return;
  case 3:
  case 4:
    ExceptionList = &local_10;
    FUN_0046e350((int)this);
    ExceptionList = local_10;
    return;
  default:
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Illegal_device_selected__005a88bc);
  }
}


