
/* ==== FUN_004deb20 @ 004deb20 ==== 
 * signature: undefined1 * __thiscall FUN_004deb20(void * this, undefined1 * param_1)
 * body: 004deb20-004debbd
 */

undefined1 * __thiscall FUN_004deb20(void *this,undefined1 *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = FUN_004796b0(local_1c,(undefined1 *)(*(int *)((int)this + 8) + 0xc),&DAT_005b159c);
  local_4 = 0;
  FUN_0047c9a0(param_1,puVar2,(int)this + 0xc);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return param_1;
}


