
/* ==== _malloc @ 00559f1b ==== 
 * signature: void * __cdecl _malloc(size_t _Size)
 * body: 00559f1b-00559f2c
 * note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_0074de78);
  return pvVar1;
}


