
/* ==== FUN_10007ad0 @ 10007ad0 ==== 
 * signature: undefined __stdcall FUN_10007ad0(void)
 * body: 10007ad0-10007ba7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007ad0(void)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_10031aa8 == 0) {
    FUN_1000cb60();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100314f0,0x104);
  DAT_100314d8 = &DAT_100314f0;
  if (*DAT_10032f64 == 0) {
    local_18 = &DAT_100314f0;
  }
  else {
    local_18 = DAT_10032f64;
  }
  FUN_10007bb0(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)FUN_10003710((void *)(local_8 + local_10 * 4),2,0x1002cb90,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10007bb0(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_100314bc = local_10 + -1;
  _DAT_100314c0 = local_c;
  return;
}


