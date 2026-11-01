
/* ==== USER32.DLL::UnhookWindowsHookEx @ 00407040 ==== 
 * signature: BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
 * body: 00407040-00407045
 * thunk to: USER32.DLL::UnhookWindowsHookEx
 */

BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}


