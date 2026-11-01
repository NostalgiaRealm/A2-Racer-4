
/* ==== FUN_0048bcf0 @ 0048bcf0 ==== 
 * signature: undefined FUN_0048bcf0(void)
 * body: 0048bcf0-0048bf20
 */

void FUN_0048bcf0(int *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_120 = &UNK_0048bf21;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar8 = &UNK_0048bf38;
  pcVar7 = "WriteGeneralStuffToIni";
  iVar4 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar6 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar6,0);
  iVar3 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  (**(code **)(*param_2 + 0xc))
            (param_2,"ETAPPE","ETAPPE",*(undefined4 *)(iVar3 + 0x44),pcVar7,puVar8,iVar4);
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  (**(code **)(*param_2 + 0xc))(param_2,"OPTIONS",&UNK_0048bf78,*(undefined4 *)(iVar4 + 0x48));
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  bVar1 = FUN_00461c84(iVar4);
  (**(code **)(*param_2 + 0x14))(param_2,"OPTIONS","OPPONENTS",CONCAT31(extraout_var,bVar1) ^ 1);
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  (**(code **)(*param_2 + 0x14))(param_2,"ETAPPE","BRITISH",*(undefined1 *)(iVar4 + 0x4c));
  (**(code **)(*param_2 + 0xc))(param_2,"LEAGUE","LEAGUE",*(undefined1 *)(param_1[6] + 8));
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","DAMAGE",0);
  iVar4 = FUN_0048e114(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc),param_1[5]);
  bVar1 = FUN_00461c84(iVar4);
  if (bVar1) {
    uVar5 = FUN_0048e6ec(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xcc),
                         *(undefined1 *)(param_1[6] + 8));
    (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","CHECKPOINT_SPEED",uVar5);
  }
  (**(code **)(*param_2 + 0xc))(param_2,"GFX OPTIONS","gamma",*(undefined4 *)(param_1[6] + 0x30));
  (**(code **)(*param_2 + 0x14))
            (param_2,"GFX OPTIONS","alpha_blending",
             CONCAT31((int3)((uint)param_1[6] >> 8),*(undefined1 *)(param_1[6] + 0x35)));
  uVar5 = FUN_004a7160(param_1[6]);
  (**(code **)(*param_2 + 0xc))(param_2,"GFX OPTIONS","CUSTOM_TEXTURE_MEMORY",uVar5);
  (**(code **)(*param_2 + 0x14))
            (param_2,"OPTIONS",&UNK_0048c064,
             CONCAT31((int3)((uint)param_1[6] >> 8),*(undefined1 *)(param_1[6] + 0x3d)));
  uVar5 = FUN_004a7150(param_1[6]);
  (**(code **)(*param_2 + 0xc))(param_2,"OPTIONS","filter");
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uVar5;
  FUN_00403c80(&iStack_c,2);
  return;
}


