
/* ==== setSBCS @ 1000c7b0 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 1000c7b0-1000c823
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10031960)[local_8] = 0;
  }
  DAT_100317c8 = 0;
  DAT_1003184c = 0;
  DAT_10031a64 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10031840 + local_8 * 2) = 0;
  }
  return;
}


