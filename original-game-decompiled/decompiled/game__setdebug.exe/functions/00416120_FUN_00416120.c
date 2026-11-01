
/* ==== FUN_00416120 @ 00416120 ==== 
 * signature: undefined __register FUN_00416120(int param_1)
 * body: 00416120-0041612d
 */

void FUN_00416120(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}


