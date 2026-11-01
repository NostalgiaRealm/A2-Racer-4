
/* ==== KERNEL32.DLL::HeapReAlloc @ 10015520 ==== 
 * signature: LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
 * body: 10015520-10015525
 * thunk to: KERNEL32.DLL::HeapReAlloc
 */

LPVOID HeapReAlloc(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapReAlloc(hHeap,dwFlags,lpMem,dwBytes);
  return pvVar1;
}


