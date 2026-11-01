
/* ==== FUN_004910f0 @ 004910f0 ==== 
 * signature: undefined __register FUN_004910f0(LPCSTR param_1)
 * body: 004910f0-00491188
 */

void FUN_004910f0(LPCSTR param_1)

{
  LPCSTR lpParameters;
  LPCSTR lpFile;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpDirectory;
  code *nShowCmd;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  undefined *local_10;
  undefined *local_c;
  LPCSTR local_8;
  
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  puStack_18 = (undefined1 *)0x491105;
  local_8 = param_1;
  FUN_00404090((int)param_1);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00490e1c((int *)&local_c);
  if (local_c != (undefined *)0x0) {
    uStack_2c = DAT_004ad4ac;
    nShowCmd = FUN_004911a0;
    lpDirectory = local_8;
    FUN_00403f9c((int *)&local_10,3);
    lpParameters = FUN_004040a0(local_10);
    lpFile = FUN_004040a0(local_c);
    ShellExecuteA(*(HWND *)(*(int *)PTR_DAT_004ab8ac + 0x24),(LPCSTR)0x0,lpFile,lpParameters,
                  lpDirectory,(INT)nShowCmd);
  }
  *in_FS_OFFSET = uStack_2c;
  FUN_00403c80((int *)&local_10,3);
  return;
}


