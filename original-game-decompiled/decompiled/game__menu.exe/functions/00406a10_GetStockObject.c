
/* ==== GDI32.DLL::GetStockObject @ 00406a10 ==== 
 * signature: HGDIOBJ __stdcall GetStockObject(int i)
 * body: 00406a10-00406a15
 * thunk to: GDI32.DLL::GetStockObject
 */

HGDIOBJ __stdcall GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}


