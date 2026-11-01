
/* ==== FUN_004f5290 @ 004f5290 ==== 
 * signature: undefined __thiscall FUN_004f5290(void * this, uint param_1)
 * body: 004f5290-004f532a
 */

void __thiscall FUN_004f5290(void *this,uint param_1)

{
  void *this_00;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572f0b;
  local_c = ExceptionList;
  if (((byte)*(undefined4 *)this & 0xc) == 4) {
    ExceptionList = &local_c;
    if (*(int *)((int)this + 0x58) == 0) {
      ExceptionList = &local_c;
      this_00 = operator_new(0x14);
      local_4 = 0;
      if (this_00 == (void *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        FUN_00501440(this_00,2);
      }
      *(void **)((int)this + 0x58) = this_00;
    }
    local_4 = 0xffffffff;
    FUN_00501520(*(void **)((int)this + 0x58),*(uint *)(param_1 + 8),param_1);
    ExceptionList = local_c;
    return;
  }
  *(uint *)((int)this + 0x58) = param_1;
  return;
}


