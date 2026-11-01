
/* ==== OLE32.DLL::OleSetMenuDescriptor @ 0040d9bc ==== 
 * signature: HRESULT __stdcall OleSetMenuDescriptor(HOLEMENU holemenu, HWND hwndFrame, HWND hwndActiveObject, LPOLEINPLACEFRAME lpFrame, LPOLEINPLACEACTIVEOBJECT lpActiveObj)
 * body: 0040d9bc-0040d9c1
 * thunk to: OLE32.DLL::OleSetMenuDescriptor
 */

HRESULT __stdcall
OleSetMenuDescriptor
          (HOLEMENU holemenu,HWND hwndFrame,HWND hwndActiveObject,LPOLEINPLACEFRAME lpFrame,
          LPOLEINPLACEACTIVEOBJECT lpActiveObj)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040d9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = OleSetMenuDescriptor(holemenu,hwndFrame,hwndActiveObject,lpFrame,lpActiveObj);
  return HVar1;
}


