
/* ==== GDI32.DLL::GetDeviceCaps @ 004069d0 ==== 
 * signature: int __stdcall GetDeviceCaps(HDC hdc, int index)
 * body: 004069d0-004069d5
 * thunk to: GDI32.DLL::GetDeviceCaps
 */

int __stdcall GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}


