
/* ==== FUN_0048e510 @ 0048e510 ==== 
 * signature: undefined FUN_0048e510(void)
 * body: 0048e510-0048e612
 */

void FUN_0048e510(int *param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_134;
  undefined *puStack_130;
  undefined1 *puStack_12c;
  byte abStack_11c [256];
  int aiStack_1c [3];
  char cStack_d;
  int iStack_c;
  int iStack_8;
  
  puStack_12c = &stack0xfffffffc;
  aiStack_1c[2] = 0;
  aiStack_1c[1] = 0;
  aiStack_1c[0] = 0;
  puStack_130 = &UNK_0048e613;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puVar1 = &stack0xfffffffc;
  iStack_8 = param_2;
  if (param_1 == (int *)0x0) {
    FUN_00403c40(" Self = nil: GetCharacterByGameIndex");
    puVar1 = puStack_12c;
  }
  puStack_12c = puVar1;
  iStack_c = 0;
  cStack_d = '\0';
  uVar2 = FUN_0048e6dc(param_1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_0048e0fc(param_1,iVar4);
      if (*(int *)(iVar3 + 0xc) == iStack_8) {
        cStack_d = '\x01';
        iStack_c = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (cStack_d != '\x01') {
    FUN_004085ac(iStack_8,aiStack_1c + 1);
    FUN_00402ee4(*param_1,abStack_11c);
    FUN_00403e80(aiStack_1c,abStack_11c);
    FUN_00403f9c(aiStack_1c + 2,6);
    FUN_00403c40(aiStack_1c[2]);
  }
  *in_FS_OFFSET = uStack_134;
  puStack_12c = &UNK_0048e61a;
  puStack_130 = (undefined *)0x48e612;
  FUN_00403c80(aiStack_1c,3);
  return;
}


