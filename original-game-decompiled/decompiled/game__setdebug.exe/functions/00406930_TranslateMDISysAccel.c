
/* ==== USER32.DLL::TranslateMDISysAccel @ 00406930 ==== 
 * signature: BOOL __stdcall TranslateMDISysAccel(HWND hWndClient, LPMSG lpMsg)
 * body: 00406930-00406935
 * thunk to: USER32.DLL::TranslateMDISysAccel
 */

BOOL __stdcall TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMDISysAccel(hWndClient,lpMsg);
  return BVar1;
}


