
/* ==== __ultoa @ 100087a0 ==== 
 * signature: char * __cdecl __ultoa(ulong _Value, char * _Dest, int _Radix)
 * body: 100087a0-100087bd
 * note: Library Function - Single Match  __ultoa  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}


