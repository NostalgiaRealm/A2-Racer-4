
/* ==== TGameMenuScreen.btnCloseClick @ 0049e9bc ==== 
 * signature: undefined TGameMenuScreen.btnCloseClick(void)
 * body: 0049e9bc-0049ea7b
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TGameMenuScreen_btnCloseClick(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_0049ea7c;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar5 = &UNK_0049ea90;
  pcVar4 = "btnCloseClick";
  iVar6 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  iVar3 = func_0x0049e048();
  if (iVar3 == 3) {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 0;
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  else if (iVar3 == 1) {
    (**(code **)(*param_1 + 0xe8))
              (param_1,&PTR_TWinControl_vmt_000_0049d4bc,*param_1,pcVar4,puVar5,iVar6);
  }
  *in_FS_OFFSET = pcVar4;
  FUN_00403c80(&iStack_c,2);
  return;
}


