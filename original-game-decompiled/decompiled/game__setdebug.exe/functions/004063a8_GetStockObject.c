
/* ==== GDI32.DLL::GetStockObject @ 004063a8 ==== 
 * signature: HGDIOBJ __stdcall GetStockObject(int i)
 * body: 004063a8-004063ad
 * thunk to: GDI32.DLL::GetStockObject
 */

HGDIOBJ __stdcall GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}


