
/* ==== FUN_0048b7c8 @ 0048b7c8 ==== 
 * signature: undefined FUN_0048b7c8(void)
 * body: 0048b7c8-0048b949
 */

void FUN_0048b7c8(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_120 = &UNK_0048b94a;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar7 = &UNK_0048b960;
  pcVar6 = "WriteVRStuffToIni";
  iVar4 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar5 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar5,0);
  iVar3 = FUN_0048d458(param_1[4]);
  (**(code **)(*param_2 + 0xc))
            (param_2,"PLAYER","MONEY",*(undefined4 *)(iVar3 + 8),pcVar6,puVar7,iVar4);
  iVar4 = FUN_0048c22c((int)param_1);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER",&UNK_0048b9ac,*(undefined4 *)(iVar4 + 0xc));
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,0);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","MOTOR",uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","BANDEN",uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),2));
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER",&UNK_0048b9d8,uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  uVar1 = FUN_0048d8c0(iVar4,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),3));
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","VERSNELLINGSBAK",uVar1);
  iVar4 = FUN_0048d458(param_1[4]);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","TURBO_AMOUNT",*(undefined4 *)(iVar4 + 0x10));
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","POSITION");
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = 4;
  FUN_00403c80(&iStack_c,2);
  return;
}


