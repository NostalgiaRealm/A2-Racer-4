
/* ==== GDI32.DLL::UnrealizeObject @ 00406b40 ==== 
 * signature: BOOL __stdcall UnrealizeObject(HGDIOBJ h)
 * body: 00406b40-00406b45
 * thunk to: GDI32.DLL::UnrealizeObject
 */

BOOL __stdcall UnrealizeObject(HGDIOBJ h)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnrealizeObject(h);
  return BVar1;
}


