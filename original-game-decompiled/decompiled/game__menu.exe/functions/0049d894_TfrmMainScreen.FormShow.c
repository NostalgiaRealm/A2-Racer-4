
/* ==== TfrmMainScreen.FormShow @ 0049d894 ==== 
 * signature: undefined TfrmMainScreen.FormShow(void)
 * body: 0049d894-0049d9aa
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMainScreen_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
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
  puStack_11c = &UNK_0049d9ab;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TBaseFormOneWay_FormShow((int)param_1);
  *(undefined1 *)(param_1 + 0xcf) = 0;
  FUN_0049dc40((int)param_1);
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    (**(code **)(*(int *)param_1[0xc4] + 0xbc))((int *)param_1[0xc4],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)"quick");
  }
  else {
    (**(code **)(*(int *)param_1[0xc3] + 0xbc))((int *)param_1[0xc3],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)&UNK_0049d9f4);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


