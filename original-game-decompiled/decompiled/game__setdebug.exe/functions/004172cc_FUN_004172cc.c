
/* ==== FUN_004172cc @ 004172cc ==== 
 * signature: undefined __register FUN_004172cc(int param_1)
 * body: 004172cc-00417317
 */

void FUN_004172cc(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00417174(param_1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x417317;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044767c);
  return;
}


