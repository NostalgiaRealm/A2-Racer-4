
/* ==== KERNEL32.DLL::VirtualQuery @ 004012e4 ==== 
 * signature: SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength)
 * body: 004012e4-004012e9
 * thunk to: KERNEL32.DLL::VirtualQuery
 */

SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}


