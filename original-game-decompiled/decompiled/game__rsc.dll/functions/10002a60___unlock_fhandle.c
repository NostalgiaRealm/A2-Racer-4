
/* ==== __unlock_fhandle @ 10002a60 ==== 
 * signature: void __cdecl __unlock_fhandle(int _Filehandle)
 * body: 10002a60-10002a85
 * note: Library Function - Single Match  __unlock_fhandle  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10031ac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}


