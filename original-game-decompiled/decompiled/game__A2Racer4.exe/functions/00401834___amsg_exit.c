
/* ==== __amsg_exit @ 00401834 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 00401834-00401855
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00401856-00401858
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00407f98 == 1) {
    FUN_00402b68();
  }
  FUN_00402ba1(param_1);
  (*(code *)PTR___exit_00407210)(0xff);
  return;
}


