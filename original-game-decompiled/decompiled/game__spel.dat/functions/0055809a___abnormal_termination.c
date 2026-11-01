
/* ==== __abnormal_termination @ 0055809a ==== 
 * signature: int __cdecl __abnormal_termination(void)
 * body: 0055809a-005580bc
 * note: Library Function - Single Match  __abnormal_termination  Library: Visual Studio
 */

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(code **)((int)ExceptionList + 4) == FUN_00558010) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}


