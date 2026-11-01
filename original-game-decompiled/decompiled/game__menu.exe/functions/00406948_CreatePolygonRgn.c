
/* ==== GDI32.DLL::CreatePolygonRgn @ 00406948 ==== 
 * signature: HRGN __stdcall CreatePolygonRgn(POINT * pptl, int cPoint, int iMode)
 * body: 00406948-0040694d
 * thunk to: GDI32.DLL::CreatePolygonRgn
 */

HRGN __stdcall CreatePolygonRgn(POINT *pptl,int cPoint,int iMode)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePolygonRgn(pptl,cPoint,iMode);
  return pHVar1;
}


