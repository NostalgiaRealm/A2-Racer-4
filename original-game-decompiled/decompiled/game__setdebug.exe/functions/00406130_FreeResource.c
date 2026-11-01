
/* ==== KERNEL32.DLL::FreeResource @ 00406130 ==== 
 * signature: BOOL __stdcall FreeResource(HGLOBAL hResData)
 * body: 00406130-00406135
 * thunk to: KERNEL32.DLL::FreeResource
 */

BOOL __stdcall FreeResource(HGLOBAL hResData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeResource(hResData);
  return BVar1;
}


