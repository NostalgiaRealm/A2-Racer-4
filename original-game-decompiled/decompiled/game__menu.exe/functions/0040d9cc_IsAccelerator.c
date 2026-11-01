
/* ==== OLE32.DLL::IsAccelerator @ 0040d9cc ==== 
 * signature: BOOL __stdcall IsAccelerator(HACCEL hAccel, int cAccelEntries, LPMSG lpMsg, WORD * lpwCmd)
 * body: 0040d9cc-0040d9d1
 * thunk to: OLE32.DLL::IsAccelerator
 */

BOOL __stdcall IsAccelerator(HACCEL hAccel,int cAccelEntries,LPMSG lpMsg,WORD *lpwCmd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsAccelerator(hAccel,cAccelEntries,lpMsg,lpwCmd);
  return BVar1;
}


