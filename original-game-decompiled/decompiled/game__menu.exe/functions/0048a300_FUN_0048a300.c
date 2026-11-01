
/* ==== FUN_0048a300 @ 0048a300 ==== 
 * signature: undefined FUN_0048a300(void)
 * body: 0048a300-0048a566
 */

void FUN_0048a300(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_17c;
  undefined *puStackY_178;
  char *pcStackY_174;
  undefined4 uStack_144;
  undefined *puStack_140;
  undefined1 *puStack_13c;
  byte *pbStack_130;
  byte *pbStack_12c;
  int iStack_128;
  byte abStack_124 [256];
  int iStack_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  int aiStack_18 [3];
  int *piStack_c;
  int *piStack_8;
  
  puStack_13c = &stack0xfffffffc;
  pbStack_130 = (byte *)0x0;
  pbStack_12c = (byte *)0x0;
  iStack_128 = 0;
  puStack_20 = (undefined4 *)0x0;
  iStack_24 = 0;
  aiStack_18[1] = 0;
  aiStack_18[0] = 0;
  puStack_140 = &UNK_0048a5bd;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  piStack_c = param_2;
  piStack_8 = param_1;
  FUN_00402ee4(*param_1,abStack_124);
  FUN_00403e80(&iStack_24,abStack_124);
  FUN_00403f9c((int *)&puStack_20,3);
  puVar1 = puStack_20;
  uVar4 = FUN_0045f46c();
  FUN_0045fb90(uVar4,puVar1,0);
  iVar5 = (**(code **)(*piStack_c + 8))(piStack_c,"PLAYER","MONEY");
  piStack_8[2] = iVar5;
  iVar5 = (**(code **)(*piStack_c + 8))(piStack_c,"PLAYER","TURBO_AMOUNT");
  piStack_8[5] = iVar5;
  uVar2 = (**(code **)(*piStack_c + 0x10))(piStack_c,"PLAYER","FINISHED");
  *(undefined1 *)(piStack_8 + 3) = uVar2;
  uVar2 = (**(code **)(*piStack_c + 0x10))(piStack_c,"PLAYER","Out_Of_Time");
  *(undefined1 *)((int)piStack_8 + 0xd) = uVar2;
  uVar2 = (**(code **)(*piStack_c + 0x10))(piStack_c,"PLAYER","Total_Loss");
  *(undefined1 *)((int)piStack_8 + 0xe) = uVar2;
  iVar5 = (**(code **)(*piStack_c + 8))(piStack_c,"PLAYER","TRACKTIME");
  piStack_8[4] = iVar5;
  aiStack_18[2] = 0;
  do {
    piVar6 = &iStack_128;
    uVar4 = aiStack_18[2] + 1;
    if (SCARRY4(aiStack_18[2],1)) {
      uVar4 = thunk_FUN_00402808(uVar4);
      piVar6 = extraout_EDX;
    }
    FUN_004085ac(uVar4,piVar6);
    pcStackY_174 = "_TIME";
    puStackY_178 = (undefined *)0x48a462;
    FUN_00403f9c(aiStack_18,3);
    puStackY_178 = (undefined *)0x48a472;
    cVar3 = FUN_004583c4(piStack_c,"PLAYER",aiStack_18[0]);
    if (cVar3 != '\0') {
      puStackY_178 = (undefined *)0x0;
      uStackY_17c = 0x48a488;
      iVar5 = (**(code **)(*piStack_c + 8))(piStack_c,"PLAYER",aiStack_18[0]);
      FUN_0045eb08(piStack_8[6],iVar5);
    }
    aiStack_18[2] = aiStack_18[2] + 1;
  } while (aiStack_18[2] != 5);
  aiStack_18[2] = 0;
  FUN_004085ac(0,aiStack_18);
  piStack_1c = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
  pcStackY_174 = (char *)0x48a4d5;
  FUN_004603e0(piStack_c,"RACERS",aiStack_18[0],aiStack_18 + 1,piStack_1c);
  pcStackY_174 = (char *)0x48a4e1;
  piVar6 = TDataObject_vmt_004((int *)&PTR_TOtherRacer_vmt_000_0048a1c8,'\x01',extraout_ECX_00);
  puStackY_178 = &UNK_0048a567;
  uStackY_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_17c;
  pcStackY_174 = &stack0xfffffffc;
  (**(code **)(*piStack_1c + 0xc))(piStack_1c,0,&pbStack_12c);
  uVar7 = FUN_00408618(pbStack_12c);
  iVar5 = FUN_0048e510(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xcc),uVar7);
  piVar6[2] = iVar5;
  (**(code **)(*piStack_1c + 0xc))(piStack_1c,2,&pbStack_130);
  iVar5 = FUN_00408618(pbStack_130);
  piVar6[3] = iVar5;
  FUN_0045e7e4(piStack_8[7],piVar6);
  *in_FS_OFFSET = uStackY_17c;
  pcStackY_174 = &UNK_0048a56e;
  puStackY_178 = (undefined *)0x48a566;
  FUN_00402f9c(piStack_1c);
  return;
}


