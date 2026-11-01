
/* ==== FUN_004203d8 @ 004203d8 ==== 
 * signature: undefined __register FUN_004203d8(byte param_1, undefined4 param_2, undefined * param_3)
 * body: 004203d8-00420496
 */

void FUN_004203d8(byte param_1,undefined4 param_2,undefined *param_3)

{
  LPCSTR lpProcName;
  FARPROC pFVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined *local_8;
  
  pcStack_18 = (code *)0x4203ee;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((&DAT_004ac6e8)[param_1] == '\0') {
    if (DAT_004ac6e4 == (HMODULE)0x0) {
      pFVar1 = (FARPROC)0x0;
    }
    else {
      pcStack_18 = (code *)&stack0xfffffffc;
      if (((param_1 == 0) && (pcStack_18 = (code *)&stack0xfffffffc, DAT_004ac6f0 == '\0')) &&
         (pcStack_18 = (code *)&stack0xfffffffc,
         DAT_004ac6d8 = FUN_004203d8(4,DAT_004ac6d8,"GetMonitorInfoA"), DAT_004ac6f0 == '\0')) {
        FUN_00403c5c((int *)&local_8);
      }
      lpProcName = FUN_004040a0(local_8);
      pFVar1 = GetProcAddress(DAT_004ac6e4,lpProcName);
    }
    if ((pFVar1 != (FARPROC)0x0) && (param_1 != 0)) {
      DAT_004ac6f0 = '\x01';
    }
    (&DAT_004ac6e8)[param_1] = 1;
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0042049e;
  pcStack_1c = (code *)0x420496;
  FUN_00403c5c((int *)&local_8);
  return;
}


