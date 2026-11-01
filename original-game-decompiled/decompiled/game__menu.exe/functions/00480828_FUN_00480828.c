
/* ==== FUN_00480828 @ 00480828 ==== 
 * signature: undefined FUN_00480828(void)
 * body: 00480828-0048098d
 */

void FUN_00480828(int *param_1)

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
  puStack_118 = &UNK_0048098e;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_00481698(param_1[0x20],0x4809cc);
  FUN_00481698(param_1[0x1f],0x4809dc);
  FUN_00481698(param_1[0x18],0x4809ec);
  FUN_00481698(param_1[0x17],0x4809f8);
  FUN_00481698(param_1[0x1c],0x480a08);
  FUN_00481698(param_1[0x22],0x480a18);
  FUN_00481698(param_1[0x19],0x480a28);
  FUN_00481698(param_1[0x23],0x480a38);
  FUN_00481698(param_1[0x1a],0x480a48);
  FUN_00481698(param_1[0x1d],0x480a58);
  FUN_00481698(param_1[0x21],0x480a68);
  FUN_00481698(param_1[0x27],0x480a78);
  FUN_00481698(param_1[0x26],0x480a88);
  FUN_00481698(param_1[0x16],0x480a94);
  FUN_00481698(param_1[0x1e],0x480aa4);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "ReadDefGraphics";
  FUN_00403c80(&iStack_c,2);
  return;
}


