
/* ==== FUN_0041d5d8 @ 0041d5d8 ==== 
 * signature: undefined __register FUN_0041d5d8(byte param_1, undefined4 param_2, undefined * param_3)
 * body: 0041d5d8-0041d696
 */

void FUN_0041d5d8(byte param_1,undefined4 param_2,undefined *param_3)

{
  LPCSTR lpProcName;
  FARPROC pFVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined *local_8;
  
  pcStack_18 = (code *)0x41d5ee;
  local_8 = param_3;
  FUN_00403dec((int)param_3);
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((&DAT_004476d8)[param_1] == '\0') {
    if (DAT_004476d4 == (HMODULE)0x0) {
      pFVar1 = (FARPROC)0x0;
    }
    else {
      pcStack_18 = (code *)&stack0xfffffffc;
      if (((param_1 == 0) && (pcStack_18 = (code *)&stack0xfffffffc, DAT_004476e0 == '\0')) &&
         (pcStack_18 = (code *)&stack0xfffffffc,
         DAT_004476c8 = FUN_0041d5d8(4,DAT_004476c8,"GetMonitorInfoA"), DAT_004476e0 == '\0')) {
        FUN_004039b8((int *)&local_8);
      }
      lpProcName = FUN_00403dfc(local_8);
      pFVar1 = GetProcAddress(DAT_004476d4,lpProcName);
    }
    if ((pFVar1 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_004476e0 = '\x01';
    }
    (&DAT_004476d8)[param_1] = 1;
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0041d69e;
  pcStack_1c = (code *)0x41d696;
  FUN_004039b8((int *)&local_8);
  return;
}


