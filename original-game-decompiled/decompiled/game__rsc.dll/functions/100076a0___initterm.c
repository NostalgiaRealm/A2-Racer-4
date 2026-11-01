
/* ==== __initterm @ 100076a0 ==== 
 * signature: undefined __cdecl __initterm(int * param_1, int * param_2)
 * body: 100076a0-100076c4
 * note: Library Function - Single Match  __initterm  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Debug */

void __cdecl __initterm(int *param_1,int *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


