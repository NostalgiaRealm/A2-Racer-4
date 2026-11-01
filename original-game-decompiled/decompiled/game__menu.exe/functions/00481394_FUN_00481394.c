
/* ==== FUN_00481394 @ 00481394 ==== 
 * signature: undefined __register FUN_00481394(int * param_1)
 * body: 00481394-004814ad;004814b5-004814cf
 */

void FUN_00481394(int *param_1)

{
  LPCSTR pCVar1;
  DWORD dwLen;
  LPVOID lpData;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  DWORD *lpdwHandle;
  undefined4 uStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  uint local_3c;
  undefined1 local_38;
  uint local_34;
  undefined1 local_30;
  uint local_2c;
  undefined1 local_28;
  uint local_24;
  undefined1 local_20;
  undefined *local_1c;
  undefined *local_18;
  DWORD local_14;
  LPVOID local_10;
  LPVOID local_c;
  int *local_8;
  
  pcStack_4c = (code *)&stack0xfffffffc;
  local_1c = (undefined *)0x0;
  local_18 = (undefined *)0x0;
  pcStack_50 = thunk_FUN_004036bc;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  lpdwHandle = &local_14;
  local_8 = param_1;
  FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_18);
  pCVar1 = FUN_004040a0(local_18);
  uStack_60 = 0x4813d7;
  dwLen = GetFileVersionInfoSizeA(pCVar1,lpdwHandle);
  if (dwLen != 0) {
    lpData = (LPVOID)FUN_0040277c(dwLen);
    uStack_60 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_60;
    local_c = lpData;
    FUN_0044d804(*(undefined4 *)PTR_DAT_004ab8ac,(int *)&local_1c);
    pCVar1 = FUN_004040a0(local_1c);
    BVar2 = GetFileVersionInfoA(pCVar1,local_14,dwLen,lpData);
    if (BVar2 != 0) {
      BVar2 = VerQueryValueA(local_c,"\\",&local_10,&local_14);
      if (BVar2 != 0) {
        local_3c = *(uint *)((int)local_10 + 0x10) >> 0x10;
        local_38 = 0;
        local_34 = *(uint *)((int)local_10 + 0x10) & 0xffff;
        local_30 = 0;
        local_2c = *(uint *)((int)local_10 + 0x14) >> 0x10;
        local_28 = 0;
        local_24 = *(uint *)((int)local_10 + 0x14) & 0xffff;
        local_20 = 0;
        FUN_00409254((byte *)"Version %d/%d/%d/%d",&local_3c,3,local_8);
      }
    }
    *in_FS_OFFSET = uStack_60;
    FUN_00402794((int)local_c);
    return;
  }
  *in_FS_OFFSET = uStack_54;
  pcStack_4c = FUN_004814d7;
  pcStack_50 = (code *)0x4814cf;
  FUN_00403c80((int *)&local_1c,2);
  return;
}


