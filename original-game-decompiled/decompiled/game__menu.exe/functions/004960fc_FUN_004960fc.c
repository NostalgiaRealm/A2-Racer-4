
/* ==== FUN_004960fc @ 004960fc ==== 
 * signature: undefined FUN_004960fc(void)
 * body: 004960fc-004963db
 */

void FUN_004960fc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined *puStack_12c;
  undefined1 *puStack_128;
  undefined4 *puStack_11c;
  int iStack_118;
  undefined4 *puStack_114;
  int iStack_110;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_128 = &stack0xfffffffc;
  iStack_118 = 0;
  puStack_11c = (undefined4 *)0x0;
  iStack_110 = 0;
  puStack_114 = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_12c = &UNK_004963dc;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar2 = puStack_8;
  uVar5 = FUN_0045f46c();
  FUN_0045fb90(uVar5,puVar2,0);
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&puStack_114);
  FUN_00403f28(&iStack_110,(undefined4 *)"in CopyControlsToSettings. resolution: ",puStack_114);
  iVar1 = iStack_110;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar1);
  uVar6 = FUN_004967d4((int)param_1);
  if ((char)uVar6 == '\0') {
    cVar3 = (**(code **)(*(int *)param_1[0xd7] + 0xb8))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(int *)param_1[0xd8] + 0xb8))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*(int *)param_1[0xdb] + 0xb8))();
        if (cVar3 != '\0') {
          *(undefined4 *)(param_1[0xe1] + 0x2c) = 4;
        }
      }
      else {
        cVar3 = (**(code **)(*(int *)param_1[0xd5] + 0xb8))();
        if (cVar3 == '\0') {
          *(undefined4 *)(param_1[0xe1] + 0x2c) = 1;
        }
        else {
          *(undefined4 *)(param_1[0xe1] + 0x2c) = 3;
        }
      }
    }
    else {
      cVar3 = (**(code **)(*(int *)param_1[0xd5] + 0xb8))();
      if (cVar3 == '\0') {
        *(undefined4 *)(param_1[0xe1] + 0x2c) = 0;
      }
      else {
        *(undefined4 *)(param_1[0xe1] + 0x2c) = 6;
      }
    }
  }
  uVar4 = (**(code **)(*(int *)param_1[0xc5] + 0xb8))();
  iVar1 = param_1[0xe1];
  *(undefined1 *)(iVar1 + 0x1f) = uVar4;
  FUN_004a70bc(iVar1,*(undefined4 *)(param_1[0xd0] + 0x204));
  iVar1 = param_1[0xe1];
  *(bool *)(iVar1 + 0x1d) = 0 < *(int *)(param_1[0xd0] + 0x204);
  FUN_004a66ec(iVar1,*(undefined4 *)(param_1[0xd1] + 0x204));
  iVar1 = param_1[0xe1];
  *(bool *)(iVar1 + 0x1c) = 0 < *(int *)(param_1[0xd1] + 0x204);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1[0xd2] + 0x204);
  cVar3 = (**(code **)(*(int *)param_1[0xc6] + 0xb8))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*(int *)param_1[199] + 0xb8))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(int *)param_1[200] + 0xb8))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*(int *)param_1[0xc9] + 0xb8))();
        if (cVar3 != '\0') {
          *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 3;
        }
      }
      else {
        *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 1;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 2;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1[0xe1] + 0xc) + 0x24) = 0;
  }
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&puStack_11c);
  FUN_00403f28(&iStack_118,(undefined4 *)"out CopyControlsToSettings. resolution: ",puStack_11c);
  iVar1 = iStack_118;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar1);
  uVar5 = FUN_0045f46c();
  FUN_0045fc70(uVar5);
  *in_FS_OFFSET = "CopyControlsToSettings";
  FUN_00403c80((int *)&puStack_11c,4);
  FUN_00403c80(&iStack_c,2);
  return;
}


