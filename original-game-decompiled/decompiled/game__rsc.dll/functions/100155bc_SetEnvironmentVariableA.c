
/* ==== KERNEL32.DLL::SetEnvironmentVariableA @ 100155bc ==== 
 * signature: BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
 * body: 100155bc-100155c1
 * thunk to: KERNEL32.DLL::SetEnvironmentVariableA
 */

BOOL SetEnvironmentVariableA(LPCSTR lpName,LPCSTR lpValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100155bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEnvironmentVariableA(lpName,lpValue);
  return BVar1;
}


