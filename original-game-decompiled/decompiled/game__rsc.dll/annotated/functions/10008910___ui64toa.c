
/* ==== __ui64toa @ 10008910 ==== 
 * signature: char * __cdecl __ui64toa(ulonglong _Val, char * _DstBuf, int _Radix)
 * body: 10008910-1000892e
 * note: Library Function - Single Match  __ui64toa  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}


