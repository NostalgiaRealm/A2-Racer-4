
/* ==== __amsg_exit @ 0055980b ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 0055980b-0055982c
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0055982d-0055982f
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_0074dc58 == 1) {
    FUN_00561a92();
  }
  FUN_00561acb(param_1);
  (*(code *)PTR___exit_005c7bd0)(0xff);
  return;
}


