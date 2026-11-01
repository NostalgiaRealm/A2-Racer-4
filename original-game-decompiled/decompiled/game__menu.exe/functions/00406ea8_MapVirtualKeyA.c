
/* ==== USER32.DLL::MapVirtualKeyA @ 00406ea8 ==== 
 * signature: UINT __stdcall MapVirtualKeyA(UINT uCode, UINT uMapType)
 * body: 00406ea8-00406ead
 * thunk to: USER32.DLL::MapVirtualKeyA
 */

UINT __stdcall MapVirtualKeyA(UINT uCode,UINT uMapType)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = MapVirtualKeyA(uCode,uMapType);
  return UVar1;
}


