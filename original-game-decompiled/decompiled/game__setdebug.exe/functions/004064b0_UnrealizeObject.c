
/* ==== GDI32.DLL::UnrealizeObject @ 004064b0 ==== 
 * signature: BOOL __stdcall UnrealizeObject(HGDIOBJ h)
 * body: 004064b0-004064b5
 * thunk to: GDI32.DLL::UnrealizeObject
 */

BOOL __stdcall UnrealizeObject(HGDIOBJ h)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnrealizeObject(h);
  return BVar1;
}


