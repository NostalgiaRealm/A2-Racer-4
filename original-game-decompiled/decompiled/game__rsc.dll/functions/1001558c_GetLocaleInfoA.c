
/* ==== KERNEL32.DLL::GetLocaleInfoA @ 1001558c ==== 
 * signature: int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
 * body: 1001558c-10015591
 * thunk to: KERNEL32.DLL::GetLocaleInfoA
 */

int GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


