
/* ==== KERNEL32.DLL::SetEvent @ 00406840 ==== 
 * signature: BOOL __stdcall SetEvent(HANDLE hEvent)
 * body: 00406840-00406845
 * thunk to: KERNEL32.DLL::SetEvent
 */

BOOL __stdcall SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}


