
/* ==== GDI32.DLL::CreateRectRgn @ 00406950 ==== 
 * signature: HRGN __stdcall CreateRectRgn(int x1, int y1, int x2, int y2)
 * body: 00406950-00406955
 * thunk to: GDI32.DLL::CreateRectRgn
 */

HRGN __stdcall CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}


