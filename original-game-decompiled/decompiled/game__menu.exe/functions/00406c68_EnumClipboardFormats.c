
/* ==== USER32.DLL::EnumClipboardFormats @ 00406c68 ==== 
 * signature: UINT __stdcall EnumClipboardFormats(UINT format)
 * body: 00406c68-00406c6d
 * thunk to: USER32.DLL::EnumClipboardFormats
 */

UINT __stdcall EnumClipboardFormats(UINT format)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = EnumClipboardFormats(format);
  return UVar1;
}


