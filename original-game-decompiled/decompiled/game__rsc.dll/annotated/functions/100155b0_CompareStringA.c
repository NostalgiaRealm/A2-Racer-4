
/* ==== KERNEL32.DLL::CompareStringA @ 100155b0 ==== 
 * signature: int __stdcall CompareStringA(LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2)
 * body: 100155b0-100155b5
 * thunk to: KERNEL32.DLL::CompareStringA
 */

int CompareStringA(LCID Locale,DWORD dwCmpFlags,PCNZCH lpString1,int cchCount1,PCNZCH lpString2,
                  int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100155b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringA(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}


