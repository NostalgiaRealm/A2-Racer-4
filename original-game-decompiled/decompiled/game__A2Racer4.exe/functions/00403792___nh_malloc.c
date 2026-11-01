
/* ==== __nh_malloc @ 00403792 ==== 
 * signature: void * __cdecl __nh_malloc(size_t _Size, int _NhFlag)
 * body: 00403792-004037bd
 * note: Library Function - Single Match  __nh_malloc  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_004037be((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_00404aa8(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


