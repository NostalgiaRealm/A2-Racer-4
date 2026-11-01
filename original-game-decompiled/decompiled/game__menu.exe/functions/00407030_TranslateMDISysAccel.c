
/* ==== USER32.DLL::TranslateMDISysAccel @ 00407030 ==== 
 * signature: BOOL __stdcall TranslateMDISysAccel(HWND hWndClient, LPMSG lpMsg)
 * body: 00407030-00407035
 * thunk to: USER32.DLL::TranslateMDISysAccel
 */

BOOL __stdcall TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMDISysAccel(hWndClient,lpMsg);
  return BVar1;
}


