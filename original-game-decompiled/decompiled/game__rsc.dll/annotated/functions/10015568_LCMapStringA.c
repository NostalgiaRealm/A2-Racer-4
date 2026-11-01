
/* ==== KERNEL32.DLL::LCMapStringA @ 10015568 ==== 
 * signature: int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
 * body: 10015568-1001556d
 * thunk to: KERNEL32.DLL::LCMapStringA
 */

int LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest
                )

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}


