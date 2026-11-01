
/* ==== USER32.DLL::UnhookWindowsHookEx @ 00406940 ==== 
 * signature: BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
 * body: 00406940-00406945
 * thunk to: USER32.DLL::UnhookWindowsHookEx
 */

BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}


