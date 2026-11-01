
/* ==== FUN_100024c0 @ 100024c0 ==== 
 * signature: uint __stdcall FUN_100024c0(void)
 * body: 100024c0-100026a1
 */

uint FUN_100024c0(void)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_100073f0(0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_10002690:
      FUN_10007490(0x12);
      return local_c;
    }
    if ((&DAT_10031ac0)[local_10] == 0) {
      local_8 = (undefined4 *)FUN_10003710((void *)0x480,2,0x1002c1a8,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10031ac0)[local_10] = local_8;
        DAT_10031bfc = DAT_10031bfc + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10031ac0)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_100029d0(local_c);
      }
      goto LAB_10002690;
    }
    for (local_8 = (undefined4 *)(&DAT_10031ac0)[local_10];
        local_8 < (undefined4 *)((&DAT_10031ac0)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_100073f0(0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_10007490(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_10031ac0)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_10002690;
    local_10 = local_10 + 1;
  } while( true );
}


