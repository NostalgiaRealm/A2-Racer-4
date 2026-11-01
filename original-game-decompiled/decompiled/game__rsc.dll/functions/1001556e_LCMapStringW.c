
/* ==== KERNEL32.DLL::LCMapStringW @ 1001556e ==== 
 * signature: int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
 * body: 1001556e-10015573
 * thunk to: KERNEL32.DLL::LCMapStringW
 */

int LCMapStringW(LCID Locale,DWORD dwMapFlags,LPCWSTR lpSrcStr,int cchSrc,LPWSTR lpDestStr,
                int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001556e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringW(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}


