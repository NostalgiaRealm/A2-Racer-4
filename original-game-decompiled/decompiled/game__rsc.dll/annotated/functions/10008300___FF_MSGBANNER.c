
/* ==== __FF_MSGBANNER @ 10008300 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 10008300-10008348
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
    FUN_10008350(0xfc);
    if (DAT_100315f8 != (code *)0x0) {
      (*DAT_100315f8)();
    }
    FUN_10008350(0xff);
  }
  return;
}


