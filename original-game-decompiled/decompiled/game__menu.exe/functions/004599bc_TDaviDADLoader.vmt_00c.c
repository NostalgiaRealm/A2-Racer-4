
/* ==== TDaviDADLoader.vmt_00c @ 004599bc ==== 
 * signature: undefined TDaviDADLoader.vmt_00c(void)
 * body: 004599bc-00459d8a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviDADLoader_vmt_00c(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 *puVar6;
  int *in_FS_OFFSET;
  int iStackY_140;
  int iStackY_13c;
  int iStackY_138;
  int iStackY_134;
  int iStackY_130;
  int iStackY_12c;
  int iStackY_128;
  int iStackY_124;
  undefined4 *puStackY_120;
  undefined1 uStackY_11c;
  int iStackY_118;
  byte abStackY_114 [180];
  undefined4 uStackY_60;
  undefined4 uStackY_5c;
  uint uStackY_58;
  undefined4 uStackY_54;
  int in_stack_ffffffc8;
  int iStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  int iStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_20 = &stack0xfffffffc;
  iStack_10 = 0x27;
  do {
    puStack_8 = (undefined4 *)0x0;
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  pcStack_24 = thunk_FUN_004036bc;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  uVar2 = FUN_004087a4((undefined *)param_1[1]);
  if ((char)uVar2 == '\0') {
    FUN_00402ee4(*param_1,abStackY_114);
    FUN_00403e80((int *)&stack0xffffffec,abStackY_114);
    puStackY_120 = (undefined4 *)param_1[1];
    uStackY_11c = 0xb;
    FUN_00409254((byte *)" File \"%s\" not found",&puStackY_120,0,&iStackY_118);
    FUN_00403f9c(&iStack_10,4);
    FUN_00403c40(iStack_10);
    in_stack_ffffffc8 = iStackY_118;
  }
  uVar2 = FUN_004087a4((undefined *)param_1[1]);
  if ((char)uVar2 != '\0') {
    piVar3 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',(undefined4 *)param_1[1]);
    param_1[7] = (int)piVar3;
    iVar5 = param_1[2];
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FrameCount");
    *(undefined4 *)(iVar5 + 4) = uVar2;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FramesPerSecond");
    *(undefined4 *)(iVar5 + 8) = uVar2;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FrameWidth");
    *(undefined4 *)(iVar5 + 0xc) = uVar2;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","FrameHeight");
    *(undefined4 *)(iVar5 + 0x10) = uVar2;
    uVar1 = (**(code **)(*(int *)param_1[7] + 0x10))((int *)param_1[7],"Properties","HasLoop");
    *(undefined1 *)(*(int *)(iVar5 + 0x14) + 4) = uVar1;
    uStackY_54 = 0x459b10;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","LoopCount");
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 8) = uVar2;
    uStackY_54 = 0;
    uStackY_58 = 0x459b2a;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","LoopStartIndex");
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xc) = uVar2;
    uVar4 = *(int *)(iVar5 + 4) - 1;
    if (*(int *)(iVar5 + 4) == 0) {
      uStackY_58 = 0x459b3d;
      uVar4 = thunk_FUN_00402808(0xffffffff);
    }
    if ((int)uVar4 < 0) {
      uStackY_58 = 0x459b46;
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    uStackY_5c = 0x459b59;
    uStackY_58 = uVar4;
    uVar2 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","LoopEndIndex");
    *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x10) = uVar2;
    uStackY_5c = 1;
    uStackY_60 = 0x459b73;
    uVar1 = (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],"Properties","AnimationType");
    *(undefined1 *)(param_1 + 3) = uVar1;
    *(bool *)(param_1 + 6) = (char)param_1[3] == '\x01';
    iVar5 = FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
    param_1[5] = iVar5;
    if ((char)param_1[6] == '\0') {
      iVar5 = *(int *)(param_1[2] + 4);
    }
    else {
      iVar5 = 1;
    }
    uVar4 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar4 = thunk_FUN_00402808(0xffffffff);
    }
    if ((int)uVar4 < 0) {
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    if (-1 < (int)uVar4) {
      iStack_c = uVar4 + 1;
      puVar6 = (undefined4 *)0x0;
      do {
        FUN_004085ac(puVar6,&iStackY_124);
        (*(code *)**(undefined4 **)param_1[7])((undefined4 *)param_1[7],"Frames",iStackY_124);
        if (puStack_8 == (undefined4 *)0x0) {
          FUN_00402ee4(*param_1,abStackY_114);
          FUN_00403e80(&iStackY_12c,abStackY_114);
          uStackY_11c = 0;
          uStackY_54 = 0x459c42;
          puStackY_120 = puVar6;
          FUN_00409254((byte *)"DAD File: Missing frame %d",&puStackY_120,0,&iStackY_130);
          uStackY_54 = 0x459c58;
          FUN_00403f9c(&iStackY_128,4);
          uStackY_54 = 0x459c6d;
          FUN_00403c40(iStackY_128);
        }
        FUN_0045963c((int)param_1,puStack_8,&iStackY_134);
        FUN_00403cf4((int *)&puStack_8,iStackY_134);
        uVar2 = FUN_004087a4((undefined *)puStack_8);
        if ((char)uVar2 == '\0') {
          FUN_00402ee4(*param_1,abStackY_114);
          FUN_00403e80(&iStackY_13c,abStackY_114);
          puStackY_120 = puStack_8;
          uStackY_11c = 0xb;
          uStackY_54 = 0x459cf2;
          FUN_00409254((byte *)" File \"%s\" not found",&puStackY_120,0,&iStackY_140);
          uStackY_54 = 0x459d08;
          FUN_00403f9c(&iStackY_138,4);
          uStackY_54 = 0x459d1d;
          FUN_00403c40(iStackY_138);
        }
        (**(code **)(*(int *)param_1[5] + 0x34))((int *)param_1[5],puStack_8);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
    }
  }
  *in_FS_OFFSET = in_stack_ffffffc8;
  FUN_00403c80(&iStackY_140,3);
  FUN_00403c5c(&iStackY_134);
  FUN_00403c80(&iStackY_130,4);
  FUN_00403c5c(&iStackY_118);
  FUN_00403c80((int *)&stack0xffffffec,2);
  FUN_00403c5c((int *)&puStack_8);
  return;
}


