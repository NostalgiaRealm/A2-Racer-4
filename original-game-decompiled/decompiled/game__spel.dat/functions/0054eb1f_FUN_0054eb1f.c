
/* ==== FUN_0054eb1f @ 0054eb1f ==== 
 * signature: int __cdecl FUN_0054eb1f(undefined4 param_1)
 * body: 0054eb1f-0054eb4c
 */

int __cdecl FUN_0054eb1f(undefined4 param_1)

{
  int iVar1;
  
  if ((WCHAR)param_1 != L'\xffff') {
    iVar1 = FUN_0054eaa1((LPSTR)((int)&param_1 + 2),(WCHAR)param_1,0,(int *)0x0);
    if (iVar1 == 1) {
      return (int)param_1._2_1_;
    }
  }
  return -1;
}


