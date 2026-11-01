
/* ==== FUN_00489c28 @ 00489c28 ==== 
 * signature: undefined __register FUN_00489c28(int * param_1, int * param_2, undefined4 * param_3)
 * body: 00489c28-00489d87
 */

void FUN_00489c28(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_168;
  code *pcStackY_164;
  code *pcStackY_160;
  char *pcStackY_15c;
  char *pcStackY_158;
  undefined *puStackY_154;
  int iStackY_150;
  char *pcVar4;
  undefined4 uStack_138;
  code *pcStack_134;
  undefined1 *puStack_130;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_130 = (undefined1 *)0x489c56;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  pcStack_134 = thunk_FUN_004036bc;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_14 = local_8;
  local_10 = 0xb;
  puStack_130 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80(&local_1c,local_11c);
  pcVar4 = "GetImgTargaFromFile";
  iStackY_150 = 0x489ca9;
  FUN_00403f9c(&local_18,3);
  iStackY_150 = local_18;
  puStackY_154 = (undefined *)0x489cb2;
  uVar2 = FUN_0045f46c();
  iVar1 = iStackY_150;
  iStackY_150 = 0x489cbe;
  FUN_0045fa3c(uVar2,iVar1,2,(int)pcVar4);
  uVar3 = extraout_ECX;
  if (param_2 == (int *)0x0) {
    iStackY_150 = 0x489ccf;
    FUN_00402ee4(*param_1,local_11c);
    iStackY_150 = 0x489ce0;
    FUN_00403e80(&local_124,local_11c);
    iStackY_150 = local_124;
    puStackY_154 = &DAT_00489dd8;
    pcStackY_158 = "GetImgTargaFromFile";
    pcStackY_15c = " aGDIGraphic = nil";
    pcStackY_160 = (code *)0x489d05;
    FUN_00403f9c(&local_120,4);
    pcStackY_160 = (code *)0x489d1a;
    FUN_00403c40(local_120);
    uVar3 = extraout_ECX_00;
  }
  pcStackY_160 = (code *)0x489d26;
  local_c = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',uVar3);
  pcStackY_164 = thunk_FUN_004036bc;
  uStackY_168 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_168;
  pcStackY_160 = (code *)&stack0xfffffffc;
  FUN_00489eb8(param_1,local_8,local_c);
  (**(code **)(**(int **)(param_2[0x4b] + 0xc) + 8))(*(int **)(param_2[0x4b] + 0xc),local_c);
  TControl_set_Height(param_2,local_c[0x10]);
  TControl_set_Width(param_2,local_c[0x23]);
  *in_FS_OFFSET = uStackY_168;
  pcStackY_160 = FUN_00489d8f;
  pcStackY_164 = (code *)0x489d87;
  FUN_00402f9c(local_c);
  return;
}


