
/* ==== thunk_FUN_0042af70 @ 0042b720 ==== 
 * signature: undefined __stdcall thunk_FUN_0042af70(void)
 * body: 0042b720-0042b724
 * thunk to: FUN_0042af70
 */

void thunk_FUN_0042af70(void)

{
  LPVOID pvVar1;
  
  pvVar1 = DAT_006c2f44;
  if (DAT_006c2f44 != (LPVOID)0x0) {
    FUN_0042aed0(DAT_006c2f44);
    FUN_0054b339(pvVar1);
    DAT_006c2f44 = (LPVOID)0x0;
  }
  return;
}


