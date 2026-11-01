
/* ==== __calloc_dbg @ 10003b20 ==== 
 * signature: undefined1 * __cdecl __calloc_dbg(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 10003b20-10003b7f
 * note: Library Function - Single Match  __calloc_dbg  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl __calloc_dbg(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)FUN_10003710((void *)(param_2 * param_1),param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}


