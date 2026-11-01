
/* ==== TRace.vmt_01c @ 0046284c ==== 
 * signature: undefined __register TRace.vmt_01c(int * param_1, int * param_2)
 * body: 0046284c-00462a55
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TRace_vmt_01c(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 uStack_14c;
  code *pcStack_148;
  undefined1 *puStack_144;
  byte *local_134;
  undefined4 local_130;
  int local_12c;
  byte *local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_134 = (byte *)0x0;
  local_12c = 0;
  local_130 = 0;
  local_128 = (byte *)0x0;
  local_120 = 0;
  local_124 = 0;
  local_11c = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  pcStack_148 = thunk_FUN_004036bc;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  local_8 = param_2;
  FUN_00402ee4(*param_1,local_118);
  FUN_00403e80(&local_18,local_118);
  puVar7 = &DAT_00462a6c;
  pcVar6 = "LoadFromIni";
  iVar2 = local_18;
  FUN_00403f9c((int *)&local_14,3);
  puVar5 = local_14;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar5,0);
  (**(code **)(*param_1 + 0x18))(param_1,&local_11c,*param_1,0,pcVar6,puVar7,iVar2);
  iVar2 = (**(code **)(*local_8 + 8))(local_8,local_11c,"defaultchar");
  param_1[4] = iVar2;
  local_c = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
  FUN_0045eb18(param_1[2]);
  piVar3 = &local_120;
  piVar4 = local_c;
  (**(code **)(*param_1 + 0x18))(param_1,&local_124);
  FUN_004603e0(local_8,local_124,"trackix",piVar3,piVar4);
  uVar1 = (**(code **)(*local_c + 0x14))();
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    local_10 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,local_10,&local_128);
      iVar2 = FUN_00408618(local_128);
      FUN_0045eb08(param_1[2],iVar2);
      local_10 = local_10 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_0045eb18(param_1[3]);
  piVar3 = &local_12c;
  piVar4 = local_c;
  (**(code **)(*param_1 + 0x18))(param_1,&local_130);
  FUN_004603e0(local_8,local_130,"charix",piVar3,piVar4);
  uVar1 = (**(code **)(*local_c + 0x14))();
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    local_10 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,local_10,&local_134);
      iVar2 = FUN_00408618(local_134);
      FUN_0045eb08(param_1[3],iVar2);
      local_10 = local_10 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_00402f9c(local_c);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = piVar3;
  FUN_00403c80((int *)&local_134,7);
  FUN_00403c80(&local_18,2);
  return;
}


