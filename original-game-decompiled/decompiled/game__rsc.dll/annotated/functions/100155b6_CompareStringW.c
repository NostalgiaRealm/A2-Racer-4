
/* ==== KERNEL32.DLL::CompareStringW @ 100155b6 ==== 
 * signature: int __stdcall CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2)
 * body: 100155b6-100155bb
 * thunk to: KERNEL32.DLL::CompareStringW
 */

int CompareStringW(LCID Locale,DWORD dwCmpFlags,PCNZWCH lpString1,int cchCount1,PCNZWCH lpString2,
                  int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100155b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringW(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}


