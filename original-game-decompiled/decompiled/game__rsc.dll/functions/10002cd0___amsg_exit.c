
/* ==== __amsg_exit @ 10002cd0 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 10002cd0-10002d09
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Debug
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 10002d0a-10002d0e
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_10008350(param_1);
  (*(code *)PTR___exit_1002fa30)(0xff);
  return;
}


