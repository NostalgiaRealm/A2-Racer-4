
/* ==== KERNEL32.DLL::SizeofResource @ 00406860 ==== 
 * signature: DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo)
 * body: 00406860-00406865
 * thunk to: KERNEL32.DLL::SizeofResource
 */

DWORD __stdcall SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}


