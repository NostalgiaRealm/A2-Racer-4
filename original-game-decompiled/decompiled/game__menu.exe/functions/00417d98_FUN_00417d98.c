
/* ==== FUN_00417d98 @ 00417d98 ==== 
 * signature: undefined __register FUN_00417d98(int param_1)
 * body: 00417d98-00417da5
 */

void FUN_00417d98(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


