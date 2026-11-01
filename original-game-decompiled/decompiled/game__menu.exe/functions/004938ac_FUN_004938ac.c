
/* ==== FUN_004938ac @ 004938ac ==== 
 * signature: undefined __register FUN_004938ac(int * param_1)
 * body: 004938ac-00493a5c
 */

void FUN_004938ac(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  LPCSTR lpNewFileName;
  LPCSTR lpExistingFileName;
  undefined4 *in_FS_OFFSET;
  undefined *bFailIfExists;
  undefined4 uStack_280;
  code *pcStack_27c;
  undefined1 *puStack_278;
  int local_270;
  undefined *local_26c;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_26c = (undefined *)0x0;
  local_270 = 0;
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_278 = (undefined1 *)0x4938e9;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  pcStack_27c = thunk_FUN_004036bc;
  uStack_280 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_280;
  puStack_278 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar1 = local_160;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_00403f9c((int *)&local_268,4);
  DVar3 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar3 == 0) {
    uVar4 = FUN_00481208(local_150);
    FUN_004085ac(uVar4,&local_270);
    bFailIfExists = &DAT_00493ac4;
    FUN_00403f9c((int *)&local_26c,5);
    lpNewFileName = FUN_004040a0(local_26c);
    lpExistingFileName = FUN_004040a0(local_150);
    CopyFileA(lpExistingFileName,lpNewFileName,(BOOL)bFailIfExists);
    DVar3 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = &DAT_00493ab8;
  FUN_00403c80(&local_270,3);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


