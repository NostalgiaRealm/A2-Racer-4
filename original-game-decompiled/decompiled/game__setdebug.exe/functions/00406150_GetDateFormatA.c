
/* ==== KERNEL32.DLL::GetDateFormatA @ 00406150 ==== 
 * signature: int __stdcall GetDateFormatA(LCID Locale, DWORD dwFlags, SYSTEMTIME * lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate)
 * body: 00406150-00406155
 * thunk to: KERNEL32.DLL::GetDateFormatA
 */

int __stdcall
GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,
              int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}


