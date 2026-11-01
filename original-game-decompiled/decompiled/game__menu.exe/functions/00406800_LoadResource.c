
/* ==== KERNEL32.DLL::LoadResource @ 00406800 ==== 
 * signature: HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
 * body: 00406800-00406805
 * thunk to: KERNEL32.DLL::LoadResource
 */

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}


