
/* ==== __isatty @ 1000e8b0 ==== 
 * signature: int __cdecl __isatty(int _FileHandle)
 * body: 1000e8b0-1000e8e1
 * note: Library Function - Single Match  __isatty  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_10031bfc) {
    uVar1 = (int)*(char *)((&DAT_10031ac0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


