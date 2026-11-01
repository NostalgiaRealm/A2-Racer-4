
/* ==== KERNEL32.DLL::GetDateFormatA @ 00406720 ==== 
 * signature: int __stdcall GetDateFormatA(LCID Locale, DWORD dwFlags, SYSTEMTIME * lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate)
 * body: 00406720-00406725
 * thunk to: KERNEL32.DLL::GetDateFormatA
 */

int __stdcall
GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,
              int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}


