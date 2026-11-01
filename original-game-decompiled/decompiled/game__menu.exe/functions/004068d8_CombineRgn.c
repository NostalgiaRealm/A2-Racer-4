
/* ==== GDI32.DLL::CombineRgn @ 004068d8 ==== 
 * signature: int __stdcall CombineRgn(HRGN hrgnDst, HRGN hrgnSrc1, HRGN hrgnSrc2, int iMode)
 * body: 004068d8-004068dd
 * thunk to: GDI32.DLL::CombineRgn
 */

int __stdcall CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CombineRgn(hrgnDst,hrgnSrc1,hrgnSrc2,iMode);
  return iVar1;
}


