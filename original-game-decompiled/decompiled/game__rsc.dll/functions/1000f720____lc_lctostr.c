
/* ==== ___lc_lctostr @ 1000f720 ==== 
 * signature: undefined __cdecl ___lc_lctostr(uint * param_1, uint * param_2)
 * body: 1000f720-1000f784
 * note: Library Function - Single Match  ___lc_lctostr  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_10001ec0(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}


