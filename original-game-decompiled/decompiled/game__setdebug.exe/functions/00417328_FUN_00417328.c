
/* ==== FUN_00417328 @ 00417328 ==== 
 * signature: undefined __register FUN_00417328(int param_1)
 * body: 00417328-0041734c
 */

void FUN_00417328(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
  return;
}


