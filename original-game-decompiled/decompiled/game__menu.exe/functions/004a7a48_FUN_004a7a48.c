
/* ==== FUN_004a7a48 @ 004a7a48 ==== 
 * signature: undefined __register FUN_004a7a48(void)
 * body: 004a7a48-004a7b86
 */

void FUN_004a7a48(void)

{
  LPCSTR lpParameters;
  HWND hwnd;
  HINSTANCE pHVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpOperation;
  char *lpFile;
  undefined **ppuVar3;
  code *pcVar4;
  LPCSTR lpDirectory;
  undefined **ppuVar5;
  code *nShowCmd;
  undefined *local_1c;
  code *local_18;
  undefined1 *local_14;
  undefined *local_8;
  
  local_14 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    local_8 = (undefined *)0x0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_18 = thunk_FUN_004036bc;
  local_1c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  ppuVar3 = &local_8;
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_14);
  FUN_00409254(&DAT_004a7b9c,&stack0xfffffff0,0,(int *)ppuVar3);
  nShowCmd = (code *)0x5;
  lpDirectory = "";
  lpParameters = FUN_004040a0(local_8);
  lpFile = "SERVICE.EXE";
  lpOperation = "open";
  hwnd = (HWND)FUN_004349e0(*(int **)(*(int *)PTR_DAT_004ab8ac + 0x38));
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,(INT)nShowCmd);
  if ((int)pHVar1 < 0) {
    nShowCmd = (code *)0x4a7acc;
    thunk_FUN_00402808((uint)pHVar1);
  }
  if ((int)pHVar1 < 0x21) {
    FUN_00409254((byte *)"Error: could not start Davi-Service, returnvalue %d",&stack0xfffffff0,0,
                 (int *)&local_18);
    pcVar4 = local_18;
    FUN_004a86f8(&DAT_004a8174,0,0x4a7c00,(int)local_18);
    ppuVar3 = &local_1c;
    FUN_00405808(&PTR_DAT_004a7a40,(int *)&stack0xffffffdc);
    ppuVar5 = ppuVar3;
    FUN_00405808(&PTR_DAT_004a7a38,(int *)&stack0xffffffd8);
    FUN_004a790c((int)ppuVar3,ppuVar3,(int *)&stack0xffffffe0);
    nShowCmd = pcVar4;
    FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&stack0xffffffd4);
    FUN_00409254((byte *)pcVar4,&stack0xfffffff0,0,(int *)ppuVar5);
    FUN_004529f8(local_1c,0,extraout_ECX);
  }
  *in_FS_OFFSET = nShowCmd;
  local_18 = FUN_004a7b8e;
  local_1c = (undefined *)0x4a7b7e;
  FUN_00403c80((int *)&stack0xffffffd4,7);
  local_1c = (undefined *)0x4a7b86;
  FUN_00403c5c((int *)&local_8);
  return;
}


