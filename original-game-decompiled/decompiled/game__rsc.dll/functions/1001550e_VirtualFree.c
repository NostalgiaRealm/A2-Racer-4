
/* ==== KERNEL32.DLL::VirtualFree @ 1001550e ==== 
 * signature: BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType)
 * body: 1001550e-10015513
 * thunk to: KERNEL32.DLL::VirtualFree
 */

BOOL VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001550e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}


