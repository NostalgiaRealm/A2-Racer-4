
/* ==== FUN_005584f2 @ 005584f2 ==== 
 * signature: undefined __stdcall FUN_005584f2(void)
 * body: 005584f2-00558520
 */

void FUN_005584f2(void)

{
  DAT_007503dc = _malloc(0x80);
  if (DAT_007503dc == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_007503dc = 0;
  DAT_007503d8 = DAT_007503dc;
  return;
}


