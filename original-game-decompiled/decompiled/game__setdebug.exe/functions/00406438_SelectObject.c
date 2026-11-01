
/* ==== GDI32.DLL::SelectObject @ 00406438 ==== 
 * signature: HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
 * body: 00406438-0040643d
 * thunk to: GDI32.DLL::SelectObject
 */

HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}


