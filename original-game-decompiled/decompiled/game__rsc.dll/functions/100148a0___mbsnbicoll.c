
/* ==== __mbsnbicoll @ 100148a0 ==== 
 * signature: int __cdecl __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * body: 100148a0-100148ee
 * note: Library Function - Single Match  __mbsnbicoll  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_100149a0(DAT_10031a64,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_100317c8);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}


