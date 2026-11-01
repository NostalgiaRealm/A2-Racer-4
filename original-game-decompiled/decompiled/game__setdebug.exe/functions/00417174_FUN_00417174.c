
/* ==== FUN_00417174 @ 00417174 ==== 
 * signature: undefined __register FUN_00417174(int param_1)
 * body: 00417174-00417198
 */

void FUN_00417174(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}


