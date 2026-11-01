
/* ==== GDI32.DLL::GetObjectA @ 00406390 ==== 
 * signature: int __stdcall GetObjectA(HANDLE h, int c, LPVOID pv)
 * body: 00406390-00406395
 * thunk to: GDI32.DLL::GetObjectA
 */

int __stdcall GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}


