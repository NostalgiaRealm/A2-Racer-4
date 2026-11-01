
/* ==== GDI32.DLL::GdiFlush @ 00406990 ==== 
 * signature: BOOL __stdcall GdiFlush(void)
 * body: 00406990-00406995
 * thunk to: GDI32.DLL::GdiFlush
 */

BOOL __stdcall GdiFlush(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GdiFlush();
  return BVar1;
}


