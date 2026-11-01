
/* ==== FUN_0048b350 @ 0048b350 ==== 
 * signature: undefined __register FUN_0048b350(int * param_1, int * param_2)
 * body: 0048b350-0048b4db
 */

void FUN_0048b350(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar5 = &DAT_0048b4f4;
  pcVar4 = "WriteControlStuffToIni";
  iVar6 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,0);
  uVar2 = FUN_004a6a38(*(int *)(param_1[6] + 0xc));
  (**(code **)(*param_2 + 0xc))(param_2,"INPUT","DEVICE",uVar2,pcVar4,puVar5,iVar6);
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT",&DAT_0048b544,*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x10));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","RIGHT",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x14));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT",&DAT_0048b564,*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 8));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT",&DAT_0048b570,*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0xc));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","EXTRA1",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x18));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","EXTRA2",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x1c));
  (**(code **)(*param_2 + 0xc))
            (param_2,"INPUT","EXTRA3",*(undefined4 *)(*(int *)(param_1[6] + 0xc) + 0x20));
  uVar2 = FUN_004a6a70(*(int *)(param_1[6] + 0xc));
  (**(code **)(*param_2 + 0xc))(param_2,"INPUT","SENSITIVITY");
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uVar2;
  FUN_00403c80(&local_c,2);
  return;
}


