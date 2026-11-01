
/* ==== FUN_1000adf0 @ 1000adf0 ==== 
 * signature: undefined __stdcall FUN_1000adf0(void)
 * body: 1000adf0-1000af1f
 */

void FUN_1000adf0(void)

{
  if (DAT_10031a80 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_10031a80[3] + DAT_10031a78 * 0x8000),0x8000,0x4000);
    DAT_10031a80[2] = DAT_10031a80[2] | 0x80000000U >> ((byte)DAT_10031a78 & 0x1f);
    *(undefined4 *)(DAT_10031a80[4] + 0xc4 + DAT_10031a78 * 4) = 0;
    *(char *)(DAT_10031a80[4] + 0x43) = *(char *)(DAT_10031a80[4] + 0x43) + -1;
    if (*(char *)(DAT_10031a80[4] + 0x43) == '\0') {
      DAT_10031a80[1] = DAT_10031a80[1] & 0xfffffffe;
    }
    if ((DAT_10031a80[2] == -1) && (1 < DAT_10031a84)) {
      HeapFree(DAT_10031a8c,0,(LPVOID)DAT_10031a80[4]);
      FUN_1000dda0(DAT_10031a80,DAT_10031a80 + 5,
                   (DAT_10031a88 + DAT_10031a84 * 0x14) - (int)(DAT_10031a80 + 5));
      DAT_10031a84 = DAT_10031a84 + -1;
    }
    DAT_10031a80 = (undefined4 *)0x0;
  }
  return;
}


