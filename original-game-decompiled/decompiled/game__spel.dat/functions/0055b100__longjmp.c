
/* ==== _longjmp @ 0055b100 ==== 
 * signature: noreturn void __cdecl _longjmp(int * _Buf, int _Value)
 * body: 0055b100-0055b177
 * note: Library Function - Single Match  _longjmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release
 */

/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    _longjmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl _longjmp(int *_Buf,int _Value)

{
  PVOID pvVar1;
  int iVar2;
  
  pvVar1 = (PVOID)_Buf[6];
  if (pvVar1 != ExceptionList) {
    __global_unwind2(pvVar1);
  }
  if (pvVar1 != (PVOID)0x0) {
    iVar2 = FUN_005634b0();
    if ((iVar2 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2((int)pvVar1,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_005580c6();
                    /* WARNING: Could not recover jumptable at 0x0055b175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}


