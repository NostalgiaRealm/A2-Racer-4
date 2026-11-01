
/* ==== KERNEL32.DLL::HeapValidate @ 10015472 ==== 
 * signature: BOOL __stdcall HeapValidate(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)
 * body: 10015472-10015477
 * thunk to: KERNEL32.DLL::HeapValidate
 */

BOOL HeapValidate(HANDLE hHeap,DWORD dwFlags,LPCVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapValidate(hHeap,dwFlags,lpMem);
  return BVar1;
}


