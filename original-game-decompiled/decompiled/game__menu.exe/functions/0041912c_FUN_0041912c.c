
/* ==== FUN_0041912c @ 0041912c ==== 
 * signature: undefined __register FUN_0041912c(int param_1)
 * body: 0041912c-00419150
 */

void FUN_0041912c(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}


