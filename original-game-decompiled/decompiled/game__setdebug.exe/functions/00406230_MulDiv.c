
/* ==== KERNEL32.DLL::MulDiv @ 00406230 ==== 
 * signature: int __stdcall MulDiv(int nNumber, int nNumerator, int nDenominator)
 * body: 00406230-00406235
 * thunk to: KERNEL32.DLL::MulDiv
 */

int __stdcall MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}


