
/* ==== __strcats @ 1000f570 ==== 
 * signature: undefined __cdecl __strcats(uint * param_1, int param_2)
 * body: 1000f570-1000f5be
 * note: Library Function - Single Match  __strcats  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_10001ed0(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}


