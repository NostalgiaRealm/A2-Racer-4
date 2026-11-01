
/* ==== FUN_0048e784 @ 0048e784 ==== 
 * signature: undefined __register FUN_0048e784(int * param_1, int * param_2)
 * body: 0048e784-0048e847
 */

void FUN_0048e784(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  char *pcVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_0048e860;
  pcVar4 = "LoadFromIniFile";
  iVar2 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,0);
  iVar2 = (**(code **)(*param_2 + 8))(param_2,"GAMEVALUES","TurboOilAmount",10,pcVar4,puVar5,iVar2);
  param_1[1] = iVar2;
  iVar2 = (**(code **)(*param_2 + 8))(param_2,"GAMEVALUES","FirstPlaceBonus");
  param_1[2] = iVar2;
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = 0x9c4;
  FUN_00403c80(&local_c,2);
  return;
}


