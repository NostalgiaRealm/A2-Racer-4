
/* ==== TDaviAVILoader.vmt_00c @ 00457590 ==== 
 * signature: undefined TDaviAVILoader.vmt_00c(void)
 * body: 00457590-004578c7
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAVILoader_vmt_00c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int *in_FS_OFFSET;
  int iStack_144;
  code *pcStack_140;
  undefined1 *puStack_13c;
  int aiStack_130 [7];
  undefined1 uStack_114;
  int iStack_110;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_13c = &stack0xfffffffc;
  aiStack_130[2] = 0;
  aiStack_130[1] = 0;
  aiStack_130[0] = 0;
  aiStack_130[5] = 0;
  aiStack_130[4] = 0;
  aiStack_130[3] = 0;
  iStack_8 = 0;
  iStack_c = 0;
  iStack_110 = 0;
  pcStack_140 = thunk_FUN_004036bc;
  iStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_144;
  AVIFileInit();
  if (*(int *)(param_1[1] + -4) == 0) {
    thunk_FUN_00402808(0);
  }
  iVar1 = AVIFileOpen();
  if (iVar1 != 0) {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(&iStack_c,abStack_10c);
    aiStack_130[6] = param_1[1];
    uStack_114 = 0xb;
    FUN_00409254((byte *)"AVIFileOpen Error on %s.",aiStack_130 + 6,0,&iStack_110);
    FUN_00403f9c(&iStack_8,4);
    FUN_00403c40(iStack_8);
  }
  iVar1 = AVIFileGetStream();
  if (iVar1 != 0) {
    AVIFileRelease();
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(aiStack_130 + 4,abStack_10c);
    aiStack_130[6] = param_1[1];
    uStack_114 = 0xb;
    FUN_00409254((byte *)"AVIFileGetStream Error in %s.",aiStack_130 + 6,0,aiStack_130 + 3);
    FUN_00403f9c(aiStack_130 + 5,4);
    FUN_00403c40(aiStack_130[5]);
  }
  iVar1 = AVIStreamGetFrameOpen();
  param_1[5] = iVar1;
  if (iVar1 == 0) {
    AVIStreamRelease();
    AVIFileRelease();
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(aiStack_130 + 1,abStack_10c);
    aiStack_130[6] = param_1[1];
    uStack_114 = 0xb;
    FUN_00409254((byte *)"No decompressor found for AVI file: %s.",aiStack_130 + 6,0,aiStack_130);
    FUN_00403f9c(aiStack_130 + 2,4);
    FUN_00403c40(aiStack_130[2]);
  }
  AVIFileGetStream();
  iVar1 = param_1[4];
  AVIStreamInfo();
  iVar3 = param_1[2];
  uVar2 = param_1[0xf];
  if ((int)uVar2 < 0) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_ECX;
  }
  *(uint *)(iVar3 + 4) = uVar2;
  uVar2 = param_1[0xd] / param_1[0xc];
  if ((int)uVar2 < 0) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_ECX_00;
  }
  *(uint *)(iVar3 + 8) = uVar2;
  uVar2 = param_1[0x16] - param_1[0x14];
  if (SBORROW4(param_1[0x16],param_1[0x14])) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_ECX_01;
  }
  *(uint *)(iVar3 + 0xc) = uVar2;
  uVar2 = param_1[0x17] - param_1[0x15];
  if (SBORROW4(param_1[0x17],param_1[0x15])) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_ECX_02;
  }
  *(uint *)(iVar3 + 0x10) = uVar2;
  uVar2 = *(uint *)(iVar3 + 0x14);
  *(undefined1 *)(uVar2 + 4) = 0;
  *(undefined4 *)(uVar2 + 8) = 0;
  iVar4 = param_1[0xe];
  if ((iVar4 < 0) || (iVar4 == -1)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar3 = extraout_ECX_03;
    iVar4 = extraout_EDX;
  }
  *(int *)(uVar2 + 0xc) = iVar4;
  iVar4 = *(int *)(iVar3 + 4) + -1;
  if (*(int *)(iVar3 + 4) == 0) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar4 = extraout_EDX_00;
  }
  if (iVar4 == -1) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar4 = extraout_EDX_01;
  }
  *(int *)(uVar2 + 0x10) = iVar4;
  FUN_00457194((int *)param_1[0x2a],*(int *)(param_1[2] + 0xc),*(int *)(param_1[2] + 0x10),0x18);
  *in_FS_OFFSET = iVar1;
  FUN_00403c80(aiStack_130,6);
  FUN_00403c5c(&iStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}


