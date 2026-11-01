
/* ==== FUN_004fd1e0 @ 004fd1e0 ==== 
 * signature: undefined4 __stdcall FUN_004fd1e0(void)
 * body: 004fd1e0-004fd27c
 */

undefined4 FUN_004fd1e0(void)

{
  void *this;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057358b;
  local_c = ExceptionList;
  if ((DAT_0074b9b0 & 1) != 0) {
    return DAT_0074b9b4;
  }
  DAT_0074b9b0 = DAT_0074b9b0 | 1;
  ExceptionList = &local_c;
  this = operator_new(0x30);
  local_4 = 0;
  if (this != (void *)0x0) {
    DAT_0074b9b4 = FUN_004fd2b0(this,0,0x3fe00000,0,0x3fe00000);
    ExceptionList = local_c;
    return DAT_0074b9b4;
  }
  DAT_0074b9b4 = 0;
  ExceptionList = local_c;
  return 0;
}


