
/* ==== FUN_00403657 @ 00403657 ==== 
 * signature: undefined __cdecl FUN_00403657(LPVOID param_1)
 * body: 00403657-00403685
 */

void __cdecl FUN_00403657(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_00403b73((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_00403b9e(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_00409344,0,param_1);
  }
  return;
}


