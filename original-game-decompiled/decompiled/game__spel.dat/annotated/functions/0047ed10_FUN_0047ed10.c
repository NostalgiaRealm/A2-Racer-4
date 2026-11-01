
/* ==== FUN_0047ed10 @ 0047ed10 ==== 
 * signature: undefined __fastcall FUN_0047ed10(void * param_1)
 * body: 0047ed10-0047ed7b
 */

void __fastcall FUN_0047ed10(void *param_1)

{
  char *pcVar1;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056bf02;
  local_10 = ExceptionList;
  pcVar1 = *(char **)((int)param_1 + 0xc);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  ExceptionList = &local_10;
  set_ini_filename(pcVar1);
  local_8 = 0;
  FUN_0047edc0(param_1);
  FUN_0047f140(param_1);
  FUN_004814c0();
  FUN_00482000();
  ExceptionList = local_10;
  return;
}


