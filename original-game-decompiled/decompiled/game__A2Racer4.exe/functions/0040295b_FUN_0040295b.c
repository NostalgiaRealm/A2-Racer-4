
/* ==== FUN_0040295b @ 0040295b ==== 
 * signature: undefined4 __cdecl FUN_0040295b(int param_1)
 * body: 0040295b-00402996
 */

undefined4 __cdecl FUN_0040295b(int param_1)

{
  int iVar1;
  
  DAT_00409344 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00409344 != (HANDLE)0x0) {
    iVar1 = FUN_00403b35();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00409344);
  }
  return 0;
}


