
/* ==== TSaveGame.vmt_010 @ 0048ae64 ==== 
 * signature: undefined TSaveGame.vmt_010(void)
 * body: 0048ae64-0048af29
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSaveGame_vmt_010(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_118 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar5 = &DAT_0048af40;
  pcVar4 = "SaveToStream";
  iVar6 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar2 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  iVar1 = *(int *)param_1[2];
  (**(code **)(iVar1 + 0x10))((int *)param_1[2],param_2,iVar1,pcVar4,puVar5,iVar6);
  (**(code **)(*(int *)param_1[6] + 0x10))((int *)param_1[6],param_2);
  (**(code **)(*(int *)param_1[4] + 0x10))((int *)param_1[4],param_2);
  (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],param_2);
  FUN_0045e380(param_2,param_1[5]);
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = pcVar4;
  FUN_00403c80(&iStack_c,2);
  return;
}


