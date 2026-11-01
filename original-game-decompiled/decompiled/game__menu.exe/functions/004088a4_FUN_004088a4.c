
/* ==== FUN_004088a4 @ 004088a4 ==== 
 * signature: undefined __register FUN_004088a4(LPWORD param_1)
 * body: 004088a4-004088c7
 */

void FUN_004088a4(LPWORD param_1)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 10),(LPWIN32_FIND_DATAA)(param_1 + 0xc));
  if (BVar1 != 0) {
    FUN_004087f0(param_1);
    return;
  }
  GetLastError();
  return;
}


