
/* ==== FUN_00481d24 @ 00481d24 ==== 
 * signature: undefined FUN_00481d24(void)
 * body: 00481d24-00481e0c
 */

void FUN_00481d24(int *param_1,char param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  undefined *puStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x481d44;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_fffffed8,in_stack_fffffedc);
    param_3 = extraout_ECX;
  }
  puStackY_12c = (undefined1 *)0x481d52;
  FUN_00404090((int)param_5);
  puStackY_130 = &UNK_00481e0d;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_0046bbec(param_4);
  param_1[5] = param_3;
  FUN_00403cb0(param_1 + 3,param_5);
  piVar3 = TDaviWave_vmt_02c((int *)&PTR_TPersistent_vmt_000_00453f9c,'\x01',(int *)0x0);
  param_1[4] = (int)piVar3;
  iVar4 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  param_1[7] = iVar4;
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&iStack_c,2);
  FUN_00403c5c((int *)&param_5);
  return;
}


