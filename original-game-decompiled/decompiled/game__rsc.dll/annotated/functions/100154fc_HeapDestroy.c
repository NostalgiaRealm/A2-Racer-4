
/* ==== KERNEL32.DLL::HeapDestroy @ 100154fc ==== 
 * signature: BOOL __stdcall HeapDestroy(HANDLE hHeap)
 * body: 100154fc-10015501
 * thunk to: KERNEL32.DLL::HeapDestroy
 */

BOOL HeapDestroy(HANDLE hHeap)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapDestroy(hHeap);
  return BVar1;
}


