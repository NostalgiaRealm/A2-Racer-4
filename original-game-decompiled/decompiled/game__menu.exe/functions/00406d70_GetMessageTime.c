
/* ==== USER32.DLL::GetMessageTime @ 00406d70 ==== 
 * signature: LONG __stdcall GetMessageTime(void)
 * body: 00406d70-00406d75
 * thunk to: USER32.DLL::GetMessageTime
 */

LONG __stdcall GetMessageTime(void)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetMessageTime();
  return LVar1;
}


