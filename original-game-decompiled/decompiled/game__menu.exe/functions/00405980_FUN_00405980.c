
/* ==== FUN_00405980 @ 00405980 ==== 
 * signature: undefined FUN_00405980(void)
 * body: 00405980-004059ab
 */

DWORD FUN_00405980(undefined4 *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  param_1[4] = 0;
  param_1[3] = 0;
  BVar1 = ReadFile((HANDLE)*param_1,(LPVOID)param_1[5],param_1[2],param_1 + 4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x6d) {
      return DVar2;
    }
  }
  return 0;
}


