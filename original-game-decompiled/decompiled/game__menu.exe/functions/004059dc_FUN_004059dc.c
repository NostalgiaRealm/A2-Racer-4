
/* ==== FUN_004059dc @ 004059dc ==== 
 * signature: undefined FUN_004059dc(void)
 * body: 004059dc-004059f3
 */

void FUN_004059dc(undefined4 *param_1)

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


