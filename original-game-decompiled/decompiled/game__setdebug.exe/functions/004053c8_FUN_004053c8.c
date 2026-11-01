
/* ==== FUN_004053c8 @ 004053c8 ==== 
 * signature: undefined FUN_004053c8(void)
 * body: 004053c8-004053f3
 */

DWORD FUN_004053c8(undefined4 *param_1)

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


