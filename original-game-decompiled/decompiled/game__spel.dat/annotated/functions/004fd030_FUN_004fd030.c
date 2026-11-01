
/* ==== FUN_004fd030 @ 004fd030 ==== 
 * signature: bool __stdcall FUN_004fd030(int param_1, int param_2)
 * body: 004fd030-004fd069
 */

bool FUN_004fd030(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x90) != '\0') && (*(char *)(param_2 + 0x90) != '\0')) {
    iVar1 = _strncmp((char *)(param_1 + 0x90),(char *)(param_2 + 0x90),8);
    return iVar1 != 0;
  }
  return true;
}


