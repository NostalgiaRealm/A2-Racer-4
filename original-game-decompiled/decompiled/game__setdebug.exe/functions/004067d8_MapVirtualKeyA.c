
/* ==== USER32.DLL::MapVirtualKeyA @ 004067d8 ==== 
 * signature: UINT __stdcall MapVirtualKeyA(UINT uCode, UINT uMapType)
 * body: 004067d8-004067dd
 * thunk to: USER32.DLL::MapVirtualKeyA
 */

UINT __stdcall MapVirtualKeyA(UINT uCode,UINT uMapType)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = MapVirtualKeyA(uCode,uMapType);
  return UVar1;
}


