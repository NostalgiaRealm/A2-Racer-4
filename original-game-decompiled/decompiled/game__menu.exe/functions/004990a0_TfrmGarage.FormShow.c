
/* ==== TfrmGarage.FormShow @ 004990a0 ==== 
 * signature: undefined TfrmGarage.FormShow(void)
 * body: 004990a0-00499178
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmGarage_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_00499179;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TGDIButton_set_TabOrder(param_1[0xc4],3);
  TGDIButton_set_TabOrder(param_1[0xb5],4);
  TGDIButton_set_TabOrder(param_1[0xb6],5);
  FUN_00498df8(param_1);
  FUN_004993d4(param_1,0);
  FUN_004996a0(param_1);
  FUN_00499538();
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


