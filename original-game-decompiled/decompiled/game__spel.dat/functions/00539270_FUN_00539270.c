
/* ==== FUN_00539270 @ 00539270 ==== 
 * signature: undefined __stdcall FUN_00539270(void)
 * body: 00539270-0053931b
 */

void FUN_00539270(void)

{
  ulonglong uVar1;
  int local_c;
  double local_8;
  
  DAT_0074c734 = DAT_0074cd50;
  FUN_00559f8f(&local_c);
  FUN_0055b179(&local_c);
  uVar1 = FUN_00559348();
  local_8 = (double)(uVar1 & 0xffffffff);
  local_8 = (double)(longlong)local_8 * 0.001;
  FUN_00514af0(DAT_0074c6f0);
  FUN_00558953(DAT_0074c5ec,(byte *)s_At__d__d__d____2_5g_CPU_secs__qh_005c7040);
  return;
}


