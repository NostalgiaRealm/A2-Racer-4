
/* ==== TfrmTrack.FormShow @ 0049a168 ==== 
 * signature: undefined TfrmTrack.FormShow(void)
 * body: 0049a168-0049a2d3
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmTrack_FormShow(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_118 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_11c = &UNK_0049a2d4;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,2);
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_0049a65c(param_1);
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
               (undefined4 *)&UNK_0049a310);
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xd0],
               (undefined4 *)"shadow");
  FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  cVar2 = FUN_0048dcdc();
  if (cVar2 == '\0') {
    iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
    FUN_00499d68(param_1,*(int *)(iVar4 + 0xc));
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  else {
    FUN_00499d68(param_1,*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 0xc))
    ;
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
  }
  FUN_0049a110((int)param_1,uVar6,uVar5);
  iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  FUN_00491710(param_1[0xd1],*(int *)(iVar4 + 0xc));
  FUN_00499f80(param_1);
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


