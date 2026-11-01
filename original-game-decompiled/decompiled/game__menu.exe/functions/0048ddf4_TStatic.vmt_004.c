
/* ==== TStatic.vmt_004 @ 0048ddf4 ==== 
 * signature: undefined TStatic.vmt_004(void)
 * body: 0048ddf4-0048df2c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStatic_vmt_004(int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_ECX_02;
  undefined1 extraout_DL;
  byte bVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 uStack_134;
  code *pcStack_130;
  undefined1 *puStack_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  undefined1 uStack_5;
  
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  uStack_5 = 0;
  if (param_2 != '\0') {
    puStack_12c = (undefined1 *)0x48de13;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffed8,in_stack_fffffedc);
    uStack_5 = extraout_DL;
  }
  pcStack_130 = thunk_FUN_004036bc;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puStack_12c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar6 = puStack_c;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar6,0);
  TDataObject_vmt_004(param_1,'\0',extraout_ECX);
  iVar2 = TSettings_vmt_004((int *)&PTR_TSettings_vmt_000_004a6010,'\x01');
  param_1[0xc] = iVar2;
  iVar2 = FUN_00402f6c((int *)&DAT_0048e778,'\x01',extraout_ECX_00);
  param_1[0xb] = iVar2;
  piVar3 = TDataList_vmt_018((int *)&PTR_TDataList_vmt_000_0045e240,'\x01',
                             (int)&PTR_TTrack_vmt_000_0046196c);
  param_1[0xd] = (int)piVar3;
  piVar3 = TDataList_vmt_018((int *)&PTR_TDataList_vmt_000_0045e240,'\x01',(int)FUN_00460678);
  param_1[2] = (int)piVar3;
  piVar3 = FUN_00462444((int *)&PTR_TQuickRace_vmt_000_0048e948,'\x01',param_1[0xd],(int)piVar3);
  param_1[0xe] = (int)piVar3;
  piVar3 = FUN_00462444((int *)&PTR_TTourRace_vmt_000_00462b50,'\x01',param_1[0xd],param_1[2]);
  param_1[0xf] = (int)piVar3;
  bVar5 = 0;
  uVar4 = extraout_ECX_01;
  do {
    piVar3 = TDataObject_vmt_004((int *)&PTR_TTuneUp_vmt_000_004620fc,'\x01',uVar4);
    param_1[bVar5 + 6] = (int)piVar3;
    bVar5 = bVar5 + 1;
    uVar4 = extraout_ECX_02;
  } while (bVar5 != 5);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&iStack_10,2);
  return;
}


