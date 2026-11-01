
/* ==== FUN_004193d0 @ 004193d0 ==== 
 * signature: undefined __register FUN_004193d0(int param_1)
 * body: 004193d0-004193f4
 */

void FUN_004193d0(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
  return;
}


