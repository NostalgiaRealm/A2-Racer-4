
/* ==== FUN_00417da8 @ 00417da8 ==== 
 * signature: undefined __register FUN_00417da8(int param_1)
 * body: 00417da8-00417db5
 */

void FUN_00417da8(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


