
/* ==== GDI32.DLL::SetROP2 @ 00406b00 ==== 
 * signature: int __stdcall SetROP2(HDC hdc, int rop2)
 * body: 00406b00-00406b05
 * thunk to: GDI32.DLL::SetROP2
 */

int __stdcall SetROP2(HDC hdc,int rop2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetROP2(hdc,rop2);
  return iVar1;
}


