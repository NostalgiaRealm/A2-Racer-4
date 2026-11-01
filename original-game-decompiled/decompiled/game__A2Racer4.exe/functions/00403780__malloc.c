
/* ==== _malloc @ 00403780 ==== 
 * signature: void * __cdecl _malloc(size_t _Size)
 * body: 00403780-00403791
 * note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_004080e8);
  return pvVar1;
}


