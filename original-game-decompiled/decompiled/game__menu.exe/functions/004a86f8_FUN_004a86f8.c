
/* ==== FUN_004a86f8 @ 004a86f8 ==== 
 * signature: undefined __register FUN_004a86f8(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * body: 004a86f8-004a8877;004a89e7-004a8a35
 */

void FUN_004a86f8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  DWORD DVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar4;
  undefined4 uStack_390;
  code *pcStack_38c;
  code *pcStack_388;
  undefined4 uStack_384;
  code *pcStack_380;
  undefined1 *puStack_37c;
  undefined4 uStack_378;
  code *pcStack_374;
  undefined1 *puStack_370;
  undefined4 uStack_36c;
  code *pcStack_368;
  code *pcStack_364;
  int local_354 [5];
  char *local_340;
  undefined1 local_33c;
  byte *local_338;
  WORD local_334 [2];
  int local_330;
  uint local_32c;
  undefined4 local_1dc [115];
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  local_354[0] = 0;
  local_354[1] = 0;
  local_354[4] = 0;
  local_354[3] = 0;
  local_354[2] = 0;
  local_338 = (byte *)0x0;
  local_10 = (undefined4 *)0x0;
  pcStack_364 = (code *)0x4a873b;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404090(param_3);
  pcStack_364 = (code *)0x4a8743;
  FUN_00404090(param_4);
  pcStack_364 = (code *)0x4a8754;
  FUN_00404480((int)local_334,(int)&DAT_004075bc);
  pcStack_368 = thunk_FUN_004036bc;
  uStack_36c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_36c;
  puStack_370 = (undefined1 *)0x4a8767;
  pcStack_364 = (code *)&stack0xfffffffc;
  bVar1 = FUN_004a818c();
  if (bVar1) {
    pcStack_374 = thunk_FUN_004036bc;
    uStack_378 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_378;
    pcStack_380 = thunk_FUN_00403408;
    uStack_384 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_384;
    pcStack_388 = (code *)0x4a879c;
    puStack_37c = &stack0xfffffffc;
    puStack_370 = &stack0xfffffffc;
    FUN_00405b82(local_1dc,DAT_004ab5c8);
    pcStack_38c = thunk_FUN_004036bc;
    uStack_390 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_390;
    pcStack_388 = (code *)&stack0xfffffffc;
    DVar2 = FUN_00408854(DAT_004ab5c8,0x3f,local_334);
    if (DVar2 == 0) {
      if ((local_32c & 1) != 0) {
        ppuVar4 = &local_10;
        FUN_00405808(&PTR_DAT_004a86f0,(int *)&local_338);
        local_340 = DAT_004ab5c8;
        local_33c = 0xb;
        FUN_00409254(local_338,&local_340,0,(int *)ppuVar4);
        FUN_004529e8((undefined *)local_10,0,extraout_ECX);
        piVar3 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_10);
        FUN_004036f4(piVar3);
      }
      if (40000 < local_330) {
        FUN_004a8290();
      }
      FUN_00405ca9((undefined *)local_1dc);
      FUN_0040284c();
    }
    else {
      FUN_00405ca2((undefined *)local_1dc);
      FUN_0040284c();
    }
    *in_FS_OFFSET = uStack_390;
    pcStack_388 = FUN_004a887f;
    pcStack_38c = (code *)0x4a8877;
    FUN_004088c8((int)local_334);
    return;
  }
  *in_FS_OFFSET = uStack_36c;
  pcStack_364 = FUN_004a8a3d;
  pcStack_368 = (code *)0x4a8a04;
  FUN_00403c80(local_354,5);
  pcStack_368 = (code *)0x4a8a0f;
  FUN_00403c5c((int *)&local_338);
  pcStack_368 = (code *)0x4a8a20;
  FUN_0040454c((int)local_334,(int)&DAT_004075bc);
  pcStack_368 = (code *)0x4a8a2d;
  FUN_00403c80((int *)&local_10,2);
  pcStack_368 = (code *)0x4a8a35;
  FUN_00403c5c(&param_4);
  return;
}


