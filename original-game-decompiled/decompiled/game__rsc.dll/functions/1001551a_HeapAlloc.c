
/* ==== KERNEL32.DLL::HeapAlloc @ 1001551a ==== 
 * signature: LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
 * body: 1001551a-1001551f
 * thunk to: KERNEL32.DLL::HeapAlloc
 */

LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001551a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}


