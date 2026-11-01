
/* ==== GDI32.DLL::GetDeviceCaps @ 00406370 ==== 
 * signature: int __stdcall GetDeviceCaps(HDC hdc, int index)
 * body: 00406370-00406375
 * thunk to: GDI32.DLL::GetDeviceCaps
 */

int __stdcall GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}


