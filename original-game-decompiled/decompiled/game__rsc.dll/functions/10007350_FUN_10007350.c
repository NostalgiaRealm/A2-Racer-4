
/* ==== FUN_10007350 @ 10007350 ==== 
 * signature: undefined __stdcall FUN_10007350(void)
 * body: 10007350-100073ee
 */

void FUN_10007350(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_1002fe9c + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002fe9c + local_8 * 4));
      FUN_100041a0(*(void **)(&DAT_1002fe9c + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fec0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fed0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fee0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002fea0);
  return;
}


