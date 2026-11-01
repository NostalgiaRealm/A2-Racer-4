
/* ==== __mbsnbicoll @ 00562d68 ==== 
 * signature: int __cdecl __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * body: 00562d68-00562da6
 * note: Library Function - Single Match  __mbsnbicoll  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_0055cf6a(DAT_007503c4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_007501a4);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


