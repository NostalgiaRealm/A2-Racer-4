
/* ==== KERNEL32.DLL::OutputDebugStringA @ 10015448 ==== 
 * signature: void __stdcall OutputDebugStringA(LPCSTR lpOutputString)
 * body: 10015448-1001544d
 * thunk to: KERNEL32.DLL::OutputDebugStringA
 */

void OutputDebugStringA(LPCSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x10015448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA(lpOutputString);
  return;
}


