
/* ==== FUN_00419374 @ 00419374 ==== 
 * signature: undefined __register FUN_00419374(int param_1)
 * body: 00419374-004193bf
 */

void FUN_00419374(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0041912c(param_1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x4193bf;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac684);
  return;
}


