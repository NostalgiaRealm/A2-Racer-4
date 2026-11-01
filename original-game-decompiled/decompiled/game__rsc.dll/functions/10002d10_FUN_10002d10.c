
/* ==== FUN_10002d10 @ 10002d10 ==== 
 * signature: undefined __stdcall FUN_10002d10(void)
 * body: 10002d10-10002e3b
 */

void FUN_10002d10(void)

{
  uint local_8;
  
  if (DAT_10032f60 == 0) {
    DAT_10032f60 = 0x200;
  }
  else if (DAT_10032f60 < 0x14) {
    DAT_10032f60 = 0x14;
  }
  DAT_10031c18 = __calloc_dbg(DAT_10032f60,4,2,"_file.c",0x83);
  if (DAT_10031c18 == (undefined1 *)0x0) {
    DAT_10032f60 = 0x14;
    DAT_10031c18 = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10031c18 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10031c18 + local_8 * 4) = &PTR_DAT_1002fa38 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_10031ac0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10031ac0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_1002fa48 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}


