
/* ==== USER32.DLL::WaitMessage @ 00407058 ==== 
 * signature: BOOL __stdcall WaitMessage(void)
 * body: 00407058-0040705d
 * thunk to: USER32.DLL::WaitMessage
 */

BOOL __stdcall WaitMessage(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WaitMessage();
  return BVar1;
}


