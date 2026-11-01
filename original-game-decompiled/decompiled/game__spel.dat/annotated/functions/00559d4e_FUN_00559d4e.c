
/* ==== FUN_00559d4e @ 00559d4e ==== 
 * signature: undefined __cdecl FUN_00559d4e(LPVOID param_1)
 * body: 00559d4e-00559d7c
 */

void __cdecl FUN_00559d4e(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_0056205a((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_00562085(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_0075008c,0,param_1);
  }
  return;
}


