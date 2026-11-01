
/* ==== GDI32.DLL::LPtoDP @ 00406a50 ==== 
 * signature: BOOL __stdcall LPtoDP(HDC hdc, LPPOINT lppt, int c)
 * body: 00406a50-00406a55
 * thunk to: GDI32.DLL::LPtoDP
 */

BOOL __stdcall LPtoDP(HDC hdc,LPPOINT lppt,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LPtoDP(hdc,lppt,c);
  return BVar1;
}


