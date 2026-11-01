
/* ==== FUN_10002e60 @ 10002e60 ==== 
 * signature: undefined __cdecl FUN_10002e60(undefined * * param_1)
 * body: 10002e60-10002e9c
 */

void __cdecl FUN_10002e60(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002fa38) || (&DAT_1002fc98 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_100073f0(((int)(param_1 + -0x400be8e) >> 5) + 0x1c);
  }
  return;
}


