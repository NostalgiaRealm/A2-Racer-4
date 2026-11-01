
/* ==== FUN_00416110 @ 00416110 ==== 
 * signature: undefined __register FUN_00416110(int param_1)
 * body: 00416110-0041611d
 */

void FUN_00416110(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


