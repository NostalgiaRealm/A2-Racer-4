
/* ==== KERNEL32.DLL::HeapFree @ 10015508 ==== 
 * signature: BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
 * body: 10015508-1001550d
 * thunk to: KERNEL32.DLL::HeapFree
 */

BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}


