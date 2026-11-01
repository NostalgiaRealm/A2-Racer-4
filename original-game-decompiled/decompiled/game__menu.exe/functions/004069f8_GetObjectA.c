
/* ==== GDI32.DLL::GetObjectA @ 004069f8 ==== 
 * signature: int __stdcall GetObjectA(HANDLE h, int c, LPVOID pv)
 * body: 004069f8-004069fd
 * thunk to: GDI32.DLL::GetObjectA
 */

int __stdcall GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004069f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}


