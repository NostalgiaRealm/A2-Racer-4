
/* ==== WINMM.DLL::mciSendCommandA @ 00453ef8 ==== 
 * signature: MCIERROR __stdcall mciSendCommandA(MCIDEVICEID mciId, UINT uMsg, DWORD_PTR dwParam1, DWORD_PTR dwParam2)
 * body: 00453ef8-00453efd
 * thunk to: WINMM.DLL::mciSendCommandA
 */

MCIERROR __stdcall
mciSendCommandA(MCIDEVICEID mciId,UINT uMsg,DWORD_PTR dwParam1,DWORD_PTR dwParam2)

{
  MCIERROR MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00453ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mciSendCommandA(mciId,uMsg,dwParam1,dwParam2);
  return MVar1;
}


