
/* ==== FUN_0054efbd @ 0054efbd ==== 
 * signature: undefined __stdcall FUN_0054efbd(void)
 * body: 0054efbd-0054f007
 */

void FUN_0054efbd(void)

{
  undefined1 local_10 [12];
  
  if ((DAT_0074db30 & 1) == 0) {
    DAT_0074db30 = DAT_0074db30 | 1;
    FUN_0054f008(&DAT_0074db38);
    FUN_005584e0(0x54f07d);
  }
  FUN_0054f065(local_10,0x74db38);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_0058a510);
}


