
/* ==== FUN_004a53d8 @ 004a53d8 ==== 
 * signature: undefined FUN_004a53d8(void)
 * body: 004a53d8-004a54a3
 */

void FUN_004a53d8(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_118 = &stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_8 = (undefined4 *)0x0;
  puStack_11c = &UNK_004a54a4;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar1 = puStack_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  do {
    iVar3 = FUN_00498414((int *)&puStack_8);
    if (iVar3 == 2) {
      FUN_0044d3f0();
      break;
    }
  } while (puStack_8 == (undefined4 *)0x0);
  if (puStack_8 != (undefined4 *)0x0) {
    FUN_0047fbd4(*(int **)PTR_DAT_004ab694,puStack_8);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "AskForNewPlayer";
  FUN_00403c80(&iStack_10,3);
  return;
}


