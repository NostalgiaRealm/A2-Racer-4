
/* ==== GDI32.DLL::RemoveFontResourceA @ 00406aa0 ==== 
 * signature: BOOL __stdcall RemoveFontResourceA(LPCSTR lpFileName)
 * body: 00406aa0-00406aa5
 * thunk to: GDI32.DLL::RemoveFontResourceA
 */

BOOL __stdcall RemoveFontResourceA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveFontResourceA(lpFileName);
  return BVar1;
}


