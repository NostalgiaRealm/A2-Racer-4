
/* ==== USER32.DLL::RegisterClipboardFormatA @ 00406f10 ==== 
 * signature: UINT __stdcall RegisterClipboardFormatA(LPCSTR lpszFormat)
 * body: 00406f10-00406f15
 * thunk to: USER32.DLL::RegisterClipboardFormatA
 */

UINT __stdcall RegisterClipboardFormatA(LPCSTR lpszFormat)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterClipboardFormatA(lpszFormat);
  return UVar1;
}


