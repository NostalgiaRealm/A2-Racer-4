
/* ==== TIntegerList.vmt_000 @ 0045f1e4 ==== 
 * signature: undefined TIntegerList.vmt_000(void)
 * body: 0045f1e4-0045f27f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIntegerList_vmt_000(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  code *pcStack_28;
  code *pcStack_24;
  code *pcStack_20;
  int aiStack_10 [3];
  
  pcStack_20 = (code *)&stack0xfffffffc;
  aiStack_10[2] = 0;
  aiStack_10[1] = 0;
  aiStack_10[0] = 0;
  pcStack_24 = thunk_FUN_004036bc;
  pcStack_28 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_28;
  uVar1 = FUN_0045eb28(param_1);
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar3 = 0;
    do {
      FUN_004085ac(iVar3,aiStack_10 + 1);
      uVar2 = FUN_0045e990(param_1,iVar3);
      FUN_004085ac(uVar2,aiStack_10);
      pcStack_28 = FUN_0045f2a4;
      FUN_00403f9c(aiStack_10 + 2,5);
      iVar3 = iVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_0045ee68(param_1,0,aiStack_10[2]);
  *in_FS_OFFSET = pcStack_28;
  pcStack_20 = FUN_0045f287;
  pcStack_24 = (code *)0x45f27f;
  FUN_00403c80(aiStack_10,3);
  return;
}


