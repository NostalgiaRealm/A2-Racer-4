
/* ==== TfrmPlayer.btnDeletePlayerClick @ 004944fc ==== 
 * signature: undefined TfrmPlayer.btnDeletePlayerClick(void)
 * body: 004944fc-00494617
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmPlayer_btnDeletePlayerClick(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined *puStack_144;
  undefined1 *puStack_140;
  byte abStack_134 [36];
  int iStack_110;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_140 = &stack0xfffffffc;
  iStack_110 = 0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_144 = &UNK_00494618;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,1);
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),abStack_134);
  FUN_00403e80(&iStack_110,abStack_134);
  iVar3 = FUN_00498758(param_1,iStack_110);
  if (iVar3 == 1) {
    FUN_0047fdc8(*(undefined4 *)PTR_DAT_004ab694,
                 *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
    iVar3 = param_1[0xc4];
    (**(code **)(iVar3 + 0x108))(*(undefined4 *)(iVar3 + 0x10c),iVar3);
    FUN_00493338(param_1);
    FUN_00493ed0(param_1);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "btnDeletePlayerClick";
  FUN_00403c5c(&iStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}


