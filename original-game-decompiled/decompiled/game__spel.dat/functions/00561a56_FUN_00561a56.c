
/* ==== FUN_00561a56 @ 00561a56 ==== 
 * signature: undefined4 __cdecl FUN_00561a56(int param_1)
 * body: 00561a56-00561a91
 */

undefined4 __cdecl FUN_00561a56(int param_1)

{
  int iVar1;
  
  DAT_0075008c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_0075008c != (HANDLE)0x0) {
    iVar1 = FUN_0056201c();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_0075008c);
  }
  return 0;
}


