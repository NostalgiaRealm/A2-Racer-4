
/* ==== VERSION.DLL::VerQueryValueA @ 004068b8 ==== 
 * signature: BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID * lplpBuffer, PUINT puLen)
 * body: 004068b8-004068bd
 * thunk to: VERSION.DLL::VerQueryValueA
 */

BOOL __stdcall VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}


