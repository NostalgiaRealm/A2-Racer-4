
/* ==== FUN_0048003c @ 0048003c ==== 
 * signature: undefined FUN_0048003c(void)
 * body: 0048003c-004802db
 */

void FUN_0048003c(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_13c;
  undefined *puStack_138;
  undefined1 *puStack_134;
  undefined4 *puStack_124;
  int aiStack_120 [5];
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_134 = &stack0xfffffffc;
  aiStack_120[0] = 0;
  puStack_124 = (undefined4 *)0x0;
  aiStack_120[2] = 0;
  aiStack_120[1] = 0;
  aiStack_120[4] = 0;
  aiStack_120[3] = 0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_138 = &UNK_004802dc;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  if (param_1[0x32] == 0) {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(aiStack_120 + 3,abStack_10c);
    FUN_00403f9c(aiStack_120 + 4,4);
    FUN_00403c40(aiStack_120[4]);
  }
  iVar5 = 0;
  if (*(char *)(param_1[0x31] + 9) == '\x01') {
    iVar5 = FUN_0048c20c(param_1[0x30]);
    iVar5 = *(int *)(iVar5 + 0x10);
  }
  else if (*(char *)(param_1[0x31] + 9) == '\x02') {
    iVar5 = FUN_0048c22c(param_1[0x30]);
    iVar5 = *(int *)(iVar5 + 0x10);
  }
  iVar4 = 0;
  do {
    iVar3 = FUN_0048a7dc(param_1[0x32],iVar4);
    if (iVar5 == *(int *)(iVar3 + 8)) {
      FUN_0048e0fc(param_1[0x33],iVar5);
      FUN_00402ee4(*param_1,abStack_10c);
      FUN_00403e80(aiStack_120 + 1,abStack_10c);
      FUN_00403f9c(aiStack_120 + 2,6);
      FUN_00403c40(aiStack_120[2]);
    }
    iVar3 = FUN_0048a7dc(param_1[0x32],iVar4);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = FUN_0048a7dc(param_1[0x32],iVar4);
    iVar3 = FUN_00462c48(&UNK_00462c38,1,*(undefined4 *)(iVar3 + 8),uVar6);
    FUN_00410104((int *)param_1[0x35],iVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  uVar6 = *(undefined4 *)(param_1[0x32] + 0x10);
  iVar4 = FUN_00462c48(&UNK_00462c38,1,iVar5);
  FUN_00410104((int *)param_1[0x35],iVar4);
  FUN_00410598(param_1[0x35],&UNK_0048002c);
  iVar4 = 0;
  do {
    iVar3 = FUN_00480390((int)param_1,iVar4);
    if (iVar5 == *(int *)(iVar3 + 8)) {
      param_1[0x29] = iVar4;
      FUN_004085ac(param_1[0x29],(int *)&puStack_124);
      FUN_00403f28(aiStack_120,(undefined4 *)"FPlayerPos : ",puStack_124);
      iVar3 = aiStack_120[0];
      uVar2 = FUN_0045f46c();
      FUN_0045fe88(uVar2,iVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  *in_FS_OFFSET = uVar6;
  FUN_00403c80((int *)&puStack_124,6);
  FUN_00403c80(&iStack_c,2);
  return;
}


