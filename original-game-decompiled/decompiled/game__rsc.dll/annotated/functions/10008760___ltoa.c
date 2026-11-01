
/* ==== __ltoa @ 10008760 ==== 
 * signature: char * __cdecl __ltoa(long _Value, char * _Dest, int _Radix)
 * body: 10008760-1000879e
 * note: Library Function - Single Match  __ltoa  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __ltoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ltoa(long _Value,char *_Dest,int _Radix)

{
  undefined4 local_8;
  
  if ((_Radix == 10) && (_Value < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  xtoa(_Value,_Dest,_Radix,local_8);
  return _Dest;
}


