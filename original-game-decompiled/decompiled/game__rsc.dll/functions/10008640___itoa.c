
/* ==== __itoa @ 10008640 ==== 
 * signature: char * __cdecl __itoa(int _Value, char * _Dest, int _Radix)
 * body: 10008640-10008681
 * note: Library Function - Single Match  __itoa  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  if ((_Radix == 10) && (_Value < 0)) {
    xtoa(_Value,_Dest,10,1);
  }
  else {
    xtoa(_Value,_Dest,_Radix,0);
  }
  return _Dest;
}


