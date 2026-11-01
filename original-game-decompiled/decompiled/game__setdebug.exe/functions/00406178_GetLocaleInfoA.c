
/* ==== KERNEL32.DLL::GetLocaleInfoA @ 00406178 ==== 
 * signature: int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
 * body: 00406178-0040617d
 * thunk to: KERNEL32.DLL::GetLocaleInfoA
 */

int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


