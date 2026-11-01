
/* ==== USER32.DLL::LoadStringA @ 004067d0 ==== 
 * signature: int __stdcall LoadStringA(HINSTANCE hInstance, UINT uID, LPSTR lpBuffer, int cchBufferMax)
 * body: 004067d0-004067d5
 * thunk to: USER32.DLL::LoadStringA
 */

int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}


