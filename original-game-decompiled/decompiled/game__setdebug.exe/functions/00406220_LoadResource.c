
/* ==== KERNEL32.DLL::LoadResource @ 00406220 ==== 
 * signature: HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
 * body: 00406220-00406225
 * thunk to: KERNEL32.DLL::LoadResource
 */

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}


