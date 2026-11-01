
/* ==== TGameMenuScreen.vmt_0f4 @ 0049e8c4 ==== 
 * signature: undefined __register TGameMenuScreen.vmt_0f4(int * param_1)
 * body: 0049e8c4-0049e97c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGameMenuScreen_vmt_0f4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  puVar4 = &DAT_0049e994;
  pcVar3 = "ShowScreen (baseform)";
  iVar5 = local_c;
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  (**(code **)(*param_1 + 0x60))
            (param_1,*(undefined4 *)(*(int *)PTR_DAT_004ab8ac + 0x38),*param_1,pcVar3,puVar4,iVar5);
  TForm_set_Visible(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  if (*(short *)((int)param_1 + 0x2ea) != 0) {
    (*(code *)param_1[0xba])(param_1[0xbb],param_1);
  }
  *in_FS_OFFSET = pcVar3;
  FUN_00403c80(&local_c,2);
  return;
}


