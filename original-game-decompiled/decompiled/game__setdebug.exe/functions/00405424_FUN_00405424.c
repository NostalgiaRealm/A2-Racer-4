
/* ==== FUN_00405424 @ 00405424 ==== 
 * signature: undefined FUN_00405424(void)
 * body: 00405424-0040543b
 */

void FUN_00405424(undefined4 *param_1)

{
  BOOL BVar1;
  
  param_1[1] = 0xd7b0;
  BVar1 = CloseHandle((HANDLE)*param_1);
  if (BVar1 == 1) {
    return;
  }
  GetLastError();
  return;
}


