
/* ==== USER32.DLL::DrawEdge @ 00406568 ==== 
 * signature: BOOL __stdcall DrawEdge(HDC hdc, LPRECT qrc, UINT edge, UINT grfFlags)
 * body: 00406568-0040656d
 * thunk to: USER32.DLL::DrawEdge
 */

BOOL __stdcall DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawEdge(hdc,qrc,edge,grfFlags);
  return BVar1;
}


