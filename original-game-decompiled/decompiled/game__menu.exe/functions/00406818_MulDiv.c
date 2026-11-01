
/* ==== KERNEL32.DLL::MulDiv @ 00406818 ==== 
 * signature: int __stdcall MulDiv(int nNumber, int nNumerator, int nDenominator)
 * body: 00406818-0040681d
 * thunk to: KERNEL32.DLL::MulDiv
 */

int __stdcall MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}


